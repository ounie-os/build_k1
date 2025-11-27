#ifndef __POUS_H
#define __POUS_H

#include "iec_std_lib.h"
#include "accessor.h"
#include "iec_types_all.h"
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
  AXIS_INFO INTERA;
  AXIS_INFO BLOCK2;
  __DECLARE_VAR(INT,UDINT_TO_INT73_OUT)
  __DECLARE_VAR(INT,UDINT_TO_INT55_OUT)
  __DECLARE_VAR(INT,UDINT_TO_INT87_OUT)
  __DECLARE_VAR(INT,UDINT_TO_INT25_OUT)
  __DECLARE_VAR(INT,LREAL_TO_INT107_OUT)
  __DECLARE_VAR(INT,LREAL_TO_INT61_OUT)
  __DECLARE_VAR(INT,LREAL_TO_INT42_OUT)
  __DECLARE_VAR(INT,LREAL_TO_INT102_OUT)
  __DECLARE_VAR(INT,LREAL_TO_INT38_OUT)
  __DECLARE_VAR(INT,LREAL_TO_INT43_OUT)
  __DECLARE_VAR(INT,LREAL_TO_INT45_OUT)
  __DECLARE_VAR(INT,LREAL_TO_INT44_OUT)
  __DECLARE_VAR(INT,LREAL_TO_INT49_OUT)
  __DECLARE_VAR(INT,UDINT_TO_INT35_OUT)
  __DECLARE_VAR(INT,LREAL_TO_INT60_OUT)
  __DECLARE_VAR(INT,LREAL_TO_INT54_OUT)
  __DECLARE_VAR(INT,LREAL_TO_INT70_OUT)
  __DECLARE_VAR(INT,LREAL_TO_INT77_OUT)
  __DECLARE_VAR(INT,LREAL_TO_INT82_OUT)
  __DECLARE_VAR(INT,LREAL_TO_INT92_OUT)
  __DECLARE_VAR(UDINT,BOOL_TO_UDINT97_OUT)

} PPIINFO;

void PPIINFO_init__(PPIINFO *data__, BOOL retain);
// Code part
void PPIINFO_body__(PPIINFO *data__);
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
  __DECLARE_VAR(LREAL,ABS9_OUT)
  __DECLARE_VAR(DINT,UDINT_TO_DINT111_OUT)
  __DECLARE_VAR(DINT,ADD112_OUT)
  __DECLARE_VAR(UDINT,DINT_TO_UDINT113_OUT)
  __DECLARE_VAR(USINT,INT_TO_USINT16_OUT)

} _IPPOS;

void _IPPOS_init__(_IPPOS *data__, BOOL retain);
// Code part
void _IPPOS_body__(_IPPOS *data__);
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
// FUNCTION_BLOCK MC_INITFBD
// Data part
typedef struct {
  // FB Interface - IN, OUT, IN_OUT variables
  __DECLARE_VAR(BOOL,EN)
  __DECLARE_VAR(BOOL,ENO)
  __DECLARE_VAR(INT,AXISID)
  __DECLARE_VAR(BOOL,VIRTUAL_AXIS)
  __DECLARE_VAR(BOOL,ROTARYORLINEAR)
  __DECLARE_VAR(UDINT,ENCODERINPUT)
  __DECLARE_VAR(INT,AXIS)
  __DECLARE_VAR(BOOL,INITOK)

  // FB private variables - TEMP, private and located variables
  HOLD_WRITE HW;
  HOLD_WRITE BLOCK1;
  HOLD_WRITE BLOCK2;
  HOLD_WRITE BLOCK3;
  AXIS_INFO AID;
  AXIS_INFO BLOCK4;
  AXIS_INFO BLOCK5;
  AXIS_INFO AIS;
  AXIS_INFO AIV;
  _SSFC SFC;
  AXIS_INFO BLOCK6;
  __DECLARE_VAR(INT,UDINT_TO_INT9_OUT)
  __DECLARE_VAR(UDINT,INT_TO_UDINT40_OUT)
  __DECLARE_VAR(INT,BOOL_TO_INT21_OUT)
  __DECLARE_VAR(INT,BOOL_TO_INT22_OUT)

} MC_INITFBD;

void MC_INITFBD_init__(MC_INITFBD *data__, BOOL retain);
// Code part
void MC_INITFBD_body__(MC_INITFBD *data__);
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
// FUNCTION_BLOCK ROTATE_ABSO3
// Data part
typedef struct {
  // FB Interface - IN, OUT, IN_OUT variables
  __DECLARE_VAR(BOOL,EN)
  __DECLARE_VAR(BOOL,ENO)
  __DECLARE_VAR(INT,AXISID)
  __DECLARE_VAR(BOOL,X0)
  __DECLARE_VAR(BOOL,STOP)
  __DECLARE_VAR(LREAL,ENDPOS)
  __DECLARE_VAR(LREAL,VELOCITY)
  __DECLARE_VAR(INT,SFC_STATE)

  // FB private variables - TEMP, private and located variables
  __DECLARE_VAR(BOOL,PAUSEFINISHED)
  MC_ABSOLUTE ABSO1;
  STEP __step_list[5];
  UINT __nb_steps;
  ACTION __action_list[12];
  UINT __nb_actions;
  __IEC_BOOL_t __transition_list[6];
  __IEC_BOOL_t __debug_transition_list[6];
  UINT __nb_transitions;
  TIME __lasttick_time;

} ROTATE_ABSO3;

void ROTATE_ABSO3_init__(ROTATE_ABSO3 *data__, BOOL retain);
// Code part
void ROTATE_ABSO3_body__(ROTATE_ABSO3 *data__);
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
// PROGRAM TV
// Data part
typedef struct {
  // PROGRAM Interface - IN, OUT, IN_OUT variables

  // PROGRAM private variables - TEMP, private and located variables
  MC_INIT MI;
  MC_POWER MP1;
  MC_POWER MP2;
  MC_INIT BLOCK1;
  PPIINFO PP3;
  PPIINFO PP5;
  MC_VELOCITY MV1;
  __DECLARE_VAR(BOOL,X1)
  MC_INIT BLOCK3;
  MC_POWER BLOCK4;
  MC_VELOCITY BLOCK5;
  MC_INIT BLOCK6;
  MC_POWER BLOCK7;
  __DECLARE_VAR(BOOL,X2)
  __DECLARE_VAR(BOOL,X3)
  MC_RELATIVE MR;
  PPIINFO PP2;
  MC_COMBINE MCB;

} TV;

void TV_init__(TV *data__, BOOL retain);
// Code part
void TV_body__(TV *data__);
// FUNCTION_BLOCK MC_VELOCITY2
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
  MC_ABSOLUTE MA;
  AXIS_INFO AI;
  __DECLARE_VAR(LREAL,TOPC)
  __DECLARE_VAR(LREAL,CURVC)
  _DIFF2 D2;
  __DECLARE_VAR(LREAL,VA)
  __DECLARE_VAR(LREAL,VT2)
  STEP __step_list[3];
  UINT __nb_steps;
  ACTION __action_list[9];
  UINT __nb_actions;
  __IEC_BOOL_t __transition_list[3];
  __IEC_BOOL_t __debug_transition_list[3];
  UINT __nb_transitions;
  TIME __lasttick_time;

} MC_VELOCITY2;

