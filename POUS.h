#ifndef __POUS_H
#define __POUS_H

#include "accessor.h"
#include "iec_std_lib.h"

__DECLARE_ARRAY_TYPE(__ARRAY_OF_INT_10,INT,[10])
__DECLARE_DERIVED_TYPE(ATT,BOOL)
__DECLARE_STRUCT_TYPE(PYGT,
  INT AA;
    LREAL BB;
  )
// FUNCTION_BLOCK GET_INTERVAL
// Data part
typedef struct {
  // FB Interface - IN, OUT, IN_OUT variables
  __DECLARE_VAR(BOOL,EN)
  __DECLARE_VAR(BOOL,ENO)
  __DECLARE_VAR(ULINT,OUTU32)

  // FB private variables - TEMP, private and located variables

} GET_INTERVAL;

void GET_INTERVAL_init__(GET_INTERVAL *data__, BOOL retain);
// Code part
void GET_INTERVAL_body__(GET_INTERVAL *data__);
// FUNCTION_BLOCK FPGA_WRITE
// Data part
typedef struct {
  // FB Interface - IN, OUT, IN_OUT variables
  __DECLARE_VAR(BOOL,EN)
  __DECLARE_VAR(BOOL,ENO)
  __DECLARE_VAR(INT,VARADDR)
  __DECLARE_VAR(UINT,INU16)

  // FB private variables - TEMP, private and located variables

} FPGA_WRITE;

void FPGA_WRITE_init__(FPGA_WRITE *data__, BOOL retain);
// Code part
void FPGA_WRITE_body__(FPGA_WRITE *data__);
// FUNCTION_BLOCK IP_READ2
// Data part
typedef struct {
  // FB Interface - IN, OUT, IN_OUT variables
  __DECLARE_VAR(BOOL,EN)
  __DECLARE_VAR(BOOL,ENO)
  __DECLARE_VAR(USINT,NODEID)
  __DECLARE_VAR(UDINT,POSU32)
  __DECLARE_VAR(UINT,STATUS)

  // FB private variables - TEMP, private and located variables

} IP_READ2;

void IP_READ2_init__(IP_READ2 *data__, BOOL retain);
// Code part
void IP_READ2_body__(IP_READ2 *data__);
// FUNCTION_BLOCK QTOUCH_WRITE
// Data part
typedef struct {
  // FB Interface - IN, OUT, IN_OUT variables
  __DECLARE_VAR(BOOL,EN)
  __DECLARE_VAR(BOOL,ENO)
  __DECLARE_VAR(INT,VARADDR)
  __DECLARE_VAR(LREAL,INR)

  // FB private variables - TEMP, private and located variables

} QTOUCH_WRITE;

void QTOUCH_WRITE_init__(QTOUCH_WRITE *data__, BOOL retain);
// Code part
void QTOUCH_WRITE_body__(QTOUCH_WRITE *data__);
// FUNCTION_BLOCK COIL_WRITE
// Data part
typedef struct {
  // FB Interface - IN, OUT, IN_OUT variables
  __DECLARE_VAR(BOOL,EN)
  __DECLARE_VAR(BOOL,ENO)
  __DECLARE_VAR(INT,MBADDR)
  __DECLARE_VAR(BOOL,INB)

  // FB private variables - TEMP, private and located variables

} COIL_WRITE;

void COIL_WRITE_init__(COIL_WRITE *data__, BOOL retain);
// Code part
void COIL_WRITE_body__(COIL_WRITE *data__);
// FUNCTION_BLOCK RDSDO_RESULT
// Data part
typedef struct {
  // FB Interface - IN, OUT, IN_OUT variables
  __DECLARE_VAR(BOOL,EN)
  __DECLARE_VAR(BOOL,ENO)
  __DECLARE_VAR(BOOL,EXECUTE)
  __DECLARE_VAR(UINT,NODEID)
  __DECLARE_VAR(BOOL,RDOK)
  __DECLARE_VAR(DWORD,VAL)
  __DECLARE_VAR(USINT,SIZE)

  // FB private variables - TEMP, private and located variables

} RDSDO_RESULT;

void RDSDO_RESULT_init__(RDSDO_RESULT *data__, BOOL retain);
// Code part
void RDSDO_RESULT_body__(RDSDO_RESULT *data__);
// FUNCTION_BLOCK WRITE_SDO
// Data part
typedef struct {
  // FB Interface - IN, OUT, IN_OUT variables
  __DECLARE_VAR(BOOL,EN)
  __DECLARE_VAR(BOOL,ENO)
  __DECLARE_VAR(UINT,NODEID)
  __DECLARE_VAR(UINT,INDEX)
  __DECLARE_VAR(UINT,SUBINDEX)
  __DECLARE_VAR(UINT,LENV)
  __DECLARE_VAR(DWORD,VAL)
  __DECLARE_VAR(BOOL,DONE)
  __DECLARE_VAR(ULINT,ERR)

  // FB private variables - TEMP, private and located variables

} WRITE_SDO;

void WRITE_SDO_init__(WRITE_SDO *data__, BOOL retain);
// Code part
void WRITE_SDO_body__(WRITE_SDO *data__);
// FUNCTION_BLOCK BUF_WRITE
// Data part
typedef struct {
  // FB Interface - IN, OUT, IN_OUT variables
  __DECLARE_VAR(BOOL,EN)
  __DECLARE_VAR(BOOL,ENO)
  __DECLARE_VAR(INT,BUFTYPE)
  __DECLARE_VAR(INT,IDX)
  __DECLARE_VAR(UINT,INU16)

  // FB private variables - TEMP, private and located variables

} BUF_WRITE;

void BUF_WRITE_init__(BUF_WRITE *data__, BOOL retain);
// Code part
void BUF_WRITE_body__(BUF_WRITE *data__);
// FUNCTION_BLOCK RBUF_READ
// Data part
typedef struct {
  // FB Interface - IN, OUT, IN_OUT variables
  __DECLARE_VAR(BOOL,EN)
  __DECLARE_VAR(BOOL,ENO)
  __DECLARE_VAR(UDINT,VARADDR)
  __DECLARE_VAR(LREAL,OUTR)

  // FB private variables - TEMP, private and located variables

} RBUF_READ;

void RBUF_READ_init__(RBUF_READ *data__, BOOL retain);
// Code part
void RBUF_READ_body__(RBUF_READ *data__);
// FUNCTION_BLOCK RBUF_READ_U16
// Data part
typedef struct {
  // FB Interface - IN, OUT, IN_OUT variables
  __DECLARE_VAR(BOOL,EN)
  __DECLARE_VAR(BOOL,ENO)
  __DECLARE_VAR(UDINT,VARADDR)
  __DECLARE_VAR(UINT,OUTU161)
  __DECLARE_VAR(UINT,OUTU162)
  __DECLARE_VAR(UINT,OUTU163)
  __DECLARE_VAR(UINT,OUTU164)

  // FB private variables - TEMP, private and located variables

} RBUF_READ_U16;

void RBUF_READ_U16_init__(RBUF_READ_U16 *data__, BOOL retain);
// Code part
void RBUF_READ_U16_body__(RBUF_READ_U16 *data__);
// FUNCTION_BLOCK LRABS
// Data part
typedef struct {
  // FB Interface - IN, OUT, IN_OUT variables
  __DECLARE_VAR(BOOL,EN)
  __DECLARE_VAR(BOOL,ENO)
  __DECLARE_VAR(LREAL,INLR)
  __DECLARE_VAR(LREAL,OUTLR)

  // FB private variables - TEMP, private and located variables

} LRABS;

void LRABS_init__(LRABS *data__, BOOL retain);
// Code part
void LRABS_body__(LRABS *data__);
// FUNCTION_BLOCK PLC_PAUSE
// Data part
typedef struct {
  // FB Interface - IN, OUT, IN_OUT variables
  __DECLARE_VAR(BOOL,EN)
  __DECLARE_VAR(BOOL,ENO)
  __DECLARE_VAR(BOOL,PAUSE)
  __DECLARE_VAR(BOOL,PAUSED)

  // FB private variables - TEMP, private and located variables

} PLC_PAUSE;

void PLC_PAUSE_init__(PLC_PAUSE *data__, BOOL retain);
// Code part
void PLC_PAUSE_body__(PLC_PAUSE *data__);
// FUNCTION_BLOCK SYS_TIM
// Data part
typedef struct {
  // FB Interface - IN, OUT, IN_OUT variables
  __DECLARE_VAR(BOOL,EN)
  __DECLARE_VAR(BOOL,ENO)
  __DECLARE_VAR(DT,SYS_D_T)
  __DECLARE_VAR(ULINT,DTUL)

  // FB private variables - TEMP, private and located variables

} SYS_TIM;

void SYS_TIM_init__(SYS_TIM *data__, BOOL retain);
// Code part
void SYS_TIM_body__(SYS_TIM *data__);
// FUNCTION_BLOCK SYS_CFG
// Data part
typedef struct {
  // FB Interface - IN, OUT, IN_OUT variables
  __DECLARE_VAR(BOOL,EN)
  __DECLARE_VAR(BOOL,ENO)
  __DECLARE_VAR(LREAL,CYCLE_TIME)

  // FB private variables - TEMP, private and located variables

} SYS_CFG;

void SYS_CFG_init__(SYS_CFG *data__, BOOL retain);
// Code part
void SYS_CFG_body__(SYS_CFG *data__);
// FUNCTION_BLOCK SVRO_CLEARFAULT
// Data part
typedef struct {
  // FB Interface - IN, OUT, IN_OUT variables
  __DECLARE_VAR(BOOL,EN)
  __DECLARE_VAR(BOOL,ENO)
  __DECLARE_VAR(USINT,AXISID)
  __DECLARE_VAR(BOOL,ENABLE)
  __DECLARE_VAR(UINT,CONTROLWORD)

  // FB private variables - TEMP, private and located variables

} SVRO_CLEARFAULT;

void SVRO_CLEARFAULT_init__(SVRO_CLEARFAULT *data__, BOOL retain);
// Code part
void SVRO_CLEARFAULT_body__(SVRO_CLEARFAULT *data__);
// FUNCTION_BLOCK TORQUE_READ
// Data part
typedef struct {
  // FB Interface - IN, OUT, IN_OUT variables
  __DECLARE_VAR(BOOL,EN)
  __DECLARE_VAR(BOOL,ENO)
  __DECLARE_VAR(USINT,AXISID)
  __DECLARE_VAR(INT,ACTUALTORQUE)
  __DECLARE_VAR(INT,ACTUALCURRENT)

  // FB private variables - TEMP, private and located variables

} TORQUE_READ;

void TORQUE_READ_init__(TORQUE_READ *data__, BOOL retain);
// Code part
void TORQUE_READ_body__(TORQUE_READ *data__);
// FUNCTION_BLOCK GET_CAM
// Data part
typedef struct {
  // FB Interface - IN, OUT, IN_OUT variables
  __DECLARE_VAR(BOOL,EN)
  __DECLARE_VAR(BOOL,ENO)
  __DECLARE_VAR(INT,TABLEID)
  __DECLARE_VAR(INT,IDX)
  __DECLARE_VAR(LREAL,VALUE)

  // FB private variables - TEMP, private and located variables

} GET_CAM;

void GET_CAM_init__(GET_CAM *data__, BOOL retain);
// Code part
void GET_CAM_body__(GET_CAM *data__);
// FUNCTION_BLOCK SVRO_CONTROL
// Data part
typedef struct {
  // FB Interface - IN, OUT, IN_OUT variables
  __DECLARE_VAR(BOOL,EN)
  __DECLARE_VAR(BOOL,ENO)
  __DECLARE_VAR(USINT,AXISID)
  __DECLARE_VAR(BOOL,ENABLE)
  __DECLARE_VAR(UINT,CONTROLWORD)

  // FB private variables - TEMP, private and located variables

} SVRO_CONTROL;

