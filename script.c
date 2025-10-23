#include "script.h"

double * pSysItem;
StructStation * pStation ;
char bEmbed;

//打开实时数据库
int OpenRamRt()
{
#ifdef OS_WIN    
    char chRamName[30] ; 
    HANDLE hFile;
    HANDLE hMapFile = 0;        
    LPVOID  lpMapAddress = 0;
    strcpy( chRamName, "RAMRT" );

    if ( lpMapAddress ) UnmapViewOfFile( lpMapAddress );
    if ( hMapFile ) CloseHandle( hMapFile );

    hFile = (HANDLE) 0xFFFFFFFF ;

    hMapFile = CreateFileMapping( hFile, NULL, PAGE_READWRITE, 0, STATION_SIZE , (LPCTSTR)chRamName );
    if ( hMapFile == NULL ){
        lpMapAddress = NULL;
        return 0;
    }
    lpMapAddress = MapViewOfFile( hMapFile,FILE_MAP_ALL_ACCESS,0,0,0 );
    pSysItem = ( double * )lpMapAddress ; 
    pStation = ( StructStation * )( ( double * )lpMapAddress + MAX_SYSITEM )  ;
    return 1 ;
#endif

}

//延时函数
void waitForMillisec(int millisec)
{
#ifdef OS_WIN
    Sleep(millisec);
#endif

}

//获取实时数据库对应id的数值
double GetItemValue( int iStationid ,  int id )
{
    if( bEmbed ) iStationid = 0 ;
    StructStation *  pStation1 ;
    pStation1 = pStation + iStationid;

    if ( id >= MAX_NUM )
        return 0;
    else
        return pStation1->DataValue[ id ].dValue ;
}

//获取实时数据库对应id的数据结构体信息
StructData* GetItem(int iStationid,int id)
{
    if( bEmbed ) iStationid = 0 ;
    StructStation *  pStation1 ;
    pStation1 = pStation + iStationid;

    if ( id >= MAX_NUM )
        return 0;
    else
        return &pStation1->DataValue[ id ] ;
}

//获取实时数据库对应id的数据状态
char GetItemChangeState( int iStationid, int id )
{
    if( bEmbed ) iStationid = 0 ;
    StructStation *  pStation1 ;
    pStation1 = pStation + iStationid;

    if ( id >= MAX_NUM )
        return 0;
    else
        return pStation1->DataValue[ id ].bChangeState ;
}

//设置实时数据库对应id的数值
void SetItemValue( int iStationid ,  int id , double dValue )
{
    if( bEmbed ) iStationid = 0 ;
    StructStation *  pStation1 ;
    pStation1 = pStation + iStationid;

    if ( id >= MAX_NUM ) return ;

    pStation1->DataValue[id].dValue  = dValue ;
}

//获取开出串的信息
StructKcData *GetKcData( int iStationid )
{
    if( bEmbed ) iStationid = 0 ;
    StructStation *  pStation1 ;
    pStation1 = pStation  + iStationid ;

    return  &pStation1->DataKC;
}

//获取控制下发标志的状态
int GetKcFlag( int iStationid )
{
    if( bEmbed ) iStationid = 0 ;
    StructStation *  pStation1 ;
    pStation1 = pStation  + iStationid ;

    return pStation1->DataKCFlag;
}

//设置实时数据库对应id的数据状态
void SetDataState(int iStationid, int id, char bAlarm ,  char bChangeState)
{
    if( bEmbed ) iStationid = 0 ;
    StructStation *  pStation1 ;
    pStation1 = pStation + iStationid;

    if ( id >= MAX_NUM ) return ;

    pStation1->DataValue[id].bAlarm = bAlarm ;
    pStation1->DataValue[id].bChangeState = bChangeState ;
}
    

//设置控制命令标志
void  SetKcFlag(int iStationid, int flag)
{
    if( bEmbed ) iStationid = 0 ;
    StructStation *  pStation1 ;
    pStation1 = pStation + iStationid;

    pStation1->DataKCFlag = flag;
}

//设置控制串 no为数据的id，data下发信息
void  SetKcData(int iStationid, int no , char *data)
{
    if( bEmbed ) iStationid = 0 ;
    StructStation *  pStation1 ;
    pStation1 = pStation + iStationid;

    pStation1->DataKC.kcNo = no;
   // pStation1->DataKC.dataKC = data;
    memset(&pStation1->DataKC.dataKC,0,sizeof(pStation1->DataKC.dataKC));
    memcpy(pStation1->DataKC.dataKC, data, strlen(data));
    printf("dataKc = %s\n, data = %s\n",pStation1->DataKC.dataKC, data);
}


