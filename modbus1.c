//2022.0904 add AXIS_EXINFO
//2025.3.18 add win32 qtouch 
#include "iec_types_all.h"
#include "iec_std_lib.h"
#include "POUS.h"
//#include "string.h"
#include <elog.h>
#include <elog_file.h>

#define ERR_VALUE -9999
#ifdef WIN32R
  #include "script.c"
  #include "iec_types.h"
  #include "OD_0_0.h"
#else
    #include "OD_0_0.h"
	#define IPC200
	//#include "sm402.h"
	//double GetItemValue( int iStationid,  int id ) ;
	//void  SetItemValue( int iStationid ,  int id , double dValue ) ;
#endif
//UNS16 * gUIBufs = (UNS16 * )&Modbus_Holdings[1000];
//UNS16 * gUOBufs = (UNS16 * )&Modbus_Holdings[2000];
UNS16 gUIBufs[1000];
UNS16 gUOBufs[1000];
UNS16 Modbus_Holdings[1000];//0-1000:Holding;1000-2000:UBUF

double GetItemValue( int iStationid ,  int id )
{
    
}

void SetItemValue( int iStationid ,  int id , double dValue )
{

}



static inline uint16_t cia402_state_machine(uint16_t status)
{
	uint16_t control_word=0;
	if( (status&0x004f) ==0x00){
		control_word = 0x0006;
	}else if( (status&0x004f) ==0x40){

		control_word = 0x0006;

	}else if( (status&0x006f) ==0x21){
		control_word = 0x0007;

	}else if( (status&0x006f) ==0x23){
		control_word = 0x000F;
	}else if( (status&0x006f) ==0x27)
	{	
		control_word=0x001F;
	}
	else if( (status&0x006f) ==0x41){
		control_word = 0x0006;
	}
	else{
		control_word = 0x0006;
	}
	return control_word;
}


int coilwrite(COIL_WRITE* data__);
int holdwrite(HOLD_WRITE* data__);
int coilread(COIL_READ* data__);
int holdread(HOLD_READ *data__);

#define MAX_GROUP_NUM 2
AXES_GROUP g_gp[MAX_GROUP_NUM];

#define MAX_LEN 255
#define MAXREAL 9E+9
AXIS_INFO g_ai[MAX_LEN];
struct ExInfo
{
	LREAL JUMPV0;
	LREAL JUMPV1;
};
struct ExInfo g_ei[MAX_LEN];

//int curidx=0;
#define MAX_RBUF_LEN 16*10240//1s 10k 16 channel
#define MAX_SEMAS 1024
struct sema_struct
{
	BOOL val;
	unsigned long tickp;
	unsigned long tickv;
	int count;
};
struct sema_struct semas[MAX_SEMAS];//={{1,2,3,4},{0,0,0,0},{0,0,0,0},{0,0,0,0},{0,0,0,0},{0,0,0,0},{0,0,0,0},};

/////////////////////////////////////////////////////////////////////////////////////////////////////////////
int init_elog()
{
#if defined(WIN32R)|| defined(WITHDBG)
OpenRamRt();//QTouch in Win32
setbuf(stdout, NULL);
setbuf(stderr, NULL);
elog_init();
#if defined(WITHDBG)
	ElogFileCfg cfg = {"_plc.log", 10*1024*1024, 10};
    elog_file_config(&cfg);
    elog_file_init();
	elog_set_text_color_enabled(0);
#endif
    elog_set_terminal_enabled(0);
    elog_set_fmt(ELOG_LVL_ERROR, ELOG_FMT_TIME|ELOG_FMT_LINE);
    elog_set_fmt(ELOG_LVL_INFO, ELOG_FMT_LVL);
	elog_set_fmt(ELOG_LVL_WARN, ELOG_FMT_LVL);
	elog_set_fmt(ELOG_LVL_ASSERT, ELOG_FMT_LVL);
	elog_set_fmt(ELOG_LVL_VERBOSE, ELOG_FMT_LVL);
	elog_set_fmt(ELOG_LVL_DEBUG, ELOG_FMT_LVL|ELOG_FMT_LINE);
elog_start();
return 0;
#endif	
}

int __init_1()
{
		AXIS_INFO* p;
		AXES_GROUP* g;
    int i ;
    for (i=0;i<MAX_LEN;i++)
    {
				p=&g_ai[i];
        __SET_VAR(p->,NODEID,,i+2);
				if (Axis_Types[i]>0)
				{
						if (Max_Velocitys_mm_s[i]>0.0)
							__SET_VAR(p->,VMAX,,Max_Velocitys_mm_s[i]);
						else
							__SET_VAR(p->,VMAX,,10.0);
						if (Max_accelerations_mm_s_2[i]>0.0)
							__SET_VAR(p->,AMAX,,Max_accelerations_mm_s_2[i]);
						else
							__SET_VAR(p->,AMAX,,10.0);
						if (Max_Decelerations_mm_s[i]>0.0)
							__SET_VAR(p->,DMAX,,Max_Decelerations_mm_s[i]);
						else
							__SET_VAR(p->,DMAX,,Max_accelerations_mm_s_2[i]);
						if (Max_Jerks_mm_s_3[i]>0.0)
						{
							__SET_VAR(p->,JMAX,,Max_Jerks_mm_s_3[i]);
							__SET_VAR(p->,ADTYPE,,1);
						}
						else
						{
							__SET_VAR(p->,ADTYPE,,0);
						}
						__SET_VAR(p->,AEO,,Absolute_Encoder_Origins[i]);
						__SET_VAR(p->,MPP,,(double)Position_Factor_Numerators[i]/Position_Factor_Feed_Constants_Pulses[i]);
						__SET_VAR(p->,LMTL,,Soft_Limit_Low_mm[i]);
						__SET_VAR(p->,LMTH,,Soft_Limit_High_mm[i]);
						__SET_VAR(p->,AMOD,,Axis_Mods[i]);
						__SET_VAR(p->,FEEDRATE,,1.0);
                        //__SET_VAR(p->,NATUREFREQUENCY,Nature_Frequencys[i]);
                        //__SET_VAR(p->,DAMPRATIO,Damp_Ratios[i]);
				}
      }	
    for (i=0;i<MAX_GROUP_NUM;i++)
    {
      g=&g_gp[i];
      __SET_VAR(g->,FEEDRATE,,1.0);
  	}
	/*for (i=0;i<MAX_SEMAS;i++)
	{semas[i].val=0;semas[i].tickp=1;semas[i].tickv=2;semas[i].count=0;}
		fp = fopen("dbg.txt","w");
		fprintf(fp,"%d",0);
		fclose(fp);*/
	init_elog();
	return 0;

}
void __cleanup_1()
{
#if defined(WIN32R)|| defined(WITHDBG)
	elog_stop();
	elog_deinit();
#endif	
}
void __retrieve_1(){}
void __publish_1(){}

UNS16 OD_0_0_highestSubIndex_obj4111=1000;//modbus holding原来在0x4111定义，现在固定为1000个
extern UNS8 OD_0_0_highestSubIndex_obj4110;
extern UNS8 OD_0_0_highestSubIndex_obj4120;
extern UNS8 OD_0_0_highestSubIndex_obj4121;
extern UNS8 OD_0_0_highestSubIndex_obj4122;
extern UNS8 OD_0_0_highestSubIndex_obj4123;
extern UNS8 OD_0_0_highestSubIndex_obj4013;
extern UNS8 OD_0_0_highestSubIndex_obj4014;
extern UNS8 OD_0_0_highestSubIndex_obj4130;
extern UNS8 OD_0_0_highestSubIndex_obj4131;