void SVRO_CONTROL_init__(SVRO_CONTROL *data__, BOOL retain);
// Code part
void SVRO_CONTROL_body__(SVRO_CONTROL *data__);
// FUNCTION_BLOCK AXES_GROUP
// Data part
typedef struct {
  // FB Interface - IN, OUT, IN_OUT variables
  __DECLARE_VAR(BOOL,EN)
  __DECLARE_VAR(BOOL,ENO)
  __DECLARE_VAR(BOOL,ROW)
  __DECLARE_VAR(INT,GROUPID)
  __DECLARE_VAR(STRING,PNAME)
  __DECLARE_VAR(BOOL,INB)
  __DECLARE_VAR(UDINT,INU32)
  __DECLARE_VAR(LREAL,INR)
  __DECLARE_VAR(STRING,INS)
  __DECLARE_VAR(BOOL,OUTB)
  __DECLARE_VAR(UDINT,OUTU32)
  __DECLARE_VAR(LREAL,OUTR)
  __DECLARE_VAR(STRING,OUTS)

  // FB private variables - TEMP, private and located variables
  __DECLARE_VAR(BOOL,DONEFLAG)
  __DECLARE_VAR(BOOL,EXECUTEFLAG)
  __DECLARE_VAR(INT,COMMANDTYPE)
  __DECLARE_VAR(BOOL,ENABLE)
  __DECLARE_VAR(INT,A1ID)
  __DECLARE_VAR(INT,A2ID)
  __DECLARE_VAR(INT,A3ID)
  __DECLARE_VAR(INT,A4ID)
  __DECLARE_VAR(INT,A5ID)
  __DECLARE_VAR(INT,A6ID)
  __DECLARE_VAR(INT,A7ID)
  __DECLARE_VAR(INT,A8ID)
  __DECLARE_VAR(LREAL,PC)
  __DECLARE_VAR(REAL,MCSX)
  __DECLARE_VAR(REAL,MCSY)
  __DECLARE_VAR(REAL,MCSZ)
  __DECLARE_VAR(REAL,MCSI)
  __DECLARE_VAR(REAL,MCSJ)
  __DECLARE_VAR(REAL,MCSK)
  __DECLARE_VAR(LREAL,COMMANDP)
  __DECLARE_VAR(LREAL,COMMANDV)
  __DECLARE_VAR(LREAL,COMMANDA)
  __DECLARE_VAR(INT,ABORTFLAG)
  __DECLARE_VAR(INT,KINNO)
  __DECLARE_VAR(INT,STATE)
  __DECLARE_VAR(LREAL,FEEDRATE)
  __DECLARE_VAR(LREAL,VMAX)
  __DECLARE_VAR(LREAL,AMAX)

} AXES_GROUP;

void AXES_GROUP_init__(AXES_GROUP *data__, BOOL retain);
// Code part
void AXES_GROUP_body__(AXES_GROUP *data__);
// FUNCTION_BLOCK QTOUCH_READ
// Data part
typedef struct {
  // FB Interface - IN, OUT, IN_OUT variables
  __DECLARE_VAR(BOOL,EN)
  __DECLARE_VAR(BOOL,ENO)
  __DECLARE_VAR(INT,VARADDR)
  __DECLARE_VAR(LREAL,OUTR)

  // FB private variables - TEMP, private and located variables

} QTOUCH_READ;

void QTOUCH_READ_init__(QTOUCH_READ *data__, BOOL retain);
// Code part
void QTOUCH_READ_body__(QTOUCH_READ *data__);
// FUNCTION_BLOCK SEMAP
// Data part
typedef struct {
  // FB Interface - IN, OUT, IN_OUT variables
  __DECLARE_VAR(BOOL,EN)
  __DECLARE_VAR(BOOL,ENO)
  __DECLARE_VAR(INT,IDX)
  __DECLARE_VAR(BOOL,POK)

  // FB private variables - TEMP, private and located variables

} SEMAP;

void SEMAP_init__(SEMAP *data__, BOOL retain);
// Code part
void SEMAP_body__(SEMAP *data__);
// FUNCTION_BLOCK SEMAV
// Data part
typedef struct {
  // FB Interface - IN, OUT, IN_OUT variables
  __DECLARE_VAR(BOOL,EN)
  __DECLARE_VAR(BOOL,ENO)
  __DECLARE_VAR(INT,IDX)
  __DECLARE_VAR(BOOL,VOK)

  // FB private variables - TEMP, private and located variables

} SEMAV;

void SEMAV_init__(SEMAV *data__, BOOL retain);
// Code part
void SEMAV_body__(SEMAV *data__);
// FUNCTION_BLOCK IP_WRITE
// Data part
typedef struct {
  // FB Interface - IN, OUT, IN_OUT variables
  __DECLARE_VAR(BOOL,EN)
  __DECLARE_VAR(BOOL,ENO)
  __DECLARE_VAR(USINT,NODEID)
  __DECLARE_VAR(UDINT,POS)

  // FB private variables - TEMP, private and located variables

} IP_WRITE;

void IP_WRITE_init__(IP_WRITE *data__, BOOL retain);
// Code part
void IP_WRITE_body__(IP_WRITE *data__);
// FUNCTION_BLOCK HOLD_WRITE
// Data part
typedef struct {
  // FB Interface - IN, OUT, IN_OUT variables
  __DECLARE_VAR(BOOL,EN)
  __DECLARE_VAR(BOOL,ENO)
  __DECLARE_VAR(INT,MBADDR)
  __DECLARE_VAR(INT,INTPVALUE)

  // FB private variables - TEMP, private and located variables

} HOLD_WRITE;

void HOLD_WRITE_init__(HOLD_WRITE *data__, BOOL retain);
// Code part
void HOLD_WRITE_body__(HOLD_WRITE *data__);
// FUNCTION_BLOCK HOLD_READ
// Data part
typedef struct {
  // FB Interface - IN, OUT, IN_OUT variables
  __DECLARE_VAR(BOOL,EN)
  __DECLARE_VAR(BOOL,ENO)
  __DECLARE_VAR(INT,MBADDR)
  __DECLARE_VAR(INT,OUTI)

  // FB private variables - TEMP, private and located variables

} HOLD_READ;

void HOLD_READ_init__(HOLD_READ *data__, BOOL retain);
// Code part
void HOLD_READ_body__(HOLD_READ *data__);
// FUNCTION_BLOCK DBGSEMA
// Data part
typedef struct {
  // FB Interface - IN, OUT, IN_OUT variables
  __DECLARE_VAR(BOOL,EN)
  __DECLARE_VAR(BOOL,ENO)
  __DECLARE_VAR(INT,IDX)
  __DECLARE_VAR(BOOL,VAL)
  __DECLARE_VAR(ULINT,TICKP)
  __DECLARE_VAR(ULINT,TICKV)
  __DECLARE_VAR(INT,COUNT)

  // FB private variables - TEMP, private and located variables

} DBGSEMA;

void DBGSEMA_init__(DBGSEMA *data__, BOOL retain);
// Code part
void DBGSEMA_body__(DBGSEMA *data__);
// FUNCTION_BLOCK OD_READ
// Data part
typedef struct {
  // FB Interface - IN, OUT, IN_OUT variables
  __DECLARE_VAR(BOOL,EN)
  __DECLARE_VAR(BOOL,ENO)
  __DECLARE_VAR(UINT,INDEX)
  __DECLARE_VAR(USINT,SUBINDEX)
  __DECLARE_VAR(LREAL,OUTR)

  // FB private variables - TEMP, private and located variables

} OD_READ;

void OD_READ_init__(OD_READ *data__, BOOL retain);
// Code part
void OD_READ_body__(OD_READ *data__);
// FUNCTION_BLOCK RANDI100
// Data part
typedef struct {
  // FB Interface - IN, OUT, IN_OUT variables
  __DECLARE_VAR(BOOL,EN)
  __DECLARE_VAR(BOOL,ENO)
  __DECLARE_VAR(INT,RINT)

  // FB private variables - TEMP, private and located variables

} RANDI100;

void RANDI100_init__(RANDI100 *data__, BOOL retain);
// Code part
void RANDI100_body__(RANDI100 *data__);
// FUNCTION_BLOCK FLASH_READ
// Data part
typedef struct {
  // FB Interface - IN, OUT, IN_OUT variables
  __DECLARE_VAR(BOOL,EN)
  __DECLARE_VAR(BOOL,ENO)
  __DECLARE_VAR(INT,ADDR)
  __DECLARE_VAR(UINT,OUTU16)

  // FB private variables - TEMP, private and located variables

} FLASH_READ;

void FLASH_READ_init__(FLASH_READ *data__, BOOL retain);
// Code part
void FLASH_READ_body__(FLASH_READ *data__);
// FUNCTION_BLOCK U16_B16
// Data part
typedef struct {
  // FB Interface - IN, OUT, IN_OUT variables
  __DECLARE_VAR(BOOL,EN)
  __DECLARE_VAR(BOOL,ENO)
  __DECLARE_VAR(UINT,UI16)
  __DECLARE_VAR(BOOL,B0)
  __DECLARE_VAR(BOOL,B1)
  __DECLARE_VAR(BOOL,B2)
  __DECLARE_VAR(BOOL,B3)
  __DECLARE_VAR(BOOL,B4)
  __DECLARE_VAR(BOOL,B5)
  __DECLARE_VAR(BOOL,B6)
  __DECLARE_VAR(BOOL,B7)
  __DECLARE_VAR(BOOL,B8)
  __DECLARE_VAR(BOOL,B9)
  __DECLARE_VAR(BOOL,B10)
  __DECLARE_VAR(BOOL,B11)
  __DECLARE_VAR(BOOL,B12)
  __DECLARE_VAR(BOOL,B13)
  __DECLARE_VAR(BOOL,B14)
  __DECLARE_VAR(BOOL,B15)

  // FB private variables - TEMP, private and located variables

} U16_B16;

void U16_B16_init__(U16_B16 *data__, BOOL retain);
// Code part
void U16_B16_body__(U16_B16 *data__);
// FUNCTION_BLOCK READ_SDO2
// Data part
typedef struct {
  // FB Interface - IN, OUT, IN_OUT variables
  __DECLARE_VAR(BOOL,EN)
  __DECLARE_VAR(BOOL,ENO)
  __DECLARE_VAR(BOOL,EXECUTE)
  __DECLARE_VAR(UINT,NODEID)
  __DECLARE_VAR(UINT,INDEX)
  __DECLARE_VAR(UINT,SUBINDEX)
  __DECLARE_VAR(BOOL,RDOK)
  __DECLARE_VAR(BOOL,CANQUERY)

  // FB private variables - TEMP, private and located variables

} READ_SDO2;

void READ_SDO2_init__(READ_SDO2 *data__, BOOL retain);
// Code part
void READ_SDO2_body__(READ_SDO2 *data__);
// FUNCTION_BLOCK B16_U16
// Data part
typedef struct {
  // FB Interface - IN, OUT, IN_OUT variables
  __DECLARE_VAR(BOOL,EN)
  __DECLARE_VAR(BOOL,ENO)
  __DECLARE_VAR(BOOL,B0)
  __DECLARE_VAR(BOOL,B1)
  __DECLARE_VAR(BOOL,B2)
  __DECLARE_VAR(BOOL,B3)
  __DECLARE_VAR(BOOL,B4)
  __DECLARE_VAR(BOOL,B5)
  __DECLARE_VAR(BOOL,B6)
  __DECLARE_VAR(BOOL,B7)
  __DECLARE_VAR(BOOL,B8)
  __DECLARE_VAR(BOOL,B9)
  __DECLARE_VAR(BOOL,B10)
  __DECLARE_VAR(BOOL,B11)
  __DECLARE_VAR(BOOL,B12)
  __DECLARE_VAR(BOOL,B13)
  __DECLARE_VAR(BOOL,B14)
  __DECLARE_VAR(BOOL,B15)
  __DECLARE_VAR(UINT,U16)

  // FB private variables - TEMP, private and located variables

} B16_U16;

void B16_U16_init__(B16_U16 *data__, BOOL retain);
// Code part
void B16_U16_body__(B16_U16 *data__);
// FUNCTION_BLOCK SLEN
// Data part
typedef struct {
  // FB Interface - IN, OUT, IN_OUT variables
  __DECLARE_VAR(BOOL,EN)
  __DECLARE_VAR(BOOL,ENO)
  __DECLARE_VAR(STRING,INS)
  __DECLARE_VAR(INT,OUTI)

  // FB private variables - TEMP, private and located variables

} SLEN;

void SLEN_init__(SLEN *data__, BOOL retain);
// Code part
void SLEN_body__(SLEN *data__);
// FUNCTION_BLOCK FLASH_WRITE
// Data part
typedef struct {
  // FB Interface - IN, OUT, IN_OUT variables
  __DECLARE_VAR(BOOL,EN)
  __DECLARE_VAR(BOOL,ENO)
  __DECLARE_VAR(INT,ADDR)
  __DECLARE_VAR(UINT,IPTU16)

  // FB private variables - TEMP, private and located variables

} FLASH_WRITE;

void FLASH_WRITE_init__(FLASH_WRITE *data__, BOOL retain);
// Code part
void FLASH_WRITE_body__(FLASH_WRITE *data__);
// FUNCTION_BLOCK ULINT_TO_BCD2
// Data part
typedef struct {
  // FB Interface - IN, OUT, IN_OUT variables
  __DECLARE_VAR(BOOL,EN)
  __DECLARE_VAR(BOOL,ENO)
  __DECLARE_VAR(ULINT,INUL)
  __DECLARE_VAR(LWORD,OUTLW)

  // FB private variables - TEMP, private and located variables

} ULINT_TO_BCD2;