void MC_VELOCITY2_init__(MC_VELOCITY2 *data__, BOOL retain);
// Code part
void MC_VELOCITY2_body__(MC_VELOCITY2 *data__);
// FUNCTION_BLOCK QPV10
// Data part
typedef struct {
  // FB Interface - IN, OUT, IN_OUT variables
  __DECLARE_VAR(BOOL,EN)
  __DECLARE_VAR(BOOL,ENO)
  __DECLARE_VAR(BOOL,QIN)
  __DECLARE_VAR(BOOL,QOUT)
  __DECLARE_VAR(LREAL,INP)
  __DECLARE_VAR(LREAL,INV)
  __DECLARE_VAR(LREAL,OUTP)
  __DECLARE_VAR(LREAL,OUTV)
  __DECLARE_VAR(BOOL,EMPTY)
  __DECLARE_VAR(BOOL,FULL)
  __DECLARE_VAR(INT,LENGTH)
  __DECLARE_VAR(BOOL,ERROR_OUT_OF_RANGE)
  __DECLARE_VAR(BOOL,ERROR_NULL)
  __DECLARE_VAR(BOOL,RESET)

  // FB private variables - TEMP, private and located variables
  __DECLARE_VAR(INT,A_BIT)
  __DECLARE_VAR(BOOL,RESET1)
  __DECLARE_VAR(BOOL,RESET2)
  __DECLARE_VAR(BOOL,OUT1)
  __DECLARE_VAR(BOOL,OUT2)
  __DECLARE_VAR(LREAL,A0)
  __DECLARE_VAR(LREAL,A1)
  __DECLARE_VAR(LREAL,A2)
  __DECLARE_VAR(LREAL,A3)
  __DECLARE_VAR(LREAL,A4)
  __DECLARE_VAR(LREAL,A5)
  __DECLARE_VAR(LREAL,A6)
  __DECLARE_VAR(LREAL,A7)
  __DECLARE_VAR(LREAL,A8)
  __DECLARE_VAR(LREAL,A9)
  __DECLARE_VAR(LREAL,B0)
  __DECLARE_VAR(LREAL,B1)
  __DECLARE_VAR(LREAL,B2)
  __DECLARE_VAR(LREAL,B3)
  __DECLARE_VAR(LREAL,B4)
  __DECLARE_VAR(LREAL,B5)
  __DECLARE_VAR(LREAL,B6)
  __DECLARE_VAR(LREAL,B7)
  __DECLARE_VAR(LREAL,B8)
  __DECLARE_VAR(LREAL,B9)
  CTU C1;
  CTU C2;
  R_TRIG R1;
  R_TRIG R2;

} QPV10;

void QPV10_init__(QPV10 *data__, BOOL retain);
// Code part
void QPV10_body__(QPV10 *data__);
// FUNCTION_BLOCK MC_CMOVE
// Data part
typedef struct {
  // FB Interface - IN, OUT, IN_OUT variables
  __DECLARE_VAR(BOOL,EN)
  __DECLARE_VAR(BOOL,ENO)
  __DECLARE_VAR(INT,AXISID)
  __DECLARE_VAR(BOOL,EXECUTE)
  __DECLARE_VAR(LREAL,P1)
  __DECLARE_VAR(LREAL,V1)
  __DECLARE_VAR(LREAL,P2)
  __DECLARE_VAR(LREAL,V2)
  __DECLARE_VAR(LREAL,P3)
  __DECLARE_VAR(LREAL,V3)
  __DECLARE_VAR(INT,AXIS)
  __DECLARE_VAR(BOOL,BSTEP)
  __DECLARE_VAR(BOOL,DONE)
  __DECLARE_VAR(BOOL,ABORTED)

  // FB private variables - TEMP, private and located variables
  AXIS_INFO AI;
  R_TRIG RRTG;
  __DECLARE_VAR(BOOL,ER)
  MC_VELOCITY MV;
  __DECLARE_VAR(BOOL,EX)
  __DECLARE_VAR(BOOL,P1OK)
  __DECLARE_VAR(BOOL,P2OK)
  _DIFF2 D2;
  _W_DEC WDEC;
  QPV10 QU;
  __DECLARE_VAR(BOOL,BMOVESTEP)
  __DECLARE_VAR(BOOL,BMOVEEND)
  __DECLARE_VAR(LREAL,RCURTARGET)
  __DECLARE_VAR(LREAL,RCURSPEED)
  __DECLARE_VAR(BOOL,QIOK)
  __DECLARE_VAR(BOOL,BQE)
  __DECLARE_VAR(BOOL,BQF)
  __DECLARE_VAR(INT,IQL)
  __DECLARE_VAR(BOOL,BCANGO)
  MC_ABSOLUTE MA;
  STEP __step_list[8];
  UINT __nb_steps;
  ACTION __action_list[25];
  UINT __nb_actions;
  __IEC_BOOL_t __transition_list[8];
  __IEC_BOOL_t __debug_transition_list[8];
  UINT __nb_transitions;
  TIME __lasttick_time;

} MC_CMOVE;

void MC_CMOVE_init__(MC_CMOVE *data__, BOOL retain);
// Code part
void MC_CMOVE_body__(MC_CMOVE *data__);
// FUNCTION_BLOCK T_REL
// Data part
typedef struct {
  // FB Interface - IN, OUT, IN_OUT variables
  __DECLARE_VAR(BOOL,EN)
  __DECLARE_VAR(BOOL,ENO)
  __DECLARE_VAR(INT,AXISID)
  __DECLARE_VAR(BOOL,EXECUTE)
  __DECLARE_VAR(LREAL,P1)
  __DECLARE_VAR(LREAL,V1)
  __DECLARE_VAR(LREAL,P2)
  __DECLARE_VAR(LREAL,V2)
  __DECLARE_VAR(LREAL,P3)
  __DECLARE_VAR(LREAL,V3)
  __DECLARE_VAR(INT,AXIS)
  __DECLARE_VAR(BOOL,BSTEP)
  __DECLARE_VAR(BOOL,DONE)
  __DECLARE_VAR(BOOL,ABORTED)

  // FB private variables - TEMP, private and located variables
  AXIS_INFO AI;
  R_TRIG RRTG;
  __DECLARE_VAR(BOOL,ER)
  MC_VELOCITY MV;
  __DECLARE_VAR(BOOL,EX)
  __DECLARE_VAR(BOOL,P1OK)
  __DECLARE_VAR(BOOL,P2OK)
  _DIFF2 D2;
  _W_DEC WDEC;
  QPV10 QU;
  __DECLARE_VAR(BOOL,BMOVESTEP)
  __DECLARE_VAR(BOOL,BMOVEEND)
  __DECLARE_VAR(LREAL,RCURTARGET)
  __DECLARE_VAR(LREAL,RCURSPEED)
  __DECLARE_VAR(BOOL,QIOK)
  __DECLARE_VAR(BOOL,BQE)
  __DECLARE_VAR(BOOL,BQF)
  __DECLARE_VAR(INT,IQL)
  __DECLARE_VAR(BOOL,BCANGO)
  F_TRIG FTG;
  STEP __step_list[6];
  UINT __nb_steps;
  ACTION __action_list[20];
  UINT __nb_actions;
  __IEC_BOOL_t __transition_list[7];
  __IEC_BOOL_t __debug_transition_list[7];
  UINT __nb_transitions;
  TIME __lasttick_time;

} T_REL;

void T_REL_init__(T_REL *data__, BOOL retain);
// Code part
void T_REL_body__(T_REL *data__);
// FUNCTION_BLOCK TLONG
// Data part
typedef struct {
  // FB Interface - IN, OUT, IN_OUT variables
  __DECLARE_VAR(BOOL,EN)
  __DECLARE_VAR(BOOL,ENO)
  __DECLARE_VAR(UDINT,ENCODERINPUT)
  __DECLARE_VAR(UDINT,CPOS)

  // FB private variables - TEMP, private and located variables
  __DECLARE_VAR(LINT,PPCL)
  __DECLARE_VAR(DINT,PPC)
  __DECLARE_VAR(LREAL,MPP)
  _P2R P2R;
  __DECLARE_VAR(LREAL,CPC)

} TLONG;

void TLONG_init__(TLONG *data__, BOOL retain);
// Code part
void TLONG_body__(TLONG *data__);
// PROGRAM TK
// Data part
typedef struct {
  // PROGRAM Interface - IN, OUT, IN_OUT variables

  // PROGRAM private variables - TEMP, private and located variables
  __DECLARE_VAR(BOOL,X0_1)
  __DECLARE_VAR(BOOL,X0_2)
  __DECLARE_VAR(BOOL,Y0_1)
  __DECLARE_VAR(BOOL,Y0_2)
  __DECLARE_VAR(BOOL,Y0_3)
  MC_INIT MI;
  MC_POWER MP;
  __DECLARE_VAR(BOOL,X0_3)
  __DECLARE_VAR(BOOL,Y0_4)
  __DECLARE_VAR(INT,T1)
  __DECLARE_VAR(INT,T2)
  PPIINFO PPT;
  AXIS_INFO AAI;
  AXIS_INFO BLOCK2;
  __DECLARE_VAR(BOOL,X0_5)
  __DECLARE_VAR(LREAL,VVV)
  __DECLARE_VAR(LREAL,UUU)
  MC_CMOVE MMB;
  MC_ABSOLUTE MMA;
  T_REL TTR;
  __DECLARE_VAR(INT,AAA)
  __DECLARE_VAR(INT,BBB)
  TLONG TTL;
  __DECLARE_VAR(UDINT,TE)
  __DECLARE_VAR(UDINT,TC)
  __DECLARE_VAR(INT,ADD47_OUT)

} TK;