int coil_read(COIL_READ* data__)
{
#ifdef WIN32R	
		return 1;
#else
	UNS16 x_bit,x_reg;
	UNS16 x_grp, i = 0;
	UNS32 idx;
	BOOL ob;
	int addr=__GET_VAR(data__->MBADDR)-1;
	if ((addr>=0)&&(addr<OD_0_0_highestSubIndex_obj4110*16))
	{
		//计算首地址的组
		x_grp = addr / 16;
		//计算首地址的位
		x_bit = addr % 16;
				
		//获取X的值
		x_reg = Modbus_Coils[x_grp];
				
		//判断 是否为 1 
		__SET_VAR(data__->,OUTB,,0);
		if (x_reg & (0x1 << x_bit))
			__SET_VAR(data__->,OUTB,,1);
	}
	return 1;
#endif
}
	
int coil_write(COIL_WRITE* data__)
{
#ifdef WIN32R	
		return 1;
#else
	UNS16 x_bit,x_reg;
	UNS16 x_grp, i = 0;
	UNS32 idx;
	int addr=__GET_VAR(data__->MBADDR)-1;
	BOOL ib=__GET_VAR(data__->INB);
	if ((addr>=0)&&(addr<OD_0_0_highestSubIndex_obj4110*16))
	{
		//计算首地址的组
		x_grp = addr  / 16;
		//计算首地址的位
		x_bit = addr  % 16;
				
		if(ib)
		{
			Modbus_Coils[x_grp] |= (0x1 << x_bit);
		}
		else
		{
			Modbus_Coils[x_grp] &=~ (0x1 << x_bit);
		}
	}
	return 1;
#endif 					  	
}

int hold_write(HOLD_WRITE* data__)
{
	int addr=__GET_VAR(data__->MBADDR);
/*	if ((addr>0)&&(addr<250))
		Modbus_Holdings_1[addr]=__GET_VAR(data__->INTPVALUE);
	else if ((addr>=250)&&(addr<500))
		Modbus_Holdings_2[addr-250]=__GET_VAR(data__->INTPVALUE);
	else if ((addr>=500)&&(addr<750))
		Modbus_Holdings_3[addr-500]=__GET_VAR(data__->INTPVALUE);
	else if ((addr>=750)&&(addr<1000))
		Modbus_Holdings_4[addr-750]=__GET_VAR(data__->INTPVALUE);*/
if ((addr>0)&&(addr<1000))		
	Modbus_Holdings[addr]=__GET_VAR(data__->INTPVALUE);
	return 1;
}


int hold_read(HOLD_READ *data__)
{
	int oi;
	int addr=__GET_VAR(data__->MBADDR);
/*	if ((addr>=0)&&(addr<250))
		oi=Modbus_Holdings_1[addr];
	else if ((addr>=250)&&(addr<500))
		oi=Modbus_Holdings_2[addr-250];
	else if ((addr>=500)&&(addr<750))
		oi=Modbus_Holdings_3[addr-500];
	else if ((addr>=750)&&(addr<1000))
		oi=Modbus_Holdings_4[addr-750];*/
	if ((addr>=0)&&(addr<1000))
		oi=Modbus_Holdings[addr];
	else
		oi=ERR_VALUE;
	__SET_VAR(data__->,OUTI,,oi);
	return 1;
}


unsigned short get_mbuf(unsigned char type,unsigned short idx)
{
    UNS16 * a16;
	if (type==1)//hold
	{
		if (idx<OD_0_0_highestSubIndex_obj4111)
			return Modbus_Holdings[idx];
	}
	if (type==2)//HIO BOOL
	{
		if (idx<OD_0_0_highestSubIndex_obj4120)
			return HIO_Input_Bools[idx];
	}
	if (type==3)//HIO Integer
	{
		if (idx<OD_0_0_highestSubIndex_obj4122)
			return HIO_Input_Integers[idx];
	}
	if (type==4)//ECAT Slave
	{
		if (idx<OD_0_0_highestSubIndex_obj4130*4)//Ecat_Slave is U64, Buf_Write idx's Unit is U16 
        {
            a16 = (UNS16*) & Ecat_Slave_Inputs[idx/4];//add by lkh
			return a16[idx%4];
        }
	}
	if (type==5)//UBUF
	{
		if (idx<OD_0_0_highestSubIndex_obj4111)
			return gUIBufs[idx];//Modbus_Holdings[1000+idx];

	}

}
void set_mbuf(unsigned char type,unsigned short idx,unsigned short newvalue)
{
    UNS16 * a16;
	if (type==1)//hold
	{
		if (idx<OD_0_0_highestSubIndex_obj4111)
			Modbus_Holdings[idx]=newvalue;
	}
	if (type==2)//HIO BOOL
	{
		if (idx<OD_0_0_highestSubIndex_obj4121)
		{
			HIO_Output_Bools[idx]=newvalue;
			//log_i("new %d,%d",idx,newvalue);
		}
	}
	if (type==3)//HIO Integer
	{
		if (idx<OD_0_0_highestSubIndex_obj4123)
			HIO_Output_Integers[idx]=newvalue;
	}
	if (type==4)//ECAT Slave
	{
		if (idx<OD_0_0_highestSubIndex_obj4131*4)//Ecat_Slave is U64, Buf_Write idx's Unit is U16 
        {
            //uint64 to uint16 
            a16 = (UNS16*) & Ecat_Slave_Outputs[idx/4];//add by lkh
            a16[idx%4] = newvalue;
        }
	}
	if (type==5)//UBUF
	{
		if (idx<OD_0_0_highestSubIndex_obj4111)
			gUOBufs[idx]=newvalue;
			//Modbus_Holdings[1000+idx]=newvalue;
	}
}

int buf_read(BUF_READ* data__)
{
	int oi;
	int t=__GET_VAR(data__->BUFTYPE);
	int id=__GET_VAR(data__->IDX);
	__SET_VAR(data__->,OUTU16,,get_mbuf(t,id));
	return 1;
}
int buf_write(BUF_WRITE* data__)
{
	int oi;
	int t=__GET_VAR(data__->BUFTYPE);
	int id=__GET_VAR(data__->IDX);
	unsigned short v=__GET_VAR(data__->INU16);
	set_mbuf(t,id,v);
	return 1;
}
/////////////////////////////////////////////////////////////////////////////////
double gRBufs[MAX_RBUF_LEN];//ping pong buffer
//int ping_or_pong = 0;
double get_rbuf(UNS32 idx)//used for plc.py
{
	if (idx<0||idx>MAX_RBUF_LEN) return MAXREAL;
	return gRBufs[idx];
}
void set_rbuf(UNS32 idx,double newvalue)
{
	if (idx<0||idx>MAX_RBUF_LEN) return;
	gRBufs[idx]=newvalue;
}
int rbuf_read(RBUF_READ* data__)
{
	int addr=__GET_VAR(data__->VARADDR);
	if ((addr>=0)&&(addr<MAX_RBUF_LEN))
		__SET_VAR(data__->,OUTR,,gRBufs[addr]);
	return 1;
}
int rbuf_write(RBUF_WRITE* data__)
{
	int addr=__GET_VAR(data__->VARADDR);
	if ((addr>=0)&&(addr<MAX_RBUF_LEN))
		gRBufs[addr]=__GET_VAR(data__->INR);
	return 1;
}
int rbuf_read_u16(RBUF_READ_U16* data__)
{
	int addr=__GET_VAR(data__->VARADDR);
    UNS16 * p = (UNS16 *) &gRBufs[addr];
	if ((addr>=0)&&(addr<MAX_RBUF_LEN))
    {
		__SET_VAR(data__->,OUTU161,, *p);
        __SET_VAR(data__->,OUTU162,, *(p+1));
        __SET_VAR(data__->,OUTU163,, *(p+2));
        __SET_VAR(data__->,OUTU164,, *(p+3));
    }
	return 1;
}
int rbuf_write_u16(RBUF_WRITE_U16* data__)
{
	int addr=__GET_VAR(data__->VARADDR);
    double vrl;
    UNS16 * p = (UNS16 *) &vrl;
    *p = __GET_VAR(data__->INU161);
    *(p+1) = __GET_VAR(data__->INU162);
    *(p+2) = __GET_VAR(data__->INU163);
    *(p+3) = __GET_VAR(data__->INU164);
	if ((addr>=0)&&(addr<MAX_RBUF_LEN))
		gRBufs[addr]=vrl;
	return 1;
}