void ULINT_TO_BCD2_init__(ULINT_TO_BCD2 *data__, BOOL retain);
// Code part
void ULINT_TO_BCD2_body__(ULINT_TO_BCD2 *data__);
// FUNCTION_BLOCK IP_READ
// Data part
typedef struct {
  // FB Interface - IN, OUT, IN_OUT variables
  __DECLARE_VAR(BOOL,EN)
  __DECLARE_VAR(BOOL,ENO)
  __DECLARE_VAR(USINT,NODEID)
  __DECLARE_VAR(ULINT,POSU64)
  __DECLARE_VAR(UINT,STATUS)

  // FB private variables - TEMP, private and located variables

} IP_READ;

void IP_READ_init__(IP_READ *data__, BOOL retain);
// Code part
void IP_READ_body__(IP_READ *data__);
// FUNCTION_BLOCK SVRO_MODE
// Data part
typedef struct {
  // FB Interface - IN, OUT, IN_OUT variables
  __DECLARE_VAR(BOOL,EN)
  __DECLARE_VAR(BOOL,ENO)
  __DECLARE_VAR(USINT,AXISID)
  __DECLARE_VAR(USINT,TARGETMODE)
  __DECLARE_VAR(USINT,ACTUALMODE)

  // FB private variables - TEMP, private and located variables

} SVRO_MODE;

void SVRO_MODE_init__(SVRO_MODE *data__, BOOL retain);
// Code part
void SVRO_MODE_body__(SVRO_MODE *data__);
// FUNCTION_BLOCK FPGA_READ
// Data part
typedef struct {
  // FB Interface - IN, OUT, IN_OUT variables
  __DECLARE_VAR(BOOL,EN)
  __DECLARE_VAR(BOOL,ENO)
  __DECLARE_VAR(INT,VARADDR)
  __DECLARE_VAR(UINT,OUTU16)

  // FB private variables - TEMP, private and located variables

} FPGA_READ;

void FPGA_READ_init__(FPGA_READ *data__, BOOL retain);
// Code part
void FPGA_READ_body__(FPGA_READ *data__);
// FUNCTION_BLOCK BUF_READ
// Data part
typedef struct {
  // FB Interface - IN, OUT, IN_OUT variables
  __DECLARE_VAR(BOOL,EN)
  __DECLARE_VAR(BOOL,ENO)
  __DECLARE_VAR(INT,BUFTYPE)
  __DECLARE_VAR(INT,IDX)
  __DECLARE_VAR(UINT,OUTU16)

  // FB private variables - TEMP, private and located variables

} BUF_READ;

void BUF_READ_init__(BUF_READ *data__, BOOL retain);
// Code part
void BUF_READ_body__(BUF_READ *data__);
// FUNCTION_BLOCK IP_WRITE2
// Data part
typedef struct {
  // FB Interface - IN, OUT, IN_OUT variables
  __DECLARE_VAR(BOOL,EN)
  __DECLARE_VAR(BOOL,ENO)
  __DECLARE_VAR(USINT,NODEID)
  __DECLARE_VAR(UDINT,POS)
  __DECLARE_VAR(UINT,CONTROLWORD)

  // FB private variables - TEMP, private and located variables

} IP_WRITE2;

void IP_WRITE2_init__(IP_WRITE2 *data__, BOOL retain);
// Code part
void IP_WRITE2_body__(IP_WRITE2 *data__);
// FUNCTION_BLOCK RBUF_WRITE
// Data part
typedef struct {
  // FB Interface - IN, OUT, IN_OUT variables
  __DECLARE_VAR(BOOL,EN)
  __DECLARE_VAR(BOOL,ENO)
  __DECLARE_VAR(UDINT,VARADDR)
  __DECLARE_VAR(LREAL,INR)

  // FB private variables - TEMP, private and located variables

} RBUF_WRITE;

void RBUF_WRITE_init__(RBUF_WRITE *data__, BOOL retain);
// Code part
void RBUF_WRITE_body__(RBUF_WRITE *data__);
// FUNCTION_BLOCK GET_TICK
// Data part
typedef struct {
  // FB Interface - IN, OUT, IN_OUT variables
  __DECLARE_VAR(BOOL,EN)
  __DECLARE_VAR(BOOL,ENO)
  __DECLARE_VAR(ULINT,TICK)

  // FB private variables - TEMP, private and located variables

} GET_TICK;

void GET_TICK_init__(GET_TICK *data__, BOOL retain);
// Code part
void GET_TICK_body__(GET_TICK *data__);
// FUNCTION_BLOCK TORQUE_WRITE
// Data part
typedef struct {
  // FB Interface - IN, OUT, IN_OUT variables
  __DECLARE_VAR(BOOL,EN)
  __DECLARE_VAR(BOOL,ENO)
  __DECLARE_VAR(USINT,AXISID)
  __DECLARE_VAR(INT,TARGETTORQUE)
  __DECLARE_VAR(INT,TORQUEOFFSET)

  // FB private variables - TEMP, private and located variables

} TORQUE_WRITE;

void TORQUE_WRITE_init__(TORQUE_WRITE *data__, BOOL retain);
// Code part
void TORQUE_WRITE_body__(TORQUE_WRITE *data__);
// FUNCTION_BLOCK AXIS_INFO
// Data part
typedef struct {
  // FB Interface - IN, OUT, IN_OUT variables
  __DECLARE_VAR(BOOL,EN)
  __DECLARE_VAR(BOOL,ENO)
  __DECLARE_VAR(BOOL,ROW)
  __DECLARE_VAR(INT,NODEID)
  __DECLARE_VAR(STRING,PNAME)
  __DECLARE_VAR(BOOL,INB)
  __DECLARE_VAR(UDINT,INU32)
  __DECLARE_VAR(LREAL,INR)
  __DECLARE_VAR(STRING,INS)
  __DECLARE_VAR(BOOL,OUTB)
  __DECLARE_VAR(UDINT,OUTU32)
  __DECLARE_VAR(LREAL,OUTR)
  __DECLARE_VAR(STRING,OUTS)

  // FB private variables - TEMP, private and located variables
  __DECLARE_VAR(UDINT,AEO)
  __DECLARE_VAR(LREAL,MPP)
  __DECLARE_VAR(INT,ADTYPE)
  __DECLARE_VAR(LREAL,VMAX)
  __DECLARE_VAR(LREAL,AMAX)
  __DECLARE_VAR(LREAL,DMAX)
  __DECLARE_VAR(LREAL,JMAX)
  __DECLARE_VAR(LREAL,LMTL)
  __DECLARE_VAR(LREAL,LMTH)
  __DECLARE_VAR(LREAL,AMOD)
  __DECLARE_VAR(LREAL,FEEDRATE)
  __DECLARE_VAR(BOOL,VA)
  __DECLARE_VAR(BOOL,RA)
  __DECLARE_VAR(INT,ABORTFLAG)
  __DECLARE_VAR(BOOL,DONEFLAG)
  __DECLARE_VAR(BOOL,EXECUTEFLAG)
  __DECLARE_VAR(INT,COMMANDTYPE)
  __DECLARE_VAR(INT,STATE)
  __DECLARE_VAR(UDINT,P0POS)
  __DECLARE_VAR(UDINT,CURPOS)
  __DECLARE_VAR(LREAL,INTERP)
  __DECLARE_VAR(LREAL,INTERV)
  __DECLARE_VAR(LREAL,INTERA)
  __DECLARE_VAR(LREAL,INTERPC)
  __DECLARE_VAR(LREAL,INTERVC)
  __DECLARE_VAR(LREAL,INTERDP)
  __DECLARE_VAR(LREAL,PC)
  __DECLARE_VAR(LREAL,VC)
  __DECLARE_VAR(LREAL,RC)
  __DECLARE_VAR(INT,ERRORID)

} AXIS_INFO;

void AXIS_INFO_init__(AXIS_INFO *data__, BOOL retain);
// Code part
void AXIS_INFO_body__(AXIS_INFO *data__);
// FUNCTION_BLOCK READ_SDO
// Data part
typedef struct {
  // FB Interface - IN, OUT, IN_OUT variables
  __DECLARE_VAR(BOOL,EN)
  __DECLARE_VAR(BOOL,ENO)
  __DECLARE_VAR(BOOL,EXECUTE)
  __DECLARE_VAR(UINT,NODEID)
  __DECLARE_VAR(UINT,INDEX)
  __DECLARE_VAR(UINT,SUBINDEX)
  __DECLARE_VAR(BOOL,RDOK)
  __DECLARE_VAR(DWORD,VAL)
  __DECLARE_VAR(USINT,SIZE)

  // FB private variables - TEMP, private and located variables

} READ_SDO;

void READ_SDO_init__(READ_SDO *data__, BOOL retain);
// Code part
void READ_SDO_body__(READ_SDO *data__);
// FUNCTION_BLOCK AXIS_EXINFO
// Data part
typedef struct {
  // FB Interface - IN, OUT, IN_OUT variables
  __DECLARE_VAR(BOOL,EN)
  __DECLARE_VAR(BOOL,ENO)
  __DECLARE_VAR(BOOL,ROW)
  __DECLARE_VAR(INT,NODEID)
  __DECLARE_VAR(STRING,PNAME)
  __DECLARE_VAR(LREAL,INR)
  __DECLARE_VAR(LREAL,OUTR)

  // FB private variables - TEMP, private and located variables

} AXIS_EXINFO;

void AXIS_EXINFO_init__(AXIS_EXINFO *data__, BOOL retain);
// Code part
void AXIS_EXINFO_body__(AXIS_EXINFO *data__);
// FUNCTION_BLOCK BCD_TO_ULINT2
// Data part
typedef struct {
  // FB Interface - IN, OUT, IN_OUT variables
  __DECLARE_VAR(BOOL,EN)
  __DECLARE_VAR(BOOL,ENO)
  __DECLARE_VAR(LWORD,INLW)
  __DECLARE_VAR(ULINT,OUTUL)

  // FB private variables - TEMP, private and located variables

} BCD_TO_ULINT2;

void BCD_TO_ULINT2_init__(BCD_TO_ULINT2 *data__, BOOL retain);
// Code part
void BCD_TO_ULINT2_body__(BCD_TO_ULINT2 *data__);
// FUNCTION_BLOCK FLASH_LOADSAVE
// Data part
typedef struct {
  // FB Interface - IN, OUT, IN_OUT variables
  __DECLARE_VAR(BOOL,EN)
  __DECLARE_VAR(BOOL,ENO)
  __DECLARE_VAR(BOOL,SAVE)

  // FB private variables - TEMP, private and located variables

} FLASH_LOADSAVE;

void FLASH_LOADSAVE_init__(FLASH_LOADSAVE *data__, BOOL retain);
// Code part
void FLASH_LOADSAVE_body__(FLASH_LOADSAVE *data__);
// FUNCTION_BLOCK COIL_READ
// Data part
typedef struct {
  // FB Interface - IN, OUT, IN_OUT variables
  __DECLARE_VAR(BOOL,EN)
  __DECLARE_VAR(BOOL,ENO)
  __DECLARE_VAR(INT,MBADDR)
  __DECLARE_VAR(BOOL,OUTB)

  // FB private variables - TEMP, private and located variables

} COIL_READ;

void COIL_READ_init__(COIL_READ *data__, BOOL retain);
// Code part
void COIL_READ_body__(COIL_READ *data__);
// FUNCTION_BLOCK IPT_SHAPING
// Data part
typedef struct {
  // FB Interface - IN, OUT, IN_OUT variables
  __DECLARE_VAR(BOOL,EN)
  __DECLARE_VAR(BOOL,ENO)
  __DECLARE_VAR(INT,NODEID)
  __DECLARE_VAR(LREAL,INPC)
  __DECLARE_VAR(LREAL,INVC)
  __DECLARE_VAR(LREAL,OUTPC)
  __DECLARE_VAR(LREAL,OUTVC)

  // FB private variables - TEMP, private and located variables

} IPT_SHAPING;

void IPT_SHAPING_init__(IPT_SHAPING *data__, BOOL retain);
// Code part
void IPT_SHAPING_body__(IPT_SHAPING *data__);
// FUNCTION_BLOCK SFIND
// Data part
typedef struct {
  // FB Interface - IN, OUT, IN_OUT variables
  __DECLARE_VAR(BOOL,EN)
  __DECLARE_VAR(BOOL,ENO)
  __DECLARE_VAR(STRING,INS1)
  __DECLARE_VAR(STRING,INS2)
  __DECLARE_VAR(INT,OUTI)

  // FB private variables - TEMP, private and located variables

} SFIND;