void TK_init__(TK *data__, BOOL retain);
// Code part
void TK_body__(TK *data__);
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
// FUNCTION_BLOCK TEST_VELO2
// Data part
typedef struct {
  // FB Interface - IN, OUT, IN_OUT variables
  __DECLARE_VAR(BOOL,EN)
  __DECLARE_VAR(BOOL,ENO)
  __DECLARE_VAR(BOOL,START_TO_AUTO)

  // FB private variables - TEMP, private and located variables
  __DECLARE_VAR(INT,DIR)
  MC_VELOCITY VELO1;
  MC_VELOCITY VELO2;
  MC_HALT HALT1;
  MC_HALT HALT2;
  __DECLARE_VAR(BOOL,D1)
  __DECLARE_VAR(BOOL,D2)
  __DECLARE_VAR(BOOL,D3)
  __DECLARE_VAR(BOOL,D4)
  STEP __step_list[4];
  UINT __nb_steps;
  ACTION __action_list[5];
  UINT __nb_actions;
  __IEC_BOOL_t __transition_list[5];
  __IEC_BOOL_t __debug_transition_list[5];
  UINT __nb_transitions;
  TIME __lasttick_time;

} TEST_VELO2;

void TEST_VELO2_init__(TEST_VELO2 *data__, BOOL retain);
// Code part
void TEST_VELO2_body__(TEST_VELO2 *data__);
// FUNCTION_BLOCK TEST_VELO1
// Data part
typedef struct {
  // FB Interface - IN, OUT, IN_OUT variables
  __DECLARE_VAR(BOOL,EN)
  __DECLARE_VAR(BOOL,ENO)
  __DECLARE_VAR(BOOL,START_TO_AUTO)

  // FB private variables - TEMP, private and located variables
  MC_VELOCITY VELO1;
  MC_VELOCITY VELO2;
  MC_HALT HALT1;
  MC_HALT HALT2;
  __DECLARE_VAR(BOOL,D1)
  __DECLARE_VAR(BOOL,D2)
  __DECLARE_VAR(BOOL,D3)
  __DECLARE_VAR(BOOL,D4)
  STEP __step_list[5];
  UINT __nb_steps;
  ACTION __action_list[9];
  UINT __nb_actions;
  __IEC_BOOL_t __transition_list[5];
  __IEC_BOOL_t __debug_transition_list[5];
  UINT __nb_transitions;
  TIME __lasttick_time;

} TEST_VELO1;

void TEST_VELO1_init__(TEST_VELO1 *data__, BOOL retain);
// Code part
void TEST_VELO1_body__(TEST_VELO1 *data__);
// FUNCTION_BLOCK GETPT
// Data part
typedef struct {
  // FB Interface - IN, OUT, IN_OUT variables
  __DECLARE_VAR(BOOL,EN)
  __DECLARE_VAR(BOOL,ENO)
  __DECLARE_VAR(LREAL,IPT)
  __DECLARE_VAR(LREAL,IVT)
  __DECLARE_VAR(LREAL,OPT)
  __DECLARE_VAR(LREAL,VEL)

  // FB private variables - TEMP, private and located variables

} GETPT;

void GETPT_init__(GETPT *data__, BOOL retain);
// Code part
void GETPT_body__(GETPT *data__);
// FUNCTION_BLOCK VECOD
// Data part
typedef struct {
  // FB Interface - IN, OUT, IN_OUT variables
  __DECLARE_VAR(BOOL,EN)
  __DECLARE_VAR(BOOL,ENO)
  __DECLARE_VAR(INT,SPEED)
  __DECLARE_VAR(UDINT,ECODV)

  // FB private variables - TEMP, private and located variables
  __DECLARE_EXTERNAL(UDINT,GECOD)

} VECOD;

void VECOD_init__(VECOD *data__, BOOL retain);
// Code part
void VECOD_body__(VECOD *data__);
// FUNCTION_BLOCK AUTO
// Data part
typedef struct {
  // FB Interface - IN, OUT, IN_OUT variables
  __DECLARE_VAR(BOOL,EN)
  __DECLARE_VAR(BOOL,ENO)
  __DECLARE_VAR(BOOL,AUTO)
  __DECLARE_VAR(BOOL,XJ)
  __DECLARE_VAR(BOOL,SS)

  // FB private variables - TEMP, private and located variables
  __DECLARE_VAR(BOOL,FOOT_SWITCH)
  __DECLARE_VAR(BOOL,KNIFE_DOWN_LIMIT)
  __DECLARE_VAR(BOOL,KNIFE_UP_LIMIT)
  MC_RELATIVE RELATIVE_5;
  MC_RELATIVE RELATIVE_0;
  __DECLARE_VAR(BOOL,TRANSITION_1)
  __DECLARE_VAR(BOOL,TRANSITION_2)
  __DECLARE_VAR(BOOL,TRANSITION_3)
  __DECLARE_VAR(BOOL,TRANSITION_4)
  __DECLARE_VAR(BOOL,UPLIMIT)
  __DECLARE_VAR(BOOL,E5)
  __DECLARE_VAR(BOOL,E0)
  __DECLARE_VAR(BOOL,TZ_D)
  __DECLARE_VAR(BOOL,SXW)
  __DECLARE_VAR(BOOL,XXW)
  F_TRIG FTG;
  STEP __step_list[4];
  UINT __nb_steps;
  ACTION __action_list[11];
  UINT __nb_actions;
  __IEC_BOOL_t __transition_list[4];
  __IEC_BOOL_t __debug_transition_list[4];
  UINT __nb_transitions;
  TIME __lasttick_time;

} AUTO;

void AUTO_init__(AUTO *data__, BOOL retain);
// Code part
void AUTO_body__(AUTO *data__);
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
// PROGRAM MAIN_FBD
// Data part
typedef struct {
  // PROGRAM Interface - IN, OUT, IN_OUT variables

  // PROGRAM private variables - TEMP, private and located variables
  BUF_READ BR;
  __DECLARE_VAR(BOOL,SST)
  __DECLARE_VAR(LREAL,VVO)
  __DECLARE_VAR(LREAL,VV1)
  __DECLARE_VAR(UINT,V0)
  MC_INIT MMI;
  MC_POWER MP;
  PPIINFO PPP;
  __DECLARE_VAR(ULINT,POS)
  __DECLARE_VAR(UINT,S2ST)
  __DECLARE_VAR(INT,ERID)
  MC_VELOCITY MMB;
  MC_RESET MMRST;
  _GETERRORID GID;
  __DECLARE_VAR(BOOL,EQ16_OUT)
  __DECLARE_VAR(BOOL,EQ11_OUT)

} MAIN_FBD;

void MAIN_FBD_init__(MAIN_FBD *data__, BOOL retain);
// Code part
void MAIN_FBD_body__(MAIN_FBD *data__);
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
// FUNCTION_BLOCK MAIN_SFC
// Data part
typedef struct {
  // FB Interface - IN, OUT, IN_OUT variables
  __DECLARE_VAR(BOOL,EN)
  __DECLARE_VAR(BOOL,ENO)
  __DECLARE_VAR(BOOL,X0)
  __DECLARE_VAR(BOOL,X1)
  __DECLARE_VAR(INT,AXIS1_VELOCITY)

  // FB private variables - TEMP, private and located variables
  MC_HOME BACK_HOME1;
  MC_HALT AXIS_HALT;
  MC_VELOCITY VELO1;
  __DECLARE_VAR(BOOL,L1)
  __DECLARE_VAR(BOOL,L2)
  __DECLARE_VAR(BOOL,L5)
  TON TM1;
  __DECLARE_VAR(BOOL,TIME_UP1)
  TON TM2;
  __DECLARE_VAR(BOOL,TIME_UP2)
  STEP __step_list[5];
  UINT __nb_steps;
  ACTION __action_list[13];
  UINT __nb_actions;
  __IEC_BOOL_t __transition_list[5];
  __IEC_BOOL_t __debug_transition_list[5];
  UINT __nb_transitions;
  TIME __lasttick_time;

} MAIN_SFC;

void MAIN_SFC_init__(MAIN_SFC *data__, BOOL retain);
// Code part
void MAIN_SFC_body__(MAIN_SFC *data__);
// FUNCTION_BLOCK MC_POWER1
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
  ACTION __action_list[6];
  UINT __nb_actions;
  __IEC_BOOL_t __transition_list[2];
  __IEC_BOOL_t __debug_transition_list[2];
  UINT __nb_transitions;
  TIME __lasttick_time;

} MC_POWER1;