//清除控制数据
void  SetKcClear(int iStationid,int flag)
{
    if( bEmbed ) iStationid = 0 ;
    StructStation *  pStation1 ;
    pStation1 = pStation + iStationid;

    if(!flag){
        char data[200] = {0} ;
        pStation1->DataKCFlag = flag ;
        strcpy(pStation1->DataKC.dataKC,data);
    }
}

//设置对应序号结构体信息
void SetStruct(int iNum,char *chMsg)
{
    int iStationid = 0 ;
    if( bEmbed ) iStationid = 0 ;
    StructStation *  pStation1 ;
    pStation1 = pStation + iStationid;

    strcpy(pStation1->chStruct[iNum],chMsg);
}

//设置结构体条数
void SetStructNum(int iStructNum)
{
    int iStationid = 0 ;
    if( bEmbed ) iStationid = 0 ;
    StructStation *  pStation1 ;
    pStation1 = pStation + iStationid;

    pStation1->StructNum = iStructNum;
}

//设置上传结构体信息
void SetStructUp(int iNum,char *chMsg)
{
    int iStationid = 0 ;
    if( bEmbed ) iStationid = 0 ;
    StructStation *  pStation1 ;
    pStation1 = pStation + iStationid;

    strcpy(pStation1->chStructUp[iNum],chMsg);
}

//设置上传结构体条数
void SetStructUpNum(int iStructNum)
{
    int iStationid = 0 ;
    if( bEmbed ) iStationid = 0 ;
    StructStation *  pStation1 ;
    pStation1 = pStation + iStationid;

    pStation1->StructUpNum = iStructNum;
}

//设置下传结构体信息
void SetStructDown(int iNum, char *chMsg)
{
    int iStationid = 0 ;
    if( bEmbed ) iStationid = 0 ;
    StructStation *  pStation1 ;
    pStation1 = pStation + iStationid;

    strcpy(pStation1->chStructDown[iNum],chMsg);
}

//设置下传结构体条数
void SetStructDownNum(int iProg ,int iNum)
{
    int iStationid = 0 ;
    if( bEmbed ) iStationid = 0 ;
    StructStation *  pStation1 ;
    pStation1 = pStation + iStationid;
    
    pStation1->StructDownProg = iProg;
    pStation1->StructDownNum = iNum;
}

//获取对应iNum结构体信息
char * GetStruct(int iNum)
{
    int iStationid = 0 ;
    if( bEmbed ) iStationid = 0 ;
    StructStation *  pStation1 ;
    pStation1 = pStation + iStationid;

    return pStation1->chStruct[iNum];
}

//获取结构体信息条数
int GetStructNum()
{
    int iStationid = 0 ;
    if( bEmbed ) iStationid = 0 ;
    StructStation *  pStation1 ;
    pStation1 = pStation + iStationid;

    return pStation1->StructNum;
}

//获取对应iNum上传结构体信息
char *GetStructUp(int iNum)
{
    int iStationid = 0 ;
    if( bEmbed ) iStationid = 0 ;
    StructStation *  pStation1 ;
    pStation1 = pStation + iStationid;

    return pStation1->chStructUp[iNum];
}

//获取上传结构体信息条数
int GetStructUpNum()
{
    int iStationid = 0 ;
    if( bEmbed ) iStationid = 0 ;
    StructStation *  pStation1 ;
    pStation1 = pStation + iStationid;

    return pStation1->StructUpNum;
}

//获取对应iNum下传结构体信息
char *GetStructDown(int iNum)
{
    int iStationid = 0 ;
    if( bEmbed ) iStationid = 0 ;
    StructStation *  pStation1 ;
    pStation1 = pStation + iStationid;

    return pStation1->chStructDown[iNum];
}

//获取下传结构体信息条数
int GetStructDownNum()
{
    int iStationid = 0 ;
    if( bEmbed ) iStationid = 0 ;
    StructStation *  pStation1 ;
    pStation1 = pStation + iStationid;

    return pStation1->StructDownNum;
}

int GetStructDownProgId()
{
    int iStationid = 0 ;
    if( bEmbed ) iStationid = 0 ;
    StructStation *  pStation1 ;
    pStation1 = pStation + iStationid;

    return pStation1->StructDownProg;
}

//获取系统变量的值
double GetSysItem(int id)
{
    return *( pSysItem + id ) ;
}

//设置系统变量的值
void SetSysItem( int id , double dValue) 
{ 
    *( pSysItem + id ) = dValue ;
}