void SFIND_init__(SFIND *data__, BOOL retain);
// Code part
void SFIND_body__(SFIND *data__);
// FUNCTION_BLOCK AEO_WRITE
// Data part
typedef struct {
  // FB Interface - IN, OUT, IN_OUT variables
  __DECLARE_VAR(BOOL,EN)
  __DECLARE_VAR(BOOL,ENO)
  __DECLARE_VAR(USINT,AXISID)
  __DECLARE_VAR(UDINT,AEO)

  // FB private variables - TEMP, private and located variables

} AEO_WRITE;

void AEO_WRITE_init__(AEO_WRITE *data__, BOOL retain);
// Code part
void AEO_WRITE_body__(AEO_WRITE *data__);
// FUNCTION_BLOCK RBUF_WRITE_U16
// Data part
typedef struct {
  // FB Interface - IN, OUT, IN_OUT variables
  __DECLARE_VAR(BOOL,EN)
  __DECLARE_VAR(BOOL,ENO)
  __DECLARE_VAR(UDINT,VARADDR)
  __DECLARE_VAR(UINT,INU161)
  __DECLARE_VAR(UINT,INU162)
  __DECLARE_VAR(UINT,INU163)
  __DECLARE_VAR(UINT,INU164)

  // FB private variables - TEMP, private and located variables

} RBUF_WRITE_U16;

void RBUF_WRITE_U16_init__(RBUF_WRITE_U16 *data__, BOOL retain);
// Code part
void RBUF_WRITE_U16_body__(RBUF_WRITE_U16 *data__);
// FUNCTION_BLOCK SET_CAM
// Data part
typedef struct {
  // FB Interface - IN, OUT, IN_OUT variables
  __DECLARE_VAR(BOOL,EN)
  __DECLARE_VAR(BOOL,ENO)
  __DECLARE_VAR(INT,TABLEID)
  __DECLARE_VAR(INT,IDX)
  __DECLARE_VAR(LREAL,VALUE)

  // FB private variables - TEMP, private and located variables

} SET_CAM;

void SET_CAM_init__(SET_CAM *data__, BOOL retain);
// Code part
void SET_CAM_body__(SET_CAM *data__);
// FUNCTION_BLOCK AEO_READ
// Data part
typedef struct {
  // FB Interface - IN, OUT, IN_OUT variables
  __DECLARE_VAR(BOOL,EN)
  __DECLARE_VAR(BOOL,ENO)
  __DECLARE_VAR(USINT,AXISID)
  __DECLARE_VAR(UDINT,AEO)

  // FB private variables - TEMP, private and located variables

} AEO_READ;

void AEO_READ_init__(AEO_READ *data__, BOOL retain);
// Code part
void AEO_READ_body__(AEO_READ *data__);
// FUNCTION_BLOCK NMTRESET
// Data part
typedef struct {
  // FB Interface - IN, OUT, IN_OUT variables
  __DECLARE_VAR(BOOL,EN)
  __DECLARE_VAR(BOOL,ENO)
  __DECLARE_VAR(BOOL,EXECUTE)

  // FB private variables - TEMP, private and located variables

} NMTRESET;

void NMTRESET_init__(NMTRESET *data__, BOOL retain);
// Code part
void NMTRESET_body__(NMTRESET *data__);
// FUNCTION_BLOCK _W_DEC
// Data part
typedef struct {
  // FB Interface - IN, OUT, IN_OUT variables
  __DECLARE_VAR(BOOL,EN)
  __DECLARE_VAR(BOOL,ENO)
  __DECLARE_VAR(INT,AXISID)
  __DECLARE_VAR(BOOL,DONEFLAG)
  __DECLARE_VAR(BOOL,EXECUTEFLAG)
  __DECLARE_VAR(INT,COMMANDTYPE)

  // FB private variables - TEMP, private and located variables
  AXIS_INFO AI;

} _W_DEC;

void _W_DEC_init__(_W_DEC *data__, BOOL retain);
// Code part
void _W_DEC_body__(_W_DEC *data__);
// FUNCTION_BLOCK _W_PVA
// Data part
typedef struct {
  // FB Interface - IN, OUT, IN_OUT variables
  __DECLARE_VAR(BOOL,EN)
  __DECLARE_VAR(BOOL,ENO)
  __DECLARE_VAR(INT,AXISID)
  __DECLARE_VAR(LREAL,POSITION)
  __DECLARE_VAR(LREAL,VELOCITY)
  __DECLARE_VAR(LREAL,ACCELERATION)

  // FB private variables - TEMP, private and located variables
  AXIS_INFO AI;

} _W_PVA;

void _W_PVA_init__(_W_PVA *data__, BOOL retain);
// Code part
void _W_PVA_body__(_W_PVA *data__);
// FUNCTION_BLOCK _SESSIONID
// Data part
typedef struct {
  // FB Interface - IN, OUT, IN_OUT variables
  __DECLARE_VAR(BOOL,EN)
  __DECLARE_VAR(BOOL,ENO)
  __DECLARE_VAR(BOOL,ROW)
  __DECLARE_VAR(INT,AXISID)
  __DECLARE_VAR(UDINT,FBD_ABORT_FLAG)

  // FB private variables - TEMP, private and located variables
  AXIS_INFO AI;

} _SESSIONID;

void _SESSIONID_init__(_SESSIONID *data__, BOOL retain);
// Code part
void _SESSIONID_body__(_SESSIONID *data__);
// FUNCTION_BLOCK _GETERRORID
// Data part
typedef struct {
  // FB Interface - IN, OUT, IN_OUT variables
  __DECLARE_VAR(BOOL,EN)
  __DECLARE_VAR(BOOL,ENO)
  __DECLARE_VAR(INT,AXISID)
  __DECLARE_VAR(INT,ERRORID)

  // FB private variables - TEMP, private and located variables
  IP_READ IPRD;
  __DECLARE_VAR(WORD,STS)
  AXIS_INFO AI;
  __DECLARE_VAR(LREAL,CPC)
  __DECLARE_VAR(LREAL,LP0)
  __DECLARE_VAR(LREAL,LP1)
  __DECLARE_VAR(INT,CS)
  __DECLARE_VAR(BOOL,ROTARY)
  __DECLARE_VAR(LREAL,TPC)

} _GETERRORID;

void _GETERRORID_init__(_GETERRORID *data__, BOOL retain);
// Code part
void _GETERRORID_body__(_GETERRORID *data__);
// FUNCTION_BLOCK _DIFF2
// Data part
typedef struct {
  // FB Interface - IN, OUT, IN_OUT variables
  __DECLARE_VAR(BOOL,EN)
  __DECLARE_VAR(BOOL,ENO)
  __DECLARE_VAR(LREAL,P1)
  __DECLARE_VAR(LREAL,P2)
  __DECLARE_VAR(BOOL,SAME)

  // FB private variables - TEMP, private and located variables

} _DIFF2;

void _DIFF2_init__(_DIFF2 *data__, BOOL retain);
// Code part
void _DIFF2_body__(_DIFF2 *data__);
// FUNCTION_BLOCK _VACLAMP
// Data part
typedef struct {
  // FB Interface - IN, OUT, IN_OUT variables
  __DECLARE_VAR(BOOL,EN)
  __DECLARE_VAR(BOOL,ENO)
  __DECLARE_VAR(INT,AXISID)
  __DECLARE_VAR(LREAL,VEL)
  __DECLARE_VAR(LREAL,ACC)
  __DECLARE_VAR(BOOL,DIR)
  __DECLARE_VAR(LREAL,VO)
  __DECLARE_VAR(LREAL,AO)

  // FB private variables - TEMP, private and located variables
  AXIS_INFO AI;
  _DIFF2 D2;

} _VACLAMP;

void _VACLAMP_init__(_VACLAMP *data__, BOOL retain);
// Code part
void _VACLAMP_body__(_VACLAMP *data__);
// FUNCTION_BLOCK MC_ABSOLUTE
// Data part
typedef struct {
  // FB Interface - IN, OUT, IN_OUT variables
  __DECLARE_VAR(BOOL,EN)
  __DECLARE_VAR(BOOL,ENO)
  __DECLARE_VAR(INT,AXISID)
  __DECLARE_VAR(BOOL,EXECUTE)
  __DECLARE_VAR(LREAL,POSITION)
  __DECLARE_VAR(LREAL,VELOCITY)
  __DECLARE_VAR(LREAL,ACCELERATION)
  __DECLARE_VAR(INT,AXIS)
  __DECLARE_VAR(BOOL,DONE)
  __DECLARE_VAR(BOOL,ABORTED)
  __DECLARE_VAR(BOOL,ERROR)
  __DECLARE_VAR(UDINT,CURLOCK)

  // FB private variables - TEMP, private and located variables
  _W_DEC WDEC;
  _W_PVA WPVA;
  __DECLARE_VAR(BOOL,ABORTBOOL)
  __DECLARE_VAR(BOOL,ERRORBOOL)
  __DECLARE_VAR(BOOL,DONEBOOL)
  __DECLARE_VAR(BOOL,MOVEBOOL)
  __DECLARE_VAR(UDINT,RECLOCK)
  _SESSIONID SID;
  _GETERRORID EID;
  __DECLARE_VAR(LREAL,CURPC)
  __DECLARE_VAR(BOOL,ISSAME)
  _DIFF2 D2;
  __DECLARE_VAR(INT,CLICK3)
  __DECLARE_VAR(BOOL,SESSIONOVER)
  __DECLARE_VAR(BOOL,ERRORNOTRESET)
  __DECLARE_VAR(INT,ERRID)
  __DECLARE_VAR(INT,CS)
  __DECLARE_VAR(UDINT,SCS)
  __DECLARE_VAR(BOOL,CANMOVE)
  __DECLARE_VAR(LREAL,AO)
  __DECLARE_VAR(LREAL,VO)
  _VACLAMP VCLAMP;
  AXIS_INFO AI;
  __DECLARE_VAR(LREAL,CURPOS)
  __DECLARE_VAR(LREAL,CURVEL)
  __DECLARE_VAR(LREAL,PRETARGET)
  __DECLARE_VAR(BOOL,CANSTART)
  __DECLARE_VAR(BOOL,VE0)
  __DECLARE_VAR(LREAL,CJ)
  R_TRIG RRTG;
  __DECLARE_VAR(BOOL,ER)
  __DECLARE_VAR(BOOL,WFED)
  __DECLARE_VAR(BOOL,TODEA)
  STEP __step_list[8];
  UINT __nb_steps;
  ACTION __action_list[44];
  UINT __nb_actions;
  __IEC_BOOL_t __transition_list[12];
  __IEC_BOOL_t __debug_transition_list[12];
  UINT __nb_transitions;
  TIME __lasttick_time;

} MC_ABSOLUTE;

void MC_ABSOLUTE_init__(MC_ABSOLUTE *data__, BOOL retain);
// Code part
void MC_ABSOLUTE_body__(MC_ABSOLUTE *data__);
// FUNCTION_BLOCK MC_STOP
// Data part
typedef struct {
  // FB Interface - IN, OUT, IN_OUT variables
  __DECLARE_VAR(BOOL,EN)
  __DECLARE_VAR(BOOL,ENO)
  __DECLARE_VAR(INT,AXISID)
  __DECLARE_VAR(BOOL,EXECUTE)
  __DECLARE_VAR(INT,AXIS)
  __DECLARE_VAR(BOOL,DONE)
  __DECLARE_VAR(BOOL,ERROR)

  // FB private variables - TEMP, private and located variables
  __DECLARE_VAR(INT,CS)
  __DECLARE_VAR(UDINT,CL)
  __DECLARE_VAR(LREAL,DECELERATION)
  _W_DEC WDEC;
  _W_PVA WPVA;
  __DECLARE_VAR(BOOL,DONEBOOL)
  __DECLARE_VAR(BOOL,MOVEBOOL)
  __DECLARE_VAR(UDINT,CURP)
  __DECLARE_VAR(UDINT,LASTP)
  __DECLARE_VAR(BOOL,ISSAME)
  _DIFF2 D2;
  _SESSIONID SID;
  __DECLARE_VAR(UDINT,CURLOCK)
  __DECLARE_VAR(UDINT,RECLOCK)
  __DECLARE_VAR(UDINT,SCS)
  __DECLARE_VAR(BOOL,BST)
  __DECLARE_VAR(BOOL,NES)
  AXIS_INFO AI;
  __DECLARE_VAR(BOOL,SESSIONOVER)
  R_TRIG RRTG;
  __DECLARE_VAR(BOOL,ER)
  STEP __step_list[5];
  UINT __nb_steps;
  ACTION __action_list[25];
  UINT __nb_actions;
  __IEC_BOOL_t __transition_list[5];
  __IEC_BOOL_t __debug_transition_list[5];
  UINT __nb_transitions;
  TIME __lasttick_time;

} MC_STOP;