void MC_POWER1_init__(MC_POWER1 *data__, BOOL retain);
// Code part
void MC_POWER1_body__(MC_POWER1 *data__);
// FUNCTION_BLOCK T_ABS
// Data part
typedef struct {
  // FB Interface - IN, OUT, IN_OUT variables
  __DECLARE_VAR(BOOL,EN)
  __DECLARE_VAR(BOOL,ENO)
  __DECLARE_VAR(INT,AXISID)
  __DECLARE_VAR(BOOL,EXECUTE)
  __DECLARE_VAR(LREAL,P1)
  __DECLARE_VAR(LREAL,V1)
  __DECLARE_VAR(LREAL,P2)
  __DECLARE_VAR(LREAL,V2)
  __DECLARE_VAR(LREAL,P3)
  __DECLARE_VAR(LREAL,V3)
  __DECLARE_VAR(INT,AXIS)
  __DECLARE_VAR(BOOL,BSTEP)
  __DECLARE_VAR(BOOL,DONE)
  __DECLARE_VAR(BOOL,ABORTED)

  // FB private variables - TEMP, private and located variables
  AXIS_INFO AI;
  R_TRIG RRTG;
  __DECLARE_VAR(BOOL,ER)
  MC_ABSOLUTE MV;
  __DECLARE_VAR(BOOL,EX)
  __DECLARE_VAR(BOOL,P1OK)
  __DECLARE_VAR(BOOL,P2OK)
  _DIFF2 D2;
  _W_DEC WDEC;
  QPV10 QU;
  __DECLARE_VAR(BOOL,BMOVESTEP)
  __DECLARE_VAR(BOOL,BMOVEEND)
  __DECLARE_VAR(LREAL,RCURTARGET)
  __DECLARE_VAR(LREAL,RCURSPEED)
  __DECLARE_VAR(BOOL,QIOK)
  __DECLARE_VAR(BOOL,BQE)
  __DECLARE_VAR(BOOL,BQF)
  __DECLARE_VAR(INT,IQL)
  __DECLARE_VAR(BOOL,BCANGO)
  F_TRIG FTG;
  STEP __step_list[6];
  UINT __nb_steps;
  ACTION __action_list[21];
  UINT __nb_actions;
  __IEC_BOOL_t __transition_list[7];
  __IEC_BOOL_t __debug_transition_list[7];
  UINT __nb_transitions;
  TIME __lasttick_time;

} T_ABS;

void T_ABS_init__(T_ABS *data__, BOOL retain);
// Code part
void T_ABS_body__(T_ABS *data__);
// FUNCTION_BLOCK MC_COMBINE1
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
  __DECLARE_VAR(LREAL,IP)
  __DECLARE_VAR(LREAL,IV)
  __DECLARE_VAR(LREAL,LTP1)
  __DECLARE_VAR(LREAL,LTP2)
  _PULSE_CALC PC;
  __DECLARE_VAR(LREAL,MPP)
  __DECLARE_VAR(LREAL,MMM)
  _RMOD RMD;
  __DECLARE_VAR(LREAL,SPOS)

} MC_COMBINE1;

void MC_COMBINE1_init__(MC_COMBINE1 *data__, BOOL retain);
// Code part
void MC_COMBINE1_body__(MC_COMBINE1 *data__);
// FUNCTION_BLOCK MC_COMBINE2
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

} MC_COMBINE2;

void MC_COMBINE2_init__(MC_COMBINE2 *data__, BOOL retain);
// Code part
void MC_COMBINE2_body__(MC_COMBINE2 *data__);
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
// FUNCTION_BLOCK AUTOOP
// Data part
typedef struct {
  // FB Interface - IN, OUT, IN_OUT variables
  __DECLARE_VAR(BOOL,EN)
  __DECLARE_VAR(BOOL,ENO)
  __DECLARE_VAR(BOOL,STATESAFE)
  __DECLARE_VAR(BOOL,X1)
  __DECLARE_VAR(BOOL,X2)
  __DECLARE_VAR(BOOL,ENABLED)

  // FB private variables - TEMP, private and located variables
  MC_HOME HOME1;
  __DECLARE_VAR(INT,AXISID)
  __DECLARE_VAR(LREAL,VELOCITY)
  __DECLARE_VAR(LREAL,STEP_D)
  MC_ABSOLUTE ABS1;
  __DECLARE_VAR(INT,ICOUNT)
  MC_SETPOSITION SP;
  R_TRIG RTG;
  F_TRIG FTG;
  AXIS_INFO AI;
  __DECLARE_VAR(BOOL,LIMITTIME)
  __DECLARE_VAR(BOOL,RTGO)
  R_TRIG RT;
  __DECLARE_VAR(BOOL,CONTINUE)
  __DECLARE_VAR(BOOL,PAUSE)
  __DECLARE_VAR(BOOL,AUTOGO)
  __DECLARE_VAR(BOOL,W0EN)
  __DECLARE_VAR(BOOL,W1EN)
  RBUF_WRITE WR;
  __DECLARE_VAR(BOOL,START)
  __DECLARE_VAR(INT,ROUNDCOUNT)
  STEP __step_list[4];
  UINT __nb_steps;
  ACTION __action_list[12];
  UINT __nb_actions;
  __IEC_BOOL_t __transition_list[5];
  __IEC_BOOL_t __debug_transition_list[5];
  UINT __nb_transitions;
  TIME __lasttick_time;

} AUTOOP;

void AUTOOP_init__(AUTOOP *data__, BOOL retain);
// Code part
void AUTOOP_body__(AUTOOP *data__);
// PROGRAM TRY_HOME
// Data part
typedef struct {
  // PROGRAM Interface - IN, OUT, IN_OUT variables

  // PROGRAM private variables - TEMP, private and located variables
  MC_INIT BLOCK7;
  MC_POWER BLOCK8;
  __DECLARE_VAR(INT,INPUT_VELO)
  PPIINFO MMMH;
  __DECLARE_VAR(LREAL,VO)
  __DECLARE_VAR(BOOL,X1)
  __DECLARE_VAR(BOOL,X2)
  __DECLARE_VAR(BOOL,X3)
  MC_HOME MH;
  MC_STOP MSTP;
  PLC_PAUSE PPAU;
  AUTOOP AOP;

} TRY_HOME;

void TRY_HOME_init__(TRY_HOME *data__, BOOL retain);
// Code part
void TRY_HOME_body__(TRY_HOME *data__);
// FUNCTION_BLOCK MAIN_REL
// Data part
typedef struct {
  // FB Interface - IN, OUT, IN_OUT variables
  __DECLARE_VAR(BOOL,EN)
  __DECLARE_VAR(BOOL,ENO)
  __DECLARE_VAR(BOOL,X0)
  __DECLARE_VAR(BOOL,X1)
  __DECLARE_VAR(INT,AXIS1_VELOCITY)

  // FB private variables - TEMP, private and located variables
  MC_RELATIVE MREL;
  MC_HALT MHLT;
  MC_HALT HALT;
  MC_VELOCITY VELC;
  __DECLARE_VAR(BOOL,L1)
  __DECLARE_VAR(BOOL,L2)
  __DECLARE_VAR(BOOL,L5)
  TON TM1;
  __DECLARE_VAR(BOOL,TIME_UP1)
  TON TM2;
  __DECLARE_VAR(BOOL,TIME_UP2)
  __DECLARE_VAR(BOOL,P1OK)
  __DECLARE_VAR(BOOL,P2OK)
  STEP __step_list[6];
  UINT __nb_steps;
  ACTION __action_list[4];
  UINT __nb_actions;
  __IEC_BOOL_t __transition_list[7];
  __IEC_BOOL_t __debug_transition_list[7];
  UINT __nb_transitions;
  TIME __lasttick_time;

} MAIN_REL;

void MAIN_REL_init__(MAIN_REL *data__, BOOL retain);
// Code part
void MAIN_REL_body__(MAIN_REL *data__);
// FUNCTION_BLOCK VECOD1
// Data part
typedef struct {
  // FB Interface - IN, OUT, IN_OUT variables
  __DECLARE_VAR(BOOL,EN)
  __DECLARE_VAR(BOOL,ENO)
  __DECLARE_VAR(DINT,SPEED)
  __DECLARE_VAR(UDINT,ECODV)

  // FB private variables - TEMP, private and located variables
  __DECLARE_EXTERNAL(UDINT,GECOD)

} VECOD1;

