#ifndef __POUS_H
#define __POUS_H

#include "accessor.h"
#include "iec_std_lib.h"
#include <elog.h>
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
// FUNCTION_BLOCK SFC_HORSE
// Data part
typedef struct {
  // FB Interface - IN, OUT, IN_OUT variables
  __DECLARE_VAR(BOOL,EN)
  __DECLARE_VAR(BOOL,ENO)
  __DECLARE_VAR(BOOL,ENABLE)
  __DECLARE_VAR(BOOL,BIT0)
  __DECLARE_VAR(BOOL,BIT1)
  __DECLARE_VAR(BOOL,BIT2)
  __DECLARE_VAR(BOOL,BIT3)
  __DECLARE_VAR(BOOL,BIT4)
  __DECLARE_VAR(BOOL,BIT5)
  __DECLARE_VAR(BOOL,BIT6)
  __DECLARE_VAR(BOOL,BIT7)
  __DECLARE_VAR(BOOL,STOP)

  // FB private variables - TEMP, private and located variables
  TON T1;
  TON T2;
  TON T3;
  TON T4;
  TON T5;
  TON T6;
  TON T7;
  TON T8;
  __DECLARE_VAR(BOOL,M0)
  __DECLARE_VAR(BOOL,M1)
  __DECLARE_VAR(BOOL,M2)
  __DECLARE_VAR(BOOL,M3)
  __DECLARE_VAR(BOOL,M4)
  __DECLARE_VAR(BOOL,M5)
  __DECLARE_VAR(BOOL,M6)
  __DECLARE_VAR(BOOL,M7)
  STEP __step_list[10];
  UINT __nb_steps;
  ACTION __action_list[25];
  UINT __nb_actions;
  __IEC_BOOL_t __transition_list[19];
  __IEC_BOOL_t __debug_transition_list[19];
  UINT __nb_transitions;
  TIME __lasttick_time;

} SFC_HORSE;

void SFC_HORSE_init__(SFC_HORSE *data__, BOOL retain);
// Code part
void SFC_HORSE_body__(SFC_HORSE *data__);
// PROGRAM IDLE
// Data part
typedef struct {
  // PROGRAM Interface - IN, OUT, IN_OUT variables

  // PROGRAM private variables - TEMP, private and located variables
  SFC_HORSE FFG;
  BUF_WRITE BW;
  B16_U16 BBB;

} IDLE;

void IDLE_init__(IDLE *data__, BOOL retain);
// Code part
void IDLE_body__(IDLE *data__);
#endif //__POUS_H