void MC_STOP_init__(MC_STOP *data__, BOOL retain);
// Code part
void MC_STOP_body__(MC_STOP *data__);
// FUNCTION_BLOCK _PULSE_CALC
// Data part
typedef struct {
  // FB Interface - IN, OUT, IN_OUT variables
  __DECLARE_VAR(BOOL,EN)
  __DECLARE_VAR(BOOL,ENO)
  __DECLARE_VAR(LREAL,TARGETPOSITION)
  __DECLARE_VAR(LREAL,PULSEEQUIVALENT)
  __DECLARE_VAR(LREAL,PREPOSITION)
  __DECLARE_VAR(DINT,PULSENUMPERIOD)
  __DECLARE_VAR(DINT,PULSENUMALL)

  // FB private variables - TEMP, private and located variables
  __DECLARE_VAR(DINT,TEMP_P_TARGETALL)

} _PULSE_CALC;

void _PULSE_CALC_init__(_PULSE_CALC *data__, BOOL retain);
// Code part
void _PULSE_CALC_body__(_PULSE_CALC *data__);
// FUNCTION_BLOCK MC_RELATIVE
// Data part
typedef struct {
  // FB Interface - IN, OUT, IN_OUT variables
  __DECLARE_VAR(BOOL,EN)
  __DECLARE_VAR(BOOL,ENO)
  __DECLARE_VAR(INT,AXISID)
  __DECLARE_VAR(BOOL,EXECUTE)
  __DECLARE_VAR(LREAL,DISTANCE)
  __DECLARE_VAR(LREAL,VELOCITY)
  __DECLARE_VAR(LREAL,ACCELERATION)
  __DECLARE_VAR(INT,AXIS)
  __DECLARE_VAR(BOOL,DONE)
  __DECLARE_VAR(BOOL,ABORTED)
  __DECLARE_VAR(BOOL,ERROR)
  __DECLARE_VAR(UDINT,CURLOCK)

  // FB private variables - TEMP, private and located variables
  _W_DEC WDEC;
  _W_PVA WPVA;
  __DECLARE_VAR(BOOL,ABORTBOOL)
  __DECLARE_VAR(BOOL,DONEBOOL)
  __DECLARE_VAR(BOOL,MOVEBOOL)
  __DECLARE_VAR(UDINT,RECLOCK)
  _SESSIONID SID;
  __DECLARE_VAR(LREAL,CURPC)
  __DECLARE_VAR(BOOL,ISSAME)
  _DIFF2 D2;
  __DECLARE_VAR(INT,DONECNT)
  __DECLARE_VAR(BOOL,DONE3OKBOOL)
  __DECLARE_VAR(INT,CLICK3)
  __DECLARE_VAR(BOOL,SESSIONOVER)
  __DECLARE_VAR(BOOL,ERRORNOTRESET)
  __DECLARE_VAR(INT,ERRID)
  __DECLARE_VAR(INT,CS)
  __DECLARE_VAR(UDINT,SCS)
  __DECLARE_VAR(BOOL,CANMOVE)
  __DECLARE_VAR(LREAL,AO)
  __DECLARE_VAR(LREAL,VO)
  _VACLAMP VCLAMP;
  AXIS_INFO AI;
  __DECLARE_VAR(LREAL,CURPOS)
  __DECLARE_VAR(LREAL,CURVEL)
  __DECLARE_VAR(LREAL,PRETARGET)
  __DECLARE_VAR(BOOL,CANSTART)
  __DECLARE_VAR(BOOL,VE0)
  __DECLARE_VAR(LREAL,CJ)
  __DECLARE_VAR(LREAL,LASTPC)
  __DECLARE_VAR(LREAL,TOPC)
  __DECLARE_VAR(BOOL,ER)
  R_TRIG RRTG;
  __DECLARE_VAR(BOOL,WFED)
  __DECLARE_VAR(BOOL,TODEA)
  STEP __step_list[8];
  UINT __nb_steps;
  ACTION __action_list[40];
  UINT __nb_actions;
  __IEC_BOOL_t __transition_list[10];
  __IEC_BOOL_t __debug_transition_list[10];
  UINT __nb_transitions;
  TIME __lasttick_time;

} MC_RELATIVE;

void MC_RELATIVE_init__(MC_RELATIVE *data__, BOOL retain);
// Code part
void MC_RELATIVE_body__(MC_RELATIVE *data__);
// FUNCTION_BLOCK MC_CAMOUT
// Data part
typedef struct {
  // FB Interface - IN, OUT, IN_OUT variables
  __DECLARE_VAR(BOOL,EN)
  __DECLARE_VAR(BOOL,ENO)
  __DECLARE_VAR(INT,SLAVEID)
  __DECLARE_VAR(BOOL,EXECUTE)
  __DECLARE_VAR(INT,SLAVE)
  __DECLARE_VAR(BOOL,DONE)
  __DECLARE_VAR(BOOL,ERROR)

  // FB private variables - TEMP, private and located variables
  _W_DEC WDEC;
  _W_PVA WPVA;
  __DECLARE_VAR(INT,DONECNT)
  __DECLARE_VAR(BOOL,ABORTBOOL)
  __DECLARE_VAR(BOOL,SESSIONOVER)
  AXIS_INFO AI;
  __DECLARE_VAR(BOOL,BSS)
  __DECLARE_VAR(UDINT,CST)
  _SESSIONID SID;
  R_TRIG RRTG;
  __DECLARE_VAR(BOOL,ER)
  __DECLARE_VAR(UDINT,SCS)
  __DECLARE_VAR(UDINT,CURLOCK)
  __DECLARE_VAR(UDINT,RECLOCK)
  STEP __step_list[4];
  UINT __nb_steps;
  ACTION __action_list[12];
  UINT __nb_actions;
  __IEC_BOOL_t __transition_list[5];
  __IEC_BOOL_t __debug_transition_list[5];
  UINT __nb_transitions;
  TIME __lasttick_time;

} MC_CAMOUT;

void MC_CAMOUT_init__(MC_CAMOUT *data__, BOOL retain);
// Code part
void MC_CAMOUT_body__(MC_CAMOUT *data__);
// FUNCTION_BLOCK MC_POWER
// Data part
typedef struct {
  // FB Interface - IN, OUT, IN_OUT variables
  __DECLARE_VAR(BOOL,EN)
  __DECLARE_VAR(BOOL,ENO)
  __DECLARE_VAR(INT,AXISID)
  __DECLARE_VAR(BOOL,POWER)
  __DECLARE_VAR(INT,AXIS)
  __DECLARE_VAR(BOOL,DONE)
  __DECLARE_VAR(BOOL,ERROR)

  // FB private variables - TEMP, private and located variables
  _W_DEC WD;
  AXIS_INFO AI;
  STEP __step_list[2];
  UINT __nb_steps;
  ACTION __action_list[9];
  UINT __nb_actions;
  __IEC_BOOL_t __transition_list[2];
  __IEC_BOOL_t __debug_transition_list[2];
  UINT __nb_transitions;
  TIME __lasttick_time;

} MC_POWER;

void MC_POWER_init__(MC_POWER *data__, BOOL retain);
// Code part
void MC_POWER_body__(MC_POWER *data__);
// FUNCTION_BLOCK _RMOD
// Data part
typedef struct {
  // FB Interface - IN, OUT, IN_OUT variables
  __DECLARE_VAR(BOOL,EN)
  __DECLARE_VAR(BOOL,ENO)
  __DECLARE_VAR(LREAL,PC)
  __DECLARE_VAR(LREAL,MMM)
  __DECLARE_VAR(BOOL,DIR)
  __DECLARE_VAR(LREAL,OPC)
  __DECLARE_VAR(BOOL,CHANGED)

  // FB private variables - TEMP, private and located variables

} _RMOD;

void _RMOD_init__(_RMOD *data__, BOOL retain);
// Code part
void _RMOD_body__(_RMOD *data__);
// FUNCTION_BLOCK _INTER_WRITE
// Data part
typedef struct {
  // FB Interface - IN, OUT, IN_OUT variables
  __DECLARE_VAR(BOOL,EN)
  __DECLARE_VAR(BOOL,ENO)
  __DECLARE_VAR(INT,AXISID)
  __DECLARE_VAR(LREAL,INTERPC_IN)
  __DECLARE_VAR(LREAL,INTERVC_IN)

  // FB private variables - TEMP, private and located variables
  AXIS_INFO AI;
  __DECLARE_VAR(LREAL,MMOD)
  __DECLARE_VAR(LREAL,CPC)
  __DECLARE_VAR(LREAL,DP)
  __DECLARE_VAR(LREAL,LASTCPC)
  _RMOD RMD;
  __DECLARE_VAR(LREAL,MMM)
  __DECLARE_VAR(LREAL,MPP)
  __DECLARE_VAR(BOOL,GXPHASE)
  __DECLARE_VAR(BOOL,ROTARY)
  __DECLARE_VAR(LREAL,D2G)
  __DECLARE_VAR(LREAL,DA)
  __DECLARE_VAR(LREAL,D2GT)

} _INTER_WRITE;

void _INTER_WRITE_init__(_INTER_WRITE *data__, BOOL retain);
// Code part
void _INTER_WRITE_body__(_INTER_WRITE *data__);
// FUNCTION_BLOCK _IPBYSPOS
// Data part
typedef struct {
  // FB Interface - IN, OUT, IN_OUT variables
  __DECLARE_VAR(BOOL,EN)
  __DECLARE_VAR(BOOL,ENO)
  __DECLARE_VAR(INT,SLAVEID)
  __DECLARE_VAR(LREAL,SPOS)
  __DECLARE_VAR(BOOL,INVEL)

  // FB private variables - TEMP, private and located variables
  __DECLARE_VAR(LREAL,SPC)
  AXIS_INFO AI;
  __DECLARE_VAR(LREAL,MPP)
  _PULSE_CALC PULSECALC;
  __DECLARE_VAR(UDINT,POUT)
  IP_WRITE IPWRT;
  __DECLARE_VAR(LREAL,CURPOS)
  __DECLARE_VAR(LREAL,TS)
  SYS_CFG SC;
  __DECLARE_VAR(LREAL,AMX)
  _INTER_WRITE ITWRT;

} _IPBYSPOS;

void _IPBYSPOS_init__(_IPBYSPOS *data__, BOOL retain);
// Code part
void _IPBYSPOS_body__(_IPBYSPOS *data__);
// FUNCTION_BLOCK MC_COMBINE
// Data part
typedef struct {
  // FB Interface - IN, OUT, IN_OUT variables
  __DECLARE_VAR(BOOL,EN)
  __DECLARE_VAR(BOOL,ENO)
  __DECLARE_VAR(INT,MASTER1)
  __DECLARE_VAR(INT,MASTER2)
  __DECLARE_VAR(INT,SLAVE)
  __DECLARE_VAR(BOOL,EXECUTE)

  // FB private variables - TEMP, private and located variables
  AXIS_INFO AI;
  __DECLARE_VAR(UDINT,M1P)
  __DECLARE_VAR(UDINT,M2P)
  IP_WRITE IPWRT;
  _INTER_WRITE ITWRT;
  __DECLARE_VAR(LREAL,IP)
  __DECLARE_VAR(LREAL,IV)
  __DECLARE_VAR(LREAL,LTP1)
  __DECLARE_VAR(LREAL,LTP2)
  __DECLARE_VAR(LREAL,DELTA_M1)
  __DECLARE_VAR(LREAL,DELTA_M2)
  __DECLARE_VAR(LREAL,DELTA_S)
  __DECLARE_VAR(LREAL,SLAVE_PC)
  _IPBYSPOS IPW;
  _W_DEC WDEC;
  R_TRIG RT1;
  F_TRIG RF1;
  __DECLARE_VAR(BOOL,FLAG1)
  _INTER_WRITE IW;

} MC_COMBINE;

void MC_COMBINE_init__(MC_COMBINE *data__, BOOL retain);
// Code part
void MC_COMBINE_body__(MC_COMBINE *data__);
// FUNCTION_BLOCK _CP0POS
// Data part
typedef struct {
  // FB Interface - IN, OUT, IN_OUT variables
  __DECLARE_VAR(BOOL,EN)
  __DECLARE_VAR(BOOL,ENO)
  __DECLARE_VAR(INT,AXISID)
  __DECLARE_VAR(LREAL,LOGPOS0)
  __DECLARE_VAR(UDINT,P0IN)
  __DECLARE_VAR(LREAL,MPP)
  __DECLARE_VAR(UDINT,P0OUT)

  // FB private variables - TEMP, private and located variables
  _PULSE_CALC CPDIST;
  __DECLARE_VAR(DINT,DIST)

} _CP0POS;