void VECOD1_init__(VECOD1 *data__, BOOL retain);
// Code part
void VECOD1_body__(VECOD1 *data__);
// PROGRAM DDD
// Data part
typedef struct {
  // PROGRAM Interface - IN, OUT, IN_OUT variables

  // PROGRAM private variables - TEMP, private and located variables
  MC_INIT MI;
  __DECLARE_VAR(BOOL,X1)
  __DECLARE_VAR(BOOL,X2)
  __DECLARE_VAR(BOOL,Y2)
  __DECLARE_VAR(BOOL,Y1)
  __DECLARE_VAR(BOOL,X5)
  __DECLARE_VAR(BOOL,Y3)
  __DECLARE_VAR(BOOL,X6)
  __DECLARE_VAR(BOOL,Y4)
  __DECLARE_VAR(BOOL,Y5)
  PPIINFO PP2;
  MC_INIT BLOCK1;
  MC_POWER BLOCK2;
  PPIINFO BLOCK3;
  __DECLARE_VAR(BOOL,X3)
  __DECLARE_VAR(INT,SA)
  VECOD1 VD;
  MC_INIT BLOCK4;
  MC_POWER BLOCK5;
  PPIINFO BLOCK6;
  MC_INIT BLOCK7;
  MC_POWER BLOCK8;
  PPIINFO BLOCK9;
  MC_COMBINE2 MMB;
  __DECLARE_VAR(DINT,MUX36_OUT)

} DDD;

void DDD_init__(DDD *data__, BOOL retain);
// Code part
void DDD_body__(DDD *data__);
// FUNCTION_BLOCK TABSABORT
// Data part
typedef struct {
  // FB Interface - IN, OUT, IN_OUT variables
  __DECLARE_VAR(BOOL,EN)
  __DECLARE_VAR(BOOL,ENO)
  __DECLARE_VAR(BOOL,X0)
  __DECLARE_VAR(BOOL,STOP)
  __DECLARE_VAR(INT,AXISID)
  __DECLARE_VAR(INT,SFC_STATE)

  // FB private variables - TEMP, private and located variables
  MC_RELATIVE REL1;
  STEP __step_list[4];
  UINT __nb_steps;
  ACTION __action_list[5];
  UINT __nb_actions;
  __IEC_BOOL_t __transition_list[5];
  __IEC_BOOL_t __debug_transition_list[5];
  UINT __nb_transitions;
  TIME __lasttick_time;

} TABSABORT;

void TABSABORT_init__(TABSABORT *data__, BOOL retain);
// Code part
void TABSABORT_body__(TABSABORT *data__);
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
  __DECLARE_VAR(BOOL,STOPALL)

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
  MC_STOP ST1;
  TON TM1;
  STEP __step_list[6];
  UINT __nb_steps;
  ACTION __action_list[14];
  UINT __nb_actions;
  __IEC_BOOL_t __transition_list[12];
  __IEC_BOOL_t __debug_transition_list[12];
  UINT __nb_transitions;
  TIME __lasttick_time;

} RELA_0_DIS;

void RELA_0_DIS_init__(RELA_0_DIS *data__, BOOL retain);
// Code part
void RELA_0_DIS_body__(RELA_0_DIS *data__);
// PROGRAM WX_SHOW
// Data part
typedef struct {
  // PROGRAM Interface - IN, OUT, IN_OUT variables

  // PROGRAM private variables - TEMP, private and located variables
  MC_INIT INIT1;
  MC_POWER POWER1;
  RELA_0_DIS XSA;
  PPIINFO PPP;
  __DECLARE_VAR(BOOL,START)
  __DECLARE_VAR(BOOL,BEN)
  __DECLARE_VAR(BOOL,BRST)
  __DECLARE_VAR(BOOL,STOP)

} WX_SHOW;

void WX_SHOW_init__(WX_SHOW *data__, BOOL retain);
// Code part
void WX_SHOW_body__(WX_SHOW *data__);
// FUNCTION_BLOCK AXIS_CHANGE
// Data part
typedef struct {
  // FB Interface - IN, OUT, IN_OUT variables
  __DECLARE_VAR(BOOL,EN)
  __DECLARE_VAR(BOOL,ENO)
  __DECLARE_VAR(UINT,CHANGE_NUM)
  __DECLARE_VAR(INT,AXIS_1)
  __DECLARE_VAR(INT,AXIS_2)
  __DECLARE_VAR(INT,AXIS_3)
  __DECLARE_VAR(INT,AXIS_4)
  __DECLARE_VAR(INT,AXIS_5)
  __DECLARE_VAR(INT,AXIS_6)
  __DECLARE_VAR(INT,AXIS_NUM)

  // FB private variables - TEMP, private and located variables

} AXIS_CHANGE;

void AXIS_CHANGE_init__(AXIS_CHANGE *data__, BOOL retain);
// Code part
void AXIS_CHANGE_body__(AXIS_CHANGE *data__);
// FUNCTION_BLOCK TUL
// Data part
typedef struct {
  // FB Interface - IN, OUT, IN_OUT variables
  __DECLARE_VAR(BOOL,EN)
  __DECLARE_VAR(BOOL,ENO)

  // FB private variables - TEMP, private and located variables
  __DECLARE_VAR(INT,V1)
  __DECLARE_VAR(INT,V2)

} TUL;

void TUL_init__(TUL *data__, BOOL retain);
// Code part
void TUL_body__(TUL *data__);
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
// FUNCTION_BLOCK MAIN_VEL
// Data part
typedef struct {
  // FB Interface - IN, OUT, IN_OUT variables
  __DECLARE_VAR(BOOL,EN)
  __DECLARE_VAR(BOOL,ENO)
  __DECLARE_VAR(BOOL,X0)
  __DECLARE_VAR(BOOL,X1)
  __DECLARE_VAR(INT,AXIS1_VELOCITY)

  // FB private variables - TEMP, private and located variables
  MC_VELOCITY MVEL;
  MC_HOME MMH;
  MC_HALT HALT;
  MC_VELOCITY VELC;
  __DECLARE_VAR(BOOL,L1)
  __DECLARE_VAR(BOOL,L2)
  __DECLARE_VAR(BOOL,L5)
  TON TM1;
  __DECLARE_VAR(BOOL,TIME_UP1)
  TON TM2;
  __DECLARE_VAR(BOOL,TIME_UP2)
  __DECLARE_VAR(BOOL,P1OK)
  __DECLARE_VAR(BOOL,P2OK)
  STEP __step_list[3];
  UINT __nb_steps;
  ACTION __action_list[3];
  UINT __nb_actions;
  __IEC_BOOL_t __transition_list[3];
  __IEC_BOOL_t __debug_transition_list[3];
  UINT __nb_transitions;
  TIME __lasttick_time;

} MAIN_VEL;

void MAIN_VEL_init__(MAIN_VEL *data__, BOOL retain);
// Code part
void MAIN_VEL_body__(MAIN_VEL *data__);
// FUNCTION_BLOCK ZZA
// Data part
typedef struct {
  // FB Interface - IN, OUT, IN_OUT variables
  __DECLARE_VAR(BOOL,EN)
  __DECLARE_VAR(BOOL,ENO)

  // FB private variables - TEMP, private and located variables
  __DECLARE_VAR(INT,A)

} ZZA;

void ZZA_init__(ZZA *data__, BOOL retain);
// Code part
void ZZA_body__(ZZA *data__);
// FUNCTION_BLOCK INITSERVO1
// Data part
typedef struct {
  // FB Interface - IN, OUT, IN_OUT variables
  __DECLARE_VAR(BOOL,EN)
  __DECLARE_VAR(BOOL,ENO)
  __DECLARE_VAR(INT,AXISID)
  __DECLARE_VAR(BOOL,SERVOON)
  __DECLARE_VAR(BOOL,INITDONE)

  // FB private variables - TEMP, private and located variables
  MC_INIT MI;
  MC_POWER MP;
  __DECLARE_VAR(BOOL,BGN)
  SVRO_CONTROL AXIS_ON;
  MC_RESET AXIS_RESET1;
  MC_SETPOSITION AXIS_SETPOS1;
  SR SR1;
  SVRO_MODE AXIS_MODE;
  __DECLARE_VAR(USINT,AXIS_ACTMODE)
  R_TRIG RT1;
  R_TRIG BLOCK1;
  TON TON1;
  PPIINFO PPI;
  __DECLARE_VAR(USINT,INT_TO_USINT122_OUT)
  __DECLARE_VAR(USINT,INT_TO_USINT117_OUT)

} INITSERVO1;