/////////////////////////////////////////////////////////////////////////////////
int qtouch_read(QTOUCH_READ* data__)
{
	int addr=__GET_VAR(data__->VARADDR);
	__SET_VAR(data__->,OUTR,,GetItemValue(0,addr));
	return 1;
}
int qtouch_write(QTOUCH_WRITE* data__)
{
	int addr=__GET_VAR(data__->VARADDR);
	SetItemValue(0,addr,__GET_VAR(data__->INR));
	return 1;
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
/*extern UNS8 writeNetworkDict (CO_Data* d, UNS8 nodeId, UNS16 index,
		       UNS8 subIndex, UNS32 count, UNS8 dataType, void *data);
extern UNS8 getWriteResultNetworkDict (CO_Data* d, UNS8 nodeId, UNS32 * abortCode);
extern UNS8 closeSDOtransfer (CO_Data* d, UNS8 nodeId, UNS8 whoami);
#endif
int axis_home(AXIS_HOME* data__)
{
#ifdef WIN32R	
		return 1;
#else
UNS32 data=0x6;
UNS32 abortCode=0x1;
    int nodeId = __GET_VAR(data__->NODEID);	
		writeNetworkDict(&OD_0_0_Data,nodeId,0x6060,1,1,0,&data);
		if(getWriteResultNetworkDict (&OD_0_0_Data, nodeId, &abortCode) != SDO_FINISHED)
    {
    	closeSDOtransfer(&OD_0_0_Data, nodeId, SDO_CLIENT);
    }*/
/*extern UNS8 writeNetworkDict (CO_Data* d, UNS8 nodeId, UNS16 index,
		       UNS8 subIndex, UNS32 count, UNS8 dataType, void *data);
extern UNS8 getWriteResultNetworkDict (CO_Data* d, UNS8 nodeId, UNS32 * abortCode);
extern UNS8 closeSDOtransfer (CO_Data* d, UNS8 nodeId, UNS8 whoami);
typedef enum  {BL=0x1,S8,S16,S32,U8,U16,U32,R32} DATATYPE;*/
int od_read(OD_READ* data__)
{
#ifdef WIN32R	
	return 1;
#endif
UNS8 dataType;            // Unused 
UNS32  size = 0;
UNS8 tmp[] = { 0, 0, 0, 0, 0, 0, 0, 0 };  // temporary space to hold bits 
unsigned char* p;
float tmpf;
	int index = __GET_VAR(data__->INDEX);	
	int sindex = __GET_VAR(data__->SUBINDEX);	
	
	//_getODentry(&OD_0_0_Data,index,sindex,tmp,&size,&dataType,1,1);
/*	switch (dataType)
	{
		case BL:
		case S8:
		case U8:
			__SET_VAR(data__->,OUTR,tmp[0]);
			break;
		case S16:
		case U16:
			__SET_VAR(data__->,OUTR,tmp[1]<<8+tmp[0]);
			break;
		case S32:
		case U32:
			__SET_VAR(data__->,OUTR,tmp[3]<<24+tmp[2]<<16+tmp[1]<<8+tmp[0]);
			break;
		case R32:
			{
				p=&tmpf;
				p[0]=tmp[0];
				p[1]=tmp[1];
				p[2]=tmp[2];
				p[3]=tmp[3];
				__SET_VAR(data__->,OUTR,tmpf);
				break;
			}
}*/
return 0;
}

WRITE_SDO* cur_write_sdo;
void wsdocallback(CO_Data * d,UNS8 nodeid)
{
#ifdef WIN32R	
		return;
#else
		UNS32 abortCode;			
		UNS32 query_result;	
		UNS16 len;
		//UNS8 r=getWriteResultNetworkDict(d,nodeid,&abortCode);
		/*if(r == SDO_FINISHED)
		{
				//closeSDOtransfer(d, nodeid, SDO_CLIENT);
				__SET_VAR(cur_write_sdo->,DONE,1);
		}
		if((r == SDO_ABORTED_RCV)||(r == SDO_ABORTED_INTERNAL))
		{
				//closeSDOtransfer(d, nodeid, SDO_CLIENT);
				__SET_VAR(cur_write_sdo->,ERR,1);
		}*/
		cur_write_sdo=0;
#endif		
}

int write_sdo(WRITE_SDO* data__)
{
#ifdef WIN32R	
		return 1;
#else
			UNS16 nodeid=__GET_VAR(data__->NODEID);
			UNS16 idx=__GET_VAR(data__->INDEX);
			UNS16 sidx=__GET_VAR(data__->SUBINDEX);
			UNS16 len=__GET_VAR(data__->LENV);
			UNS32 val=__GET_VAR(data__->VAL);
		//_writeNetworkDict(&OD_0_0_Data, nodeid, idx,sidx,len,0,&val,wsdocallback);
		cur_write_sdo=data__;
		return 1;
#endif
}
//////////////////////////////////////////////////////////////
READ_SDO* cur_read_sdo;
static void CheckSDOReadResult(CO_Data* d, UNS8 nodeId)
{

UNS32 abortCode = 0;
UNS8  buf[32];
UNS32 size = 32;
DWORD v;

if(0)//getReadResultNetworkDict (d, nodeId, buf, &size, &abortCode) != SDO_FINISHED)
{
	 __SET_VAR(cur_read_sdo->,RDOK,,0);
}
	__SET_VAR(cur_read_sdo->,SIZE,,size);
	switch (size)
	{
		case 1:
			__SET_VAR(cur_read_sdo->,VAL,,buf[0]);
			break;
		case 2:
			__SET_VAR(cur_read_sdo->,VAL,,buf[1]*256+buf[0]);
			break;
		case 4:
			__SET_VAR(cur_read_sdo->,VAL,,buf[3]*16777216+buf[2]*65536+buf[1]*256+buf[0]);
			break;
	}
	cur_read_sdo=0;	
	//closeSDOtransfer(&OD_0_0_Data, nodeId, SDO_CLIENT);

}

int read_sdo(READ_SDO* data__)
{
#ifdef WIN32R	
		return 1;
#else
			UNS8 rden= __GET_VAR(data__->EXECUTE);
			UNS8 rdok= __GET_VAR(data__->RDOK);
			UNS16 nodeid=__GET_VAR(data__->NODEID);
			UNS16 idx=__GET_VAR(data__->INDEX);
			UNS16 sidx=__GET_VAR(data__->SUBINDEX);
	if (rden)
	{
		
		//UNS8 err=_readNetworkDict(&OD_0_0_Data, nodeid, idx,sidx,0,&CheckSDOReadResult);
		//if (!err) __SET_VAR(data__->,RDOK,1);
		cur_read_sdo=data__;
	}
	
#endif
		return 0;
}
//////////////////////////////////////////////////////////////
int rdsdo_result(RDSDO_RESULT* data__)
{
   UNS32 abortCode;
   UNS8 res = SDO_UPLOAD_IN_PROGRESS;
	 UNS8 rden= __GET_VAR(data__->EXECUTE);
	 UNS8 rdok= __GET_VAR(data__->RDOK);
	 UNS16 nodeid=__GET_VAR(data__->NODEID);
	 UNS32 result_value;
	 UNS32 size;
	 	 
	 if ((rden)&&(!rdok))
   {
      //res = getReadResultNetworkDict (&OD_0_0_Data, nodeid, &result_value, &size, &abortCode);
      if (res == SDO_FINISHED)//SDO_UPLOAD_IN_PROGRESS)
      {
      	//closeSDOtransfer(&OD_0_0_Data, nodeid, SDO_CLIENT);
      	__SET_VAR(data__->,RDOK,,1);
      	if (size==1)
      	__SET_VAR(data__->,VAL,,result_value&0xFF);
				if (size==2)
      	__SET_VAR(data__->,VAL,,result_value&0xFFFF);
				if (size==4)
      	__SET_VAR(data__->,VAL,,result_value);      	
      	__SET_VAR(data__->,SIZE,,size);
      }
   }
   else
   	__SET_VAR(data__->,RDOK,,0);
}

int read_sdo2(READ_SDO2* data__)
{
#ifdef WIN32R	
		return 1;
#else
			UNS8 rden= __GET_VAR(data__->EXECUTE);
			UNS8 rdok= __GET_VAR(data__->RDOK);
			UNS16 nodeid=__GET_VAR(data__->NODEID);
			UNS16 idx=__GET_VAR(data__->INDEX);
			UNS16 sidx=__GET_VAR(data__->SUBINDEX);
	if (rden)
	{
		//cur_read_sdo=data__;
		//UNS8 err=_readNetworkDict(&OD_0_0_Data, nodeid, idx,sidx,0,NULL);
		//if (!err) __SET_VAR(data__->,CANQUERY,1);
	}
	if (rdok)
		__SET_VAR(data__->,CANQUERY,,0);
		
#endif
		return 0;
}
/*
int read_sdo(READ_SDO* data__)
{
#ifdef WIN32R	
		return 1;
#else
			//UNS8 rden= __GET_VAR(data__->EXECUTE);
			UNS8 rdok= __GET_VAR(data__->RDOK);
			UNS16 nodeid=__GET_VAR(data__->NODEID);
			UNS16 idx=__GET_VAR(data__->INDEX);
			UNS16 sidx=__GET_VAR(data__->SUBINDEX);
		//cur_read_sdo=data__;
		//readNetworkDict(&OD_0_0_Data, nodeid, idx,sidx,0);
_readNetworkDict(&OD_0_0_Data, nodeid, idx,sidx,0,NULL);
		__SET_VAR(data__->,CANQUERY,1);
		
#endif
		return 0;
}*/
//////////////////////////////////////////////////////////////
int sys_cfg(SYS_CFG* data__)
{
	int i;
	__SET_VAR(data__->,CYCLE_TIME,,SYS_TICK_PERIOD_MS/1000.0);
	//__SET_VAR(data__->,PULSE_EQUIVALENT,0.1);
	return 0;
}
int sys_tim(SYS_TIM* data__)
{
	IEC_DT ddt;// = __INIT_DT;
    time_t the_time;
	long IN_val;
    time(&the_time);  
    IN_val = the_time;
    ddt = (TIME){IN_val, 0};
    __SET_VAR(data__->,SYS_D_T,,ddt);
    __SET_VAR(data__->,DTUL,,the_time);
    
	
}
extern unsigned long __tick;
int get_tick(GET_TICK* data__)
{
	int i;
	__SET_VAR(data__->,TICK,,__tick);
	return 0;
}
int semap(SEMAP* data__)
{
	unsigned int idx = __GET_VAR(data__->IDX);
	if (__tick-semas[idx].tickp>2)//the first time
	{ semas[idx].count=1;
		semas[idx].tickp=__tick;
	}
	__SET_VAR(data__->,POK,,semas[idx].val);
	return 0;
}

int semav(SEMAV* data__)
{
	unsigned int idx = __GET_VAR(data__->IDX);
	if (semas[idx].count==0)
	{
		__SET_VAR(data__->,VOK,,0);
		return 0;
	}
	if (__tick-semas[idx].tickv>2)//the first clk
	{
		semas[idx].val=1;
		semas[idx].tickv=__tick;
		__SET_VAR(data__->,VOK,,0);
	}
	else
	{
		semas[idx].val=0;
		semas[idx].count=0;
		__SET_VAR(data__->,VOK,,1);
	}
	return 0;
}
int dbgsema(DBGSEMA* data__)
{
	unsigned int idx = __GET_VAR(data__->IDX);
	__SET_VAR(data__->,VAL,,semas[idx].val);
	__SET_VAR(data__->,TICKP,,semas[idx].tickp);
	__SET_VAR(data__->,TICKV,,semas[idx].tickv);
	__SET_VAR(data__->,COUNT,,semas[idx].count);
	return 0;
}
/////////////////////////////////////////////////////////////////////////////////////////////////////////////
#define MAX_CAM_LEN 60000
#define MAX_CAM_TABLE 10
IEC_LREAL g_cam[MAX_CAM_TABLE][MAX_CAM_LEN];
int set_cam(SET_CAM* data__)
{
	unsigned int index = __GET_VAR(data__->IDX);	
	unsigned int tabidx=__GET_VAR(data__->TABLEID);	
	if (tabidx>MAX_CAM_TABLE)
		return 0;
	IEC_LREAL value= __GET_VAR(data__->VALUE);	
	if (index<MAX_CAM_LEN)
		g_cam[tabidx][index]=value;
	return 1;
}
int get_cam(GET_CAM* data__)
{
	unsigned int index = __GET_VAR(data__->IDX);	
	unsigned int tabidx=__GET_VAR(data__->TABLEID);	
	if (tabidx>MAX_CAM_TABLE)
		return 1;
	if (index<MAX_CAM_LEN)
		__SET_VAR(data__->,VALUE,,g_cam[tabidx][index]);
	return 1;
}
/////////////////////////////////////////////////////////////////////////////////////////////////////////////
//Modbus Operation
#ifndef WIN32R
#define FLASH_BUF_SIZE 1024*8
UNS16 Flash_Buffer[FLASH_BUF_SIZE];
#endif
///////////////////////////////////////////////////////////////////////////////////////////////////
//Flash Buffer Operation
//Flash Buffer Operation
int flash_read(FLASH_READ* data__)
{
#ifdef WIN32R	
		return 1;
#else
	UNS16 oi;
	int addr=__GET_VAR(data__->ADDR);
	if ((addr>=0)&&(addr<FLASH_BUF_SIZE))
		oi=Flash_Buffer[addr];
	else
		oi=ERR_VALUE;
	__SET_VAR(data__->,OUTU16,,oi);
	return 1;
#endif	
}

int flash_write(FLASH_WRITE* data__)
{
#ifdef WIN32R	
		return 1;
#else
	UNS32 oi;
	int addr=__GET_VAR(data__->ADDR);
	if ((addr>=0)&&(addr<FLASH_BUF_SIZE))
		Flash_Buffer[addr]=__GET_VAR(data__->IPTU16);
	return 1;
#endif	
}


int flash_load_save(FLASH_LOADSAVE* data__)
{
#ifdef WIN32R	
	return 1;
#else	
    FILE* fp;
	static int idx=0, Address=0;
	static uint32_t StartSector = 0, EndSector = 0;
	static int operating=0;
	if (operating)
		return 0;
operating=1;
  BOOL save=__GET_VAR(data__->SAVE);
  if (save)
	{
        // for(idx=0;idx<FLASH_BUF_SIZE;idx++)
            // Flash_Buffer[idx]=idx;
        fp=fopen("/home/share/retain.txt","wb");
        fwrite(Flash_Buffer,FLASH_BUF_SIZE*2,1,fp);
        fclose(fp);
		operating=0;
	}
	else
	{
        fp=fopen("/home/share/retain.txt","rb");
        fread(Flash_Buffer,FLASH_BUF_SIZE*2,1,fp);
        fclose(fp);
		operating=0;
	}
#endif	
	
}


int get_interval(GET_INTERVAL* data__)
{
	return 1;
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////
#define __IN(PNAME,INV) \
	if (!strcmp(pn_body,#PNAME)) {\
		__SET_VAR(p->,PNAME,,__GET_VAR(data__->INV)); \
		return 0;		}

int setdata(AXIS_INFO* data__)
{
  int idx=__GET_VAR(data__->NODEID)-2;	
	char* pn_body;
	if (idx==-1)
		idx=0;
        if (idx>MAX_LEN)
                idx=0;
  AXIS_INFO* p=&g_ai[idx];
	IEC_STRING pn=__GET_VAR(data__->PNAME);
	
	pn_body = (char*) pn.body;

__IN(RA,INB);
__IN(MPP,INR);
__IN(FEEDRATE,INR);
__IN(ADTYPE,INU32);
__IN(VMAX,INR);
__IN(AMAX,INR);
__IN(JMAX,INR);
__IN(DMAX,INR);
__IN(LMTL,INR);
__IN(LMTH,INR);
__IN(AMOD,INR);
__IN(VA,INB);
	
__IN(ABORTFLAG,INU32);
__IN(DONEFLAG,INB);
__IN(EXECUTEFLAG,INB);
__IN(COMMANDTYPE,INU32);
__IN(STATE,INU32);
__IN(P0POS,INU32);
__IN(CURPOS,INU32);
__IN(AEO,INU32);

__IN(INTERP,INR);
__IN(INTERV,INR);
__IN(INTERA,INR);
__IN(INTERVC,INR);
__IN(INTERPC,INR);
__IN(INTERDP,INR);//Delta Pos

__IN(PC,INR);
__IN(VC,INR);
__IN(RC,INR);

__IN(ERRORID,INU32);
}

#define __OUT(PNAME,OUTV) \
if (!strcmp(pn_body,#PNAME)) {\
			 __SET_VAR(data__->,OUTV,,__GET_VAR(p->PNAME));\
			 return 0;	}		

int getdata(AXIS_INFO* data__)
{
        int idx=__GET_VAR(data__->NODEID)-2;
	char* pn_body;
        if (idx==-1)
                //idx=curidx;
		idx=0;
        AXIS_INFO* p=&g_ai[idx];
	IEC_STRING pn=__GET_VAR(data__->PNAME);
	pn_body = (char*) pn.body;
	
	__OUT(RA,OUTB);
	__OUT(MPP,OUTR);
	__OUT(FEEDRATE,OUTR);
	__OUT(ADTYPE,OUTU32);
	__OUT(VMAX,OUTR);
	__OUT(AMAX,OUTR);
	__OUT(JMAX,OUTR);
	__OUT(DMAX,OUTR);
	__OUT(LMTL,OUTR);
	__OUT(LMTH,OUTR);
	__OUT(AMOD,OUTR);
	__OUT(VA,OUTB);

	
	__OUT(ABORTFLAG,OUTU32);
	__OUT(DONEFLAG,OUTB);
	__OUT(EXECUTEFLAG,OUTB);
	__OUT(COMMANDTYPE,OUTU32);
	__OUT(STATE,OUTU32);
	__OUT(P0POS,OUTU32);
	__OUT(CURPOS,OUTU32);
	__OUT(AEO,OUTU32);
	

	__OUT(INTERP,OUTR);
	__OUT(INTERV,OUTR);
	__OUT(INTERA,OUTR);
	__OUT(INTERPC,OUTR);
	__OUT(INTERVC,OUTR);
	__OUT(INTERDP,OUTR);

	__OUT(PC,OUTR);
	__OUT(VC,OUTR);	
	__OUT(RC,OUTR);

	__OUT(ERRORID,OUTU32);
	return 1;
	
}

int dooperate(AXIS_INFO* data__)
{
        BOOL set=__GET_VAR(data__->ROW);
        if (set)
                return setdata(data__);
        else
                return getdata(data__);
}

///////////////////////////////////////////////////////////////////////////////////////////////////

int set_group_data(AXES_GROUP* data__)
{
	int idx=__GET_VAR(data__->GROUPID)-1;//start from 1
	char* pn_body;
	if (idx==-1)
		idx=0;
        if (idx>MAX_GROUP_NUM)
                idx=0;
  AXES_GROUP* p=&g_gp[idx];
	IEC_STRING pn=__GET_VAR(data__->PNAME);
	
	pn_body = (char*) pn.body;
	
	__IN(ENABLE,INB);	
	__IN(A1ID,INU32);	
	__IN(A2ID,INU32);
	__IN(A3ID,INU32);	
	__IN(DONEFLAG,INB);	
	__IN(EXECUTEFLAG,INB);	
	__IN(COMMANDTYPE,INU32);	
	__IN(MCSX,INR);	
	__IN(MCSY,INR);	
	__IN(MCSZ,INR);	
	__IN(MCSI,INR);	
	__IN(MCSJ,INR);	
	__IN(MCSK,INR);	
	__IN(PC,INR);	
	__IN(COMMANDP,INR);	
	__IN(COMMANDV,INR);	
	__IN(COMMANDA,INR);	
	__IN(ABORTFLAG,INU32);	
	__IN(KINNO,INU32);	
	__IN(FEEDRATE,INR);	
	return 0;
}
int get_group_data(AXES_GROUP* data__)
{
	int idx=__GET_VAR(data__->GROUPID)-1;//start from 1
	char* pn_body;
	if (idx==-1)
		idx=0;
        if (idx>MAX_GROUP_NUM)
                idx=0;
  AXES_GROUP* p=&g_gp[idx];
	IEC_STRING pn=__GET_VAR(data__->PNAME);
	
	pn_body = (char*) pn.body;
	
	__OUT(ENABLE,OUTB)
	__OUT(A1ID,OUTU32);
	__OUT(A2ID,OUTU32);
	__OUT(A3ID,OUTU32);
	__OUT(DONEFLAG,OUTB);
	__OUT(EXECUTEFLAG,OUTB);
	__OUT(COMMANDTYPE,OUTU32);
	__OUT(MCSX,OUTR);
	__OUT(MCSY,OUTR);
	__OUT(MCSZ,OUTR);
	__OUT(MCSI,OUTR);
	__OUT(MCSJ,OUTR);
	__OUT(MCSK,OUTR);
	__OUT(PC,OUTR);
	__OUT(COMMANDP,OUTR);
	__OUT(COMMANDV,OUTR);
	__OUT(COMMANDA,OUTB);
	__OUT(ABORTFLAG,OUTU32);
	__OUT(KINNO,OUTU32);
	__OUT(FEEDRATE,OUTR);
	return 0;
}
int group_op(AXES_GROUP* data__)
{
        BOOL set=__GET_VAR(data__->ROW);
        if (set)
                return set_group_data(data__);
        else
                return get_group_data(data__);   
}
///////////////////////////////////////////////////////////////////////////////////////////////////
#define __IN2(PNAME,INV) \
	if (!strcmp(pn_body,#PNAME)) {\
		p->PNAME=__GET_VAR(data__->INV); \
		return 0;		}
int set_exinfo(AXIS_EXINFO* data__)
{
	int idx=__GET_VAR(data__->NODEID)-2;
	char* pn_body;
	if (idx==-1)
		idx=0;
	struct ExInfo* p=&g_ei[idx];
	IEC_STRING pn=__GET_VAR(data__->PNAME);
	pn_body = (char*) pn.body;
	__IN2(JUMPV0,INR);
	__IN2(JUMPV1,INR);
	return 0;
}

#define __OUT2(PNAME,OUTV) \
if (!strcmp(pn_body,#PNAME)) {\
			 __SET_VAR(data__->,OUTV,,p->PNAME);\
			 return 0;	}		

int get_exinfo(AXIS_EXINFO* data__)
{
	int idx=__GET_VAR(data__->NODEID)-2;//start from 2
	char* pn_body;
	if (idx==-1)
		idx=0;
        if (idx>MAX_GROUP_NUM)
                idx=0;
	struct ExInfo* p=&g_ei[idx];
	IEC_STRING pn=__GET_VAR(data__->PNAME);
	pn_body = (char*) pn.body;
	
	__OUT2(JUMPV0,OUTR);
	__OUT2(JUMPV1,OUTR);
	return 0;
}

int axis_exop(AXIS_EXINFO* data__)
{
	BOOL set=__GET_VAR(data__->ROW);
    if (set)
		return set_exinfo(data__);
    else
		return get_exinfo(data__);   
	
}

///////////////////////////////////////////////////////////////////////////////////////////////////
long rcount=0;
int cc=0;//
int ip_write(IP_WRITE* data__)
{
#ifdef WIN32R	
		return 1;
#else
	UNS32 ipt=__GET_VAR(data__->POS);
	static long lastipt=0;
	long rltv;
	UNS16 ipt16;	
	UNS16 count;
	UNS8 addr=__GET_VAR(data__->NODEID)-2;
	AXIS_INFO* p=&g_ai[addr];
	int dir=1;
	if (Axis_Reverses[addr]>0) dir=-1;
if ((Axis_Types[addr]>0x0A)&&(Axis_Types[addr]<0x30))
{
//1863 increase delta value	
    /*Interpolation_data_records_low[addr]=(dir*ipt)%0x10000-Interpolation_data_records_high[addr];
    Interpolation_data_records_high[addr] = (dir*ipt)%0x10000;*/
//M7ECAT increase absolute value
		Interpolation_data_records_low[addr]=(dir*ipt)%0x10000;
//Position_Actual_Low[addr]+=Interpolation_data_records_low[addr];
/*if (__GET_VAR(p->STATE)>0)
	ControlWords[addr]=0xA003;
else
	ControlWords[addr]=0x0;*/
}
else
{
	//for ds402 svro the controlwords is controled by svro_control function block!
	//ControlWords[addr]=cia402_state_machine(StatusWords[addr]);
	//if (ControlWords[addr]==0x001F)
	{
		Interpolation_data_records_low[addr]=(dir*ipt)&0xFFFF;
		Interpolation_data_records_high[addr]=(dir*ipt)>>16;
	}
}	
	return 1;	
#endif
}

int ip_write2(IP_WRITE2* data__)
{
#ifdef WIN32R	
		return 1;
#else
	UNS32 ipt=__GET_VAR(data__->POS);
	static long lastipt=0;
	long rltv;
	UNS16 ipt16;	
	UNS16 count;
	UNS8 addr=__GET_VAR(data__->NODEID)-2;
	UNS16 cword = __GET_VAR(data__->CONTROLWORD);
	AXIS_INFO* p=&g_ai[addr];
	int dir=1;
	if (Axis_Reverses[addr]>0) dir=-1;
	Interpolation_data_records_low[addr]=(dir*ipt)&0xFFFF;
	Interpolation_data_records_high[addr]=(dir*ipt)>>16;
	ControlWords[addr]=cword;
	return 1;	
#endif
}

int ip_read(IP_READ* data__)
{

	UNS8 addr=__GET_VAR(data__->NODEID)-2;
    AXIS_INFO* p=&g_ai[addr];	
	UNS32 posout=Position_Actual_High[addr]<<16;
	posout+=Position_Actual_Low[addr];
#ifdef WIN32R	
	StatusWords[addr]=0x4;//
	__SET_VAR(data__->,STATUS,,StatusWords[addr]);
	//__SET_VAR(data__->,STATUS,,0x04);//for WIN32R axis always enable
	return 1;
#else
	__SET_VAR(data__->,POSU64,,posout);
    if (__GET_VAR(p->VA)==1)
    {
        //__SET_VAR(data__->,STATUS,,0x04);//for virtual axis always enable
        //return 1;
		StatusWords[addr]=0x4;//
    }
    __SET_VAR(data__->,STATUS,,StatusWords[addr]);
	return 1;	
#endif
}
int ip_read2(IP_READ2* data__)
{
UNS8 addr=__GET_VAR(data__->NODEID)-2;
AXIS_INFO* p=&g_ai[addr];	
#ifdef WIN32R	
	StatusWords[addr]=0x4;//
	__SET_VAR(data__->,STATUS,,StatusWords[addr]);
	//__SET_VAR(data__->,STATUS,,0x04);//for WIN32R axis always enable
	__SET_VAR(data__->,POSU32,,__GET_VAR(p->CURPOS));
	return 1;
#else
	UNS32 posout=Position_Actual_High[addr]<<16;
	posout+=Position_Actual_Low[addr];
	
	__SET_VAR(data__->,POSU32,,posout);
 	/*if (!(ControlWords[addr] & 0x1<<3))
	{
		StatusWords[addr] |= (0x80);
	}*/
    if (__GET_VAR(p->VA)==1)
    {
        __SET_VAR(data__->,STATUS,,0x04);//for virtual axis always enable
        return 1;
    }
    __SET_VAR(data__->,STATUS,,StatusWords[addr]);
	return 1;	
#endif
}
int ipt_shaping(IPT_SHAPING* data__)
{

double ipc = __GET_VAR(data__->INPC);
double ivc = __GET_VAR(data__->INVC);
double dir; 
static double lastvc;
static double lastpc;
static double lastdv;

static int changed=0;
int nodeid = __GET_VAR(data__->NODEID);
AXIS_INFO* p;
p=&g_ai[nodeid-2]; 

#ifdef WIN32R	
    char dbuf[30];
    memset(dbuf,0,30);
//sprintf(dbuf,"%.5f,%.5f,%.5f,%.5f,%.5f\n",lastpc,lastpc+dir*(ivc+lastvc)*0.002,ivc,lastvc,lastdv);
sprintf(dbuf,"%.5f,%.5f,%.5f\n",ipc,ivc,__GET_VAR(p->INTERA));
//fwrite(dbuf,strlen(dbuf),1,gfp);
#endif
lastdv = ivc-lastvc;
lastvc = ivc;
lastpc = ipc;
  
__SET_VAR(data__->,OUTPC,,ipc);
__SET_VAR(data__->,OUTVC,,ivc);
return 1;
}

int string_len(SLEN* data__)
{
	char* pn_body;
	IEC_STRING pn=__GET_VAR(data__->INS);
	
	pn_body = (char*) pn.body;
	
  __SET_VAR(data__->,OUTI,,strlen(pn_body));
  return 0;
}

int string_find(SFIND* data__)
{
	char* pn_body1;
	char* pn_body2;
	IEC_STRING pn1=__GET_VAR(data__->INS1);
	IEC_STRING pn2=__GET_VAR(data__->INS2);
	
	pn_body1=(char*) pn1.body;
	pn_body2=(char*) pn2.body;
	char* subset=strstr(pn_body1,pn_body2);
    int l;
    if (subset)
        l=strlen(pn_body1)-strlen(subset);  
    else
        l=-1;
  __SET_VAR(data__->,OUTI,,l);
  return 0;
}
int lrabs(LRABS* data__)
{
	__SET_VAR(data__->,OUTLR,,fabs(__GET_VAR(data__->INLR)));
	return 0;
}

int bcd_to_ulint(BCD_TO_ULINT2* data__)
{
    LWORD in = __GET_VAR(data__->INLW);
	ULINT res = in & 0xf;
    ULINT factor = 10ULL; 
	while (in >>= 4) 
	{
        res += (in & 0xf) * factor;
        factor *= 10;
    }
	__SET_VAR(data__->,OUTUL,,res);
    return 1;
}

int ulint_to_bcd(ULINT_TO_BCD2* data__)
{
	ULINT in = __GET_VAR(data__->INUL);
	LWORD res = in - (in / 10) * 10;
	USINT shift = 4;
	while (in /= 10) 
	{
        res |= (in - (in / 10) * 10) << shift;
        shift += 4;
    }
	__SET_VAR(data__->,OUTLW,,res);
	return 1;
}

int nmt_reset(NMTRESET* data__)
{
#ifdef WIN32R	
		return 1;
#else
	BOOL exec=__GET_VAR(data__->EXECUTE);
  if (exec)
  	{
  		ControlWords[1]=0x8F;
  		ControlWords[2]=0x8F;
  	}
	else
  	{
  		ControlWords[1]=0x1F;
  		ControlWords[2]=0x1F;
  	}
     //masterSendNMTstateChange (&OD_0_0_Data, 4, NMT_Reset_Node);
#endif
}
/*
READ_CLOCK:
读系统TSC时间
1. 输入|Execute BOOL 执行;
2. 输出|CLOCK ULINT 64位时间戳
int read_clock(READ_CLOCK* data__)
{
#ifdef WIN32R	
		return 1;
#else
	BOOL exec=__GET_VAR(data__->EXECUTE);
	RTIME begin_time;
  if(exec)
  {
			begin_time = rt_timer_read();  		
			__SET_VAR(data__->,CLOCK,begin_time);
  }
    return 1;
#endif
}
<pou name="READ_CLOCK" pouType="functionBlock">
	<interface>
          <inputVars>
            <variable name="Execute">
              <type>
                <BOOL/>
              </type>
            </variable>
           </inputVars>
					<outputVars>
            <variable name="CLOCK">
              <type>
                <ULINT/>
              </type>
            </variable>
					</outputVars>
           
        </interface>
        <body>
          <ST>
<![CDATA[{extern int read_clock(READ_CLOCK*); read_clock(data__);}]]>
          </ST>
        </body>
        </pou>
*/

void abs_init(int ano,UNS32 p0)
{

	AXIS_INFO* p;
	p=&g_ai[ano];
	double mpp=__GET_VAR(p->MPP);
	UNS32 aeo=__GET_VAR(p->AEO);
	UNS32 p0pos=aeo;
	double itpc=(p0-p0pos)*mpp/1000.0;
	__SET_VAR(p->,P0POS,,p0pos);
	__SET_VAR(p->,INTERPC,,itpc);
}
#define U16_32(dh,dl) dh<<16|dl
struct en1fs
{
	int lasten;
	int ready1f;
};
struct en1fs g_en[MAX_LEN];
//int lasten=0;
//int ready1f=0;
void abs_init2(int ano)
{
	//axis 2== ano 0
	int p0=U16_32(Position_Actual_High[ano],Position_Actual_Low[ano]);
	if (p0==0) return;//relative encode will always 0
	AXIS_INFO* p;
	p=&g_ai[ano];
	double mpp=__GET_VAR(p->MPP);
	int aeo=__GET_VAR(p->AEO);
	int p0pos=aeo;
    //int aeo_changed = __GET_VAR(p->P0POS);
    //absolute encoder overflow then the P0POS is changed by SetZero of yushuo only for 1 time overflow.
    //also possible for bypass the aeo, read p0pos from otherplace then enable the svro, the aeo is then bypassed.
    //if ((aeo_changed!=0) && (aeo_changed!=aeo)) p0pos=aeo_changed;
	double itpc=(p0-p0pos)*mpp/1000.0;
	__SET_VAR(p->,P0POS,,p0pos);
	__SET_VAR(p->,INTERPC,,itpc);
	//__SET_VAR(p->,INTERP,itpc);
	__SET_VAR(p->,PC,,itpc);//abs axis mainly used for linear axis! the PC MOD should add if PC>MOD then PC:=PC MOD 
	//the first Pulse is P0
	__SET_VAR(p->,CURPOS,,p0);
	Interpolation_data_records_low[ano]=p0&0xFFFF;
	Interpolation_data_records_high[ano]=p0>>16;
	printf("p0%d:%8x,%.2f\n",ano,p0,itpc);//for debug but can cause the app fail to  autostart
	//ready1f=0;
	g_en[ano].ready1f=0;
}
int svro_control(SVRO_CONTROL* data__)
{
#ifdef WIN32R	
		return 1;
#else
	UNS8 addr=__GET_VAR(data__->AXISID)-2;
	BOOL ben=__GET_VAR(data__->ENABLE);
	if (Axis_Types[addr]>0x30)
		return 1;

	UNS16 control_word = cia402_state_machine(StatusWords[addr]);
//    if (ActualModes[addr]!=TargetModes[addr])
//        control_word&=~(0x1);  // not switch on 6 not to 7
	if (ben) control_word |= (0x1<<3);
	else	 control_word&=~(0x1<<3);
/*	if ((lasten==0)&&(control_word&(0x1<<3)))
		ready1f=1;
	lasten=control_word&(0x1<<3);
	
	if (ready1f)
	{
		abs_init2(addr);		
	}
	ControlWords[addr]=control_word;
*/
	if ((g_en[addr].lasten==0)&&(control_word&(0x1<<3)))
		g_en[addr].ready1f=1;
	g_en[addr].lasten=control_word&(0x1<<3);
	if (g_en[addr].ready1f)
		abs_init2(addr);
	ControlWords[addr]=control_word;
    __SET_VAR(data__->,CONTROLWORD,,control_word);
    //if (ben) rt_printf("s:%x,c:%x",StatusWords[addr],ControlWords[addr]);
 	return 1;	
#endif
}

int svro_mode(SVRO_MODE* data__)
{
#ifdef WIN32R	
		return 1;
#else
	UNS8 addr=__GET_VAR(data__->AXISID)-2;
	int mode=__GET_VAR(data__->TARGETMODE);
	if (Axis_Types[addr]>0x30)
		return 1;
    TargetModes[addr] = mode;
    __SET_VAR(data__->,ACTUALMODE,,ActualModes[addr]);
    return 1;
#endif
}
int torque_read(TORQUE_READ* data__)
{
#ifdef WIN32R	
		return 1;
#else
	UNS8 addr = __GET_VAR(data__->AXISID)-2;
    __SET_VAR(data__->,ACTUALTORQUE,,ActualTorques[addr]);
    __SET_VAR(data__->,ACTUALCURRENT,,ActualCurrents[addr]);

#endif
}
int torque_write(TORQUE_WRITE* data__)
{
#ifdef WIN32R	
		return 1;
#else
	UNS8 addr = __GET_VAR(data__->AXISID)-2;
    int tt = __GET_VAR(data__->TARGETTORQUE);
    //int to = __GET_VAR(data__->TORQUEOFFSET);
    TargetTorques[addr] = tt;
    return 1;
#endif
}
int aeo_read(AEO_READ* data__)
{
#ifdef WIN32R	
		return 1;
#else
	UNS8 addr = __GET_VAR(data__->AXISID)-2;
    __SET_VAR(data__->,AEO,,Absolute_Encoder_Origins[addr]);
#endif
}
int aeo_write(AEO_WRITE* data__)
{
#ifdef WIN32R	
		return 1;
#else
	UNS8 addr = __GET_VAR(data__->AXISID)-2;
    int tt = __GET_VAR(data__->AEO);
    Absolute_Encoder_Origins[addr] = tt;
    return 1;
#endif
}

int randi(RANDI100* data__)
{
	//int max = __GET_VAR(data__->MAXI);
__SET_VAR(data__->,RINT,,rand()%100);
return 0;
}
int u16_b16(U16_B16* data__)
{
	UNS16 ui16 = __GET_VAR(data__->UI16);
	__SET_VAR(data__->,B0,,(ui16&1<<(0))>0?1:0);
	__SET_VAR(data__->,B1,,(ui16&1<<(1))>0?1:0);
	__SET_VAR(data__->,B2,,(ui16&1<<(2))>0?1:0);
	__SET_VAR(data__->,B3,,(ui16&1<<(3))>0?1:0);
	__SET_VAR(data__->,B4,,(ui16&1<<(4))>0?1:0);
	__SET_VAR(data__->,B5,,(ui16&1<<(5))>0?1:0);
	__SET_VAR(data__->,B6,,(ui16&1<<(6))>0?1:0);
	__SET_VAR(data__->,B7,,(ui16&1<<(7))>0?1:0);
	__SET_VAR(data__->,B8,,(ui16>>8&(1<<(0)))>0?1:0);
	__SET_VAR(data__->,B9,,(ui16>>8&(1<<(1)))>0?1:0);
	__SET_VAR(data__->,B10,,(ui16>>8&(1<<(2)))>0?1:0);
	__SET_VAR(data__->,B11,,(ui16>>8&(1<<(3)))>0?1:0);
	__SET_VAR(data__->,B12,,(ui16>>8&(1<<(4)))>0?1:0);
	__SET_VAR(data__->,B13,,(ui16>>8&(1<<(5)))>0?1:0);
	__SET_VAR(data__->,B14,,(ui16>>8&(1<<(6)))>0?1:0);
	__SET_VAR(data__->,B15,,(ui16>>8&(1<<(7)))>0?1:0);
	return 1;
}
int b16_u16(B16_U16* data__)
{
	UNS8 b0=(__GET_VAR(data__->B0)>0?1:0);
	UNS8 b1=(__GET_VAR(data__->B1)>0?1:0);
	UNS8 b2=(__GET_VAR(data__->B2)>0?1:0);
	UNS8 b3=(__GET_VAR(data__->B3)>0?1:0);
	UNS8 b4=(__GET_VAR(data__->B4)>0?1:0);
	UNS8 b5=(__GET_VAR(data__->B5)>0?1:0);
	UNS8 b6=(__GET_VAR(data__->B6)>0?1:0);
	UNS8 b7=(__GET_VAR(data__->B7)>0?1:0);
	UNS8 b8=(__GET_VAR(data__->B8)>0?1:0);
	UNS8 b9=(__GET_VAR(data__->B9)>0?1:0);
	UNS8 b10=(__GET_VAR(data__->B10)>0?1:0);
	UNS8 b11=(__GET_VAR(data__->B11)>0?1:0);
	UNS8 b12=(__GET_VAR(data__->B12)>0?1:0);
	UNS8 b13=(__GET_VAR(data__->B13)>0?1:0);
	UNS8 b14=(__GET_VAR(data__->B14)>0?1:0);
	UNS8 b15=(__GET_VAR(data__->B15)>0?1:0);
	//__SET_VAR(data__->,U16,b0+b1*(2^1)+b2*(2^2)+b3*(2^3)+b4*(2^4));
	__SET_VAR(data__->,U16,,b0+b1*2+b2*4+b3*8+b4*16+b5*32+b6*64+b7*128+b8*256+b9*512+b10*1024+b11*2048+b12*4096+b13*8192+b14*16384+b15*32768);
	return 1;
}

#ifdef IPC200
extern int fd;
extern UNS16 receive_data[128];
extern UNS16 send_data[128];
extern UNS16 receive_size;
extern UNS16 send_size;
extern UNS16 packet_num;
#endif
int fpga_read(FPGA_READ* data__)
{   
#ifndef IPC200
		return 1;
#else
    int addr=-1;
	addr = __GET_VAR(data__->VARADDR);
 	if ((addr>=0)&&(addr<receive_size))
        __SET_VAR(data__->,OUTU16,,receive_data[addr]);
	return 1;	
#endif
}
int fpga_write(FPGA_WRITE* data__)
{
#ifndef IPC200
		return 1;
#else
    int addr=-1;
    addr = __GET_VAR(data__->VARADDR);
 	if ((addr>=0)&&(addr<send_size))
        send_data[addr] = __GET_VAR(data__->INU16);
	return 1;	
#endif
}

int svro_clearfault(SVRO_CLEARFAULT* data__)
{
#ifdef WIN32R	
		return 1;
#else
	UNS8 addr=__GET_VAR(data__->AXISID)-2;
	BOOL ben=__GET_VAR(data__->ENABLE);
	if (Axis_Types[addr]>0x30)
		return 1;

    UNS16 control_word = 0;

	if (ben) control_word |= (0x1<<7);
	else	 control_word &= ~(0x1<<7);

	ControlWords[addr] |= control_word;
    __SET_VAR(data__->,CONTROLWORD,,ControlWords[addr]);

 	return 1;	
#endif
}

#ifdef WIN32R
extern int debug_state;
#endif
int plc_pause(PLC_PAUSE* data__)
{
#ifdef WIN32R
	FILE* fp;
	BOOL ben=__GET_VAR(data__->PAUSE);
	static BOOL lastset=-1;
	if (ben) 
		debug_state = 0;
	else
		debug_state = 1;
	__SET_VAR(data__->,PAUSED,,!debug_state);
	if (ben!=lastset)
	{
		fp = fopen("dbg.txt","w");
		fprintf(fp,"%d",ben);
		fclose(fp);
		lastset = ben;
	}
	return 1;
#else
	return 1;
#endif
}