void _CP0POS_init__(_CP0POS *data__, BOOL retain);
// Code part
void _CP0POS_body__(_CP0POS *data__);
// FUNCTION_BLOCK _INTER_READ
// Data part
typedef struct {
  // FB Interface - IN, OUT, IN_OUT variables
  __DECLARE_VAR(BOOL,EN)
  __DECLARE_VAR(BOOL,ENO)
  __DECLARE_VAR(INT,AXISID)
  __DECLARE_VAR(UDINT,ADTYPE)
  __DECLARE_VAR(LREAL,INTERP)
  __DECLARE_VAR(LREAL,INTERV)
  __DECLARE_VAR(LREAL,INTERA)
  __DECLARE_VAR(LREAL,INTERVC_OUT)
  __DECLARE_VAR(LREAL,INTERPC_OUT)
  __DECLARE_VAR(LREAL,MPP)
  __DECLARE_VAR(LREAL,FEEDRATE)
  __DECLARE_VAR(LREAL,DMAX)
  __DECLARE_VAR(LREAL,JMAX)
  __DECLARE_VAR(LREAL,JUMPV0)
  __DECLARE_VAR(LREAL,JUMPV1)

  // FB private variables - TEMP, private and located variables
  AXIS_INFO AI;

} _INTER_READ;

void _INTER_READ_init__(_INTER_READ *data__, BOOL retain);
// Code part
void _INTER_READ_body__(_INTER_READ *data__);
// FUNCTION_BLOCK _SVPLAN
// Data part
typedef struct {
  // FB Interface - IN, OUT, IN_OUT variables
  __DECLARE_VAR(BOOL,EN)
  __DECLARE_VAR(BOOL,ENO)
  __DECLARE_VAR(LREAL,TARGET)
  __DECLARE_VAR(LREAL,V)
  __DECLARE_VAR(LREAL,A)
  __DECLARE_VAR(LREAL,J)
  __DECLARE_VAR(LREAL,TS)
  __DECLARE_VAR(LREAL,POSI)
  __DECLARE_VAR(LREAL,VC)
  __DECLARE_VAR(LREAL,SI)
  __DECLARE_VAR(LREAL,VI)
  __DECLARE_VAR(LREAL,AI)
  __DECLARE_VAR(LREAL,JI)

  // FB private variables - TEMP, private and located variables
  __DECLARE_VAR(LREAL,POSO)
  __DECLARE_VAR(LREAL,VO)
  __DECLARE_VAR(LREAL,AR)
  __DECLARE_VAR(LREAL,PHASE)
  __DECLARE_VAR(LREAL,LAST_TARGET)
  __DECLARE_VAR(LREAL,DISTANCE)
  __DECLARE_VAR(LREAL,X)
  R_TRIG RT1;
  __DECLARE_VAR(BOOL,FIRST_FLAG)
  __DECLARE_VAR(BOOL,FIRST_OUT)

} _SVPLAN;

void _SVPLAN_init__(_SVPLAN *data__, BOOL retain);
// Code part
void _SVPLAN_body__(_SVPLAN *data__);
// FUNCTION_BLOCK _VPLAN
// Data part
typedef struct {
  // FB Interface - IN, OUT, IN_OUT variables
  __DECLARE_VAR(BOOL,EN)
  __DECLARE_VAR(BOOL,ENO)
  __DECLARE_VAR(UDINT,ADTYPE)
  __DECLARE_VAR(LREAL,TARGET)
  __DECLARE_VAR(LREAL,VM)
  __DECLARE_VAR(LREAL,AM)
  __DECLARE_VAR(LREAL,JM)
  __DECLARE_VAR(LREAL,TS)
  __DECLARE_VAR(LREAL,VC)
  __DECLARE_VAR(LREAL,POSI)
  __DECLARE_VAR(LREAL,RATE)
  __DECLARE_VAR(LREAL,V0)
  __DECLARE_VAR(LREAL,V1)
  __DECLARE_VAR(LREAL,POSO)
  __DECLARE_VAR(LREAL,VS)

  // FB private variables - TEMP, private and located variables
  __DECLARE_VAR(LREAL,D0)
  __DECLARE_VAR(LREAL,DD)
  __DECLARE_VAR(LREAL,NV)
  __DECLARE_VAR(LREAL,NA)
  __DECLARE_VAR(LREAL,TM)
  __DECLARE_VAR(LREAL,NAT)
  __DECLARE_VAR(LREAL,DLT)
  _SVPLAN SVP;
  __DECLARE_VAR(BOOL,VSOK)

} _VPLAN;

void _VPLAN_init__(_VPLAN *data__, BOOL retain);
// Code part
void _VPLAN_body__(_VPLAN *data__);
// FUNCTION_BLOCK _IPPOS
// Data part
typedef struct {
  // FB Interface - IN, OUT, IN_OUT variables
  __DECLARE_VAR(BOOL,EN)
  __DECLARE_VAR(BOOL,ENO)
  __DECLARE_VAR(INT,NODEID)

  // FB private variables - TEMP, private and located variables
  __DECLARE_VAR(LREAL,IS_PC)
  __DECLARE_VAR(LREAL,IS_VC)
  IP_WRITE INTER_W;
  __DECLARE_VAR(LREAL,CYCLE_TIME)
  __DECLARE_VAR(LREAL,IP_PC)
  __DECLARE_VAR(LREAL,IP_VC)
  SYS_CFG SC;
  AXIS_INFO AI;
  AXIS_INFO R_P;
  AXIS_INFO BLOCK3;
  _INTER_WRITE IRW;
  __DECLARE_VAR(LREAL,PR_PC)
  _PULSE_CALC PP;
  IPT_SHAPING ISP;
  _INTER_READ IR;
  _VPLAN VP;

} _IPPOS;

void _IPPOS_init__(_IPPOS *data__, BOOL retain);
// Code part
void _IPPOS_body__(_IPPOS *data__);
// FUNCTION_BLOCK MC_SETPOSITION
// Data part
typedef struct {
  // FB Interface - IN, OUT, IN_OUT variables
  __DECLARE_VAR(BOOL,EN)
  __DECLARE_VAR(BOOL,ENO)
  __DECLARE_VAR(INT,AXISID)
  __DECLARE_VAR(BOOL,EXECUTE)
  __DECLARE_VAR(LREAL,POSITION)
  __DECLARE_VAR(INT,AXIS)
  __DECLARE_VAR(BOOL,DONE)
  __DECLARE_VAR(BOOL,ERROR)

  // FB private variables - TEMP, private and located variables
  __DECLARE_VAR(INT,CS)
  __DECLARE_VAR(BOOL,DONEBOOL)
  AXIS_INFO AI;
  __DECLARE_VAR(LREAL,CURPC)
  __DECLARE_VAR(BOOL,DONE3OKBOOL)
  __DECLARE_VAR(INT,CLICK3)
  __DECLARE_VAR(BOOL,SESSIONOVER)
  __DECLARE_VAR(UDINT,CURPOS)
  _CP0POS CP0;
  __DECLARE_VAR(BOOL,P0OK)
  __DECLARE_VAR(ULINT,VU32)
  __DECLARE_VAR(LREAL,MPP)
  __DECLARE_VAR(LREAL,MMOD)
  _RMOD RMD;
  R_TRIG RRTG;
  __DECLARE_VAR(BOOL,ER)
  __DECLARE_VAR(UDINT,SCS)
  STEP __step_list[3];
  UINT __nb_steps;
  ACTION __action_list[21];
  UINT __nb_actions;
  __IEC_BOOL_t __transition_list[3];
  __IEC_BOOL_t __debug_transition_list[3];
  UINT __nb_transitions;
  TIME __lasttick_time;

} MC_SETPOSITION;

void MC_SETPOSITION_init__(MC_SETPOSITION *data__, BOOL retain);
// Code part
void MC_SETPOSITION_body__(MC_SETPOSITION *data__);
// FUNCTION_BLOCK _READ_CAM
// Data part
typedef struct {
  // FB Interface - IN, OUT, IN_OUT variables
  __DECLARE_VAR(BOOL,EN)
  __DECLARE_VAR(BOOL,ENO)
  __DECLARE_VAR(UINT,TABLEID)
  __DECLARE_VAR(LREAL,MPOS)
  __DECLARE_VAR(BOOL,MP01)
  __DECLARE_VAR(LREAL,SPOS)

  // FB private variables - TEMP, private and located variables
  __DECLARE_VAR(INT,IDX)
  __DECLARE_VAR(LREAL,XS)
  GET_CAM ODR;
  __DECLARE_VAR(INT,BGN)
  __DECLARE_VAR(INT,END)
  __DECLARE_VAR(LREAL,MOFST)
  __DECLARE_VAR(LREAL,SBGN)
  __DECLARE_VAR(LREAL,SEND)
  SYS_CFG SYSCFG;
  __DECLARE_VAR(LREAL,CTIME)

} _READ_CAM;

void _READ_CAM_init__(_READ_CAM *data__, BOOL retain);
// Code part
void _READ_CAM_body__(_READ_CAM *data__);
// FUNCTION_BLOCK MC_CAMIN
// Data part
typedef struct {
  // FB Interface - IN, OUT, IN_OUT variables
  __DECLARE_VAR(BOOL,EN)
  __DECLARE_VAR(BOOL,ENO)
  __DECLARE_VAR(INT,MASTERID)
  __DECLARE_VAR(INT,SLAVEID)
  __DECLARE_VAR(BOOL,EXECUTE)
  __DECLARE_VAR(UINT,TABLEID)
  __DECLARE_VAR(INT,MASTER)
  __DECLARE_VAR(INT,SLAVE)
  __DECLARE_VAR(BOOL,INSYNC)
  __DECLARE_VAR(BOOL,ABORTED)
  __DECLARE_VAR(BOOL,ERROR)

  // FB private variables - TEMP, private and located variables
  _W_DEC WDEC;
  _W_PVA WPVA;
  __DECLARE_VAR(BOOL,ABORTBOOL)
  __DECLARE_VAR(BOOL,DONEBOOL)
  __DECLARE_VAR(BOOL,MOVEBOOL)
  __DECLARE_VAR(UDINT,CURLOCK)
  __DECLARE_VAR(UDINT,RECLOCK)
  _SESSIONID SID;
  AXIS_INFO AI;
  __DECLARE_VAR(LREAL,CURPC)
  __DECLARE_VAR(LREAL,CMDPC)
  __DECLARE_VAR(LREAL,AMODPC)
  __DECLARE_VAR(LREAL,TOPC)
  __DECLARE_VAR(BOOL,ISSAME)
  _DIFF2 D2;
  __DECLARE_VAR(INT,DONECNT)
  __DECLARE_VAR(BOOL,DONE3OKBOOL)
  __DECLARE_VAR(BOOL,SESSIONOVER)
  __DECLARE_VAR(INT,ERRID)
  __DECLARE_VAR(INT,CS)
  __DECLARE_VAR(BOOL,BSS)
  __DECLARE_VAR(LREAL,MPOS)
  __DECLARE_VAR(LREAL,SPOS)
  _READ_CAM RDCAM;
  __DECLARE_VAR(LREAL,ALLSPOS)
  __DECLARE_VAR(LREAL,MMOD)
  _IPBYSPOS IPW;
  R_TRIG RRTG;
  __DECLARE_VAR(BOOL,ER)
  __DECLARE_VAR(UDINT,SCS)
  STEP __step_list[4];
  UINT __nb_steps;
  ACTION __action_list[9];
  UINT __nb_actions;
  __IEC_BOOL_t __transition_list[4];
  __IEC_BOOL_t __debug_transition_list[4];
  UINT __nb_transitions;
  TIME __lasttick_time;

} MC_CAMIN;

void MC_CAMIN_init__(MC_CAMIN *data__, BOOL retain);
// Code part
void MC_CAMIN_body__(MC_CAMIN *data__);
// FUNCTION_BLOCK _SSFC
// Data part
typedef struct {
  // FB Interface - IN, OUT, IN_OUT variables
  __DECLARE_VAR(BOOL,EN)
  __DECLARE_VAR(BOOL,ENO)
  __DECLARE_VAR(INT,AXISID)
  __DECLARE_VAR(INT,CS)
  __DECLARE_VAR(BOOL,DONEFLAG)
  __DECLARE_VAR(BOOL,EXECUTEFLAG)
  __DECLARE_VAR(INT,COMMANDTYPE)

  // FB private variables - TEMP, private and located variables
  _IPPOS IPP;
  IP_WRITE IPW;
  IP_READ IPR;
  __DECLARE_VAR(BOOL,GTHM)
  __DECLARE_VAR(BOOL,GTST)
  __DECLARE_VAR(BOOL,GTES)
  __DECLARE_VAR(BOOL,GTD)
  __DECLARE_VAR(BOOL,GTCM)
  __DECLARE_VAR(BOOL,GTDM)
  __DECLARE_VAR(BOOL,GTSM)
  __DECLARE_VAR(BOOL,GTSS)
  __DECLARE_VAR(BOOL,CONTINUOUS_TO_DISCRETE)
  __DECLARE_VAR(BOOL,CONTINUOUS_TO_STOP)
  __DECLARE_VAR(BOOL,STOP_TO_STANDSTILL)
  __DECLARE_VAR(BOOL,HOMING_TO_STANDSTILL)
  __DECLARE_VAR(BOOL,HOMING_TO_STOP)
  __DECLARE_VAR(UDINT,ERID)
  _SESSIONID STLK;
  __DECLARE_VAR(LREAL,MPP)
  __DECLARE_VAR(LREAL,CURPC)
  AXIS_INFO AI;
  __DECLARE_VAR(UDINT,UDP1)
  __DECLARE_VAR(UDINT,UDP2)
  _DIFF2 D2;
  STEP __step_list[8];
  UINT __nb_steps;
  ACTION __action_list[45];
  UINT __nb_actions;
  __IEC_BOOL_t __transition_list[28];
  __IEC_BOOL_t __debug_transition_list[28];
  UINT __nb_transitions;
  TIME __lasttick_time;

} _SSFC;