void INITSERVO1_init__(INITSERVO1 *data__, BOOL retain);
// Code part
void INITSERVO1_body__(INITSERVO1 *data__);
// PROGRAM VELOCITYINSFC
// Data part
typedef struct {
  // PROGRAM Interface - IN, OUT, IN_OUT variables

  // PROGRAM private variables - TEMP, private and located variables
  MC_INIT MI;
  MC_POWER MP;
  PPIINFO PP2;
  __DECLARE_VAR(BOOL,TIAOJIAN)
  __DECLARE_VAR(LREAL,TVEL)
  __DECLARE_VAR(BOOL,RST)
  __DECLARE_VAR(BOOL,MABS)
  TEST_VELO2 TTB;
  R_TRIG R_TRIG1;

} VELOCITYINSFC;

void VELOCITYINSFC_init__(VELOCITYINSFC *data__, BOOL retain);
// Code part
void VELOCITYINSFC_body__(VELOCITYINSFC *data__);
// FUNCTION_BLOCK TEST_VELO
// Data part
typedef struct {
  // FB Interface - IN, OUT, IN_OUT variables
  __DECLARE_VAR(BOOL,EN)
  __DECLARE_VAR(BOOL,ENO)
  __DECLARE_VAR(BOOL,START_TO_AUTO)

  // FB private variables - TEMP, private and located variables
  MC_VELOCITY VELO1;
  MC_VELOCITY VELO2;
  MC_HALT HALT1;
  MC_HALT HALT2;
  __DECLARE_VAR(BOOL,D1)
  __DECLARE_VAR(BOOL,D2)
  __DECLARE_VAR(BOOL,D3)
  __DECLARE_VAR(BOOL,D4)
  STEP __step_list[4];
  UINT __nb_steps;
  ACTION __action_list[5];
  UINT __nb_actions;
  __IEC_BOOL_t __transition_list[4];
  __IEC_BOOL_t __debug_transition_list[4];
  UINT __nb_transitions;
  TIME __lasttick_time;

} TEST_VELO;

void TEST_VELO_init__(TEST_VELO *data__, BOOL retain);
// Code part
void TEST_VELO_body__(TEST_VELO *data__);
// FUNCTION_BLOCK TEST_COMBINE
// Data part
typedef struct {
  // FB Interface - IN, OUT, IN_OUT variables
  __DECLARE_VAR(BOOL,EN)
  __DECLARE_VAR(BOOL,ENO)
  __DECLARE_VAR(BOOL,START_TO_AUTO)

  // FB private variables - TEMP, private and located variables
  MC_COMBINE2 COMB1;
  MC_VELOCITY VELO1;
  MC_HALT HALT1;
  __DECLARE_VAR(BOOL,D1)
  __DECLARE_VAR(BOOL,D2)
  __DECLARE_VAR(BOOL,D3)
  __DECLARE_VAR(BOOL,D4)
  __DECLARE_VAR(BOOL,D5)
  __DECLARE_VAR(BOOL,D6)
  __DECLARE_VAR(INT,NUMBER)
  STEP __step_list[8];
  UINT __nb_steps;
  ACTION __action_list[14];
  UINT __nb_actions;
  __IEC_BOOL_t __transition_list[7];
  __IEC_BOOL_t __debug_transition_list[7];
  UINT __nb_transitions;
  TIME __lasttick_time;

} TEST_COMBINE;

void TEST_COMBINE_init__(TEST_COMBINE *data__, BOOL retain);
// Code part
void TEST_COMBINE_body__(TEST_COMBINE *data__);
// PROGRAM TESTVELOCITY
// Data part
typedef struct {
  // PROGRAM Interface - IN, OUT, IN_OUT variables

  // PROGRAM private variables - TEMP, private and located variables
  MC_INIT MI;
  MC_POWER MP;
  MC_VELOCITY MMB;
  PPIINFO PP2;
  __DECLARE_VAR(BOOL,TIAOJIAN)
  __DECLARE_VAR(LREAL,TVEL)
  MC_RESET MR;
  __DECLARE_VAR(BOOL,RST)
  MC_ABSOLUTE MA;
  __DECLARE_VAR(BOOL,MABS)

} TESTVELOCITY;

void TESTVELOCITY_init__(TESTVELOCITY *data__, BOOL retain);
// Code part
void TESTVELOCITY_body__(TESTVELOCITY *data__);
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
// FUNCTION_BLOCK MAIN_ABS
// Data part
typedef struct {
  // FB Interface - IN, OUT, IN_OUT variables
  __DECLARE_VAR(BOOL,EN)
  __DECLARE_VAR(BOOL,ENO)
  __DECLARE_VAR(BOOL,X0)
  __DECLARE_VAR(BOOL,X1)
  __DECLARE_VAR(INT,AXIS1_VELOCITY)

  // FB private variables - TEMP, private and located variables
  MC_ABSOLUTE MAB;
  MC_ABSOLUTE MAB2;
  MC_HALT HALT;
  MC_VELOCITY VELC;
  __DECLARE_VAR(BOOL,L1)
  __DECLARE_VAR(BOOL,L2)
  __DECLARE_VAR(BOOL,L5)
  TON TM1;
  __DECLARE_VAR(BOOL,TIME_UP1)
  TON TM2;
  __DECLARE_VAR(BOOL,TIME_UP2)
  __DECLARE_VAR(BOOL,P1OK)
  __DECLARE_VAR(BOOL,P2OK)
  STEP __step_list[4];
  UINT __nb_steps;
  ACTION __action_list[4];
  UINT __nb_actions;
  __IEC_BOOL_t __transition_list[4];
  __IEC_BOOL_t __debug_transition_list[4];
  UINT __nb_transitions;
  TIME __lasttick_time;

} MAIN_ABS;

void MAIN_ABS_init__(MAIN_ABS *data__, BOOL retain);
// Code part
void MAIN_ABS_body__(MAIN_ABS *data__);
// FUNCTION_BLOCK TEST_TBFS
// Data part
typedef struct {
  // FB Interface - IN, OUT, IN_OUT variables
  __DECLARE_VAR(BOOL,EN)
  __DECLARE_VAR(BOOL,ENO)
  __DECLARE_VAR(BOOL,START_TO_AUTO)
  __DECLARE_VAR(BOOL,D2)
  __DECLARE_VAR(BOOL,D3)

  // FB private variables - TEMP, private and located variables
  MC_VELOCITY VELO1;
  MC_VELOCITY VELO2;
  MC_HALT HALT1;
  MC_HALT HALT2;
  __DECLARE_EXTERNAL(BOOL,D1)
  __DECLARE_VAR(BOOL,D0)
  __DECLARE_VAR(BOOL,D4)
  __DECLARE_VAR(INT,CS)
  __DECLARE_VAR(INT,A)
  STEP __step_list[4];
  UINT __nb_steps;
  ACTION __action_list[5];
  UINT __nb_actions;
  __IEC_BOOL_t __transition_list[3];
  __IEC_BOOL_t __debug_transition_list[3];
  UINT __nb_transitions;
  TIME __lasttick_time;

} TEST_TBFS;

void TEST_TBFS_init__(TEST_TBFS *data__, BOOL retain);
// Code part
void TEST_TBFS_body__(TEST_TBFS *data__);
// PROGRAM TTM1
// Data part
typedef struct {
  // PROGRAM Interface - IN, OUT, IN_OUT variables

  // PROGRAM private variables - TEMP, private and located variables
  __DECLARE_VAR(BOOL,Y1)
  __DECLARE_VAR(BOOL,Y2)
  MC_INIT MMI;
  MC_POWER MP;
  __DECLARE_VAR(BOOL,X0_1)
  __DECLARE_VAR(BOOL,X0_2)
  __DECLARE_VAR(BOOL,X0_3)
  __DECLARE_VAR(LREAL,CURPT)
  MC_ABSOLUTE AB;
  MC_ABSOLUTE BLOCK2;
  PPIINFO PPP;
  R_TRIG RTG;
  ROTATE_ABSO3 RRT;
  __DECLARE_VAR(BOOL,OR61_OUT)

} TTM1;

void TTM1_init__(TTM1 *data__, BOOL retain);
// Code part
void TTM1_body__(TTM1 *data__);
// FUNCTION_BLOCK STCAM
// Data part
typedef struct {
  // FB Interface - IN, OUT, IN_OUT variables
  __DECLARE_VAR(BOOL,EN)
  __DECLARE_VAR(BOOL,ENO)

  // FB private variables - TEMP, private and located variables
  __DECLARE_VAR(INT,IDX)
  SET_CAM SCM;
  __DECLARE_VAR(INT,XS)
  __DECLARE_VAR(INT,I)

} STCAM;

void STCAM_init__(STCAM *data__, BOOL retain);
// Code part
void STCAM_body__(STCAM *data__);
// PROGRAM TMOD
// Data part
typedef struct {
  // PROGRAM Interface - IN, OUT, IN_OUT variables

  // PROGRAM private variables - TEMP, private and located variables
  __DECLARE_VAR(REAL,PPP)
  __DECLARE_VAR(REAL,VVV)
  __DECLARE_VAR(REAL,AA)
  __DECLARE_VAR(BOOL,Y2)
  __DECLARE_VAR(BOOL,X3)
  __DECLARE_VAR(BOOL,X2)
  __DECLARE_VAR(BOOL,X1)
  __DECLARE_VAR(LREAL,CM5)
  __DECLARE_VAR(BOOL,Y1)
  MC_CAMIN CIN;
  __DECLARE_VAR(WORD,A1)
  MC_CAMOUT MO;
  MC_VELOCITY MV;
  MC_INIT MI;
  MC_INIT MI2;
  MC_POWER MP1;
  MC_POWER MP2;
  PPIINFO PXP;
  STCAM SSST;
  PPIINFO PP2;
  R_TRIG R_TRIG1;

} TMOD;

void TMOD_init__(TMOD *data__, BOOL retain);
// Code part
void TMOD_body__(TMOD *data__);
// FUNCTION_BLOCK TST
// Data part
typedef struct {
  // FB Interface - IN, OUT, IN_OUT variables
  __DECLARE_VAR(BOOL,EN)
  __DECLARE_VAR(BOOL,ENO)
  __DECLARE_VAR(INT,AXIS)
  __DECLARE_VAR(BOOL,EXEC)

  // FB private variables - TEMP, private and located variables
  TON TTT;
  TON BLOCK2;
  RS SSR;
  RS BLOCK3;
  MC_VELOCITY MV1;
  MC_VELOCITY BLOCK1;
  __DECLARE_VAR(BOOL,OR32_OUT)

} TST;

void TST_init__(TST *data__, BOOL retain);
// Code part
void TST_body__(TST *data__);
// PROGRAM MT
// Data part
typedef struct {
  // PROGRAM Interface - IN, OUT, IN_OUT variables

  // PROGRAM private variables - TEMP, private and located variables
  MC_INIT BLOCK2;
  MC_POWER BLOCK3;
  __DECLARE_VAR(BOOL,X1)
  __DECLARE_VAR(BOOL,TRD)
  __DECLARE_VAR(BOOL,X2)
  PPIINFO PP;
  __DECLARE_VAR(BOOL,X3)
  __DECLARE_VAR(BOOL,Y2)
  MC_RELATIVE MRS;
  AUTO TAT;
  __DECLARE_VAR(BOOL,AAA)
  RELA_0_DIS RRRL;
  MAIN_REL MRR;

} MT;

void MT_init__(MT *data__, BOOL retain);
// Code part
void MT_body__(MT *data__);
// PROGRAM MAIN_FBD3
// Data part
typedef struct {
  // PROGRAM Interface - IN, OUT, IN_OUT variables

  // PROGRAM private variables - TEMP, private and located variables
  __DECLARE_VAR(BOOL,BSERVOOFF)
  __DECLARE_VAR(BOOL,BSERVOON)
  __DECLARE_VAR(BOOL,BSERVOON1)
  __DECLARE_VAR(BOOL,BSERVOON2)
  __DECLARE_VAR(BOOL,BSERVOON3)
  __DECLARE_VAR(BOOL,BSERVOON4)
  __DECLARE_VAR(BOOL,BSERVOON5)
  __DECLARE_VAR(BOOL,BSERVOON6)
  MC_RELATIVE AXIS_RELATIVE1;
  __DECLARE_VAR(BOOL,BDORELATIVE)
  __DECLARE_VAR(BOOL,BDORELATIVE1)
  __DECLARE_VAR(BOOL,BDORELATIVE2)
  __DECLARE_VAR(BOOL,BDORELATIVE3)
  __DECLARE_VAR(BOOL,BDORELATIVE4)
  __DECLARE_VAR(BOOL,BDORELATIVE5)
  __DECLARE_VAR(BOOL,BDORELATIVE6)
  __DECLARE_VAR(BOOL,BDORELATIVE7)
  __DECLARE_VAR(BOOL,BDORELATIVE8)
  __DECLARE_VAR(BOOL,BCOMBINE)
  __DECLARE_VAR(BOOL,BBB)
  IP_READ2 AXIS_READ2;
  __DECLARE_VAR(UDINT,AXIS_ACTPOS)
  __DECLARE_VAR(UDINT,AXIS_ACTPOS2)
  __DECLARE_VAR(UINT,AXIS_ACTSTATUSWD)
  __DECLARE_VAR(UINT,AXIS_ACTSTATUSWD2)
  IP_READ2 BLOCK9;
  INITSERVO1 IS1;
  __DECLARE_VAR(LREAL,INCRE)
  __DECLARE_VAR(LREAL,INCRE2)
  __DECLARE_VAR(LREAL,SYN_ERROR)
  __DECLARE_VAR(INT,SYN_SUM)
  __DECLARE_VAR(INT,CYCLE)
  __DECLARE_VAR(LREAL,VEL)
  __DECLARE_VAR(INT,VEL2)
  __DECLARE_VAR(LREAL,DIS)
  __DECLARE_VAR(INT,DIS2)
  __DECLARE_VAR(BOOL,INIT_DONE1)
  __DECLARE_VAR(BOOL,INIT_DONE2)
  __DECLARE_VAR(BOOL,INIT_DONE3)
  __DECLARE_VAR(BOOL,INIT_DONE4)
  __DECLARE_VAR(BOOL,INIT_DONE5)
  __DECLARE_VAR(BOOL,INIT_DONE6)
  __DECLARE_VAR(BOOL,INIT_DONE7)
  __DECLARE_VAR(BOOL,INIT_DONE8)
  MC_RELATIVE BLOCK1;
  HOLD_READ HR1;
  __DECLARE_VAR(INT,GETMP_ON)
  __DECLARE_VAR(INT,GETMP_REL)
  HOLD_READ BLOCK17;
  HOLD_READ BLOCK18;
  INITSERVO1 BLOCK5;
  MC_HALT MMH;
  F_TRIG GH;
  __DECLARE_VAR(BOOL,NOT184_OUT)
  __DECLARE_VAR(BOOL,AND182_OUT)
  __DECLARE_VAR(BOOL,EQ180_OUT)
  __DECLARE_VAR(BOOL,EQ90_OUT)
  __DECLARE_VAR(BOOL,EQ98_OUT)
  __DECLARE_VAR(LREAL,INT_TO_LREAL58_OUT)
  __DECLARE_VAR(LREAL,INT_TO_LREAL59_OUT)
  __DECLARE_VAR(BOOL,AND10_OUT)
  __DECLARE_VAR(BOOL,OR163_OUT)
  __DECLARE_VAR(BOOL,OR8_OUT)

} MAIN_FBD3;

void MAIN_FBD3_init__(MAIN_FBD3 *data__, BOOL retain);
// Code part
void MAIN_FBD3_body__(MAIN_FBD3 *data__);
// FUNCTION_BLOCK TEN_TO_TWO
// Data part
typedef struct {
  // FB Interface - IN, OUT, IN_OUT variables
  __DECLARE_VAR(BOOL,EN)
  __DECLARE_VAR(BOOL,ENO)
  __DECLARE_VAR(UINT,HEXDATA)
  __DECLARE_VAR(BOOL,BIT0)
  __DECLARE_VAR(BOOL,BIT1)
  __DECLARE_VAR(BOOL,BIT2)
  __DECLARE_VAR(BOOL,BIT3)
  __DECLARE_VAR(BOOL,BIT4)
  __DECLARE_VAR(BOOL,BIT5)
  __DECLARE_VAR(BOOL,BIT6)
  __DECLARE_VAR(BOOL,BIT7)

  // FB private variables - TEMP, private and located variables
  __DECLARE_VAR(UINT,TEMPDATA)
  __DECLARE_VAR(UINT,BINARY_BIT0)
  __DECLARE_VAR(UINT,BINARY_BIT1)
  __DECLARE_VAR(UINT,BINARY_BIT2)
  __DECLARE_VAR(UINT,BINARY_BIT3)
  __DECLARE_VAR(UINT,BINARY_BIT4)
  __DECLARE_VAR(UINT,BINARY_BIT5)
  __DECLARE_VAR(UINT,BINARY_BIT6)
  __DECLARE_VAR(UINT,BINARY_BIT7)
  __DECLARE_VAR(UINT,DIVVALUE)
  __DECLARE_VAR(UINT,MODVALUE)
  __DECLARE_VAR(UINT,INDEXCOUNT)

} TEN_TO_TWO;