void _SSFC_init__(_SSFC *data__, BOOL retain);
// Code part
void _SSFC_body__(_SSFC *data__);
// FUNCTION_BLOCK _P2R
// Data part
typedef struct {
  // FB Interface - IN, OUT, IN_OUT variables
  __DECLARE_VAR(BOOL,EN)
  __DECLARE_VAR(BOOL,ENO)
  __DECLARE_VAR(LREAL,TARGETPOSITION)
  __DECLARE_VAR(LREAL,PULSEEQUIVALENT)
  __DECLARE_VAR(DINT,PULSENUMPERIOD)
  __DECLARE_VAR(LREAL,CURRENTPOS)

  // FB private variables - TEMP, private and located variables

} _P2R;

void _P2R_init__(_P2R *data__, BOOL retain);
// Code part
void _P2R_body__(_P2R *data__);
// FUNCTION_BLOCK MC_INIT
// Data part
typedef struct {
  // FB Interface - IN, OUT, IN_OUT variables
  __DECLARE_VAR(BOOL,EN)
  __DECLARE_VAR(BOOL,ENO)
  __DECLARE_VAR(INT,AXISID)
  __DECLARE_VAR(BOOL,VIRTUALAXIS)
  __DECLARE_VAR(BOOL,ROTARYAXIS)
  __DECLARE_VAR(UDINT,ENCODERINPUT)
  __DECLARE_VAR(INT,AXIS)
  __DECLARE_VAR(BOOL,DONE)

  // FB private variables - TEMP, private and located variables
  _SSFC SFC;
  AXIS_INFO AI;
  __DECLARE_VAR(BOOL,DB)
  __DECLARE_VAR(BOOL,EB)
  __DECLARE_VAR(INT,CT)
  _P2R P2R;
  __DECLARE_VAR(LREAL,CPC)
  __DECLARE_VAR(UDINT,CPOS)
  __DECLARE_VAR(LREAL,MPP)
  __DECLARE_VAR(DINT,PPC)
  __DECLARE_VAR(LINT,PPCL)
  _INTER_WRITE IW;

} MC_INIT;

void MC_INIT_init__(MC_INIT *data__, BOOL retain);
// Code part
void MC_INIT_body__(MC_INIT *data__);
// FUNCTION_BLOCK MC_RESET
// Data part
typedef struct {
  // FB Interface - IN, OUT, IN_OUT variables
  __DECLARE_VAR(BOOL,EN)
  __DECLARE_VAR(BOOL,ENO)
  __DECLARE_VAR(INT,AXISID)
  __DECLARE_VAR(BOOL,EXECUTE)
  __DECLARE_VAR(INT,AXIS)
  __DECLARE_VAR(BOOL,DONE)
  __DECLARE_VAR(BOOL,ERROR)

  // FB private variables - TEMP, private and located variables
  AXIS_INFO AI;
  _W_DEC WDEC;
  __DECLARE_VAR(BOOL,DONEBOOL)
  __DECLARE_VAR(BOOL,MOVEBOOL)
  _GETERRORID GETERR;
  __DECLARE_VAR(INT,ERID)
  __DECLARE_VAR(BOOL,BES)
  _DIFF2 D2;
  __DECLARE_VAR(UDINT,SCS)
  __DECLARE_VAR(LREAL,CURPOS)
  __DECLARE_VAR(BOOL,ABORTBOOL)
  __DECLARE_VAR(LREAL,CPC)
  __DECLARE_VAR(LREAL,IPC)
  __DECLARE_VAR(LREAL,RSTVEL)
  __DECLARE_VAR(BOOL,TODEA)
  R_TRIG RRTG;
  __DECLARE_VAR(BOOL,ER)
  STEP __step_list[5];
  UINT __nb_steps;
  ACTION __action_list[16];
  UINT __nb_actions;
  __IEC_BOOL_t __transition_list[6];
  __IEC_BOOL_t __debug_transition_list[6];
  UINT __nb_transitions;
  TIME __lasttick_time;

} MC_RESET;

void MC_RESET_init__(MC_RESET *data__, BOOL retain);
// Code part
void MC_RESET_body__(MC_RESET *data__);
// FUNCTION_BLOCK MC_GEAROUT
// Data part
typedef struct {
  // FB Interface - IN, OUT, IN_OUT variables
  __DECLARE_VAR(BOOL,EN)
  __DECLARE_VAR(BOOL,ENO)
  __DECLARE_VAR(INT,SLAVEID)
  __DECLARE_VAR(BOOL,EXECUTE)
  __DECLARE_VAR(INT,SLAVE)
  __DECLARE_VAR(BOOL,DONE)
  __DECLARE_VAR(BOOL,ERROR)

  // FB private variables - TEMP, private and located variables
  _W_DEC WDEC;
  _W_PVA WPVA;
  __DECLARE_VAR(BOOL,ABORTBOOL)
  __DECLARE_VAR(BOOL,SESSIONOVER)
  AXIS_INFO AI;
  __DECLARE_VAR(BOOL,BSS)
  __DECLARE_VAR(UDINT,CST)
  _SESSIONID SID;
  R_TRIG RRTG;
  __DECLARE_VAR(BOOL,ER)
  __DECLARE_VAR(UDINT,SCS)
  __DECLARE_VAR(UDINT,RECLOCK)
  __DECLARE_VAR(UDINT,CURLOCK)
  STEP __step_list[4];
  UINT __nb_steps;
  ACTION __action_list[12];
  UINT __nb_actions;
  __IEC_BOOL_t __transition_list[5];
  __IEC_BOOL_t __debug_transition_list[5];
  UINT __nb_transitions;
  TIME __lasttick_time;

} MC_GEAROUT;

void MC_GEAROUT_init__(MC_GEAROUT *data__, BOOL retain);
// Code part
void MC_GEAROUT_body__(MC_GEAROUT *data__);
// FUNCTION_BLOCK MC_HALT
// Data part
typedef struct {
  // FB Interface - IN, OUT, IN_OUT variables
  __DECLARE_VAR(BOOL,EN)
  __DECLARE_VAR(BOOL,ENO)
  __DECLARE_VAR(INT,AXISID)
  __DECLARE_VAR(BOOL,EXECUTE)
  __DECLARE_VAR(INT,AXIS)
  __DECLARE_VAR(BOOL,DONE)
  __DECLARE_VAR(BOOL,ERROR)

  // FB private variables - TEMP, private and located variables
  __DECLARE_VAR(BOOL,ABORTED)
  __DECLARE_VAR(LREAL,DECELERATION)
  _W_DEC WDEC;
  _W_PVA WPVA;
  __DECLARE_VAR(BOOL,DONEBOOL)
  __DECLARE_VAR(BOOL,MOVEBOOL)
  __DECLARE_VAR(BOOL,ABORTBOOL)
  AXIS_INFO AI;
  __DECLARE_VAR(BOOL,ISSAME)
  _DIFF2 D2;
  __DECLARE_VAR(UDINT,CURLOCK)
  __DECLARE_VAR(INT,CS)
  _SESSIONID SID;
  __DECLARE_VAR(UDINT,RECLOCK)
  __DECLARE_VAR(LREAL,CURPC)
  __DECLARE_VAR(LREAL,LASTPC)
  __DECLARE_VAR(BOOL,CANMOVE)
  __DECLARE_VAR(BOOL,SESSIONOVER)
  __DECLARE_VAR(INT,CLICK3)
  R_TRIG RRTG;
  __DECLARE_VAR(BOOL,ER)
  __DECLARE_VAR(UDINT,SCS)
  STEP __step_list[6];
  UINT __nb_steps;
  ACTION __action_list[26];
  UINT __nb_actions;
  __IEC_BOOL_t __transition_list[7];
  __IEC_BOOL_t __debug_transition_list[7];
  UINT __nb_transitions;
  TIME __lasttick_time;

} MC_HALT;

void MC_HALT_init__(MC_HALT *data__, BOOL retain);
// Code part
void MC_HALT_body__(MC_HALT *data__);
// FUNCTION_BLOCK MC_HOME
// Data part
typedef struct {
  // FB Interface - IN, OUT, IN_OUT variables
  __DECLARE_VAR(BOOL,EN)
  __DECLARE_VAR(BOOL,ENO)
  __DECLARE_VAR(INT,AXISID)
  __DECLARE_VAR(BOOL,EXECUTE)
  __DECLARE_VAR(LREAL,POSITION)
  __DECLARE_VAR(LREAL,VELSWITCH)
  __DECLARE_VAR(BOOL,SWITCH)
  __DECLARE_VAR(INT,AXIS)
  __DECLARE_VAR(BOOL,DONE)
  __DECLARE_VAR(BOOL,ABORTED)
  __DECLARE_VAR(BOOL,ERROR)

  // FB private variables - TEMP, private and located variables
  __DECLARE_VAR(LREAL,VELZPLUS)
  __DECLARE_VAR(BOOL,ZPLUS)
  _W_DEC WDEC;
  _W_PVA WPVA;
  __DECLARE_VAR(BOOL,ABORTBOOL)
  __DECLARE_VAR(BOOL,DONEBOOL)
  __DECLARE_VAR(BOOL,MOVEBOOL)
  __DECLARE_VAR(UDINT,CURLOCK)
  __DECLARE_VAR(UDINT,RECLOCK)
  _SESSIONID SID;
  AXIS_INFO AI;
  _VACLAMP VCLAMP;
  __DECLARE_VAR(INT,CLICK3)
  __DECLARE_VAR(BOOL,SESSIONOVER)
  __DECLARE_VAR(UDINT,CURPOS)
  _CP0POS CP0;
  __DECLARE_VAR(BOOL,P0OK)
  __DECLARE_VAR(LREAL,VO)
  __DECLARE_VAR(LREAL,VPC)
  __DECLARE_VAR(UDINT,SCS)
  __DECLARE_VAR(BOOL,BSS)
  __DECLARE_VAR(INT,CS)
  __DECLARE_VAR(LREAL,AO)
  __DECLARE_VAR(LREAL,TPNULL)
  __DECLARE_VAR(BOOL,VE0)
  __DECLARE_VAR(LREAL,CURVEL)
  __DECLARE_VAR(LREAL,MPP)
  __DECLARE_VAR(UDINT,P0P)
  F_TRIG FTG;
  __DECLARE_VAR(BOOL,SWITCHFE)
  R_TRIG RRTG;
  __DECLARE_VAR(BOOL,ER)
  _DIFF2 D2;
  __DECLARE_VAR(BOOL,ISSAME)
  STEP __step_list[14];
  UINT __nb_steps;
  ACTION __action_list[48];
  UINT __nb_actions;
  __IEC_BOOL_t __transition_list[18];
  __IEC_BOOL_t __debug_transition_list[18];
  UINT __nb_transitions;
  TIME __lasttick_time;

} MC_HOME;