void TEN_TO_TWO_init__(TEN_TO_TWO *data__, BOOL retain);
// Code part
void TEN_TO_TWO_body__(TEN_TO_TWO *data__);
// PROGRAM MAIN_FBD2
// Data part
typedef struct {
  // PROGRAM Interface - IN, OUT, IN_OUT variables

  // PROGRAM private variables - TEMP, private and located variables
  MC_INIT MI;
  MC_POWER MP;
  __DECLARE_VAR(UINT,UUU)
  BUF_READ BR;
  PPIINFO PP;
  MC_RESET MRS;
  TEN_TO_TWO JKK;
  MC_VELOCITY MMN;
  __DECLARE_VAR(BOOL,BEN)
  __DECLARE_VAR(BOOL,BRST)
  __DECLARE_VAR(BOOL,BMOV)
  MC_VELOCITY MMBN;

} MAIN_FBD2;

void MAIN_FBD2_init__(MAIN_FBD2 *data__, BOOL retain);
// Code part
void MAIN_FBD2_body__(MAIN_FBD2 *data__);
// PROGRAM MAIN_FBD1
// Data part
typedef struct {
  // PROGRAM Interface - IN, OUT, IN_OUT variables

  // PROGRAM private variables - TEMP, private and located variables
  BUF_READ BR;
  BUF_WRITE BW;
  MC_INIT BLOCK1;
  MC_POWER BLOCK2;
  MC_HALT GWS;
  MC_STOP HER;
  __DECLARE_VAR(BOOL,AA)
  __DECLARE_VAR(BOOL,BB)
  __DECLARE_VAR(BOOL,CC)
  __DECLARE_VAR(BOOL,DD)
  MC_VELOCITY FWR;
  R_TRIG GSW;
  R_TRIG BLOCK3;
  R_TRIG BLOCK4;
  MC_RESET VD;
  PPIINFO P1;

} MAIN_FBD1;

void MAIN_FBD1_init__(MAIN_FBD1 *data__, BOOL retain);
// Code part
void MAIN_FBD1_body__(MAIN_FBD1 *data__);
// FUNCTION_BLOCK MC_RELATIVEABS
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

  // FB private variables - TEMP, private and located variables
  MC_ABSOLUTE MA;
  AXIS_INFO AI;
  __DECLARE_VAR(LREAL,CURPC)
  __DECLARE_VAR(LREAL,TOPC)
  __DECLARE_VAR(BOOL,MOVEBOOL)
  __DECLARE_VAR(BOOL,SESSIONOVER)
  STEP __step_list[4];
  UINT __nb_steps;
  ACTION __action_list[12];
  UINT __nb_actions;
  __IEC_BOOL_t __transition_list[4];
  __IEC_BOOL_t __debug_transition_list[4];
  UINT __nb_transitions;
  TIME __lasttick_time;

} MC_RELATIVEABS;

void MC_RELATIVEABS_init__(MC_RELATIVEABS *data__, BOOL retain);
// Code part
void MC_RELATIVEABS_body__(MC_RELATIVEABS *data__);
// PROGRAM TCAMH
// Data part
typedef struct {
  // PROGRAM Interface - IN, OUT, IN_OUT variables

  // PROGRAM private variables - TEMP, private and located variables
  MC_INIT MI;
  MC_POWER MP;
  MC_INIT BLOCK1;
  MC_POWER BLOCK2;
  STCAM SCM;
  __DECLARE_VAR(BOOL,X1)
  __DECLARE_VAR(BOOL,X2)
  MC_CAMIN MCN;
  __DECLARE_VAR(BOOL,X3)
  MC_VELOCITY MV;
  __DECLARE_VAR(BOOL,X4)
  __DECLARE_VAR(BOOL,Y2)
  __DECLARE_VAR(BOOL,X0_5)
  PPIINFO PP1;
  PPIINFO BLOCK6;
  IP_READ IIP;
  SVRO_CONTROL SCC;
  MC_RESET MMR;
  MC_SETPOSITION MMSET;
  __DECLARE_VAR(ULINT,PPP)
  __DECLARE_VAR(BOOL,X5)
  __DECLARE_VAR(UDINT,POS)
  IP_WRITE IIPR;
  __DECLARE_VAR(INT,VV)
  __DECLARE_VAR(LREAL,INT_TO_LREAL138_OUT)

} TCAMH;

void TCAMH_init__(TCAMH *data__, BOOL retain);
// Code part
void TCAMH_body__(TCAMH *data__);
// PROGRAM CAM2
// Data part
typedef struct {
  // PROGRAM Interface - IN, OUT, IN_OUT variables

  // PROGRAM private variables - TEMP, private and located variables
  MC_INIT MI;
  MC_POWER MP;
  TON BLOCK2;
  R_TRIG HH;
  SVRO_CONTROL SSC;
  TON BLOCK1;
  TON BLOCK3;
  MC_RESET MMR;
  __DECLARE_VAR(UDINT,UDPOS)
  MC_INIT BLOCK4;
  MC_POWER BLOCK5;
  STCAM SCM;
  MC_VELOCITY MMV;
  PPIINFO PP12;
  PPIINFO PP2;
  MC_SETPOSITION MMD;
  IP_READ2 IIR;
  __DECLARE_VAR(BOOL,BGN)
  __DECLARE_VAR(LREAL,TRR)
  __DECLARE_VAR(LREAL,IDXX)
  MC_CAMIN MMC;
  R_TRIG UI;
  R_TRIG TYT;
  __DECLARE_VAR(BOOL,GT15_OUT)

} CAM2;

void CAM2_init__(CAM2 *data__, BOOL retain);
// Code part
void CAM2_body__(CAM2 *data__);
// PROGRAM TESTHOME1
// Data part
typedef struct {
  // PROGRAM Interface - IN, OUT, IN_OUT variables

  // PROGRAM private variables - TEMP, private and located variables
  MC_INIT MI;
  MC_POWER MP;
  PPIINFO PP2;
  R_TRIG FDF;
  __DECLARE_VAR(BOOL,TIAOJIAN)
  MC_HOME MH;
  __DECLARE_VAR(BOOL,ZERO)

} TESTHOME1;

void TESTHOME1_init__(TESTHOME1 *data__, BOOL retain);
// Code part
void TESTHOME1_body__(TESTHOME1 *data__);
// FUNCTION_BLOCK RELA_0_DISR
// Data part
typedef struct {
  // FB Interface - IN, OUT, IN_OUT variables
  __DECLARE_VAR(BOOL,EN)
  __DECLARE_VAR(BOOL,ENO)
  __DECLARE_VAR(INT,AXISID)
  __DECLARE_VAR(BOOL,STARTBTN)
  __DECLARE_VAR(LREAL,VELOCITY)
  __DECLARE_VAR(LREAL,STEP_D)
  __DECLARE_VAR(BOOL,STOPALL)

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
  MC_STOP ST1;
  TON TM1;
  RANDI100 RANDD;
  __DECLARE_VAR(INT,DPII)
  __DECLARE_VAR(LREAL,DPI)
  __DECLARE_VAR(LREAL,DPALL)
  MC_ABSOLUTE ABSO1;
  __DECLARE_VAR(LREAL,TTR)
  __DECLARE_VAR(INT,NDPA)
  STEP __step_list[7];
  UINT __nb_steps;
  ACTION __action_list[21];
  UINT __nb_actions;
  __IEC_BOOL_t __transition_list[13];
  __IEC_BOOL_t __debug_transition_list[13];
  UINT __nb_transitions;
  TIME __lasttick_time;

} RELA_0_DISR;

void RELA_0_DISR_init__(RELA_0_DISR *data__, BOOL retain);
// Code part
void RELA_0_DISR_body__(RELA_0_DISR *data__);
// FUNCTION_BLOCK CAMTABLE
// Data part
typedef struct {
  // FB Interface - IN, OUT, IN_OUT variables
  __DECLARE_VAR(BOOL,EN)
  __DECLARE_VAR(BOOL,ENO)
  __DECLARE_VAR(UINT,IDX)
  __DECLARE_VAR(USINT,SIDX)
  __DECLARE_VAR(LREAL,OUTR)

  // FB private variables - TEMP, private and located variables

} CAMTABLE;

void CAMTABLE_init__(CAMTABLE *data__, BOOL retain);
// Code part
void CAMTABLE_body__(CAMTABLE *data__);
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
#endif //__POUS_H