void MC_HOME_init__(MC_HOME *data__, BOOL retain);
// Code part
void MC_HOME_body__(MC_HOME *data__);
// FUNCTION_BLOCK MC_VELOCITY
// Data part
typedef struct {
  // FB Interface - IN, OUT, IN_OUT variables
  __DECLARE_VAR(BOOL,EN)
  __DECLARE_VAR(BOOL,ENO)
  __DECLARE_VAR(INT,AXISID)
  __DECLARE_VAR(BOOL,EXECUTE)
  __DECLARE_VAR(LREAL,VELOCITY)
  __DECLARE_VAR(LREAL,ACCELERATION)
  __DECLARE_VAR(INT,AXIS)
  __DECLARE_VAR(BOOL,INVEL)
  __DECLARE_VAR(BOOL,ABORTED)
  __DECLARE_VAR(BOOL,ERROR)

  // FB private variables - TEMP, private and located variables
  __DECLARE_VAR(INT,CS)
  _W_DEC WDEC;
  _W_PVA WPVA;
  __DECLARE_VAR(BOOL,INVELBOOL)
  __DECLARE_VAR(BOOL,MOVEBOOL)
  __DECLARE_VAR(BOOL,ABORTBOOL)
  AXIS_INFO AI;
  __DECLARE_VAR(BOOL,ISSAME)
  _DIFF2 D2;
  __DECLARE_VAR(UDINT,CURLOCK)
  __DECLARE_VAR(UDINT,SCS)
  _SESSIONID SID;
  __DECLARE_VAR(UDINT,RECLOCK)
  __DECLARE_VAR(LREAL,CURVC)
  __DECLARE_VAR(LREAL,LASTVC)
  __DECLARE_VAR(BOOL,CANMOVE)
  __DECLARE_VAR(LREAL,VO)
  __DECLARE_VAR(LREAL,AO)
  __DECLARE_VAR(LREAL,TOPC)
  _VACLAMP VCLAMP;
  __DECLARE_VAR(LREAL,CJ)
  __DECLARE_VAR(BOOL,CANSTART)
  __DECLARE_VAR(BOOL,VE0)
  __DECLARE_VAR(BOOL,ER)
  R_TRIG RRTG;
  __DECLARE_VAR(INT,CLICK3)
  __DECLARE_VAR(BOOL,SESSIONOVER)
  __DECLARE_VAR(LREAL,DIR)
  __DECLARE_VAR(BOOL,WFED)
  __DECLARE_VAR(BOOL,TODEA)
  STEP __step_list[6];
  UINT __nb_steps;
  ACTION __action_list[30];
  UINT __nb_actions;
  __IEC_BOOL_t __transition_list[8];
  __IEC_BOOL_t __debug_transition_list[8];
  UINT __nb_transitions;
  TIME __lasttick_time;

} MC_VELOCITY;

void MC_VELOCITY_init__(MC_VELOCITY *data__, BOOL retain);
// Code part
void MC_VELOCITY_body__(MC_VELOCITY *data__);
// FUNCTION_BLOCK MC_GEARIN
// Data part
typedef struct {
  // FB Interface - IN, OUT, IN_OUT variables
  __DECLARE_VAR(BOOL,EN)
  __DECLARE_VAR(BOOL,ENO)
  __DECLARE_VAR(INT,MASTERID)
  __DECLARE_VAR(INT,SLAVEID)
  __DECLARE_VAR(BOOL,EXECUTE)
  __DECLARE_VAR(LREAL,RATNUMERATOR)
  __DECLARE_VAR(LREAL,RATDENOMINATOR)
  __DECLARE_VAR(INT,MASTER)
  __DECLARE_VAR(INT,SLAVE)
  __DECLARE_VAR(BOOL,INGEAR)
  __DECLARE_VAR(BOOL,ABORTED)
  __DECLARE_VAR(BOOL,ERROR)

  // FB private variables - TEMP, private and located variables
  _W_DEC WDEC;
  _W_PVA WPVA;
  __DECLARE_VAR(BOOL,ABORTBOOL)
  __DECLARE_VAR(BOOL,DONEBOOL)
  __DECLARE_VAR(BOOL,MOVEBOOL)
  AXIS_INFO AI;
  __DECLARE_VAR(INT,DONECNT)
  __DECLARE_VAR(BOOL,DONE3OKBOOL)
  __DECLARE_VAR(INT,CLICK3)
  __DECLARE_VAR(BOOL,SESSIONOVER)
  __DECLARE_VAR(BOOL,ERRORNOTRESET)
  __DECLARE_VAR(LREAL,SPOS)
  __DECLARE_VAR(LREAL,SDELTA)
  __DECLARE_VAR(LREAL,ALLSPOS)
  __DECLARE_VAR(LREAL,MDELTA)
  _INTER_WRITE IW;
  _IPBYSPOS IPW;
  __DECLARE_VAR(LREAL,RATIO)
  _SESSIONID SID;
  __DECLARE_VAR(UDINT,CURLOCK)
  __DECLARE_VAR(UDINT,RECLOCK)
  R_TRIG RRTG;
  __DECLARE_VAR(BOOL,ER)
  __DECLARE_VAR(UDINT,SCS)
  STEP __step_list[4];
  UINT __nb_steps;
  ACTION __action_list[9];
  UINT __nb_actions;
  __IEC_BOOL_t __transition_list[4];
  __IEC_BOOL_t __debug_transition_list[4];
  UINT __nb_transitions;
  TIME __lasttick_time;

} MC_GEARIN;

void MC_GEARIN_init__(MC_GEARIN *data__, BOOL retain);
// Code part
void MC_GEARIN_body__(MC_GEARIN *data__);
// FUNCTION_BLOCK DS402SERVOINIT
// Data part
typedef struct {
  // FB Interface - IN, OUT, IN_OUT variables
  __DECLARE_VAR(BOOL,EN)
  __DECLARE_VAR(BOOL,ENO)
  __DECLARE_VAR(INT,AXISID)
  __DECLARE_VAR(USINT,TARGETMODE)
  __DECLARE_VAR(BOOL,ENABLEORNOT)
  __DECLARE_VAR(BOOL,DONE)
  __DECLARE_VAR(USINT,ACTUALMODE)
  __DECLARE_VAR(UINT,STATUS)

  // FB private variables - TEMP, private and located variables
  TON BLOCK1;
  TON BLOCK3;
  SVRO_CONTROL SSC;
  MC_RESET MMR;
  U16_B16 JJK;
  IP_READ2 IIR;
  B16_U16 KKL;
  __DECLARE_VAR(BOOL,ENA)
  SVRO_MODE SVR_AXIS_MODE;
  __DECLARE_VAR(BOOL,RST)
  SVRO_CLEARFAULT CSA;
  R_TRIG RTG;
  SR SSF;
  AXIS_INFO STATE;
  R_TRIG RGG;
  _SESSIONID SID;
  __DECLARE_VAR(USINT,INT_TO_USINT122_OUT)
  __DECLARE_VAR(USINT,INT_TO_USINT7_OUT)
  __DECLARE_VAR(BOOL,GT115_OUT)
  __DECLARE_VAR(USINT,INT_TO_USINT117_OUT)
  __DECLARE_VAR(BOOL,AND281_OUT)
  __DECLARE_VAR(BOOL,EQ275_OUT)

} DS402SERVOINIT;

void DS402SERVOINIT_init__(DS402SERVOINIT *data__, BOOL retain);
// Code part
void DS402SERVOINIT_body__(DS402SERVOINIT *data__);
// FUNCTION_BLOCK PPIINFO
// Data part
typedef struct {
  // FB Interface - IN, OUT, IN_OUT variables
  __DECLARE_VAR(BOOL,EN)
  __DECLARE_VAR(BOOL,ENO)
  __DECLARE_VAR(INT,AXIS)

  // FB private variables - TEMP, private and located variables
  AXIS_INFO CURPOS;
  __DECLARE_VAR(LREAL,ITPC)
  __DECLARE_VAR(LREAL,ITP)
  __DECLARE_VAR(LREAL,ITVC)
  __DECLARE_VAR(LREAL,ITV)
  __DECLARE_VAR(LREAL,ITA)
  __DECLARE_VAR(UDINT,PPC)
  AXIS_INFO INTERP;
  AXIS_INFO INTERPC;
  AXIS_INFO INTERV;
  AXIS_INFO INTERVC;
  AXIS_INFO INTERDP;
  AXIS_INFO P0POS;
  __DECLARE_VAR(UDINT,P0P)
  AXIS_INFO PCC;
  __DECLARE_VAR(LREAL,PC)
  AXIS_INFO STATE;
  AXIS_INFO MPP;
  AXIS_INFO VMAX;
  AXIS_INFO AMAX;
  AXIS_INFO JMAX;
  AXIS_INFO LMTL;
  AXIS_INFO AMOD;
  AXIS_INFO ERRORID;
  AXIS_INFO ABORTFLAG;
  AXIS_INFO LMTH;
  AXIS_INFO BLOCK1;
  QTOUCH_WRITE QW;
  __DECLARE_VAR(INT,UDINT_TO_INT55_OUT)
  __DECLARE_VAR(INT,UDINT_TO_INT87_OUT)
  __DECLARE_VAR(INT,UDINT_TO_INT73_OUT)
  __DECLARE_VAR(INT,UDINT_TO_INT25_OUT)
  __DECLARE_VAR(INT,UDINT_TO_INT35_OUT)
  __DECLARE_VAR(INT,LREAL_TO_INT61_OUT)
  __DECLARE_VAR(INT,LREAL_TO_INT54_OUT)
  __DECLARE_VAR(INT,LREAL_TO_INT38_OUT)
  __DECLARE_VAR(INT,LREAL_TO_INT60_OUT)
  __DECLARE_VAR(INT,LREAL_TO_INT45_OUT)
  __DECLARE_VAR(INT,LREAL_TO_INT70_OUT)
  __DECLARE_VAR(INT,LREAL_TO_INT42_OUT)
  __DECLARE_VAR(INT,LREAL_TO_INT77_OUT)
  __DECLARE_VAR(INT,LREAL_TO_INT92_OUT)
  __DECLARE_VAR(INT,LREAL_TO_INT43_OUT)
  __DECLARE_VAR(INT,LREAL_TO_INT44_OUT)
  __DECLARE_VAR(INT,LREAL_TO_INT82_OUT)
  __DECLARE_VAR(INT,LREAL_TO_INT49_OUT)
  __DECLARE_VAR(UDINT,BOOL_TO_UDINT97_OUT)

} PPIINFO;

void PPIINFO_init__(PPIINFO *data__, BOOL retain);
// Code part
void PPIINFO_body__(PPIINFO *data__);
// FUNCTION_BLOCK RELA_0_DIS
// Data part
typedef struct {
  // FB Interface - IN, OUT, IN_OUT variables
  __DECLARE_VAR(BOOL,EN)
  __DECLARE_VAR(BOOL,ENO)
  __DECLARE_VAR(INT,AXISID)
  __DECLARE_VAR(BOOL,STARTBTN)
  __DECLARE_VAR(LREAL,VELOCITY)
  __DECLARE_VAR(LREAL,STEP_D)

  // FB private variables - TEMP, private and located variables
  __DECLARE_VAR(LREAL,STEP_D1)
  MC_RELATIVE RELA1;
  __DECLARE_VAR(BOOL,E1)
  __DECLARE_VAR(BOOL,TO_MOVE)
  __DECLARE_VAR(BOOL,TO_SELCET)
  __DECLARE_VAR(BOOL,TO_INIT)
  __DECLARE_VAR(BOOL,CONTINUE)
  __DECLARE_VAR(BOOL,STOP)
  __DECLARE_VAR(INT,ICOUNT)
  __DECLARE_VAR(BOOL,E2)
  STEP __step_list[6];
  UINT __nb_steps;
  ACTION __action_list[10];
  UINT __nb_actions;
  __IEC_BOOL_t __transition_list[7];
  __IEC_BOOL_t __debug_transition_list[7];
  UINT __nb_transitions;
  TIME __lasttick_time;

} RELA_0_DIS;

void RELA_0_DIS_init__(RELA_0_DIS *data__, BOOL retain);
// Code part
void RELA_0_DIS_body__(RELA_0_DIS *data__);
// PROGRAM MAIN_FBD
// Data part
typedef struct {
  // PROGRAM Interface - IN, OUT, IN_OUT variables

  // PROGRAM private variables - TEMP, private and located variables
  __DECLARE_VAR(INT,AA)
  __DECLARE_EXTERNAL(PYGT,PYG)
  __DECLARE_VAR(INT,RC)
  MC_INIT MM;
  MC_POWER MP;
  PPIINFO P2;
  DS402SERVOINIT DS2;
  MC_RELATIVE MR;
  __DECLARE_VAR(BOOL,NV)
  __DECLARE_VAR(BOOL,EANN)
  __DECLARE_VAR(LREAL,CMD)
  __DECLARE_VAR(LREAL,CMD2)
  MC_ABSOLUTE MA;
  __DECLARE_VAR(BOOL,NV2)
  HOLD_WRITE H2;
  BUF_WRITE BW3;
  __DECLARE_VAR(UINT,OV)
  HOLD_READ HR2;
  HOLD_READ BLOCK1;
  HOLD_READ BLOCK2;
  RELA_0_DIS FFG;
  TON TH1S;
  U16_B16 TY;
  __DECLARE_VAR(LREAL,INT_TO_LREAL35_OUT)
  __DECLARE_VAR(BOOL,INT_TO_BOOL36_OUT)
  __DECLARE_VAR(LREAL,INT_TO_LREAL14_OUT)

} MAIN_FBD;

void MAIN_FBD_init__(MAIN_FBD *data__, BOOL retain);
// Code part
void MAIN_FBD_body__(MAIN_FBD *data__);
#endif //__POUS_H
