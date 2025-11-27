#include <elog.h>
void GET_INTERVAL_init__(GET_INTERVAL *data__, BOOL retain) {
  __INIT_VAR(data__->EN,__BOOL_LITERAL(TRUE),retain)
  __INIT_VAR(data__->ENO,__BOOL_LITERAL(TRUE),retain)
  __INIT_VAR(data__->OUTU32,0,retain)
}

// Code part
void GET_INTERVAL_body__(GET_INTERVAL *data__) {
  // Control execution
  if (!__GET_VAR(data__->EN)) {
    __SET_VAR(data__->,ENO,,__BOOL_LITERAL(FALSE));
    return;
  }
  else {
    __SET_VAR(data__->,ENO,,__BOOL_LITERAL(TRUE));
  }
  // Initialise TEMP variables

  __IL_DEFVAR_T __IL_DEFVAR;
  __IL_DEFVAR_T __IL_DEFVAR_BACK;
  #define GetFbVar(var,...) __GET_VAR(data__->var,__VA_ARGS__)
  #define SetFbVar(var,val,...) __SET_VAR(data__->,var,__VA_ARGS__,val)
extern int get_interval(GET_INTERVAL*); get_interval(data__);
  #undef GetFbVar
  #undef SetFbVar
;

  goto __end;

__end:
  return;
} // GET_INTERVAL_body__() 





void FPGA_WRITE_init__(FPGA_WRITE *data__, BOOL retain) {
  __INIT_VAR(data__->EN,__BOOL_LITERAL(TRUE),retain)
  __INIT_VAR(data__->ENO,__BOOL_LITERAL(TRUE),retain)
  __INIT_VAR(data__->VARADDR,0,retain)
  __INIT_VAR(data__->INU16,0,retain)
}

// Code part
void FPGA_WRITE_body__(FPGA_WRITE *data__) {
  // Control execution
  if (!__GET_VAR(data__->EN)) {
    __SET_VAR(data__->,ENO,,__BOOL_LITERAL(FALSE));
    return;
  }
  else {
    __SET_VAR(data__->,ENO,,__BOOL_LITERAL(TRUE));
  }
  // Initialise TEMP variables

  __IL_DEFVAR_T __IL_DEFVAR;
  __IL_DEFVAR_T __IL_DEFVAR_BACK;
  #define GetFbVar(var,...) __GET_VAR(data__->var,__VA_ARGS__)
  #define SetFbVar(var,val,...) __SET_VAR(data__->,var,__VA_ARGS__,val)
extern int fpga_write(FPGA_WRITE*); fpga_write(data__);
  #undef GetFbVar
  #undef SetFbVar
;

  goto __end;

__end:
  return;
} // FPGA_WRITE_body__() 





void IP_READ2_init__(IP_READ2 *data__, BOOL retain) {
  __INIT_VAR(data__->EN,__BOOL_LITERAL(TRUE),retain)
  __INIT_VAR(data__->ENO,__BOOL_LITERAL(TRUE),retain)
  __INIT_VAR(data__->NODEID,0,retain)
  __INIT_VAR(data__->POSU32,0,retain)
  __INIT_VAR(data__->STATUS,0,retain)
}

// Code part
void IP_READ2_body__(IP_READ2 *data__) {
  // Control execution
  if (!__GET_VAR(data__->EN)) {
    __SET_VAR(data__->,ENO,,__BOOL_LITERAL(FALSE));
    return;
  }
  else {
    __SET_VAR(data__->,ENO,,__BOOL_LITERAL(TRUE));
  }
  // Initialise TEMP variables

  __IL_DEFVAR_T __IL_DEFVAR;
  __IL_DEFVAR_T __IL_DEFVAR_BACK;
  #define GetFbVar(var,...) __GET_VAR(data__->var,__VA_ARGS__)
  #define SetFbVar(var,val,...) __SET_VAR(data__->,var,__VA_ARGS__,val)
extern int ip_read2(IP_READ2*); ip_read2(data__);
  #undef GetFbVar
  #undef SetFbVar
;

  goto __end;

__end:
  return;
} // IP_READ2_body__() 





void QTOUCH_WRITE_init__(QTOUCH_WRITE *data__, BOOL retain) {
  __INIT_VAR(data__->EN,__BOOL_LITERAL(TRUE),retain)
  __INIT_VAR(data__->ENO,__BOOL_LITERAL(TRUE),retain)
  __INIT_VAR(data__->VARADDR,0,retain)
  __INIT_VAR(data__->INR,0,retain)
}

// Code part
void QTOUCH_WRITE_body__(QTOUCH_WRITE *data__) {
  // Control execution
  if (!__GET_VAR(data__->EN)) {
    __SET_VAR(data__->,ENO,,__BOOL_LITERAL(FALSE));
    return;
  }
  else {
    __SET_VAR(data__->,ENO,,__BOOL_LITERAL(TRUE));
  }
  // Initialise TEMP variables

  __IL_DEFVAR_T __IL_DEFVAR;
  __IL_DEFVAR_T __IL_DEFVAR_BACK;
  #define GetFbVar(var,...) __GET_VAR(data__->var,__VA_ARGS__)
  #define SetFbVar(var,val,...) __SET_VAR(data__->,var,__VA_ARGS__,val)
extern int qtouch_write(QTOUCH_WRITE*); qtouch_write(data__);
  #undef GetFbVar
  #undef SetFbVar
;

  goto __end;

__end:
  return;
} // QTOUCH_WRITE_body__() 





void COIL_WRITE_init__(COIL_WRITE *data__, BOOL retain) {
  __INIT_VAR(data__->EN,__BOOL_LITERAL(TRUE),retain)
  __INIT_VAR(data__->ENO,__BOOL_LITERAL(TRUE),retain)
  __INIT_VAR(data__->MBADDR,0,retain)
  __INIT_VAR(data__->INB,__BOOL_LITERAL(FALSE),retain)
}

// Code part
void COIL_WRITE_body__(COIL_WRITE *data__) {
  // Control execution
  if (!__GET_VAR(data__->EN)) {
    __SET_VAR(data__->,ENO,,__BOOL_LITERAL(FALSE));
    return;
  }
  else {
    __SET_VAR(data__->,ENO,,__BOOL_LITERAL(TRUE));
  }
  // Initialise TEMP variables

  __IL_DEFVAR_T __IL_DEFVAR;
  __IL_DEFVAR_T __IL_DEFVAR_BACK;
  #define GetFbVar(var,...) __GET_VAR(data__->var,__VA_ARGS__)
  #define SetFbVar(var,val,...) __SET_VAR(data__->,var,__VA_ARGS__,val)
extern int coil_write(COIL_WRITE*); coil_write(data__);
  #undef GetFbVar
  #undef SetFbVar
;

  goto __end;

__end:
  return;
} // COIL_WRITE_body__() 





void RDSDO_RESULT_init__(RDSDO_RESULT *data__, BOOL retain) {
  __INIT_VAR(data__->EN,__BOOL_LITERAL(TRUE),retain)
  __INIT_VAR(data__->ENO,__BOOL_LITERAL(TRUE),retain)
  __INIT_VAR(data__->EXECUTE,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->NODEID,0,retain)
  __INIT_VAR(data__->RDOK,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->VAL,0,retain)
  __INIT_VAR(data__->SIZE,0,retain)
}

// Code part
void RDSDO_RESULT_body__(RDSDO_RESULT *data__) {
  // Control execution
  if (!__GET_VAR(data__->EN)) {
    __SET_VAR(data__->,ENO,,__BOOL_LITERAL(FALSE));
    return;
  }
  else {
    __SET_VAR(data__->,ENO,,__BOOL_LITERAL(TRUE));
  }
  // Initialise TEMP variables

  __IL_DEFVAR_T __IL_DEFVAR;
  __IL_DEFVAR_T __IL_DEFVAR_BACK;
  #define GetFbVar(var,...) __GET_VAR(data__->var,__VA_ARGS__)
  #define SetFbVar(var,val,...) __SET_VAR(data__->,var,__VA_ARGS__,val)
extern int rdsdo_result(RDSDO_RESULT*); rdsdo_result(data__);
  #undef GetFbVar
  #undef SetFbVar
;

  goto __end;

__end:
  return;
} // RDSDO_RESULT_body__() 





void WRITE_SDO_init__(WRITE_SDO *data__, BOOL retain) {
  __INIT_VAR(data__->EN,__BOOL_LITERAL(TRUE),retain)
  __INIT_VAR(data__->ENO,__BOOL_LITERAL(TRUE),retain)
  __INIT_VAR(data__->NODEID,0,retain)
  __INIT_VAR(data__->INDEX,0,retain)
  __INIT_VAR(data__->SUBINDEX,0,retain)
  __INIT_VAR(data__->LENV,0,retain)
  __INIT_VAR(data__->VAL,0,retain)
  __INIT_VAR(data__->DONE,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->ERR,0,retain)
}

// Code part
void WRITE_SDO_body__(WRITE_SDO *data__) {
  // Control execution
  if (!__GET_VAR(data__->EN)) {
    __SET_VAR(data__->,ENO,,__BOOL_LITERAL(FALSE));
    return;
  }
  else {
    __SET_VAR(data__->,ENO,,__BOOL_LITERAL(TRUE));
  }
  // Initialise TEMP variables

  __IL_DEFVAR_T __IL_DEFVAR;
  __IL_DEFVAR_T __IL_DEFVAR_BACK;
  #define GetFbVar(var,...) __GET_VAR(data__->var,__VA_ARGS__)
  #define SetFbVar(var,val,...) __SET_VAR(data__->,var,__VA_ARGS__,val)
extern int write_sdo(WRITE_SDO*); write_sdo(data__);
  #undef GetFbVar
  #undef SetFbVar
;

  goto __end;

__end:
  return;
} // WRITE_SDO_body__() 





void BUF_WRITE_init__(BUF_WRITE *data__, BOOL retain) {
  __INIT_VAR(data__->EN,__BOOL_LITERAL(TRUE),retain)
  __INIT_VAR(data__->ENO,__BOOL_LITERAL(TRUE),retain)
  __INIT_VAR(data__->BUFTYPE,0,retain)
  __INIT_VAR(data__->IDX,0,retain)
  __INIT_VAR(data__->INU16,0,retain)
}

// Code part
void BUF_WRITE_body__(BUF_WRITE *data__) {
  // Control execution
  if (!__GET_VAR(data__->EN)) {
    __SET_VAR(data__->,ENO,,__BOOL_LITERAL(FALSE));
    return;
  }
  else {
    __SET_VAR(data__->,ENO,,__BOOL_LITERAL(TRUE));
  }
  // Initialise TEMP variables

  __IL_DEFVAR_T __IL_DEFVAR;
  __IL_DEFVAR_T __IL_DEFVAR_BACK;
  #define GetFbVar(var,...) __GET_VAR(data__->var,__VA_ARGS__)
  #define SetFbVar(var,val,...) __SET_VAR(data__->,var,__VA_ARGS__,val)
extern int buf_write(BUF_WRITE*); buf_write(data__);
  #undef GetFbVar
  #undef SetFbVar
;

  goto __end;

__end:
  return;
} // BUF_WRITE_body__() 





void RBUF_READ_init__(RBUF_READ *data__, BOOL retain) {
  __INIT_VAR(data__->EN,__BOOL_LITERAL(TRUE),retain)
  __INIT_VAR(data__->ENO,__BOOL_LITERAL(TRUE),retain)
  __INIT_VAR(data__->VARADDR,0,retain)
  __INIT_VAR(data__->OUTR,0,retain)
}

// Code part
void RBUF_READ_body__(RBUF_READ *data__) {
  // Control execution
  if (!__GET_VAR(data__->EN)) {
    __SET_VAR(data__->,ENO,,__BOOL_LITERAL(FALSE));
    return;
  }
  else {
    __SET_VAR(data__->,ENO,,__BOOL_LITERAL(TRUE));
  }
  // Initialise TEMP variables

  __IL_DEFVAR_T __IL_DEFVAR;
  __IL_DEFVAR_T __IL_DEFVAR_BACK;
  #define GetFbVar(var,...) __GET_VAR(data__->var,__VA_ARGS__)
  #define SetFbVar(var,val,...) __SET_VAR(data__->,var,__VA_ARGS__,val)
extern int rbuf_read(RBUF_READ*); rbuf_read(data__);
  #undef GetFbVar
  #undef SetFbVar
;

  goto __end;

__end:
  return;
} // RBUF_READ_body__() 





void RBUF_READ_U16_init__(RBUF_READ_U16 *data__, BOOL retain) {
  __INIT_VAR(data__->EN,__BOOL_LITERAL(TRUE),retain)
  __INIT_VAR(data__->ENO,__BOOL_LITERAL(TRUE),retain)
  __INIT_VAR(data__->VARADDR,0,retain)
  __INIT_VAR(data__->OUTU161,0,retain)
  __INIT_VAR(data__->OUTU162,0,retain)
  __INIT_VAR(data__->OUTU163,0,retain)
  __INIT_VAR(data__->OUTU164,0,retain)
}

// Code part
void RBUF_READ_U16_body__(RBUF_READ_U16 *data__) {
  // Control execution
  if (!__GET_VAR(data__->EN)) {
    __SET_VAR(data__->,ENO,,__BOOL_LITERAL(FALSE));
    return;
  }
  else {
    __SET_VAR(data__->,ENO,,__BOOL_LITERAL(TRUE));
  }
  // Initialise TEMP variables

  __IL_DEFVAR_T __IL_DEFVAR;
  __IL_DEFVAR_T __IL_DEFVAR_BACK;
  #define GetFbVar(var,...) __GET_VAR(data__->var,__VA_ARGS__)
  #define SetFbVar(var,val,...) __SET_VAR(data__->,var,__VA_ARGS__,val)
extern int rbuf_read_u16(RBUF_READ_U16*); rbuf_read_u16(data__);
  #undef GetFbVar
  #undef SetFbVar
;

  goto __end;

__end:
  return;
} // RBUF_READ_U16_body__() 





void LRABS_init__(LRABS *data__, BOOL retain) {
  __INIT_VAR(data__->EN,__BOOL_LITERAL(TRUE),retain)
  __INIT_VAR(data__->ENO,__BOOL_LITERAL(TRUE),retain)
  __INIT_VAR(data__->INLR,0,retain)
  __INIT_VAR(data__->OUTLR,0,retain)
}

// Code part
void LRABS_body__(LRABS *data__) {
  // Control execution
  if (!__GET_VAR(data__->EN)) {
    __SET_VAR(data__->,ENO,,__BOOL_LITERAL(FALSE));
    return;
  }
  else {
    __SET_VAR(data__->,ENO,,__BOOL_LITERAL(TRUE));
  }
  // Initialise TEMP variables

  __IL_DEFVAR_T __IL_DEFVAR;
  __IL_DEFVAR_T __IL_DEFVAR_BACK;
  #define GetFbVar(var,...) __GET_VAR(data__->var,__VA_ARGS__)
  #define SetFbVar(var,val,...) __SET_VAR(data__->,var,__VA_ARGS__,val)
extern int lrabs(LRABS*); lrabs(data__);
  #undef GetFbVar
  #undef SetFbVar
;

  goto __end;

__end:
  return;
} // LRABS_body__() 





void PLC_PAUSE_init__(PLC_PAUSE *data__, BOOL retain) {
  __INIT_VAR(data__->EN,__BOOL_LITERAL(TRUE),retain)
  __INIT_VAR(data__->ENO,__BOOL_LITERAL(TRUE),retain)
  __INIT_VAR(data__->PAUSE,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->PAUSED,__BOOL_LITERAL(FALSE),retain)
}

// Code part
void PLC_PAUSE_body__(PLC_PAUSE *data__) {
  // Control execution
  if (!__GET_VAR(data__->EN)) {
    __SET_VAR(data__->,ENO,,__BOOL_LITERAL(FALSE));
    return;
  }
  else {
    __SET_VAR(data__->,ENO,,__BOOL_LITERAL(TRUE));
  }
  // Initialise TEMP variables

  __IL_DEFVAR_T __IL_DEFVAR;
  __IL_DEFVAR_T __IL_DEFVAR_BACK;
  #define GetFbVar(var,...) __GET_VAR(data__->var,__VA_ARGS__)
  #define SetFbVar(var,val,...) __SET_VAR(data__->,var,__VA_ARGS__,val)
extern int plc_pause(PLC_PAUSE*); plc_pause(data__);
  #undef GetFbVar
  #undef SetFbVar
;

  goto __end;

__end:
  return;
} // PLC_PAUSE_body__() 





void SYS_TIM_init__(SYS_TIM *data__, BOOL retain) {
  __INIT_VAR(data__->EN,__BOOL_LITERAL(TRUE),retain)
  __INIT_VAR(data__->ENO,__BOOL_LITERAL(TRUE),retain)
  __INIT_VAR(data__->SYS_D_T,__dt_to_timespec(0, 0, 0, 1, 1, 1970),retain)
  __INIT_VAR(data__->DTUL,0,retain)
}

// Code part
void SYS_TIM_body__(SYS_TIM *data__) {
  // Control execution
  if (!__GET_VAR(data__->EN)) {
    __SET_VAR(data__->,ENO,,__BOOL_LITERAL(FALSE));
    return;
  }
  else {
    __SET_VAR(data__->,ENO,,__BOOL_LITERAL(TRUE));
  }
  // Initialise TEMP variables

  __IL_DEFVAR_T __IL_DEFVAR;
  __IL_DEFVAR_T __IL_DEFVAR_BACK;
  #define GetFbVar(var,...) __GET_VAR(data__->var,__VA_ARGS__)
  #define SetFbVar(var,val,...) __SET_VAR(data__->,var,__VA_ARGS__,val)
extern int sys_tim(SYS_TIM*); sys_tim(data__);
  #undef GetFbVar
  #undef SetFbVar
;

  goto __end;

__end:
  return;
} // SYS_TIM_body__() 





void SYS_CFG_init__(SYS_CFG *data__, BOOL retain) {
  __INIT_VAR(data__->EN,__BOOL_LITERAL(TRUE),retain)
  __INIT_VAR(data__->ENO,__BOOL_LITERAL(TRUE),retain)
  __INIT_VAR(data__->CYCLE_TIME,0,retain)
}

// Code part
void SYS_CFG_body__(SYS_CFG *data__) {
  // Control execution
  if (!__GET_VAR(data__->EN)) {
    __SET_VAR(data__->,ENO,,__BOOL_LITERAL(FALSE));
    return;
  }
  else {
    __SET_VAR(data__->,ENO,,__BOOL_LITERAL(TRUE));
  }
  // Initialise TEMP variables

  __IL_DEFVAR_T __IL_DEFVAR;
  __IL_DEFVAR_T __IL_DEFVAR_BACK;
  #define GetFbVar(var,...) __GET_VAR(data__->var,__VA_ARGS__)
  #define SetFbVar(var,val,...) __SET_VAR(data__->,var,__VA_ARGS__,val)
extern int sys_cfg(SYS_CFG*); sys_cfg(data__);
  #undef GetFbVar
  #undef SetFbVar
;

  goto __end;

__end:
  return;
} // SYS_CFG_body__() 





void SVRO_CLEARFAULT_init__(SVRO_CLEARFAULT *data__, BOOL retain) {
  __INIT_VAR(data__->EN,__BOOL_LITERAL(TRUE),retain)
  __INIT_VAR(data__->ENO,__BOOL_LITERAL(TRUE),retain)
  __INIT_VAR(data__->AXISID,0,retain)
  __INIT_VAR(data__->ENABLE,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->CONTROLWORD,0,retain)
}

// Code part
void SVRO_CLEARFAULT_body__(SVRO_CLEARFAULT *data__) {
  // Control execution
  if (!__GET_VAR(data__->EN)) {
    __SET_VAR(data__->,ENO,,__BOOL_LITERAL(FALSE));
    return;
  }
  else {
    __SET_VAR(data__->,ENO,,__BOOL_LITERAL(TRUE));
  }
  // Initialise TEMP variables

  __IL_DEFVAR_T __IL_DEFVAR;
  __IL_DEFVAR_T __IL_DEFVAR_BACK;
  #define GetFbVar(var,...) __GET_VAR(data__->var,__VA_ARGS__)
  #define SetFbVar(var,val,...) __SET_VAR(data__->,var,__VA_ARGS__,val)
extern int svro_clearfault(SVRO_CLEARFAULT*); svro_clearfault(data__);
  #undef GetFbVar
  #undef SetFbVar
;

  goto __end;

__end:
  return;
} // SVRO_CLEARFAULT_body__() 





void TORQUE_READ_init__(TORQUE_READ *data__, BOOL retain) {
  __INIT_VAR(data__->EN,__BOOL_LITERAL(TRUE),retain)
  __INIT_VAR(data__->ENO,__BOOL_LITERAL(TRUE),retain)
  __INIT_VAR(data__->AXISID,0,retain)
  __INIT_VAR(data__->ACTUALTORQUE,0,retain)
  __INIT_VAR(data__->ACTUALCURRENT,0,retain)
}

// Code part
void TORQUE_READ_body__(TORQUE_READ *data__) {
  // Control execution
  if (!__GET_VAR(data__->EN)) {
    __SET_VAR(data__->,ENO,,__BOOL_LITERAL(FALSE));
    return;
  }
  else {
    __SET_VAR(data__->,ENO,,__BOOL_LITERAL(TRUE));
  }
  // Initialise TEMP variables

  __IL_DEFVAR_T __IL_DEFVAR;
  __IL_DEFVAR_T __IL_DEFVAR_BACK;
  #define GetFbVar(var,...) __GET_VAR(data__->var,__VA_ARGS__)
  #define SetFbVar(var,val,...) __SET_VAR(data__->,var,__VA_ARGS__,val)
extern int torque_read(TORQUE_READ*); torque_read(data__);
  #undef GetFbVar
  #undef SetFbVar
;

  goto __end;

__end:
  return;
} // TORQUE_READ_body__() 





void GET_CAM_init__(GET_CAM *data__, BOOL retain) {
  __INIT_VAR(data__->EN,__BOOL_LITERAL(TRUE),retain)
  __INIT_VAR(data__->ENO,__BOOL_LITERAL(TRUE),retain)
  __INIT_VAR(data__->TABLEID,0,retain)
  __INIT_VAR(data__->IDX,0,retain)
  __INIT_VAR(data__->VALUE,0,retain)
}

// Code part
void GET_CAM_body__(GET_CAM *data__) {
  // Control execution
  if (!__GET_VAR(data__->EN)) {
    __SET_VAR(data__->,ENO,,__BOOL_LITERAL(FALSE));
    return;
  }
  else {
    __SET_VAR(data__->,ENO,,__BOOL_LITERAL(TRUE));
  }
  // Initialise TEMP variables

  __IL_DEFVAR_T __IL_DEFVAR;
  __IL_DEFVAR_T __IL_DEFVAR_BACK;
  #define GetFbVar(var,...) __GET_VAR(data__->var,__VA_ARGS__)
  #define SetFbVar(var,val,...) __SET_VAR(data__->,var,__VA_ARGS__,val)
extern int get_cam(GET_CAM*); get_cam(data__);
  #undef GetFbVar
  #undef SetFbVar
;

  goto __end;

__end:
  return;
} // GET_CAM_body__() 





void SVRO_CONTROL_init__(SVRO_CONTROL *data__, BOOL retain) {
  __INIT_VAR(data__->EN,__BOOL_LITERAL(TRUE),retain)
  __INIT_VAR(data__->ENO,__BOOL_LITERAL(TRUE),retain)
  __INIT_VAR(data__->AXISID,0,retain)
  __INIT_VAR(data__->ENABLE,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->CONTROLWORD,0,retain)
}

// Code part
void SVRO_CONTROL_body__(SVRO_CONTROL *data__) {
  // Control execution
  if (!__GET_VAR(data__->EN)) {
    __SET_VAR(data__->,ENO,,__BOOL_LITERAL(FALSE));
    return;
  }
  else {
    __SET_VAR(data__->,ENO,,__BOOL_LITERAL(TRUE));
  }
  // Initialise TEMP variables

  __IL_DEFVAR_T __IL_DEFVAR;
  __IL_DEFVAR_T __IL_DEFVAR_BACK;
  #define GetFbVar(var,...) __GET_VAR(data__->var,__VA_ARGS__)
  #define SetFbVar(var,val,...) __SET_VAR(data__->,var,__VA_ARGS__,val)
extern int svro_control(SVRO_CONTROL*); svro_control(data__);
  #undef GetFbVar
  #undef SetFbVar
;

  goto __end;

__end:
  return;
} // SVRO_CONTROL_body__() 





void AXES_GROUP_init__(AXES_GROUP *data__, BOOL retain) {
  __INIT_VAR(data__->EN,__BOOL_LITERAL(TRUE),retain)
  __INIT_VAR(data__->ENO,__BOOL_LITERAL(TRUE),retain)
  __INIT_VAR(data__->ROW,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->GROUPID,0,retain)
  __INIT_VAR(data__->PNAME,__STRING_LITERAL(0,""),retain)
  __INIT_VAR(data__->INB,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->INU32,0,retain)
  __INIT_VAR(data__->INR,0,retain)
  __INIT_VAR(data__->INS,__STRING_LITERAL(0,""),retain)
  __INIT_VAR(data__->OUTB,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->OUTU32,0,retain)
  __INIT_VAR(data__->OUTR,0,retain)
  __INIT_VAR(data__->OUTS,__STRING_LITERAL(0,""),retain)
  __INIT_VAR(data__->DONEFLAG,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->EXECUTEFLAG,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->COMMANDTYPE,0,retain)
  __INIT_VAR(data__->ENABLE,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->A1ID,0,retain)
  __INIT_VAR(data__->A2ID,0,retain)
  __INIT_VAR(data__->A3ID,0,retain)
  __INIT_VAR(data__->A4ID,0,retain)
  __INIT_VAR(data__->A5ID,0,retain)
  __INIT_VAR(data__->A6ID,0,retain)
  __INIT_VAR(data__->A7ID,0,retain)
  __INIT_VAR(data__->A8ID,0,retain)
  __INIT_VAR(data__->PC,0,retain)
  __INIT_VAR(data__->MCSX,0,retain)
  __INIT_VAR(data__->MCSY,0,retain)
  __INIT_VAR(data__->MCSZ,0,retain)
  __INIT_VAR(data__->MCSI,0,retain)
  __INIT_VAR(data__->MCSJ,0,retain)
  __INIT_VAR(data__->MCSK,0,retain)
  __INIT_VAR(data__->COMMANDP,0,retain)
  __INIT_VAR(data__->COMMANDV,0,retain)
  __INIT_VAR(data__->COMMANDA,0,retain)
  __INIT_VAR(data__->ABORTFLAG,0,retain)
  __INIT_VAR(data__->KINNO,0,retain)
  __INIT_VAR(data__->STATE,0,retain)
  __INIT_VAR(data__->FEEDRATE,0,retain)
  __INIT_VAR(data__->VMAX,0,retain)
  __INIT_VAR(data__->AMAX,0,retain)
}

// Code part
void AXES_GROUP_body__(AXES_GROUP *data__) {
  // Control execution
  if (!__GET_VAR(data__->EN)) {
    __SET_VAR(data__->,ENO,,__BOOL_LITERAL(FALSE));
    return;
  }
  else {
    __SET_VAR(data__->,ENO,,__BOOL_LITERAL(TRUE));
  }
  // Initialise TEMP variables

  __IL_DEFVAR_T __IL_DEFVAR;
  __IL_DEFVAR_T __IL_DEFVAR_BACK;
  #define GetFbVar(var,...) __GET_VAR(data__->var,__VA_ARGS__)
  #define SetFbVar(var,val,...) __SET_VAR(data__->,var,__VA_ARGS__,val)
extern int group_op(AXES_GROUP*); group_op(data__);
  #undef GetFbVar
  #undef SetFbVar
;

  goto __end;

__end:
  return;
} // AXES_GROUP_body__() 





void QTOUCH_READ_init__(QTOUCH_READ *data__, BOOL retain) {
  __INIT_VAR(data__->EN,__BOOL_LITERAL(TRUE),retain)
  __INIT_VAR(data__->ENO,__BOOL_LITERAL(TRUE),retain)
  __INIT_VAR(data__->VARADDR,0,retain)
  __INIT_VAR(data__->OUTR,0,retain)
}

// Code part
void QTOUCH_READ_body__(QTOUCH_READ *data__) {
  // Control execution
  if (!__GET_VAR(data__->EN)) {
    __SET_VAR(data__->,ENO,,__BOOL_LITERAL(FALSE));
    return;
  }
  else {
    __SET_VAR(data__->,ENO,,__BOOL_LITERAL(TRUE));
  }
  // Initialise TEMP variables

  __IL_DEFVAR_T __IL_DEFVAR;
  __IL_DEFVAR_T __IL_DEFVAR_BACK;
  #define GetFbVar(var,...) __GET_VAR(data__->var,__VA_ARGS__)
  #define SetFbVar(var,val,...) __SET_VAR(data__->,var,__VA_ARGS__,val)
extern int qtouch_read(QTOUCH_READ*); qtouch_read(data__);
  #undef GetFbVar
  #undef SetFbVar
;

  goto __end;

__end:
  return;
} // QTOUCH_READ_body__() 





void SEMAP_init__(SEMAP *data__, BOOL retain) {
  __INIT_VAR(data__->EN,__BOOL_LITERAL(TRUE),retain)
  __INIT_VAR(data__->ENO,__BOOL_LITERAL(TRUE),retain)
  __INIT_VAR(data__->IDX,0,retain)
  __INIT_VAR(data__->POK,__BOOL_LITERAL(FALSE),retain)
}

// Code part
void SEMAP_body__(SEMAP *data__) {
  // Control execution
  if (!__GET_VAR(data__->EN)) {
    __SET_VAR(data__->,ENO,,__BOOL_LITERAL(FALSE));
    return;
  }
  else {
    __SET_VAR(data__->,ENO,,__BOOL_LITERAL(TRUE));
  }
  // Initialise TEMP variables

  __IL_DEFVAR_T __IL_DEFVAR;
  __IL_DEFVAR_T __IL_DEFVAR_BACK;
  #define GetFbVar(var,...) __GET_VAR(data__->var,__VA_ARGS__)
  #define SetFbVar(var,val,...) __SET_VAR(data__->,var,__VA_ARGS__,val)
extern int semap(SEMAP*); semap(data__);
  #undef GetFbVar
  #undef SetFbVar
;

  goto __end;

__end:
  return;
} // SEMAP_body__() 





void SEMAV_init__(SEMAV *data__, BOOL retain) {
  __INIT_VAR(data__->EN,__BOOL_LITERAL(TRUE),retain)
  __INIT_VAR(data__->ENO,__BOOL_LITERAL(TRUE),retain)
  __INIT_VAR(data__->IDX,0,retain)
  __INIT_VAR(data__->VOK,__BOOL_LITERAL(FALSE),retain)
}

// Code part
void SEMAV_body__(SEMAV *data__) {
  // Control execution
  if (!__GET_VAR(data__->EN)) {
    __SET_VAR(data__->,ENO,,__BOOL_LITERAL(FALSE));
    return;
  }
  else {
    __SET_VAR(data__->,ENO,,__BOOL_LITERAL(TRUE));
  }
  // Initialise TEMP variables

  __IL_DEFVAR_T __IL_DEFVAR;
  __IL_DEFVAR_T __IL_DEFVAR_BACK;
  #define GetFbVar(var,...) __GET_VAR(data__->var,__VA_ARGS__)
  #define SetFbVar(var,val,...) __SET_VAR(data__->,var,__VA_ARGS__,val)
extern int semav(SEMAV*); semav(data__);
  #undef GetFbVar
  #undef SetFbVar
;

  goto __end;

__end:
  return;
} // SEMAV_body__() 





void IP_WRITE_init__(IP_WRITE *data__, BOOL retain) {
  __INIT_VAR(data__->EN,__BOOL_LITERAL(TRUE),retain)
  __INIT_VAR(data__->ENO,__BOOL_LITERAL(TRUE),retain)
  __INIT_VAR(data__->NODEID,0,retain)
  __INIT_VAR(data__->POS,0,retain)
}

// Code part
void IP_WRITE_body__(IP_WRITE *data__) {
  // Control execution
  if (!__GET_VAR(data__->EN)) {
    __SET_VAR(data__->,ENO,,__BOOL_LITERAL(FALSE));
    return;
  }
  else {
    __SET_VAR(data__->,ENO,,__BOOL_LITERAL(TRUE));
  }
  // Initialise TEMP variables

  __IL_DEFVAR_T __IL_DEFVAR;
  __IL_DEFVAR_T __IL_DEFVAR_BACK;
  #define GetFbVar(var,...) __GET_VAR(data__->var,__VA_ARGS__)
  #define SetFbVar(var,val,...) __SET_VAR(data__->,var,__VA_ARGS__,val)
extern int ip_write(IP_WRITE*); ip_write(data__);
  #undef GetFbVar
  #undef SetFbVar
;

  goto __end;

__end:
  return;
} // IP_WRITE_body__() 





void HOLD_WRITE_init__(HOLD_WRITE *data__, BOOL retain) {
  __INIT_VAR(data__->EN,__BOOL_LITERAL(TRUE),retain)
  __INIT_VAR(data__->ENO,__BOOL_LITERAL(TRUE),retain)
  __INIT_VAR(data__->MBADDR,0,retain)
  __INIT_VAR(data__->INTPVALUE,0,retain)
}

// Code part
void HOLD_WRITE_body__(HOLD_WRITE *data__) {
  // Control execution
  if (!__GET_VAR(data__->EN)) {
    __SET_VAR(data__->,ENO,,__BOOL_LITERAL(FALSE));
    return;
  }
  else {
    __SET_VAR(data__->,ENO,,__BOOL_LITERAL(TRUE));
  }
  // Initialise TEMP variables

  __IL_DEFVAR_T __IL_DEFVAR;
  __IL_DEFVAR_T __IL_DEFVAR_BACK;
  #define GetFbVar(var,...) __GET_VAR(data__->var,__VA_ARGS__)
  #define SetFbVar(var,val,...) __SET_VAR(data__->,var,__VA_ARGS__,val)
extern int hold_write(HOLD_WRITE*); hold_write(data__);
  #undef GetFbVar
  #undef SetFbVar
;

  goto __end;

__end:
  return;
} // HOLD_WRITE_body__() 





void HOLD_READ_init__(HOLD_READ *data__, BOOL retain) {
  __INIT_VAR(data__->EN,__BOOL_LITERAL(TRUE),retain)
  __INIT_VAR(data__->ENO,__BOOL_LITERAL(TRUE),retain)
  __INIT_VAR(data__->MBADDR,0,retain)
  __INIT_VAR(data__->OUTI,0,retain)
}

// Code part
void HOLD_READ_body__(HOLD_READ *data__) {
  // Control execution
  if (!__GET_VAR(data__->EN)) {
    __SET_VAR(data__->,ENO,,__BOOL_LITERAL(FALSE));
    return;
  }
  else {
    __SET_VAR(data__->,ENO,,__BOOL_LITERAL(TRUE));
  }
  // Initialise TEMP variables

  __IL_DEFVAR_T __IL_DEFVAR;
  __IL_DEFVAR_T __IL_DEFVAR_BACK;
  #define GetFbVar(var,...) __GET_VAR(data__->var,__VA_ARGS__)
  #define SetFbVar(var,val,...) __SET_VAR(data__->,var,__VA_ARGS__,val)
extern int hold_read(HOLD_READ*); hold_read(data__);
  #undef GetFbVar
  #undef SetFbVar
;

  goto __end;

__end:
  return;
} // HOLD_READ_body__() 





void DBGSEMA_init__(DBGSEMA *data__, BOOL retain) {
  __INIT_VAR(data__->EN,__BOOL_LITERAL(TRUE),retain)
  __INIT_VAR(data__->ENO,__BOOL_LITERAL(TRUE),retain)
  __INIT_VAR(data__->IDX,0,retain)
  __INIT_VAR(data__->VAL,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->TICKP,0,retain)
  __INIT_VAR(data__->TICKV,0,retain)
  __INIT_VAR(data__->COUNT,0,retain)
}

// Code part
void DBGSEMA_body__(DBGSEMA *data__) {
  // Control execution
  if (!__GET_VAR(data__->EN)) {
    __SET_VAR(data__->,ENO,,__BOOL_LITERAL(FALSE));
    return;
  }
  else {
    __SET_VAR(data__->,ENO,,__BOOL_LITERAL(TRUE));
  }
  // Initialise TEMP variables

  __IL_DEFVAR_T __IL_DEFVAR;
  __IL_DEFVAR_T __IL_DEFVAR_BACK;
  #define GetFbVar(var,...) __GET_VAR(data__->var,__VA_ARGS__)
  #define SetFbVar(var,val,...) __SET_VAR(data__->,var,__VA_ARGS__,val)
extern int dbgsema(DBGSEMA*); dbgsema(data__);
  #undef GetFbVar
  #undef SetFbVar
;

  goto __end;

__end:
  return;
} // DBGSEMA_body__() 





void OD_READ_init__(OD_READ *data__, BOOL retain) {
  __INIT_VAR(data__->EN,__BOOL_LITERAL(TRUE),retain)
  __INIT_VAR(data__->ENO,__BOOL_LITERAL(TRUE),retain)
  __INIT_VAR(data__->INDEX,0,retain)
  __INIT_VAR(data__->SUBINDEX,0,retain)
  __INIT_VAR(data__->OUTR,0,retain)
}

// Code part
void OD_READ_body__(OD_READ *data__) {
  // Control execution
  if (!__GET_VAR(data__->EN)) {
    __SET_VAR(data__->,ENO,,__BOOL_LITERAL(FALSE));
    return;
  }
  else {
    __SET_VAR(data__->,ENO,,__BOOL_LITERAL(TRUE));
  }
  // Initialise TEMP variables

  __IL_DEFVAR_T __IL_DEFVAR;
  __IL_DEFVAR_T __IL_DEFVAR_BACK;
  #define GetFbVar(var,...) __GET_VAR(data__->var,__VA_ARGS__)
  #define SetFbVar(var,val,...) __SET_VAR(data__->,var,__VA_ARGS__,val)
extern int od_read(OD_READ*); od_read(data__);
  #undef GetFbVar
  #undef SetFbVar
;

  goto __end;

__end:
  return;
} // OD_READ_body__() 





void RANDI100_init__(RANDI100 *data__, BOOL retain) {
  __INIT_VAR(data__->EN,__BOOL_LITERAL(TRUE),retain)
  __INIT_VAR(data__->ENO,__BOOL_LITERAL(TRUE),retain)
  __INIT_VAR(data__->RINT,0,retain)
}

// Code part
void RANDI100_body__(RANDI100 *data__) {
  // Control execution
  if (!__GET_VAR(data__->EN)) {
    __SET_VAR(data__->,ENO,,__BOOL_LITERAL(FALSE));
    return;
  }
  else {
    __SET_VAR(data__->,ENO,,__BOOL_LITERAL(TRUE));
  }
  // Initialise TEMP variables

  __IL_DEFVAR_T __IL_DEFVAR;
  __IL_DEFVAR_T __IL_DEFVAR_BACK;
  #define GetFbVar(var,...) __GET_VAR(data__->var,__VA_ARGS__)
  #define SetFbVar(var,val,...) __SET_VAR(data__->,var,__VA_ARGS__,val)
extern int randi(RANDI100*); randi(data__);
  #undef GetFbVar
  #undef SetFbVar
;

  goto __end;

__end:
  return;
} // RANDI100_body__() 





void FLASH_READ_init__(FLASH_READ *data__, BOOL retain) {
  __INIT_VAR(data__->EN,__BOOL_LITERAL(TRUE),retain)
  __INIT_VAR(data__->ENO,__BOOL_LITERAL(TRUE),retain)
  __INIT_VAR(data__->ADDR,0,retain)
  __INIT_VAR(data__->OUTU16,0,retain)
}

// Code part
void FLASH_READ_body__(FLASH_READ *data__) {
  // Control execution
  if (!__GET_VAR(data__->EN)) {
    __SET_VAR(data__->,ENO,,__BOOL_LITERAL(FALSE));
    return;
  }
  else {
    __SET_VAR(data__->,ENO,,__BOOL_LITERAL(TRUE));
  }
  // Initialise TEMP variables

  __IL_DEFVAR_T __IL_DEFVAR;
  __IL_DEFVAR_T __IL_DEFVAR_BACK;
  #define GetFbVar(var,...) __GET_VAR(data__->var,__VA_ARGS__)
  #define SetFbVar(var,val,...) __SET_VAR(data__->,var,__VA_ARGS__,val)
extern int flash_read(FLASH_READ*); flash_read(data__);
  #undef GetFbVar
  #undef SetFbVar
;

  goto __end;

__end:
  return;
} // FLASH_READ_body__() 





void U16_B16_init__(U16_B16 *data__, BOOL retain) {
  __INIT_VAR(data__->EN,__BOOL_LITERAL(TRUE),retain)
  __INIT_VAR(data__->ENO,__BOOL_LITERAL(TRUE),retain)
  __INIT_VAR(data__->UI16,0,retain)
  __INIT_VAR(data__->B0,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->B1,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->B2,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->B3,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->B4,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->B5,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->B6,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->B7,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->B8,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->B9,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->B10,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->B11,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->B12,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->B13,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->B14,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->B15,__BOOL_LITERAL(FALSE),retain)
}

// Code part
void U16_B16_body__(U16_B16 *data__) {
  // Control execution
  if (!__GET_VAR(data__->EN)) {
    __SET_VAR(data__->,ENO,,__BOOL_LITERAL(FALSE));
    return;
  }
  else {
    __SET_VAR(data__->,ENO,,__BOOL_LITERAL(TRUE));
  }
  // Initialise TEMP variables

  __IL_DEFVAR_T __IL_DEFVAR;
  __IL_DEFVAR_T __IL_DEFVAR_BACK;
  #define GetFbVar(var,...) __GET_VAR(data__->var,__VA_ARGS__)
  #define SetFbVar(var,val,...) __SET_VAR(data__->,var,__VA_ARGS__,val)
extern int u16_b16(U16_B16*); u16_b16(data__);
  #undef GetFbVar
  #undef SetFbVar
;

  goto __end;

__end:
  return;
} // U16_B16_body__() 





void READ_SDO2_init__(READ_SDO2 *data__, BOOL retain) {
  __INIT_VAR(data__->EN,__BOOL_LITERAL(TRUE),retain)
  __INIT_VAR(data__->ENO,__BOOL_LITERAL(TRUE),retain)
  __INIT_VAR(data__->EXECUTE,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->NODEID,0,retain)
  __INIT_VAR(data__->INDEX,0,retain)
  __INIT_VAR(data__->SUBINDEX,0,retain)
  __INIT_VAR(data__->RDOK,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->CANQUERY,__BOOL_LITERAL(FALSE),retain)
}

// Code part
void READ_SDO2_body__(READ_SDO2 *data__) {
  // Control execution
  if (!__GET_VAR(data__->EN)) {
    __SET_VAR(data__->,ENO,,__BOOL_LITERAL(FALSE));
    return;
  }
  else {
    __SET_VAR(data__->,ENO,,__BOOL_LITERAL(TRUE));
  }
  // Initialise TEMP variables

  __IL_DEFVAR_T __IL_DEFVAR;
  __IL_DEFVAR_T __IL_DEFVAR_BACK;
  #define GetFbVar(var,...) __GET_VAR(data__->var,__VA_ARGS__)
  #define SetFbVar(var,val,...) __SET_VAR(data__->,var,__VA_ARGS__,val)
extern int read_sdo2(READ_SDO2*); read_sdo2(data__);
  #undef GetFbVar
  #undef SetFbVar
;

  goto __end;

__end:
  return;
} // READ_SDO2_body__() 





void B16_U16_init__(B16_U16 *data__, BOOL retain) {
  __INIT_VAR(data__->EN,__BOOL_LITERAL(TRUE),retain)
  __INIT_VAR(data__->ENO,__BOOL_LITERAL(TRUE),retain)
  __INIT_VAR(data__->B0,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->B1,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->B2,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->B3,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->B4,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->B5,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->B6,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->B7,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->B8,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->B9,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->B10,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->B11,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->B12,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->B13,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->B14,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->B15,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->U16,0,retain)
}

// Code part
void B16_U16_body__(B16_U16 *data__) {
  // Control execution
  if (!__GET_VAR(data__->EN)) {
    __SET_VAR(data__->,ENO,,__BOOL_LITERAL(FALSE));
    return;
  }
  else {
    __SET_VAR(data__->,ENO,,__BOOL_LITERAL(TRUE));
  }
  // Initialise TEMP variables

  __IL_DEFVAR_T __IL_DEFVAR;
  __IL_DEFVAR_T __IL_DEFVAR_BACK;
  #define GetFbVar(var,...) __GET_VAR(data__->var,__VA_ARGS__)
  #define SetFbVar(var,val,...) __SET_VAR(data__->,var,__VA_ARGS__,val)
extern int b16_u16(B16_U16*); b16_u16(data__);
  #undef GetFbVar
  #undef SetFbVar
;

  goto __end;

__end:
  return;
} // B16_U16_body__() 





void SLEN_init__(SLEN *data__, BOOL retain) {
  __INIT_VAR(data__->EN,__BOOL_LITERAL(TRUE),retain)
  __INIT_VAR(data__->ENO,__BOOL_LITERAL(TRUE),retain)
  __INIT_VAR(data__->INS,__STRING_LITERAL(0,""),retain)
  __INIT_VAR(data__->OUTI,0,retain)
}

// Code part
void SLEN_body__(SLEN *data__) {
  // Control execution
  if (!__GET_VAR(data__->EN)) {
    __SET_VAR(data__->,ENO,,__BOOL_LITERAL(FALSE));
    return;
  }
  else {
    __SET_VAR(data__->,ENO,,__BOOL_LITERAL(TRUE));
  }
  // Initialise TEMP variables

  __IL_DEFVAR_T __IL_DEFVAR;
  __IL_DEFVAR_T __IL_DEFVAR_BACK;
  #define GetFbVar(var,...) __GET_VAR(data__->var,__VA_ARGS__)
  #define SetFbVar(var,val,...) __SET_VAR(data__->,var,__VA_ARGS__,val)
extern int string_len(SLEN*); string_len(data__);
  #undef GetFbVar
  #undef SetFbVar
;

  goto __end;

__end:
  return;
} // SLEN_body__() 





void FLASH_WRITE_init__(FLASH_WRITE *data__, BOOL retain) {
  __INIT_VAR(data__->EN,__BOOL_LITERAL(TRUE),retain)
  __INIT_VAR(data__->ENO,__BOOL_LITERAL(TRUE),retain)
  __INIT_VAR(data__->ADDR,0,retain)
  __INIT_VAR(data__->IPTU16,0,retain)
}

// Code part
void FLASH_WRITE_body__(FLASH_WRITE *data__) {
  // Control execution
  if (!__GET_VAR(data__->EN)) {
    __SET_VAR(data__->,ENO,,__BOOL_LITERAL(FALSE));
    return;
  }
  else {
    __SET_VAR(data__->,ENO,,__BOOL_LITERAL(TRUE));
  }
  // Initialise TEMP variables

  __IL_DEFVAR_T __IL_DEFVAR;
  __IL_DEFVAR_T __IL_DEFVAR_BACK;
  #define GetFbVar(var,...) __GET_VAR(data__->var,__VA_ARGS__)
  #define SetFbVar(var,val,...) __SET_VAR(data__->,var,__VA_ARGS__,val)
extern int flash_write(FLASH_WRITE*); flash_write(data__);
  #undef GetFbVar
  #undef SetFbVar
;

  goto __end;

__end:
  return;
} // FLASH_WRITE_body__() 





void ULINT_TO_BCD2_init__(ULINT_TO_BCD2 *data__, BOOL retain) {
  __INIT_VAR(data__->EN,__BOOL_LITERAL(TRUE),retain)
  __INIT_VAR(data__->ENO,__BOOL_LITERAL(TRUE),retain)
  __INIT_VAR(data__->INUL,0,retain)
  __INIT_VAR(data__->OUTLW,0,retain)
}

// Code part
void ULINT_TO_BCD2_body__(ULINT_TO_BCD2 *data__) {
  // Control execution
  if (!__GET_VAR(data__->EN)) {
    __SET_VAR(data__->,ENO,,__BOOL_LITERAL(FALSE));
    return;
  }
  else {
    __SET_VAR(data__->,ENO,,__BOOL_LITERAL(TRUE));
  }
  // Initialise TEMP variables

  __IL_DEFVAR_T __IL_DEFVAR;
  __IL_DEFVAR_T __IL_DEFVAR_BACK;
  #define GetFbVar(var,...) __GET_VAR(data__->var,__VA_ARGS__)
  #define SetFbVar(var,val,...) __SET_VAR(data__->,var,__VA_ARGS__,val)
extern int ulint_to_bcd(ULINT_TO_BCD2*); ulint_to_bcd(data__);
  #undef GetFbVar
  #undef SetFbVar
;

  goto __end;

__end:
  return;
} // ULINT_TO_BCD2_body__() 





void IP_READ_init__(IP_READ *data__, BOOL retain) {
  __INIT_VAR(data__->EN,__BOOL_LITERAL(TRUE),retain)
  __INIT_VAR(data__->ENO,__BOOL_LITERAL(TRUE),retain)
  __INIT_VAR(data__->NODEID,0,retain)
  __INIT_VAR(data__->POSU64,0,retain)
  __INIT_VAR(data__->STATUS,0,retain)
}

// Code part
void IP_READ_body__(IP_READ *data__) {
  // Control execution
  if (!__GET_VAR(data__->EN)) {
    __SET_VAR(data__->,ENO,,__BOOL_LITERAL(FALSE));
    return;
  }
  else {
    __SET_VAR(data__->,ENO,,__BOOL_LITERAL(TRUE));
  }
  // Initialise TEMP variables

  __IL_DEFVAR_T __IL_DEFVAR;
  __IL_DEFVAR_T __IL_DEFVAR_BACK;
  #define GetFbVar(var,...) __GET_VAR(data__->var,__VA_ARGS__)
  #define SetFbVar(var,val,...) __SET_VAR(data__->,var,__VA_ARGS__,val)
extern int ip_read(IP_READ*); ip_read(data__);
  #undef GetFbVar
  #undef SetFbVar
;

  goto __end;

__end:
  return;
} // IP_READ_body__() 





void SVRO_MODE_init__(SVRO_MODE *data__, BOOL retain) {
  __INIT_VAR(data__->EN,__BOOL_LITERAL(TRUE),retain)
  __INIT_VAR(data__->ENO,__BOOL_LITERAL(TRUE),retain)
  __INIT_VAR(data__->AXISID,0,retain)
  __INIT_VAR(data__->TARGETMODE,0,retain)
  __INIT_VAR(data__->ACTUALMODE,0,retain)
}

// Code part
void SVRO_MODE_body__(SVRO_MODE *data__) {
  // Control execution
  if (!__GET_VAR(data__->EN)) {
    __SET_VAR(data__->,ENO,,__BOOL_LITERAL(FALSE));
    return;
  }
  else {
    __SET_VAR(data__->,ENO,,__BOOL_LITERAL(TRUE));
  }
  // Initialise TEMP variables

  __IL_DEFVAR_T __IL_DEFVAR;
  __IL_DEFVAR_T __IL_DEFVAR_BACK;
  #define GetFbVar(var,...) __GET_VAR(data__->var,__VA_ARGS__)
  #define SetFbVar(var,val,...) __SET_VAR(data__->,var,__VA_ARGS__,val)
extern int svro_mode(SVRO_MODE*); svro_mode(data__);
  #undef GetFbVar
  #undef SetFbVar
;

  goto __end;

__end:
  return;
} // SVRO_MODE_body__() 





void FPGA_READ_init__(FPGA_READ *data__, BOOL retain) {
  __INIT_VAR(data__->EN,__BOOL_LITERAL(TRUE),retain)
  __INIT_VAR(data__->ENO,__BOOL_LITERAL(TRUE),retain)
  __INIT_VAR(data__->VARADDR,0,retain)
  __INIT_VAR(data__->OUTU16,0,retain)
}

// Code part
void FPGA_READ_body__(FPGA_READ *data__) {
  // Control execution
  if (!__GET_VAR(data__->EN)) {
    __SET_VAR(data__->,ENO,,__BOOL_LITERAL(FALSE));
    return;
  }
  else {
    __SET_VAR(data__->,ENO,,__BOOL_LITERAL(TRUE));
  }
  // Initialise TEMP variables

  __IL_DEFVAR_T __IL_DEFVAR;
  __IL_DEFVAR_T __IL_DEFVAR_BACK;
  #define GetFbVar(var,...) __GET_VAR(data__->var,__VA_ARGS__)
  #define SetFbVar(var,val,...) __SET_VAR(data__->,var,__VA_ARGS__,val)
extern int fpga_read(FPGA_READ*); fpga_read(data__);
  #undef GetFbVar
  #undef SetFbVar
;

  goto __end;

__end:
  return;
} // FPGA_READ_body__() 





void BUF_READ_init__(BUF_READ *data__, BOOL retain) {
  __INIT_VAR(data__->EN,__BOOL_LITERAL(TRUE),retain)
  __INIT_VAR(data__->ENO,__BOOL_LITERAL(TRUE),retain)
  __INIT_VAR(data__->BUFTYPE,0,retain)
  __INIT_VAR(data__->IDX,0,retain)
  __INIT_VAR(data__->OUTU16,0,retain)
}

// Code part
void BUF_READ_body__(BUF_READ *data__) {
  // Control execution
  if (!__GET_VAR(data__->EN)) {
    __SET_VAR(data__->,ENO,,__BOOL_LITERAL(FALSE));
    return;
  }
  else {
    __SET_VAR(data__->,ENO,,__BOOL_LITERAL(TRUE));
  }
  // Initialise TEMP variables

  __IL_DEFVAR_T __IL_DEFVAR;
  __IL_DEFVAR_T __IL_DEFVAR_BACK;
  #define GetFbVar(var,...) __GET_VAR(data__->var,__VA_ARGS__)
  #define SetFbVar(var,val,...) __SET_VAR(data__->,var,__VA_ARGS__,val)
extern int buf_read(BUF_READ*); buf_read(data__);
  #undef GetFbVar
  #undef SetFbVar
;

  goto __end;

__end:
  return;
} // BUF_READ_body__() 





void IP_WRITE2_init__(IP_WRITE2 *data__, BOOL retain) {
  __INIT_VAR(data__->EN,__BOOL_LITERAL(TRUE),retain)
  __INIT_VAR(data__->ENO,__BOOL_LITERAL(TRUE),retain)
  __INIT_VAR(data__->NODEID,0,retain)
  __INIT_VAR(data__->POS,0,retain)
  __INIT_VAR(data__->CONTROLWORD,0,retain)
}

// Code part
void IP_WRITE2_body__(IP_WRITE2 *data__) {
  // Control execution
  if (!__GET_VAR(data__->EN)) {
    __SET_VAR(data__->,ENO,,__BOOL_LITERAL(FALSE));
    return;
  }
  else {
    __SET_VAR(data__->,ENO,,__BOOL_LITERAL(TRUE));
  }
  // Initialise TEMP variables

  __IL_DEFVAR_T __IL_DEFVAR;
  __IL_DEFVAR_T __IL_DEFVAR_BACK;
  #define GetFbVar(var,...) __GET_VAR(data__->var,__VA_ARGS__)
  #define SetFbVar(var,val,...) __SET_VAR(data__->,var,__VA_ARGS__,val)
extern int ip_write2(IP_WRITE2*); ip_write2(data__);
  #undef GetFbVar
  #undef SetFbVar
;

  goto __end;

__end:
  return;
} // IP_WRITE2_body__() 





void RBUF_WRITE_init__(RBUF_WRITE *data__, BOOL retain) {
  __INIT_VAR(data__->EN,__BOOL_LITERAL(TRUE),retain)
  __INIT_VAR(data__->ENO,__BOOL_LITERAL(TRUE),retain)
  __INIT_VAR(data__->VARADDR,0,retain)
  __INIT_VAR(data__->INR,0,retain)
}

// Code part
void RBUF_WRITE_body__(RBUF_WRITE *data__) {
  // Control execution
  if (!__GET_VAR(data__->EN)) {
    __SET_VAR(data__->,ENO,,__BOOL_LITERAL(FALSE));
    return;
  }
  else {
    __SET_VAR(data__->,ENO,,__BOOL_LITERAL(TRUE));
  }
  // Initialise TEMP variables

  __IL_DEFVAR_T __IL_DEFVAR;
  __IL_DEFVAR_T __IL_DEFVAR_BACK;
  #define GetFbVar(var,...) __GET_VAR(data__->var,__VA_ARGS__)
  #define SetFbVar(var,val,...) __SET_VAR(data__->,var,__VA_ARGS__,val)
extern int rbuf_write(RBUF_WRITE*); rbuf_write(data__);
  #undef GetFbVar
  #undef SetFbVar
;

  goto __end;

__end:
  return;
} // RBUF_WRITE_body__() 





void GET_TICK_init__(GET_TICK *data__, BOOL retain) {
  __INIT_VAR(data__->EN,__BOOL_LITERAL(TRUE),retain)
  __INIT_VAR(data__->ENO,__BOOL_LITERAL(TRUE),retain)
  __INIT_VAR(data__->TICK,0,retain)
}

// Code part
void GET_TICK_body__(GET_TICK *data__) {
  // Control execution
  if (!__GET_VAR(data__->EN)) {
    __SET_VAR(data__->,ENO,,__BOOL_LITERAL(FALSE));
    return;
  }
  else {
    __SET_VAR(data__->,ENO,,__BOOL_LITERAL(TRUE));
  }
  // Initialise TEMP variables

  __IL_DEFVAR_T __IL_DEFVAR;
  __IL_DEFVAR_T __IL_DEFVAR_BACK;
  #define GetFbVar(var,...) __GET_VAR(data__->var,__VA_ARGS__)
  #define SetFbVar(var,val,...) __SET_VAR(data__->,var,__VA_ARGS__,val)
extern int get_tick(GET_TICK*); get_tick(data__);
  #undef GetFbVar
  #undef SetFbVar
;

  goto __end;

__end:
  return;
} // GET_TICK_body__() 





void TORQUE_WRITE_init__(TORQUE_WRITE *data__, BOOL retain) {
  __INIT_VAR(data__->EN,__BOOL_LITERAL(TRUE),retain)
  __INIT_VAR(data__->ENO,__BOOL_LITERAL(TRUE),retain)
  __INIT_VAR(data__->AXISID,0,retain)
  __INIT_VAR(data__->TARGETTORQUE,0,retain)
  __INIT_VAR(data__->TORQUEOFFSET,0,retain)
}

// Code part
void TORQUE_WRITE_body__(TORQUE_WRITE *data__) {
  // Control execution
  if (!__GET_VAR(data__->EN)) {
    __SET_VAR(data__->,ENO,,__BOOL_LITERAL(FALSE));
    return;
  }
  else {
    __SET_VAR(data__->,ENO,,__BOOL_LITERAL(TRUE));
  }
  // Initialise TEMP variables

  __IL_DEFVAR_T __IL_DEFVAR;
  __IL_DEFVAR_T __IL_DEFVAR_BACK;
  #define GetFbVar(var,...) __GET_VAR(data__->var,__VA_ARGS__)
  #define SetFbVar(var,val,...) __SET_VAR(data__->,var,__VA_ARGS__,val)
extern int torque_write(TORQUE_WRITE*); torque_write(data__);
  #undef GetFbVar
  #undef SetFbVar
;

  goto __end;

__end:
  return;
} // TORQUE_WRITE_body__() 





void AXIS_INFO_init__(AXIS_INFO *data__, BOOL retain) {
  __INIT_VAR(data__->EN,__BOOL_LITERAL(TRUE),retain)
  __INIT_VAR(data__->ENO,__BOOL_LITERAL(TRUE),retain)
  __INIT_VAR(data__->ROW,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->NODEID,0,retain)
  __INIT_VAR(data__->PNAME,__STRING_LITERAL(0,""),retain)
  __INIT_VAR(data__->INB,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->INU32,0,retain)
  __INIT_VAR(data__->INR,0,retain)
  __INIT_VAR(data__->INS,__STRING_LITERAL(0,""),retain)
  __INIT_VAR(data__->OUTB,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->OUTU32,0,retain)
  __INIT_VAR(data__->OUTR,0,retain)
  __INIT_VAR(data__->OUTS,__STRING_LITERAL(0,""),retain)
  __INIT_VAR(data__->AEO,0,retain)
  __INIT_VAR(data__->MPP,0,retain)
  __INIT_VAR(data__->ADTYPE,0,retain)
  __INIT_VAR(data__->VMAX,0,retain)
  __INIT_VAR(data__->AMAX,0,retain)
  __INIT_VAR(data__->DMAX,0,retain)
  __INIT_VAR(data__->JMAX,0,retain)
  __INIT_VAR(data__->LMTL,0,retain)
  __INIT_VAR(data__->LMTH,0,retain)
  __INIT_VAR(data__->AMOD,0,retain)
  __INIT_VAR(data__->FEEDRATE,0,retain)
  __INIT_VAR(data__->VA,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->RA,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->ABORTFLAG,0,retain)
  __INIT_VAR(data__->DONEFLAG,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->EXECUTEFLAG,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->COMMANDTYPE,0,retain)
  __INIT_VAR(data__->STATE,0,retain)
  __INIT_VAR(data__->P0POS,0,retain)
  __INIT_VAR(data__->CURPOS,0,retain)
  __INIT_VAR(data__->INTERP,0,retain)
  __INIT_VAR(data__->INTERV,0,retain)
  __INIT_VAR(data__->INTERA,0,retain)
  __INIT_VAR(data__->INTERPC,0,retain)
  __INIT_VAR(data__->INTERVC,0,retain)
  __INIT_VAR(data__->INTERDP,0,retain)
  __INIT_VAR(data__->PC,0,retain)
  __INIT_VAR(data__->VC,0,retain)
  __INIT_VAR(data__->RC,0,retain)
  __INIT_VAR(data__->ERRORID,0,retain)
}

// Code part
void AXIS_INFO_body__(AXIS_INFO *data__) {
  // Control execution
  if (!__GET_VAR(data__->EN)) {
    __SET_VAR(data__->,ENO,,__BOOL_LITERAL(FALSE));
    return;
  }
  else {
    __SET_VAR(data__->,ENO,,__BOOL_LITERAL(TRUE));
  }
  // Initialise TEMP variables

  __IL_DEFVAR_T __IL_DEFVAR;
  __IL_DEFVAR_T __IL_DEFVAR_BACK;
  #define GetFbVar(var,...) __GET_VAR(data__->var,__VA_ARGS__)
  #define SetFbVar(var,val,...) __SET_VAR(data__->,var,__VA_ARGS__,val)
extern int dooperate(AXIS_INFO*); dooperate(data__);
  #undef GetFbVar
  #undef SetFbVar
;

  goto __end;

__end:
  return;
} // AXIS_INFO_body__() 





void READ_SDO_init__(READ_SDO *data__, BOOL retain) {
  __INIT_VAR(data__->EN,__BOOL_LITERAL(TRUE),retain)
  __INIT_VAR(data__->ENO,__BOOL_LITERAL(TRUE),retain)
  __INIT_VAR(data__->EXECUTE,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->NODEID,0,retain)
  __INIT_VAR(data__->INDEX,0,retain)
  __INIT_VAR(data__->SUBINDEX,0,retain)
  __INIT_VAR(data__->RDOK,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->VAL,0,retain)
  __INIT_VAR(data__->SIZE,0,retain)
}

// Code part
void READ_SDO_body__(READ_SDO *data__) {
  // Control execution
  if (!__GET_VAR(data__->EN)) {
    __SET_VAR(data__->,ENO,,__BOOL_LITERAL(FALSE));
    return;
  }
  else {
    __SET_VAR(data__->,ENO,,__BOOL_LITERAL(TRUE));
  }
  // Initialise TEMP variables

  __IL_DEFVAR_T __IL_DEFVAR;
  __IL_DEFVAR_T __IL_DEFVAR_BACK;
  #define GetFbVar(var,...) __GET_VAR(data__->var,__VA_ARGS__)
  #define SetFbVar(var,val,...) __SET_VAR(data__->,var,__VA_ARGS__,val)
extern int read_sdo(READ_SDO*); read_sdo(data__);
  #undef GetFbVar
  #undef SetFbVar
;

  goto __end;

__end:
  return;
} // READ_SDO_body__() 





void AXIS_EXINFO_init__(AXIS_EXINFO *data__, BOOL retain) {
  __INIT_VAR(data__->EN,__BOOL_LITERAL(TRUE),retain)
  __INIT_VAR(data__->ENO,__BOOL_LITERAL(TRUE),retain)
  __INIT_VAR(data__->ROW,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->NODEID,0,retain)
  __INIT_VAR(data__->PNAME,__STRING_LITERAL(0,""),retain)
  __INIT_VAR(data__->INR,0,retain)
  __INIT_VAR(data__->OUTR,0,retain)
}

// Code part
void AXIS_EXINFO_body__(AXIS_EXINFO *data__) {
  // Control execution
  if (!__GET_VAR(data__->EN)) {
    __SET_VAR(data__->,ENO,,__BOOL_LITERAL(FALSE));
    return;
  }
  else {
    __SET_VAR(data__->,ENO,,__BOOL_LITERAL(TRUE));
  }
  // Initialise TEMP variables

  __IL_DEFVAR_T __IL_DEFVAR;
  __IL_DEFVAR_T __IL_DEFVAR_BACK;
  #define GetFbVar(var,...) __GET_VAR(data__->var,__VA_ARGS__)
  #define SetFbVar(var,val,...) __SET_VAR(data__->,var,__VA_ARGS__,val)
extern int axis_exop(AXIS_EXINFO*); axis_exop(data__);
  #undef GetFbVar
  #undef SetFbVar
;

  goto __end;

__end:
  return;
} // AXIS_EXINFO_body__() 





void BCD_TO_ULINT2_init__(BCD_TO_ULINT2 *data__, BOOL retain) {
  __INIT_VAR(data__->EN,__BOOL_LITERAL(TRUE),retain)
  __INIT_VAR(data__->ENO,__BOOL_LITERAL(TRUE),retain)
  __INIT_VAR(data__->INLW,0,retain)
  __INIT_VAR(data__->OUTUL,0,retain)
}

// Code part
void BCD_TO_ULINT2_body__(BCD_TO_ULINT2 *data__) {
  // Control execution
  if (!__GET_VAR(data__->EN)) {
    __SET_VAR(data__->,ENO,,__BOOL_LITERAL(FALSE));
    return;
  }
  else {
    __SET_VAR(data__->,ENO,,__BOOL_LITERAL(TRUE));
  }
  // Initialise TEMP variables

  __IL_DEFVAR_T __IL_DEFVAR;
  __IL_DEFVAR_T __IL_DEFVAR_BACK;
  #define GetFbVar(var,...) __GET_VAR(data__->var,__VA_ARGS__)
  #define SetFbVar(var,val,...) __SET_VAR(data__->,var,__VA_ARGS__,val)
extern int bcd_to_ulint(BCD_TO_ULINT2*); bcd_to_ulint(data__);
  #undef GetFbVar
  #undef SetFbVar
;

  goto __end;

__end:
  return;
} // BCD_TO_ULINT2_body__() 





void FLASH_LOADSAVE_init__(FLASH_LOADSAVE *data__, BOOL retain) {
  __INIT_VAR(data__->EN,__BOOL_LITERAL(TRUE),retain)
  __INIT_VAR(data__->ENO,__BOOL_LITERAL(TRUE),retain)
  __INIT_VAR(data__->SAVE,__BOOL_LITERAL(FALSE),retain)
}

// Code part
void FLASH_LOADSAVE_body__(FLASH_LOADSAVE *data__) {
  // Control execution
  if (!__GET_VAR(data__->EN)) {
    __SET_VAR(data__->,ENO,,__BOOL_LITERAL(FALSE));
    return;
  }
  else {
    __SET_VAR(data__->,ENO,,__BOOL_LITERAL(TRUE));
  }
  // Initialise TEMP variables

  __IL_DEFVAR_T __IL_DEFVAR;
  __IL_DEFVAR_T __IL_DEFVAR_BACK;
  #define GetFbVar(var,...) __GET_VAR(data__->var,__VA_ARGS__)
  #define SetFbVar(var,val,...) __SET_VAR(data__->,var,__VA_ARGS__,val)
extern int flash_load_save(FLASH_LOADSAVE*); flash_load_save(data__);
  #undef GetFbVar
  #undef SetFbVar
;

  goto __end;

__end:
  return;
} // FLASH_LOADSAVE_body__() 





void COIL_READ_init__(COIL_READ *data__, BOOL retain) {
  __INIT_VAR(data__->EN,__BOOL_LITERAL(TRUE),retain)
  __INIT_VAR(data__->ENO,__BOOL_LITERAL(TRUE),retain)
  __INIT_VAR(data__->MBADDR,0,retain)
  __INIT_VAR(data__->OUTB,__BOOL_LITERAL(FALSE),retain)
}

// Code part
void COIL_READ_body__(COIL_READ *data__) {
  // Control execution
  if (!__GET_VAR(data__->EN)) {
    __SET_VAR(data__->,ENO,,__BOOL_LITERAL(FALSE));
    return;
  }
  else {
    __SET_VAR(data__->,ENO,,__BOOL_LITERAL(TRUE));
  }
  // Initialise TEMP variables

  __IL_DEFVAR_T __IL_DEFVAR;
  __IL_DEFVAR_T __IL_DEFVAR_BACK;
  #define GetFbVar(var,...) __GET_VAR(data__->var,__VA_ARGS__)
  #define SetFbVar(var,val,...) __SET_VAR(data__->,var,__VA_ARGS__,val)
extern int coil_read(COIL_READ*); coil_read(data__);
  #undef GetFbVar
  #undef SetFbVar
;

  goto __end;

__end:
  return;
} // COIL_READ_body__() 





void IPT_SHAPING_init__(IPT_SHAPING *data__, BOOL retain) {
  __INIT_VAR(data__->EN,__BOOL_LITERAL(TRUE),retain)
  __INIT_VAR(data__->ENO,__BOOL_LITERAL(TRUE),retain)
  __INIT_VAR(data__->NODEID,0,retain)
  __INIT_VAR(data__->INPC,0,retain)
  __INIT_VAR(data__->INVC,0,retain)
  __INIT_VAR(data__->OUTPC,0,retain)
  __INIT_VAR(data__->OUTVC,0,retain)
}

// Code part
void IPT_SHAPING_body__(IPT_SHAPING *data__) {
  // Control execution
  if (!__GET_VAR(data__->EN)) {
    __SET_VAR(data__->,ENO,,__BOOL_LITERAL(FALSE));
    return;
  }
  else {
    __SET_VAR(data__->,ENO,,__BOOL_LITERAL(TRUE));
  }
  // Initialise TEMP variables

  __IL_DEFVAR_T __IL_DEFVAR;
  __IL_DEFVAR_T __IL_DEFVAR_BACK;
  #define GetFbVar(var,...) __GET_VAR(data__->var,__VA_ARGS__)
  #define SetFbVar(var,val,...) __SET_VAR(data__->,var,__VA_ARGS__,val)
extern int ipt_shaping(IPT_SHAPING*); ipt_shaping(data__);
  #undef GetFbVar
  #undef SetFbVar
;

  goto __end;

__end:
  return;
} // IPT_SHAPING_body__() 





void SFIND_init__(SFIND *data__, BOOL retain) {
  __INIT_VAR(data__->EN,__BOOL_LITERAL(TRUE),retain)
  __INIT_VAR(data__->ENO,__BOOL_LITERAL(TRUE),retain)
  __INIT_VAR(data__->INS1,__STRING_LITERAL(0,""),retain)
  __INIT_VAR(data__->INS2,__STRING_LITERAL(0,""),retain)
  __INIT_VAR(data__->OUTI,0,retain)
}

// Code part
void SFIND_body__(SFIND *data__) {
  // Control execution
  if (!__GET_VAR(data__->EN)) {
    __SET_VAR(data__->,ENO,,__BOOL_LITERAL(FALSE));
    return;
  }
  else {
    __SET_VAR(data__->,ENO,,__BOOL_LITERAL(TRUE));
  }
  // Initialise TEMP variables

  __IL_DEFVAR_T __IL_DEFVAR;
  __IL_DEFVAR_T __IL_DEFVAR_BACK;
  #define GetFbVar(var,...) __GET_VAR(data__->var,__VA_ARGS__)
  #define SetFbVar(var,val,...) __SET_VAR(data__->,var,__VA_ARGS__,val)
extern int string_find(SFIND*); string_find(data__);
  #undef GetFbVar
  #undef SetFbVar
;

  goto __end;

__end:
  return;
} // SFIND_body__() 





void AEO_WRITE_init__(AEO_WRITE *data__, BOOL retain) {
  __INIT_VAR(data__->EN,__BOOL_LITERAL(TRUE),retain)
  __INIT_VAR(data__->ENO,__BOOL_LITERAL(TRUE),retain)
  __INIT_VAR(data__->AXISID,0,retain)
  __INIT_VAR(data__->AEO,0,retain)
}

// Code part
void AEO_WRITE_body__(AEO_WRITE *data__) {
  // Control execution
  if (!__GET_VAR(data__->EN)) {
    __SET_VAR(data__->,ENO,,__BOOL_LITERAL(FALSE));
    return;
  }
  else {
    __SET_VAR(data__->,ENO,,__BOOL_LITERAL(TRUE));
  }
  // Initialise TEMP variables

  __IL_DEFVAR_T __IL_DEFVAR;
  __IL_DEFVAR_T __IL_DEFVAR_BACK;
  #define GetFbVar(var,...) __GET_VAR(data__->var,__VA_ARGS__)
  #define SetFbVar(var,val,...) __SET_VAR(data__->,var,__VA_ARGS__,val)
extern int aeo_write(AEO_WRITE*); aeo_write(data__);
  #undef GetFbVar
  #undef SetFbVar
;

  goto __end;

__end:
  return;
} // AEO_WRITE_body__() 





void RBUF_WRITE_U16_init__(RBUF_WRITE_U16 *data__, BOOL retain) {
  __INIT_VAR(data__->EN,__BOOL_LITERAL(TRUE),retain)
  __INIT_VAR(data__->ENO,__BOOL_LITERAL(TRUE),retain)
  __INIT_VAR(data__->VARADDR,0,retain)
  __INIT_VAR(data__->INU161,0,retain)
  __INIT_VAR(data__->INU162,0,retain)
  __INIT_VAR(data__->INU163,0,retain)
  __INIT_VAR(data__->INU164,0,retain)
}

// Code part
void RBUF_WRITE_U16_body__(RBUF_WRITE_U16 *data__) {
  // Control execution
  if (!__GET_VAR(data__->EN)) {
    __SET_VAR(data__->,ENO,,__BOOL_LITERAL(FALSE));
    return;
  }
  else {
    __SET_VAR(data__->,ENO,,__BOOL_LITERAL(TRUE));
  }
  // Initialise TEMP variables

  __IL_DEFVAR_T __IL_DEFVAR;
  __IL_DEFVAR_T __IL_DEFVAR_BACK;
  #define GetFbVar(var,...) __GET_VAR(data__->var,__VA_ARGS__)
  #define SetFbVar(var,val,...) __SET_VAR(data__->,var,__VA_ARGS__,val)
extern int rbuf_write_u16(RBUF_WRITE_U16*); rbuf_write_u16(data__);
  #undef GetFbVar
  #undef SetFbVar
;

  goto __end;

__end:
  return;
} // RBUF_WRITE_U16_body__() 





void SET_CAM_init__(SET_CAM *data__, BOOL retain) {
  __INIT_VAR(data__->EN,__BOOL_LITERAL(TRUE),retain)
  __INIT_VAR(data__->ENO,__BOOL_LITERAL(TRUE),retain)
  __INIT_VAR(data__->TABLEID,0,retain)
  __INIT_VAR(data__->IDX,0,retain)
  __INIT_VAR(data__->VALUE,0,retain)
}

// Code part
void SET_CAM_body__(SET_CAM *data__) {
  // Control execution
  if (!__GET_VAR(data__->EN)) {
    __SET_VAR(data__->,ENO,,__BOOL_LITERAL(FALSE));
    return;
  }
  else {
    __SET_VAR(data__->,ENO,,__BOOL_LITERAL(TRUE));
  }
  // Initialise TEMP variables

  __IL_DEFVAR_T __IL_DEFVAR;
  __IL_DEFVAR_T __IL_DEFVAR_BACK;
  #define GetFbVar(var,...) __GET_VAR(data__->var,__VA_ARGS__)
  #define SetFbVar(var,val,...) __SET_VAR(data__->,var,__VA_ARGS__,val)
extern int set_cam(SET_CAM*); set_cam(data__);
  #undef GetFbVar
  #undef SetFbVar
;

  goto __end;

__end:
  return;
} // SET_CAM_body__() 





void AEO_READ_init__(AEO_READ *data__, BOOL retain) {
  __INIT_VAR(data__->EN,__BOOL_LITERAL(TRUE),retain)
  __INIT_VAR(data__->ENO,__BOOL_LITERAL(TRUE),retain)
  __INIT_VAR(data__->AXISID,0,retain)
  __INIT_VAR(data__->AEO,0,retain)
}

// Code part
void AEO_READ_body__(AEO_READ *data__) {
  // Control execution
  if (!__GET_VAR(data__->EN)) {
    __SET_VAR(data__->,ENO,,__BOOL_LITERAL(FALSE));
    return;
  }
  else {
    __SET_VAR(data__->,ENO,,__BOOL_LITERAL(TRUE));
  }
  // Initialise TEMP variables

  __IL_DEFVAR_T __IL_DEFVAR;
  __IL_DEFVAR_T __IL_DEFVAR_BACK;
  #define GetFbVar(var,...) __GET_VAR(data__->var,__VA_ARGS__)
  #define SetFbVar(var,val,...) __SET_VAR(data__->,var,__VA_ARGS__,val)
extern int aeo_read(AEO_READ*); aeo_read(data__);
  #undef GetFbVar
  #undef SetFbVar
;

  goto __end;

__end:
  return;
} // AEO_READ_body__() 





void NMTRESET_init__(NMTRESET *data__, BOOL retain) {
  __INIT_VAR(data__->EN,__BOOL_LITERAL(TRUE),retain)
  __INIT_VAR(data__->ENO,__BOOL_LITERAL(TRUE),retain)
  __INIT_VAR(data__->EXECUTE,__BOOL_LITERAL(FALSE),retain)
}

// Code part
void NMTRESET_body__(NMTRESET *data__) {
  // Control execution
  if (!__GET_VAR(data__->EN)) {
    __SET_VAR(data__->,ENO,,__BOOL_LITERAL(FALSE));
    return;
  }
  else {
    __SET_VAR(data__->,ENO,,__BOOL_LITERAL(TRUE));
  }
  // Initialise TEMP variables

  __IL_DEFVAR_T __IL_DEFVAR;
  __IL_DEFVAR_T __IL_DEFVAR_BACK;
  #define GetFbVar(var,...) __GET_VAR(data__->var,__VA_ARGS__)
  #define SetFbVar(var,val,...) __SET_VAR(data__->,var,__VA_ARGS__,val)
extern int nmt_reset(NMTRESET*); nmt_reset(data__);
  #undef GetFbVar
  #undef SetFbVar
;

  goto __end;

__end:
  return;
} // NMTRESET_body__() 





void _W_DEC_init__(_W_DEC *data__, BOOL retain) {
  __INIT_VAR(data__->EN,__BOOL_LITERAL(TRUE),retain)
  __INIT_VAR(data__->ENO,__BOOL_LITERAL(TRUE),retain)
  __INIT_VAR(data__->AXISID,0,retain)
  __INIT_VAR(data__->DONEFLAG,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->EXECUTEFLAG,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->COMMANDTYPE,0,retain)
  AXIS_INFO_init__(&data__->AI,retain);
}

// Code part
void _W_DEC_body__(_W_DEC *data__) {
  // Control execution
  if (!__GET_VAR(data__->EN)) {
    __SET_VAR(data__->,ENO,,__BOOL_LITERAL(FALSE));
    return;
  }
  else {
    __SET_VAR(data__->,ENO,,__BOOL_LITERAL(TRUE));
  }
  // Initialise TEMP variables

  __IL_DEFVAR_T __IL_DEFVAR;
  __IL_DEFVAR_T __IL_DEFVAR_BACK;
  #define GetFbVar(var,...) __GET_VAR(data__->var,__VA_ARGS__)
  #define SetFbVar(var,val,...) __SET_VAR(data__->,var,__VA_ARGS__,val)
extern void _W_DEC_body2__(_W_DEC *data__) ;  _W_DEC_body2__(data__);
  #undef GetFbVar
  #undef SetFbVar
;

  goto __end;

__end:
  return;
} // _W_DEC_body__() 





void _W_PVA_init__(_W_PVA *data__, BOOL retain) {
  __INIT_VAR(data__->EN,__BOOL_LITERAL(TRUE),retain)
  __INIT_VAR(data__->ENO,__BOOL_LITERAL(TRUE),retain)
  __INIT_VAR(data__->AXISID,0,retain)
  __INIT_VAR(data__->POSITION,0,retain)
  __INIT_VAR(data__->VELOCITY,0,retain)
  __INIT_VAR(data__->ACCELERATION,0,retain)
  AXIS_INFO_init__(&data__->AI,retain);
}

// Code part
void _W_PVA_body__(_W_PVA *data__) {
  // Control execution
  if (!__GET_VAR(data__->EN)) {
    __SET_VAR(data__->,ENO,,__BOOL_LITERAL(FALSE));
    return;
  }
  else {
    __SET_VAR(data__->,ENO,,__BOOL_LITERAL(TRUE));
  }
  // Initialise TEMP variables

  __IL_DEFVAR_T __IL_DEFVAR;
  __IL_DEFVAR_T __IL_DEFVAR_BACK;
  #define GetFbVar(var,...) __GET_VAR(data__->var,__VA_ARGS__)
  #define SetFbVar(var,val,...) __SET_VAR(data__->,var,__VA_ARGS__,val)
extern void _W_PVA_body2__(_W_PVA *data__) ;  _W_PVA_body2__(data__);
  #undef GetFbVar
  #undef SetFbVar
;

  goto __end;

__end:
  return;
} // _W_PVA_body__() 





void _SESSIONID_init__(_SESSIONID *data__, BOOL retain) {
  __INIT_VAR(data__->EN,__BOOL_LITERAL(TRUE),retain)
  __INIT_VAR(data__->ENO,__BOOL_LITERAL(TRUE),retain)
  __INIT_VAR(data__->ROW,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->AXISID,0,retain)
  __INIT_VAR(data__->FBD_ABORT_FLAG,0,retain)
  AXIS_INFO_init__(&data__->AI,retain);
}

// Code part
void _SESSIONID_body__(_SESSIONID *data__) {
  // Control execution
  if (!__GET_VAR(data__->EN)) {
    __SET_VAR(data__->,ENO,,__BOOL_LITERAL(FALSE));
    return;
  }
  else {
    __SET_VAR(data__->,ENO,,__BOOL_LITERAL(TRUE));
  }
  // Initialise TEMP variables

  __IL_DEFVAR_T __IL_DEFVAR;
  __IL_DEFVAR_T __IL_DEFVAR_BACK;
  #define GetFbVar(var,...) __GET_VAR(data__->var,__VA_ARGS__)
  #define SetFbVar(var,val,...) __SET_VAR(data__->,var,__VA_ARGS__,val)
extern void _SESSIONID_body2__(_SESSIONID *data__) ;  _SESSIONID_body2__(data__);
  #undef GetFbVar
  #undef SetFbVar
;

  goto __end;

__end:
  return;
} // _SESSIONID_body__() 





void _GETERRORID_init__(_GETERRORID *data__, BOOL retain) {
  __INIT_VAR(data__->EN,__BOOL_LITERAL(TRUE),retain)
  __INIT_VAR(data__->ENO,__BOOL_LITERAL(TRUE),retain)
  IP_READ_init__(&data__->IPRD,retain);
  __INIT_VAR(data__->AXISID,0,retain)
  __INIT_VAR(data__->ERRORID,0,retain)
  __INIT_VAR(data__->STS,0,retain)
  AXIS_INFO_init__(&data__->AI,retain);
  __INIT_VAR(data__->CPC,0,retain)
  __INIT_VAR(data__->LP0,0,retain)
  __INIT_VAR(data__->LP1,0,retain)
  __INIT_VAR(data__->CS,0,retain)
  __INIT_VAR(data__->ROTARY,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->TPC,0,retain)
}

// Code part
void _GETERRORID_body__(_GETERRORID *data__) {
  // Control execution
  if (!__GET_VAR(data__->EN)) {
    __SET_VAR(data__->,ENO,,__BOOL_LITERAL(FALSE));
    return;
  }
  else {
    __SET_VAR(data__->,ENO,,__BOOL_LITERAL(TRUE));
  }
  // Initialise TEMP variables

  __IL_DEFVAR_T __IL_DEFVAR;
  __IL_DEFVAR_T __IL_DEFVAR_BACK;
  #define GetFbVar(var,...) __GET_VAR(data__->var,__VA_ARGS__)
  #define SetFbVar(var,val,...) __SET_VAR(data__->,var,__VA_ARGS__,val)
extern void _GETERRORID_body2__(_GETERRORID *data__) ;  _GETERRORID_body2__(data__);
  #undef GetFbVar
  #undef SetFbVar
;

  goto __end;

__end:
  return;
} // _GETERRORID_body__() 





void _DIFF2_init__(_DIFF2 *data__, BOOL retain) {
  __INIT_VAR(data__->EN,__BOOL_LITERAL(TRUE),retain)
  __INIT_VAR(data__->ENO,__BOOL_LITERAL(TRUE),retain)
  __INIT_VAR(data__->P1,0,retain)
  __INIT_VAR(data__->P2,0,retain)
  __INIT_VAR(data__->SAME,__BOOL_LITERAL(FALSE),retain)
}

// Code part
void _DIFF2_body__(_DIFF2 *data__) {
  // Control execution
  if (!__GET_VAR(data__->EN)) {
    __SET_VAR(data__->,ENO,,__BOOL_LITERAL(FALSE));
    return;
  }
  else {
    __SET_VAR(data__->,ENO,,__BOOL_LITERAL(TRUE));
  }
  // Initialise TEMP variables

  __IL_DEFVAR_T __IL_DEFVAR;
  __IL_DEFVAR_T __IL_DEFVAR_BACK;
  #define GetFbVar(var,...) __GET_VAR(data__->var,__VA_ARGS__)
  #define SetFbVar(var,val,...) __SET_VAR(data__->,var,__VA_ARGS__,val)
extern void _DIFF2_body2__(_DIFF2 *data__) ;  _DIFF2_body2__(data__);
  #undef GetFbVar
  #undef SetFbVar
;

  goto __end;

__end:
  return;
} // _DIFF2_body__() 





void _VACLAMP_init__(_VACLAMP *data__, BOOL retain) {
  __INIT_VAR(data__->EN,__BOOL_LITERAL(TRUE),retain)
  __INIT_VAR(data__->ENO,__BOOL_LITERAL(TRUE),retain)
  AXIS_INFO_init__(&data__->AI,retain);
  __INIT_VAR(data__->AXISID,0,retain)
  __INIT_VAR(data__->VEL,0.0,retain)
  __INIT_VAR(data__->ACC,0.0,retain)
  __INIT_VAR(data__->DIR,__BOOL_LITERAL(TRUE),retain)
  __INIT_VAR(data__->VO,0,retain)
  __INIT_VAR(data__->AO,0,retain)
  _DIFF2_init__(&data__->D2,retain);
}

// Code part
void _VACLAMP_body__(_VACLAMP *data__) {
  // Control execution
  if (!__GET_VAR(data__->EN)) {
    __SET_VAR(data__->,ENO,,__BOOL_LITERAL(FALSE));
    return;
  }
  else {
    __SET_VAR(data__->,ENO,,__BOOL_LITERAL(TRUE));
  }
  // Initialise TEMP variables

  __IL_DEFVAR_T __IL_DEFVAR;
  __IL_DEFVAR_T __IL_DEFVAR_BACK;
  #define GetFbVar(var,...) __GET_VAR(data__->var,__VA_ARGS__)
  #define SetFbVar(var,val,...) __SET_VAR(data__->,var,__VA_ARGS__,val)
extern void _VACLAMP_body2__(_VACLAMP *data__) ;  _VACLAMP_body2__(data__);
  #undef GetFbVar
  #undef SetFbVar
;

  goto __end;

__end:
  return;
} // _VACLAMP_body__() 





void MC_ABSOLUTE_init__(MC_ABSOLUTE *data__, BOOL retain) {
  __INIT_VAR(data__->EN,__BOOL_LITERAL(TRUE),retain)
  __INIT_VAR(data__->ENO,__BOOL_LITERAL(TRUE),retain)
  __INIT_VAR(data__->AXISID,0,retain)
  __INIT_VAR(data__->EXECUTE,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->POSITION,0.0,retain)
  __INIT_VAR(data__->VELOCITY,0.0,retain)
  __INIT_VAR(data__->ACCELERATION,0,retain)
  __INIT_VAR(data__->AXIS,0,retain)
  __INIT_VAR(data__->DONE,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->ABORTED,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->ERROR,__BOOL_LITERAL(FALSE),retain)
  _W_DEC_init__(&data__->WDEC,retain);
  _W_PVA_init__(&data__->WPVA,retain);
  __INIT_VAR(data__->ABORTBOOL,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->ERRORBOOL,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->DONEBOOL,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->MOVEBOOL,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->CURLOCK,0,retain)
  __INIT_VAR(data__->RECLOCK,0,retain)
  _SESSIONID_init__(&data__->SID,retain);
  _GETERRORID_init__(&data__->EID,retain);
  __INIT_VAR(data__->CURPC,0,retain)
  __INIT_VAR(data__->ISSAME,__BOOL_LITERAL(FALSE),retain)
  _DIFF2_init__(&data__->D2,retain);
  __INIT_VAR(data__->CLICK3,3,retain)
  __INIT_VAR(data__->SESSIONOVER,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->ERRORNOTRESET,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->ERRID,0,retain)
  __INIT_VAR(data__->CS,0,retain)
  __INIT_VAR(data__->SCS,0,retain)
  __INIT_VAR(data__->CANMOVE,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->AO,0,retain)
  __INIT_VAR(data__->VO,0,retain)
  _VACLAMP_init__(&data__->VCLAMP,retain);
  AXIS_INFO_init__(&data__->AI,retain);
  __INIT_VAR(data__->CURPOS,0,retain)
  __INIT_VAR(data__->CURVEL,0,retain)
  __INIT_VAR(data__->PRETARGET,0,retain)
  __INIT_VAR(data__->CANSTART,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->VE0,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->CJ,0,retain)
  R_TRIG_init__(&data__->RRTG,retain);
  __INIT_VAR(data__->ER,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->WFED,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->TODEA,__BOOL_LITERAL(FALSE),retain)
  UINT i;
  data__->__nb_steps = 8;
  static const STEP temp_step = {{0, 0}, 0, {{0, 0}, 0}};
  for(i = 0; i < data__->__nb_steps; i++) {
    data__->__step_list[i] = temp_step;
  }
  __SET_VAR(data__->,__step_list[0].X,,1);
  data__->__nb_actions = 44;
  static const ACTION temp_action = {0, {0, 0}, 0, 0, {0, 0}, {0, 0}};
  for(i = 0; i < data__->__nb_actions; i++) {
    data__->__action_list[i] = temp_action;
  }
  data__->__nb_transitions = 12;
  data__->__lasttick_time = __CURRENT_TIME;
}

// Steps definitions
#define INIT __step_list[0]
#define __SFC_INIT 0
#define DOWN0 __step_list[1]
#define __SFC_DOWN0 1
#define START __step_list[2]
#define __SFC_START 2
#define MOVING __step_list[3]
#define __SFC_MOVING 3
#define SABORTED __step_list[4]
#define __SFC_SABORTED 4
#define SDONE __step_list[5]
#define __SFC_SDONE 5
#define SOUTDONE __step_list[6]
#define __SFC_SOUTDONE 6
#define SERROR __step_list[7]
#define __SFC_SERROR 7

// Actions definitions
#define __SFC_INIT_INLINE32 0
#define __SFC_INIT_INLINE33 1
#define __SFC_INIT_INLINE34 2
#define __SFC_INIT_INLINE35 3
#define __SFC_INIT_INLINE36 4
#define __SFC_INIT_INLINE37 5
#define __SFC_INIT_INLINE38 6
#define __SFC_DOWN0_INLINE6 7
#define __SFC_DOWN0_INLINE7 8
#define __SFC_DOWN0_INLINE8 9
#define __SFC_DOWN0_INLINE9 10
#define __SFC_DOWN0_INLINE10 11
#define __SFC_SETLOCKVAL 12
#define __SFC_DOWN0_INLINE11 13
#define __SFC_DOWN0_INLINE12 14
#define __SFC_DOWN0_INLINE13 15
#define __SFC_DOWN0_INLINE14 16
#define __SFC_DOWN0_INLINE15 17
#define __SFC_DOWN0_INLINE16 18
#define __SFC_DOWN0_INLINE17 19
#define __SFC_DOWN0_INLINE18 20
#define __SFC_DOWN0_INLINE19 21
#define __SFC_DOWN0_INLINE20 22
#define __SFC_DOWN0_INLINE21 23
#define __SFC_DOWN0_INLINE22 24
#define __SFC_DOWN0_INLINE23 25
#define __SFC_DOWN0_INLINE24 26
#define __SFC_DOWN0_INLINE25 27
#define __SFC_START_INLINE1 28
#define __SFC_START_INLINE2 29
#define __SFC_START_INLINE3 30
#define __SFC_START_INLINE4 31
#define __SFC_START_INLINE5 32
#define __SFC_MOVING_INLINE26 33
#define __SFC_ABORTERRORDONE 34
#define __SFC_SABORTED_INLINE30 35
#define __SFC_SDONE_INLINE27 36
#define __SFC_SDONE_INLINE28 37
#define __SFC_SDONE_INLINE29 38
#define __SFC_SESSIONOVERIFSS 39
#define __SFC_SERROR_INLINE31 40
#define __SFC_ABORTED 41
#define __SFC_DONE 42
#define __SFC_ERROR 43

// Code part
void MC_ABSOLUTE_body__(MC_ABSOLUTE *data__) {
  // Control execution
  if (!__GET_VAR(data__->EN)) {
    __SET_VAR(data__->,ENO,,__BOOL_LITERAL(FALSE));
    return;
  }
  else {
    __SET_VAR(data__->,ENO,,__BOOL_LITERAL(TRUE));
  }
  // Initialise TEMP variables

  INT i;
  TIME elapsed_time, current_time;

  // Calculate elapsed_time
  current_time = __CURRENT_TIME;
  elapsed_time = __time_sub(current_time, data__->__lasttick_time);
  data__->__lasttick_time = current_time;
  // Transitions initialization
  if (__DEBUG) {
    for (i = 0; i < data__->__nb_transitions; i++) {
      data__->__transition_list[i] = data__->__debug_transition_list[i];
    }
  }
  // Steps initialization
  for (i = 0; i < data__->__nb_steps; i++) {
    data__->__step_list[i].prev_state = __GET_VAR(data__->__step_list[i].X);
    if (__GET_VAR(data__->__step_list[i].X)) {
      data__->__step_list[i].T.value = __time_add(data__->__step_list[i].T.value, elapsed_time);
    }
  }
  // Actions initialization
  for (i = 0; i < data__->__nb_actions; i++) {
    __SET_VAR(data__->,__action_list[i].state,,0);
    data__->__action_list[i].set = 0;
    data__->__action_list[i].reset = 0;
    if (__time_cmp(data__->__action_list[i].set_remaining_time, __time_to_timespec(1, 0, 0, 0, 0, 0)) > 0) {
      data__->__action_list[i].set_remaining_time = __time_sub(data__->__action_list[i].set_remaining_time, elapsed_time);
      if (__time_cmp(data__->__action_list[i].set_remaining_time, __time_to_timespec(1, 0, 0, 0, 0, 0)) <= 0) {
        data__->__action_list[i].set_remaining_time = __time_to_timespec(1, 0, 0, 0, 0, 0);
        data__->__action_list[i].set = 1;
      }
    }
    if (__time_cmp(data__->__action_list[i].reset_remaining_time, __time_to_timespec(1, 0, 0, 0, 0, 0)) > 0) {
      data__->__action_list[i].reset_remaining_time = __time_sub(data__->__action_list[i].reset_remaining_time, elapsed_time);
      if (__time_cmp(data__->__action_list[i].reset_remaining_time, __time_to_timespec(1, 0, 0, 0, 0, 0)) <= 0) {
        data__->__action_list[i].reset_remaining_time = __time_to_timespec(1, 0, 0, 0, 0, 0);
        data__->__action_list[i].reset = 1;
      }
    }
  }

  // Transitions fire test
  if (__GET_VAR(data__->INIT.X)) {
    __SET_VAR(data__->,__transition_list[0],,__GET_VAR(data__->ER,));
    if (__DEBUG) {
      __SET_VAR(data__->,__debug_transition_list[0],,__GET_VAR(data__->__transition_list[0]));
    }
  }
  else {
    if (__DEBUG) {
      __SET_VAR(data__->,__debug_transition_list[0],,__GET_VAR(data__->ER,));
    }
    __SET_VAR(data__->,__transition_list[0],,0);
  }
  if (__GET_VAR(data__->DOWN0.X)) {
    __SET_VAR(data__->,__transition_list[1],,(__GET_VAR(data__->CANSTART,) || __GET_VAR(data__->VE0,)));
    if (__DEBUG) {
      __SET_VAR(data__->,__debug_transition_list[1],,__GET_VAR(data__->__transition_list[1]));
    }
  }
  else {
    if (__DEBUG) {
      __SET_VAR(data__->,__debug_transition_list[1],,(__GET_VAR(data__->CANSTART,) || __GET_VAR(data__->VE0,)));
    }
    __SET_VAR(data__->,__transition_list[1],,0);
  }
  if (__GET_VAR(data__->START.X)) {
    __SET_VAR(data__->,__transition_list[2],,__GET_VAR(data__->MOVEBOOL,));
    if (__DEBUG) {
      __SET_VAR(data__->,__debug_transition_list[2],,__GET_VAR(data__->__transition_list[2]));
    }
  }
  else {
    if (__DEBUG) {
      __SET_VAR(data__->,__debug_transition_list[2],,__GET_VAR(data__->MOVEBOOL,));
    }
    __SET_VAR(data__->,__transition_list[2],,0);
  }
  if (__GET_VAR(data__->MOVING.X)) {
    __SET_VAR(data__->,__transition_list[3],,__GET_VAR(data__->ABORTBOOL,));
    if (__DEBUG) {
      __SET_VAR(data__->,__debug_transition_list[3],,__GET_VAR(data__->__transition_list[3]));
    }
  }
  else {
    if (__DEBUG) {
      __SET_VAR(data__->,__debug_transition_list[3],,__GET_VAR(data__->ABORTBOOL,));
    }
    __SET_VAR(data__->,__transition_list[3],,0);
  }
  if (__GET_VAR(data__->SABORTED.X)) {
    __SET_VAR(data__->,__transition_list[4],,!(__GET_VAR(data__->EXECUTE,)));
    if (__DEBUG) {
      __SET_VAR(data__->,__debug_transition_list[4],,__GET_VAR(data__->__transition_list[4]));
    }
  }
  else {
    if (__DEBUG) {
      __SET_VAR(data__->,__debug_transition_list[4],,!(__GET_VAR(data__->EXECUTE,)));
    }
    __SET_VAR(data__->,__transition_list[4],,0);
  }
  if (__GET_VAR(data__->MOVING.X)) {
    __SET_VAR(data__->,__transition_list[5],,__GET_VAR(data__->DONEBOOL,));
    if (__DEBUG) {
      __SET_VAR(data__->,__debug_transition_list[5],,__GET_VAR(data__->__transition_list[5]));
    }
  }
  else {
    if (__DEBUG) {
      __SET_VAR(data__->,__debug_transition_list[5],,__GET_VAR(data__->DONEBOOL,));
    }
    __SET_VAR(data__->,__transition_list[5],,0);
  }
  if (__GET_VAR(data__->SDONE.X)) {
    __SET_VAR(data__->,__transition_list[6],,__GET_VAR(data__->SESSIONOVER,));
    if (__DEBUG) {
      __SET_VAR(data__->,__debug_transition_list[6],,__GET_VAR(data__->__transition_list[6]));
    }
  }
  else {
    if (__DEBUG) {
      __SET_VAR(data__->,__debug_transition_list[6],,__GET_VAR(data__->SESSIONOVER,));
    }
    __SET_VAR(data__->,__transition_list[6],,0);
  }
  if (__GET_VAR(data__->SOUTDONE.X)) {
    __SET_VAR(data__->,__transition_list[7],,!(__GET_VAR(data__->EXECUTE,)));
    if (__DEBUG) {
      __SET_VAR(data__->,__debug_transition_list[7],,__GET_VAR(data__->__transition_list[7]));
    }
  }
  else {
    if (__DEBUG) {
      __SET_VAR(data__->,__debug_transition_list[7],,!(__GET_VAR(data__->EXECUTE,)));
    }
    __SET_VAR(data__->,__transition_list[7],,0);
  }
  if (__GET_VAR(data__->MOVING.X)) {
    __SET_VAR(data__->,__transition_list[8],,__GET_VAR(data__->ERRORBOOL,));
    if (__DEBUG) {
      __SET_VAR(data__->,__debug_transition_list[8],,__GET_VAR(data__->__transition_list[8]));
    }
  }
  else {
    if (__DEBUG) {
      __SET_VAR(data__->,__debug_transition_list[8],,__GET_VAR(data__->ERRORBOOL,));
    }
    __SET_VAR(data__->,__transition_list[8],,0);
  }
  if (__GET_VAR(data__->SERROR.X)) {
    __SET_VAR(data__->,__transition_list[9],,!(__GET_VAR(data__->EXECUTE,)));
    if (__DEBUG) {
      __SET_VAR(data__->,__debug_transition_list[9],,__GET_VAR(data__->__transition_list[9]));
    }
  }
  else {
    if (__DEBUG) {
      __SET_VAR(data__->,__debug_transition_list[9],,!(__GET_VAR(data__->EXECUTE,)));
    }
    __SET_VAR(data__->,__transition_list[9],,0);
  }
  if (__GET_VAR(data__->DOWN0.X)) {
    __SET_VAR(data__->,__transition_list[10],,__GET_VAR(data__->ABORTBOOL,));
    if (__DEBUG) {
      __SET_VAR(data__->,__debug_transition_list[10],,__GET_VAR(data__->__transition_list[10]));
    }
  }
  else {
    if (__DEBUG) {
      __SET_VAR(data__->,__debug_transition_list[10],,__GET_VAR(data__->ABORTBOOL,));
    }
    __SET_VAR(data__->,__transition_list[10],,0);
  }
  if (__GET_VAR(data__->DOWN0.X)) {
    __SET_VAR(data__->,__transition_list[11],,__GET_VAR(data__->ERRORBOOL,));
    if (__DEBUG) {
      __SET_VAR(data__->,__debug_transition_list[11],,__GET_VAR(data__->__transition_list[11]));
    }
  }
  else {
    if (__DEBUG) {
      __SET_VAR(data__->,__debug_transition_list[11],,__GET_VAR(data__->ERRORBOOL,));
    }
    __SET_VAR(data__->,__transition_list[11],,0);
  }

  // Transitions reset steps
  if (__GET_VAR(data__->__transition_list[0])) {
    __SET_VAR(data__->,INIT.X,,0);
  }
  if (__GET_VAR(data__->__transition_list[1])) {
    __SET_VAR(data__->,DOWN0.X,,0);
  }
  if (__GET_VAR(data__->__transition_list[2])) {
    __SET_VAR(data__->,START.X,,0);
  }
  if (__GET_VAR(data__->__transition_list[3])) {
    __SET_VAR(data__->,MOVING.X,,0);
  }
  if (__GET_VAR(data__->__transition_list[4])) {
    __SET_VAR(data__->,SABORTED.X,,0);
  }
  if (__GET_VAR(data__->__transition_list[5])) {
    __SET_VAR(data__->,MOVING.X,,0);
  }
  if (__GET_VAR(data__->__transition_list[6])) {
    __SET_VAR(data__->,SDONE.X,,0);
  }
  if (__GET_VAR(data__->__transition_list[7])) {
    __SET_VAR(data__->,SOUTDONE.X,,0);
  }
  if (__GET_VAR(data__->__transition_list[8])) {
    __SET_VAR(data__->,MOVING.X,,0);
  }
  if (__GET_VAR(data__->__transition_list[9])) {
    __SET_VAR(data__->,SERROR.X,,0);
  }
  if (__GET_VAR(data__->__transition_list[10])) {
    __SET_VAR(data__->,DOWN0.X,,0);
  }
  if (__GET_VAR(data__->__transition_list[11])) {
    __SET_VAR(data__->,DOWN0.X,,0);
  }

  // Transitions set steps
  if (__GET_VAR(data__->__transition_list[0])) {
    __SET_VAR(data__->,DOWN0.X,,1);
    data__->DOWN0.T.value = __time_to_timespec(1, 0, 0, 0, 0, 0);
  }
  if (__GET_VAR(data__->__transition_list[1])) {
    __SET_VAR(data__->,START.X,,1);
    data__->START.T.value = __time_to_timespec(1, 0, 0, 0, 0, 0);
  }
  if (__GET_VAR(data__->__transition_list[2])) {
    __SET_VAR(data__->,MOVING.X,,1);
    data__->MOVING.T.value = __time_to_timespec(1, 0, 0, 0, 0, 0);
  }
  if (__GET_VAR(data__->__transition_list[3])) {
    __SET_VAR(data__->,SABORTED.X,,1);
    data__->SABORTED.T.value = __time_to_timespec(1, 0, 0, 0, 0, 0);
  }
  if (__GET_VAR(data__->__transition_list[4])) {
    __SET_VAR(data__->,INIT.X,,1);
    data__->INIT.T.value = __time_to_timespec(1, 0, 0, 0, 0, 0);
  }
  if (__GET_VAR(data__->__transition_list[5])) {
    __SET_VAR(data__->,SDONE.X,,1);
    data__->SDONE.T.value = __time_to_timespec(1, 0, 0, 0, 0, 0);
  }
  if (__GET_VAR(data__->__transition_list[6])) {
    __SET_VAR(data__->,SOUTDONE.X,,1);
    data__->SOUTDONE.T.value = __time_to_timespec(1, 0, 0, 0, 0, 0);
  }
  if (__GET_VAR(data__->__transition_list[7])) {
    __SET_VAR(data__->,INIT.X,,1);
    data__->INIT.T.value = __time_to_timespec(1, 0, 0, 0, 0, 0);
  }
  if (__GET_VAR(data__->__transition_list[8])) {
    __SET_VAR(data__->,SERROR.X,,1);
    data__->SERROR.T.value = __time_to_timespec(1, 0, 0, 0, 0, 0);
  }
  if (__GET_VAR(data__->__transition_list[9])) {
    __SET_VAR(data__->,INIT.X,,1);
    data__->INIT.T.value = __time_to_timespec(1, 0, 0, 0, 0, 0);
  }
  if (__GET_VAR(data__->__transition_list[10])) {
    __SET_VAR(data__->,SABORTED.X,,1);
    data__->SABORTED.T.value = __time_to_timespec(1, 0, 0, 0, 0, 0);
  }
  if (__GET_VAR(data__->__transition_list[11])) {
    __SET_VAR(data__->,SERROR.X,,1);
    data__->SERROR.T.value = __time_to_timespec(1, 0, 0, 0, 0, 0);
  }

  // Steps association
  // INIT action associations
  {
    char active = __GET_VAR(data__->INIT.X);
    char activated = active && !data__->INIT.prev_state;
    char desactivated = !active && data__->INIT.prev_state;

    if (active)       {__SET_VAR(data__->,__action_list[__SFC_INIT_INLINE32].state,,1);};
    if (desactivated) {__SET_VAR(data__->,__action_list[__SFC_INIT_INLINE32].state,,0);};

    if (active)       {__SET_VAR(data__->,__action_list[__SFC_INIT_INLINE33].state,,1);};
    if (desactivated) {__SET_VAR(data__->,__action_list[__SFC_INIT_INLINE33].state,,0);};

    if (active)       {__SET_VAR(data__->,__action_list[__SFC_INIT_INLINE34].state,,1);};
    if (desactivated) {__SET_VAR(data__->,__action_list[__SFC_INIT_INLINE34].state,,0);};

    if (active)       {__SET_VAR(data__->,__action_list[__SFC_INIT_INLINE35].state,,1);};
    if (desactivated) {__SET_VAR(data__->,__action_list[__SFC_INIT_INLINE35].state,,0);};

    if (active)       {__SET_VAR(data__->,__action_list[__SFC_INIT_INLINE36].state,,1);};
    if (desactivated) {__SET_VAR(data__->,__action_list[__SFC_INIT_INLINE36].state,,0);};

    if (active)       {__SET_VAR(data__->,__action_list[__SFC_INIT_INLINE37].state,,1);};
    if (desactivated) {__SET_VAR(data__->,__action_list[__SFC_INIT_INLINE37].state,,0);};

    if (active)       {__SET_VAR(data__->,__action_list[__SFC_INIT_INLINE38].state,,1);};
    if (desactivated) {__SET_VAR(data__->,__action_list[__SFC_INIT_INLINE38].state,,0);};

  }

  // DOWN0 action associations
  {
    char active = __GET_VAR(data__->DOWN0.X);
    char activated = active && !data__->DOWN0.prev_state;
    char desactivated = !active && data__->DOWN0.prev_state;

    if (activated)    {__SET_VAR(data__->,__action_list[__SFC_DOWN0_INLINE6].state,,1);}
    else              {__SET_VAR(data__->,__action_list[__SFC_DOWN0_INLINE6].state,,0);};

    if (activated)    {__SET_VAR(data__->,__action_list[__SFC_DOWN0_INLINE7].state,,1);}
    else              {__SET_VAR(data__->,__action_list[__SFC_DOWN0_INLINE7].state,,0);};

    if (activated)    {__SET_VAR(data__->,__action_list[__SFC_DOWN0_INLINE8].state,,1);}
    else              {__SET_VAR(data__->,__action_list[__SFC_DOWN0_INLINE8].state,,0);};

    if (activated)    {__SET_VAR(data__->,__action_list[__SFC_DOWN0_INLINE9].state,,1);}
    else              {__SET_VAR(data__->,__action_list[__SFC_DOWN0_INLINE9].state,,0);};

    if (activated)    {__SET_VAR(data__->,__action_list[__SFC_DOWN0_INLINE10].state,,1);}
    else              {__SET_VAR(data__->,__action_list[__SFC_DOWN0_INLINE10].state,,0);};

    if (activated)    {__SET_VAR(data__->,__action_list[__SFC_SETLOCKVAL].state,,1);}
    else              {__SET_VAR(data__->,__action_list[__SFC_SETLOCKVAL].state,,0);};

    if (activated)    {__SET_VAR(data__->,__action_list[__SFC_DOWN0_INLINE11].state,,1);}
    else              {__SET_VAR(data__->,__action_list[__SFC_DOWN0_INLINE11].state,,0);};

    if (activated)    {__SET_VAR(data__->,__action_list[__SFC_DOWN0_INLINE12].state,,1);}
    else              {__SET_VAR(data__->,__action_list[__SFC_DOWN0_INLINE12].state,,0);};

    if (activated)    {__SET_VAR(data__->,__action_list[__SFC_DOWN0_INLINE13].state,,1);}
    else              {__SET_VAR(data__->,__action_list[__SFC_DOWN0_INLINE13].state,,0);};

    if (activated)    {__SET_VAR(data__->,__action_list[__SFC_DOWN0_INLINE14].state,,1);}
    else              {__SET_VAR(data__->,__action_list[__SFC_DOWN0_INLINE14].state,,0);};

    if (activated)    {__SET_VAR(data__->,__action_list[__SFC_DOWN0_INLINE15].state,,1);}
    else              {__SET_VAR(data__->,__action_list[__SFC_DOWN0_INLINE15].state,,0);};

    if (activated)    {__SET_VAR(data__->,__action_list[__SFC_DOWN0_INLINE16].state,,1);}
    else              {__SET_VAR(data__->,__action_list[__SFC_DOWN0_INLINE16].state,,0);};

    if (active)       {__SET_VAR(data__->,__action_list[__SFC_DOWN0_INLINE17].state,,1);};
    if (desactivated) {__SET_VAR(data__->,__action_list[__SFC_DOWN0_INLINE17].state,,0);};

    if (active)       {__SET_VAR(data__->,__action_list[__SFC_DOWN0_INLINE18].state,,1);};
    if (desactivated) {__SET_VAR(data__->,__action_list[__SFC_DOWN0_INLINE18].state,,0);};

    if (active)       {__SET_VAR(data__->,__action_list[__SFC_DOWN0_INLINE19].state,,1);};
    if (desactivated) {__SET_VAR(data__->,__action_list[__SFC_DOWN0_INLINE19].state,,0);};

    if (active)       {__SET_VAR(data__->,__action_list[__SFC_DOWN0_INLINE20].state,,1);};
    if (desactivated) {__SET_VAR(data__->,__action_list[__SFC_DOWN0_INLINE20].state,,0);};

    if (active)       {__SET_VAR(data__->,__action_list[__SFC_DOWN0_INLINE21].state,,1);};
    if (desactivated) {__SET_VAR(data__->,__action_list[__SFC_DOWN0_INLINE21].state,,0);};

    if (active)       {__SET_VAR(data__->,__action_list[__SFC_DOWN0_INLINE22].state,,1);};
    if (desactivated) {__SET_VAR(data__->,__action_list[__SFC_DOWN0_INLINE22].state,,0);};

    if (active)       {__SET_VAR(data__->,__action_list[__SFC_DOWN0_INLINE23].state,,1);};
    if (desactivated) {__SET_VAR(data__->,__action_list[__SFC_DOWN0_INLINE23].state,,0);};

    if (active)       {__SET_VAR(data__->,__action_list[__SFC_DOWN0_INLINE24].state,,1);};
    if (desactivated) {__SET_VAR(data__->,__action_list[__SFC_DOWN0_INLINE24].state,,0);};

    if (active)       {__SET_VAR(data__->,__action_list[__SFC_DOWN0_INLINE25].state,,1);};
    if (desactivated) {__SET_VAR(data__->,__action_list[__SFC_DOWN0_INLINE25].state,,0);};

  }

  // START action associations
  {
    char active = __GET_VAR(data__->START.X);
    char activated = active && !data__->START.prev_state;
    char desactivated = !active && data__->START.prev_state;

    if (activated)    {__SET_VAR(data__->,__action_list[__SFC_START_INLINE1].state,,1);}
    else              {__SET_VAR(data__->,__action_list[__SFC_START_INLINE1].state,,0);};

    if (activated)    {__SET_VAR(data__->,__action_list[__SFC_START_INLINE2].state,,1);}
    else              {__SET_VAR(data__->,__action_list[__SFC_START_INLINE2].state,,0);};

    if (activated)    {__SET_VAR(data__->,__action_list[__SFC_START_INLINE3].state,,1);}
    else              {__SET_VAR(data__->,__action_list[__SFC_START_INLINE3].state,,0);};

    if (activated)    {__SET_VAR(data__->,__action_list[__SFC_START_INLINE4].state,,1);}
    else              {__SET_VAR(data__->,__action_list[__SFC_START_INLINE4].state,,0);};

    if (activated)    {__SET_VAR(data__->,__action_list[__SFC_START_INLINE5].state,,1);}
    else              {__SET_VAR(data__->,__action_list[__SFC_START_INLINE5].state,,0);};

  }

  // MOVING action associations
  {
    char active = __GET_VAR(data__->MOVING.X);
    char activated = active && !data__->MOVING.prev_state;
    char desactivated = !active && data__->MOVING.prev_state;

    if (activated)    {__SET_VAR(data__->,__action_list[__SFC_MOVING_INLINE26].state,,1);}
    else              {__SET_VAR(data__->,__action_list[__SFC_MOVING_INLINE26].state,,0);};

    if (active)       {__SET_VAR(data__->,__action_list[__SFC_ABORTERRORDONE].state,,1);};
    if (desactivated) {__SET_VAR(data__->,__action_list[__SFC_ABORTERRORDONE].state,,0);};

  }

  // SABORTED action associations
  {
    char active = __GET_VAR(data__->SABORTED.X);
    char activated = active && !data__->SABORTED.prev_state;
    char desactivated = !active && data__->SABORTED.prev_state;

    if (activated)    {__SET_VAR(data__->,__action_list[__SFC_SABORTED_INLINE30].state,,1);}
    else              {__SET_VAR(data__->,__action_list[__SFC_SABORTED_INLINE30].state,,0);};

    if (activated)    {__SET_VAR(data__->,ABORTED,,1);}
    else              {__SET_VAR(data__->,ABORTED,,0);};

  }

  // SDONE action associations
  {
    char active = __GET_VAR(data__->SDONE.X);
    char activated = active && !data__->SDONE.prev_state;
    char desactivated = !active && data__->SDONE.prev_state;

    if (activated)    {__SET_VAR(data__->,__action_list[__SFC_SDONE_INLINE27].state,,1);}
    else              {__SET_VAR(data__->,__action_list[__SFC_SDONE_INLINE27].state,,0);};

    if (activated)    {__SET_VAR(data__->,__action_list[__SFC_SDONE_INLINE28].state,,1);}
    else              {__SET_VAR(data__->,__action_list[__SFC_SDONE_INLINE28].state,,0);};

    if (activated)    {__SET_VAR(data__->,__action_list[__SFC_SDONE_INLINE29].state,,1);}
    else              {__SET_VAR(data__->,__action_list[__SFC_SDONE_INLINE29].state,,0);};

    if (active)       {__SET_VAR(data__->,__action_list[__SFC_SESSIONOVERIFSS].state,,1);};
    if (desactivated) {__SET_VAR(data__->,__action_list[__SFC_SESSIONOVERIFSS].state,,0);};

  }

  // SOUTDONE action associations
  {
    char active = __GET_VAR(data__->SOUTDONE.X);
    char activated = active && !data__->SOUTDONE.prev_state;
    char desactivated = !active && data__->SOUTDONE.prev_state;

    if (active)       {__SET_VAR(data__->,DONE,,1);};
    if (desactivated) {__SET_VAR(data__->,DONE,,0);};

  }

  // SERROR action associations
  {
    char active = __GET_VAR(data__->SERROR.X);
    char activated = active && !data__->SERROR.prev_state;
    char desactivated = !active && data__->SERROR.prev_state;

    if (activated)    {__SET_VAR(data__->,__action_list[__SFC_SERROR_INLINE31].state,,1);}
    else              {__SET_VAR(data__->,__action_list[__SFC_SERROR_INLINE31].state,,0);};

    if (active)       {__SET_VAR(data__->,ERROR,,1);};
    if (desactivated) {__SET_VAR(data__->,ERROR,,0);};

  }


  // Actions state evaluation
  for (i = 0; i < data__->__nb_actions; i++) {
    if (data__->__action_list[i].set) {
      data__->__action_list[i].set_remaining_time = __time_to_timespec(1, 0, 0, 0, 0, 0);
      data__->__action_list[i].stored = 1;
    }
    if (data__->__action_list[i].reset) {
      data__->__action_list[i].reset_remaining_time = __time_to_timespec(1, 0, 0, 0, 0, 0);
      data__->__action_list[i].stored = 0;
    }
    __SET_VAR(data__->,__action_list[i].state,,__GET_VAR(data__->__action_list[i].state) | data__->__action_list[i].stored);
  }

  // Actions execution
  if (data__->__action_list[__SFC_ABORTED].reset) {
    __SET_VAR(data__->,ABORTED,,0);
  }
  else if (data__->__action_list[__SFC_ABORTED].set) {
    __SET_VAR(data__->,ABORTED,,1);
  }
  if (data__->__action_list[__SFC_DONE].reset) {
    __SET_VAR(data__->,DONE,,0);
  }
  else if (data__->__action_list[__SFC_DONE].set) {
    __SET_VAR(data__->,DONE,,1);
  }
  if (data__->__action_list[__SFC_ERROR].reset) {
    __SET_VAR(data__->,ERROR,,0);
  }
  else if (data__->__action_list[__SFC_ERROR].set) {
    __SET_VAR(data__->,ERROR,,1);
  }
  if(__GET_VAR(data__->__action_list[__SFC_INIT_INLINE32].state)) {
    __SET_VAR(data__->,AXIS,,__GET_VAR(data__->AXISID,));
  }

  if(__GET_VAR(data__->__action_list[__SFC_INIT_INLINE33].state)) {
    __SET_VAR(data__->VCLAMP.,AXISID,,__GET_VAR(data__->AXISID,));
    __SET_VAR(data__->VCLAMP.,VEL,,__GET_VAR(data__->VELOCITY,));
    __SET_VAR(data__->VCLAMP.,ACC,,__GET_VAR(data__->ACCELERATION,));
    _VACLAMP_body__(&data__->VCLAMP);
  }

  if(__GET_VAR(data__->__action_list[__SFC_INIT_INLINE34].state)) {
    __SET_VAR(data__->,VO,,__GET_VAR(data__->VCLAMP.VO,));
  }

  if(__GET_VAR(data__->__action_list[__SFC_INIT_INLINE35].state)) {
    __SET_VAR(data__->,AO,,__GET_VAR(data__->VCLAMP.AO,));
  }

  if(__GET_VAR(data__->__action_list[__SFC_INIT_INLINE36].state)) {
    __SET_VAR(data__->AI.,ROW,,__BOOL_LITERAL(FALSE));
    __SET_VAR(data__->AI.,NODEID,,__GET_VAR(data__->AXISID,));
    __SET_VAR(data__->AI.,PNAME,,__STRING_LITERAL(5,"STATE"));
    AXIS_INFO_body__(&data__->AI);
  }

  if(__GET_VAR(data__->__action_list[__SFC_INIT_INLINE37].state)) {
    __SET_VAR(data__->,SCS,,__GET_VAR(data__->AI.OUTU32,));
  }

  if(__GET_VAR(data__->__action_list[__SFC_INIT_INLINE38].state)) {
    if ((((((__GET_VAR(data__->VO,) > 0.0) && (__GET_VAR(data__->SCS,) == 1)) || (__GET_VAR(data__->SCS,) == 2)) || (__GET_VAR(data__->SCS,) == 3)) || (__GET_VAR(data__->SCS,) == 5))) {
      __SET_VAR(data__->RRTG.,CLK,,__GET_VAR(data__->EXECUTE,));
      R_TRIG_body__(&data__->RRTG);
      __SET_VAR(data__->,ER,,__GET_VAR(data__->RRTG.Q));
    };
  }

  if(__GET_VAR(data__->__action_list[__SFC_DOWN0_INLINE6].state)) {
    __SET_VAR(data__->,CS,,2);
  }

  if(__GET_VAR(data__->__action_list[__SFC_DOWN0_INLINE7].state)) {
    __SET_VAR(data__->,ER,,0);
  }

  if(__GET_VAR(data__->__action_list[__SFC_DOWN0_INLINE8].state)) {
    __SET_VAR(data__->RRTG.,CLK,,0);
    R_TRIG_body__(&data__->RRTG);
  }

  if(__GET_VAR(data__->__action_list[__SFC_DOWN0_INLINE9].state)) {
    __SET_VAR(data__->,DONEBOOL,,__BOOL_LITERAL(FALSE));
  }

  if(__GET_VAR(data__->__action_list[__SFC_DOWN0_INLINE10].state)) {
    __SET_VAR(data__->,ABORTBOOL,,__BOOL_LITERAL(FALSE));
  }

  if(__GET_VAR(data__->__action_list[__SFC_SETLOCKVAL].state)) {
    __SET_VAR(data__->SID.,ROW,,__BOOL_LITERAL(TRUE));
    __SET_VAR(data__->SID.,AXISID,,__GET_VAR(data__->AXISID,));
    _SESSIONID_body__(&data__->SID);
    __SET_VAR(data__->,CURLOCK,,__GET_VAR(data__->SID.FBD_ABORT_FLAG));
  }

  if(__GET_VAR(data__->__action_list[__SFC_DOWN0_INLINE11].state)) {
    __SET_VAR(data__->AI.,ROW,,__BOOL_LITERAL(FALSE));
    __SET_VAR(data__->AI.,NODEID,,__GET_VAR(data__->AXISID,));
    __SET_VAR(data__->AI.,PNAME,,__STRING_LITERAL(7,"INTERPC"));
    AXIS_INFO_body__(&data__->AI);
  }

  if(__GET_VAR(data__->__action_list[__SFC_DOWN0_INLINE12].state)) {
    __SET_VAR(data__->,CURPOS,,__GET_VAR(data__->AI.OUTR,));
  }

  if(__GET_VAR(data__->__action_list[__SFC_DOWN0_INLINE13].state)) {
    __SET_VAR(data__->AI.,ROW,,__BOOL_LITERAL(FALSE));
    __SET_VAR(data__->AI.,NODEID,,__GET_VAR(data__->AXISID,));
    __SET_VAR(data__->AI.,PNAME,,__STRING_LITERAL(6,"INTERP"));
    AXIS_INFO_body__(&data__->AI);
  }

  if(__GET_VAR(data__->__action_list[__SFC_DOWN0_INLINE14].state)) {
    __SET_VAR(data__->,PRETARGET,,__GET_VAR(data__->AI.OUTR,));
  }

  if(__GET_VAR(data__->__action_list[__SFC_DOWN0_INLINE15].state)) {
    __SET_VAR(data__->,CJ,,((__GET_VAR(data__->PRETARGET,) - __GET_VAR(data__->CURPOS,)) * (__GET_VAR(data__->POSITION,) - __GET_VAR(data__->CURPOS,))));
  }

  if(__GET_VAR(data__->__action_list[__SFC_DOWN0_INLINE16].state)) {
    if ((__GET_VAR(data__->CJ,) >= 0.0)) {
      __SET_VAR(data__->,CANSTART,,__BOOL_LITERAL(TRUE));
    } else {
      __SET_VAR(data__->,CANSTART,,__BOOL_LITERAL(FALSE));
      __SET_VAR(data__->AI.,ROW,,__BOOL_LITERAL(TRUE));
      __SET_VAR(data__->AI.,NODEID,,__GET_VAR(data__->AXISID,));
      __SET_VAR(data__->AI.,PNAME,,__STRING_LITERAL(6,"INTERV"));
      __SET_VAR(data__->AI.,INR,,0.0);
      AXIS_INFO_body__(&data__->AI);
    };
  }

  if(__GET_VAR(data__->__action_list[__SFC_DOWN0_INLINE17].state)) {
    __SET_VAR(data__->SID.,ROW,,__BOOL_LITERAL(FALSE));
    __SET_VAR(data__->SID.,AXISID,,__GET_VAR(data__->AXISID,));
    _SESSIONID_body__(&data__->SID);
    __SET_VAR(data__->,RECLOCK,,__GET_VAR(data__->SID.FBD_ABORT_FLAG));
  }

  if(__GET_VAR(data__->__action_list[__SFC_DOWN0_INLINE18].state)) {
    if ((__GET_VAR(data__->RECLOCK,) != __GET_VAR(data__->CURLOCK,))) {
      __SET_VAR(data__->,ABORTBOOL,,__BOOL_LITERAL(TRUE));
    } else {
      __SET_VAR(data__->,ABORTBOOL,,__BOOL_LITERAL(FALSE));
    };
  }

  if(__GET_VAR(data__->__action_list[__SFC_DOWN0_INLINE19].state)) {
    __SET_VAR(data__->AI.,ROW,,__BOOL_LITERAL(FALSE));
    __SET_VAR(data__->AI.,NODEID,,__GET_VAR(data__->AXISID,));
    __SET_VAR(data__->AI.,PNAME,,__STRING_LITERAL(7,"INTERVC"));
    AXIS_INFO_body__(&data__->AI);
  }

  if(__GET_VAR(data__->__action_list[__SFC_DOWN0_INLINE20].state)) {
    __SET_VAR(data__->,CURVEL,,__GET_VAR(data__->AI.OUTR,));
  }

  if(__GET_VAR(data__->__action_list[__SFC_DOWN0_INLINE21].state)) {
    __SET_VAR(data__->D2.,P1,,__GET_VAR(data__->CURVEL,));
    __SET_VAR(data__->D2.,P2,,0.0);
    _DIFF2_body__(&data__->D2);
  }

  if(__GET_VAR(data__->__action_list[__SFC_DOWN0_INLINE22].state)) {
    if (__GET_VAR(data__->D2.SAME,)) {
      __SET_VAR(data__->,VE0,,__BOOL_LITERAL(TRUE));
    } else {
      __SET_VAR(data__->,VE0,,__BOOL_LITERAL(FALSE));
    };
  }

  if(__GET_VAR(data__->__action_list[__SFC_DOWN0_INLINE23].state)) {
    __SET_VAR(data__->EID.,AXISID,,__GET_VAR(data__->AXISID,));
    _GETERRORID_body__(&data__->EID);
  }

  if(__GET_VAR(data__->__action_list[__SFC_DOWN0_INLINE24].state)) {
    __SET_VAR(data__->,ERRID,,__GET_VAR(data__->EID.ERRORID,));
  }

  if(__GET_VAR(data__->__action_list[__SFC_DOWN0_INLINE25].state)) {
    if ((__GET_VAR(data__->ERRID,) > 0)) {
      __SET_VAR(data__->,ERRORBOOL,,1);
    };
  }

  if(__GET_VAR(data__->__action_list[__SFC_START_INLINE1].state)) {
    __SET_VAR(data__->,CS,,3);
  }

  if(__GET_VAR(data__->__action_list[__SFC_START_INLINE2].state)) {
    __SET_VAR(data__->WPVA.,AXISID,,__GET_VAR(data__->AXISID,));
    __SET_VAR(data__->WPVA.,POSITION,,__GET_VAR(data__->POSITION,));
    __SET_VAR(data__->WPVA.,VELOCITY,,__GET_VAR(data__->VO,));
    __SET_VAR(data__->WPVA.,ACCELERATION,,__GET_VAR(data__->AO,));
    _W_PVA_body__(&data__->WPVA);
  }

  if(__GET_VAR(data__->__action_list[__SFC_START_INLINE3].state)) {
    __SET_VAR(data__->WDEC.,AXISID,,__GET_VAR(data__->AXISID,));
    __SET_VAR(data__->WDEC.,DONEFLAG,,__BOOL_LITERAL(FALSE));
    __SET_VAR(data__->WDEC.,EXECUTEFLAG,,__BOOL_LITERAL(TRUE));
    __SET_VAR(data__->WDEC.,COMMANDTYPE,,1);
    _W_DEC_body__(&data__->WDEC);
  }

  if(__GET_VAR(data__->__action_list[__SFC_START_INLINE4].state)) {
    __SET_VAR(data__->,MOVEBOOL,,__BOOL_LITERAL(TRUE));
  }

  if(__GET_VAR(data__->__action_list[__SFC_START_INLINE5].state)) {
    __SET_VAR(data__->,DONE,,__BOOL_LITERAL(FALSE));
  }

  if(__GET_VAR(data__->__action_list[__SFC_MOVING_INLINE26].state)) {
    __SET_VAR(data__->,CS,,14);
  }

  if(__GET_VAR(data__->__action_list[__SFC_ABORTERRORDONE].state)) {
    __SET_VAR(data__->SID.,ROW,,__BOOL_LITERAL(FALSE));
    __SET_VAR(data__->SID.,AXISID,,__GET_VAR(data__->AXISID,));
    _SESSIONID_body__(&data__->SID);
    __SET_VAR(data__->,RECLOCK,,__GET_VAR(data__->SID.FBD_ABORT_FLAG));
    if ((__GET_VAR(data__->RECLOCK,) != __GET_VAR(data__->CURLOCK,))) {
      __SET_VAR(data__->,ABORTBOOL,,__BOOL_LITERAL(TRUE));
    };
    __SET_VAR(data__->AI.,ROW,,__BOOL_LITERAL(FALSE));
    __SET_VAR(data__->AI.,NODEID,,__GET_VAR(data__->AXISID,));
    __SET_VAR(data__->AI.,PNAME,,__STRING_LITERAL(7,"INTERPC"));
    AXIS_INFO_body__(&data__->AI);
    __SET_VAR(data__->,CURPC,,__GET_VAR(data__->AI.OUTR));
    __SET_VAR(data__->D2.,P1,,__GET_VAR(data__->CURPC,));
    __SET_VAR(data__->D2.,P2,,__GET_VAR(data__->POSITION,));
    _DIFF2_body__(&data__->D2);
    __SET_VAR(data__->,ISSAME,,__GET_VAR(data__->D2.SAME));
    if (__GET_VAR(data__->ISSAME,)) {
      __SET_VAR(data__->,DONEBOOL,,__BOOL_LITERAL(TRUE));
      __SET_VAR(data__->,ABORTBOOL,,__BOOL_LITERAL(FALSE));
    };
    __SET_VAR(data__->EID.,AXISID,,__GET_VAR(data__->AXISID,));
    _GETERRORID_body__(&data__->EID);
    __SET_VAR(data__->,ERRID,,__GET_VAR(data__->EID.ERRORID,));
    if ((__GET_VAR(data__->ERRID,) > 0)) {
      __SET_VAR(data__->,ERRORBOOL,,__BOOL_LITERAL(TRUE));
      __SET_VAR(data__->,DONEBOOL,,__BOOL_LITERAL(FALSE));
      __SET_VAR(data__->,ABORTBOOL,,__BOOL_LITERAL(FALSE));
    };
  }

  if(__GET_VAR(data__->__action_list[__SFC_SABORTED_INLINE30].state)) {
    __SET_VAR(data__->,CS,,5);
  }

  if(__GET_VAR(data__->__action_list[__SFC_SDONE_INLINE27].state)) {
    __SET_VAR(data__->,CS,,6);
  }

  if(__GET_VAR(data__->__action_list[__SFC_SDONE_INLINE28].state)) {
    __SET_VAR(data__->,PRETARGET,,__GET_VAR(data__->POSITION,));
  }

  if(__GET_VAR(data__->__action_list[__SFC_SDONE_INLINE29].state)) {
    __SET_VAR(data__->WDEC.,AXISID,,__GET_VAR(data__->AXISID,));
    __SET_VAR(data__->WDEC.,DONEFLAG,,__BOOL_LITERAL(TRUE));
    __SET_VAR(data__->WDEC.,EXECUTEFLAG,,__BOOL_LITERAL(FALSE));
    __SET_VAR(data__->WDEC.,COMMANDTYPE,,1);
    _W_DEC_body__(&data__->WDEC);
  }

  if(__GET_VAR(data__->__action_list[__SFC_SESSIONOVERIFSS].state)) {
    __SET_VAR(data__->AI.,ROW,,__BOOL_LITERAL(FALSE));
    __SET_VAR(data__->AI.,NODEID,,__GET_VAR(data__->AXISID,));
    __SET_VAR(data__->AI.,PNAME,,__STRING_LITERAL(5,"STATE"));
    AXIS_INFO_body__(&data__->AI);
    if ((__GET_VAR(data__->AI.OUTU32,) == 1)) {
      __SET_VAR(data__->,SESSIONOVER,,__BOOL_LITERAL(TRUE));
    } else {
      __SET_VAR(data__->,SESSIONOVER,,__BOOL_LITERAL(FALSE));
    };
  }

  if(__GET_VAR(data__->__action_list[__SFC_SERROR_INLINE31].state)) {
    __SET_VAR(data__->,CS,,7);
  }



  goto __end;

__end:
  return;
} // MC_ABSOLUTE_body__() 

// Steps undefinitions
#undef INIT
#undef __SFC_INIT
#undef DOWN0
#undef __SFC_DOWN0
#undef START
#undef __SFC_START
#undef MOVING
#undef __SFC_MOVING
#undef SABORTED
#undef __SFC_SABORTED
#undef SDONE
#undef __SFC_SDONE
#undef SOUTDONE
#undef __SFC_SOUTDONE
#undef SERROR
#undef __SFC_SERROR

// Actions undefinitions
#undef __SFC_INIT_INLINE32
#undef __SFC_INIT_INLINE33
#undef __SFC_INIT_INLINE34
#undef __SFC_INIT_INLINE35
#undef __SFC_INIT_INLINE36
#undef __SFC_INIT_INLINE37
#undef __SFC_INIT_INLINE38
#undef __SFC_DOWN0_INLINE6
#undef __SFC_DOWN0_INLINE7
#undef __SFC_DOWN0_INLINE8
#undef __SFC_DOWN0_INLINE9
#undef __SFC_DOWN0_INLINE10
#undef __SFC_SETLOCKVAL
#undef __SFC_DOWN0_INLINE11
#undef __SFC_DOWN0_INLINE12
#undef __SFC_DOWN0_INLINE13
#undef __SFC_DOWN0_INLINE14
#undef __SFC_DOWN0_INLINE15
#undef __SFC_DOWN0_INLINE16
#undef __SFC_DOWN0_INLINE17
#undef __SFC_DOWN0_INLINE18
#undef __SFC_DOWN0_INLINE19
#undef __SFC_DOWN0_INLINE20
#undef __SFC_DOWN0_INLINE21
#undef __SFC_DOWN0_INLINE22
#undef __SFC_DOWN0_INLINE23
#undef __SFC_DOWN0_INLINE24
#undef __SFC_DOWN0_INLINE25
#undef __SFC_START_INLINE1
#undef __SFC_START_INLINE2
#undef __SFC_START_INLINE3
#undef __SFC_START_INLINE4
#undef __SFC_START_INLINE5
#undef __SFC_MOVING_INLINE26
#undef __SFC_ABORTERRORDONE
#undef __SFC_SABORTED_INLINE30
#undef __SFC_SDONE_INLINE27
#undef __SFC_SDONE_INLINE28
#undef __SFC_SDONE_INLINE29
#undef __SFC_SESSIONOVERIFSS
#undef __SFC_SERROR_INLINE31
#undef __SFC_ABORTED
#undef __SFC_DONE
#undef __SFC_ERROR





void MC_STOP_init__(MC_STOP *data__, BOOL retain) {
  __INIT_VAR(data__->EN,__BOOL_LITERAL(TRUE),retain)
  __INIT_VAR(data__->ENO,__BOOL_LITERAL(TRUE),retain)
  __INIT_VAR(data__->AXISID,0,retain)
  __INIT_VAR(data__->EXECUTE,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->AXIS,0,retain)
  __INIT_VAR(data__->DONE,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->ERROR,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->CS,0,retain)
  __INIT_VAR(data__->CL,0,retain)
  __INIT_VAR(data__->DECELERATION,0,retain)
  _W_DEC_init__(&data__->WDEC,retain);
  _W_PVA_init__(&data__->WPVA,retain);
  __INIT_VAR(data__->DONEBOOL,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->MOVEBOOL,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->CURP,0,retain)
  __INIT_VAR(data__->LASTP,0,retain)
  __INIT_VAR(data__->ISSAME,__BOOL_LITERAL(FALSE),retain)
  _DIFF2_init__(&data__->D2,retain);
  _SESSIONID_init__(&data__->SID,retain);
  __INIT_VAR(data__->CURLOCK,0,retain)
  __INIT_VAR(data__->RECLOCK,0,retain)
  __INIT_VAR(data__->SCS,0,retain)
  __INIT_VAR(data__->BST,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->NES,__BOOL_LITERAL(FALSE),retain)
  AXIS_INFO_init__(&data__->AI,retain);
  __INIT_VAR(data__->SESSIONOVER,__BOOL_LITERAL(FALSE),retain)
  R_TRIG_init__(&data__->RRTG,retain);
  __INIT_VAR(data__->ER,__BOOL_LITERAL(FALSE),retain)
  UINT i;
  data__->__nb_steps = 5;
  static const STEP temp_step = {{0, 0}, 0, {{0, 0}, 0}};
  for(i = 0; i < data__->__nb_steps; i++) {
    data__->__step_list[i] = temp_step;
  }
  __SET_VAR(data__->,__step_list[0].X,,1);
  data__->__nb_actions = 25;
  static const ACTION temp_action = {0, {0, 0}, 0, 0, {0, 0}, {0, 0}};
  for(i = 0; i < data__->__nb_actions; i++) {
    data__->__action_list[i] = temp_action;
  }
  data__->__nb_transitions = 5;
  data__->__lasttick_time = __CURRENT_TIME;
}

// Steps definitions
#define INIT __step_list[0]
#define __SFC_INIT 0
#define BREAKMOTION __step_list[1]
#define __SFC_BREAKMOTION 1
#define MOVING __step_list[2]
#define __SFC_MOVING 2
#define SDONE __step_list[3]
#define __SFC_SDONE 3
#define TOSS __step_list[4]
#define __SFC_TOSS 4

// Actions definitions
#define __SFC_INIT_INLINE22 0
#define __SFC_INIT_INLINE23 1
#define __SFC_INIT_INLINE24 2
#define __SFC_INIT_INLINE25 3
#define __SFC_BREAKMOTION_INLINE9 4
#define __SFC_BREAKMOTION_INLINE10 5
#define __SFC_BREAKMOTION_INLINE11 6
#define __SFC_BREAKMOTION_INLINE12 7
#define __SFC_BREAKMOTION_INLINE13 8
#define __SFC_BREAKMOTION_INLINE14 9
#define __SFC_BREAKMOTION_INLINE15 10
#define __SFC_BREAKMOTION_INLINE16 11
#define __SFC_BREAKMOTION_INLINE17 12
#define __SFC_BREAKMOTION_INLINE18 13
#define __SFC_BREAKMOTION_INLINE19 14
#define __SFC_BREAKMOTION_INLINE20 15
#define __SFC_BREAKMOTION_INLINE21 16
#define __SFC_MOVING_INLINE2 17
#define __SFC_MOVING_INLINE3 18
#define __SFC_MOVING_INLINE4 19
#define __SFC_MOVING_INLINE5 20
#define __SFC_SDONE_INLINE1 21
#define __SFC_TOSS_INLINE26 22
#define __SFC_SESSIONOVERIFSS 23
#define __SFC_DONE 24

// Code part
void MC_STOP_body__(MC_STOP *data__) {
  // Control execution
  if (!__GET_VAR(data__->EN)) {
    __SET_VAR(data__->,ENO,,__BOOL_LITERAL(FALSE));
    return;
  }
  else {
    __SET_VAR(data__->,ENO,,__BOOL_LITERAL(TRUE));
  }
  // Initialise TEMP variables

  INT i;
  TIME elapsed_time, current_time;

  // Calculate elapsed_time
  current_time = __CURRENT_TIME;
  elapsed_time = __time_sub(current_time, data__->__lasttick_time);
  data__->__lasttick_time = current_time;
  // Transitions initialization
  if (__DEBUG) {
    for (i = 0; i < data__->__nb_transitions; i++) {
      data__->__transition_list[i] = data__->__debug_transition_list[i];
    }
  }
  // Steps initialization
  for (i = 0; i < data__->__nb_steps; i++) {
    data__->__step_list[i].prev_state = __GET_VAR(data__->__step_list[i].X);
    if (__GET_VAR(data__->__step_list[i].X)) {
      data__->__step_list[i].T.value = __time_add(data__->__step_list[i].T.value, elapsed_time);
    }
  }
  // Actions initialization
  for (i = 0; i < data__->__nb_actions; i++) {
    __SET_VAR(data__->,__action_list[i].state,,0);
    data__->__action_list[i].set = 0;
    data__->__action_list[i].reset = 0;
    if (__time_cmp(data__->__action_list[i].set_remaining_time, __time_to_timespec(1, 0, 0, 0, 0, 0)) > 0) {
      data__->__action_list[i].set_remaining_time = __time_sub(data__->__action_list[i].set_remaining_time, elapsed_time);
      if (__time_cmp(data__->__action_list[i].set_remaining_time, __time_to_timespec(1, 0, 0, 0, 0, 0)) <= 0) {
        data__->__action_list[i].set_remaining_time = __time_to_timespec(1, 0, 0, 0, 0, 0);
        data__->__action_list[i].set = 1;
      }
    }
    if (__time_cmp(data__->__action_list[i].reset_remaining_time, __time_to_timespec(1, 0, 0, 0, 0, 0)) > 0) {
      data__->__action_list[i].reset_remaining_time = __time_sub(data__->__action_list[i].reset_remaining_time, elapsed_time);
      if (__time_cmp(data__->__action_list[i].reset_remaining_time, __time_to_timespec(1, 0, 0, 0, 0, 0)) <= 0) {
        data__->__action_list[i].reset_remaining_time = __time_to_timespec(1, 0, 0, 0, 0, 0);
        data__->__action_list[i].reset = 1;
      }
    }
  }

  // Transitions fire test
  if (__GET_VAR(data__->INIT.X)) {
    __SET_VAR(data__->,__transition_list[0],,__GET_VAR(data__->ER,));
    if (__DEBUG) {
      __SET_VAR(data__->,__debug_transition_list[0],,__GET_VAR(data__->__transition_list[0]));
    }
  }
  else {
    if (__DEBUG) {
      __SET_VAR(data__->,__debug_transition_list[0],,__GET_VAR(data__->ER,));
    }
    __SET_VAR(data__->,__transition_list[0],,0);
  }
  if (__GET_VAR(data__->BREAKMOTION.X)) {
    __SET_VAR(data__->,__transition_list[1],,__GET_VAR(data__->BST,));
    if (__DEBUG) {
      __SET_VAR(data__->,__debug_transition_list[1],,__GET_VAR(data__->__transition_list[1]));
    }
  }
  else {
    if (__DEBUG) {
      __SET_VAR(data__->,__debug_transition_list[1],,__GET_VAR(data__->BST,));
    }
    __SET_VAR(data__->,__transition_list[1],,0);
  }
  if (__GET_VAR(data__->MOVING.X)) {
    __SET_VAR(data__->,__transition_list[2],,__GET_VAR(data__->DONEBOOL,));
    if (__DEBUG) {
      __SET_VAR(data__->,__debug_transition_list[2],,__GET_VAR(data__->__transition_list[2]));
    }
  }
  else {
    if (__DEBUG) {
      __SET_VAR(data__->,__debug_transition_list[2],,__GET_VAR(data__->DONEBOOL,));
    }
    __SET_VAR(data__->,__transition_list[2],,0);
  }
  if (__GET_VAR(data__->SDONE.X)) {
    __SET_VAR(data__->,__transition_list[3],,!(__GET_VAR(data__->EXECUTE,)));
    if (__DEBUG) {
      __SET_VAR(data__->,__debug_transition_list[3],,__GET_VAR(data__->__transition_list[3]));
    }
  }
  else {
    if (__DEBUG) {
      __SET_VAR(data__->,__debug_transition_list[3],,!(__GET_VAR(data__->EXECUTE,)));
    }
    __SET_VAR(data__->,__transition_list[3],,0);
  }
  if (__GET_VAR(data__->TOSS.X)) {
    __SET_VAR(data__->,__transition_list[4],,__GET_VAR(data__->SESSIONOVER,));
    if (__DEBUG) {
      __SET_VAR(data__->,__debug_transition_list[4],,__GET_VAR(data__->__transition_list[4]));
    }
  }
  else {
    if (__DEBUG) {
      __SET_VAR(data__->,__debug_transition_list[4],,__GET_VAR(data__->SESSIONOVER,));
    }
    __SET_VAR(data__->,__transition_list[4],,0);
  }

  // Transitions reset steps
  if (__GET_VAR(data__->__transition_list[0])) {
    __SET_VAR(data__->,INIT.X,,0);
  }
  if (__GET_VAR(data__->__transition_list[1])) {
    __SET_VAR(data__->,BREAKMOTION.X,,0);
  }
  if (__GET_VAR(data__->__transition_list[2])) {
    __SET_VAR(data__->,MOVING.X,,0);
  }
  if (__GET_VAR(data__->__transition_list[3])) {
    __SET_VAR(data__->,SDONE.X,,0);
  }
  if (__GET_VAR(data__->__transition_list[4])) {
    __SET_VAR(data__->,TOSS.X,,0);
  }

  // Transitions set steps
  if (__GET_VAR(data__->__transition_list[0])) {
    __SET_VAR(data__->,BREAKMOTION.X,,1);
    data__->BREAKMOTION.T.value = __time_to_timespec(1, 0, 0, 0, 0, 0);
  }
  if (__GET_VAR(data__->__transition_list[1])) {
    __SET_VAR(data__->,MOVING.X,,1);
    data__->MOVING.T.value = __time_to_timespec(1, 0, 0, 0, 0, 0);
  }
  if (__GET_VAR(data__->__transition_list[2])) {
    __SET_VAR(data__->,SDONE.X,,1);
    data__->SDONE.T.value = __time_to_timespec(1, 0, 0, 0, 0, 0);
  }
  if (__GET_VAR(data__->__transition_list[3])) {
    __SET_VAR(data__->,TOSS.X,,1);
    data__->TOSS.T.value = __time_to_timespec(1, 0, 0, 0, 0, 0);
  }
  if (__GET_VAR(data__->__transition_list[4])) {
    __SET_VAR(data__->,INIT.X,,1);
    data__->INIT.T.value = __time_to_timespec(1, 0, 0, 0, 0, 0);
  }

  // Steps association
  // INIT action associations
  {
    char active = __GET_VAR(data__->INIT.X);
    char activated = active && !data__->INIT.prev_state;
    char desactivated = !active && data__->INIT.prev_state;

    if (active)       {__SET_VAR(data__->,__action_list[__SFC_INIT_INLINE22].state,,1);};
    if (desactivated) {__SET_VAR(data__->,__action_list[__SFC_INIT_INLINE22].state,,0);};

    if (active)       {__SET_VAR(data__->,__action_list[__SFC_INIT_INLINE23].state,,1);};
    if (desactivated) {__SET_VAR(data__->,__action_list[__SFC_INIT_INLINE23].state,,0);};

    if (active)       {__SET_VAR(data__->,__action_list[__SFC_INIT_INLINE24].state,,1);};
    if (desactivated) {__SET_VAR(data__->,__action_list[__SFC_INIT_INLINE24].state,,0);};

    if (active)       {__SET_VAR(data__->,__action_list[__SFC_INIT_INLINE25].state,,1);};
    if (desactivated) {__SET_VAR(data__->,__action_list[__SFC_INIT_INLINE25].state,,0);};

  }

  // BREAKMOTION action associations
  {
    char active = __GET_VAR(data__->BREAKMOTION.X);
    char activated = active && !data__->BREAKMOTION.prev_state;
    char desactivated = !active && data__->BREAKMOTION.prev_state;

    if (activated)    {__SET_VAR(data__->,__action_list[__SFC_BREAKMOTION_INLINE9].state,,1);}
    else              {__SET_VAR(data__->,__action_list[__SFC_BREAKMOTION_INLINE9].state,,0);};

    if (activated)    {__SET_VAR(data__->,__action_list[__SFC_BREAKMOTION_INLINE10].state,,1);}
    else              {__SET_VAR(data__->,__action_list[__SFC_BREAKMOTION_INLINE10].state,,0);};

    if (activated)    {__SET_VAR(data__->,__action_list[__SFC_BREAKMOTION_INLINE11].state,,1);}
    else              {__SET_VAR(data__->,__action_list[__SFC_BREAKMOTION_INLINE11].state,,0);};

    if (activated)    {__SET_VAR(data__->,__action_list[__SFC_BREAKMOTION_INLINE12].state,,1);}
    else              {__SET_VAR(data__->,__action_list[__SFC_BREAKMOTION_INLINE12].state,,0);};

    if (activated)    {__SET_VAR(data__->,__action_list[__SFC_BREAKMOTION_INLINE13].state,,1);}
    else              {__SET_VAR(data__->,__action_list[__SFC_BREAKMOTION_INLINE13].state,,0);};

    if (activated)    {__SET_VAR(data__->,__action_list[__SFC_BREAKMOTION_INLINE14].state,,1);}
    else              {__SET_VAR(data__->,__action_list[__SFC_BREAKMOTION_INLINE14].state,,0);};

    if (activated)    {__SET_VAR(data__->,__action_list[__SFC_BREAKMOTION_INLINE15].state,,1);}
    else              {__SET_VAR(data__->,__action_list[__SFC_BREAKMOTION_INLINE15].state,,0);};

    if (activated)    {__SET_VAR(data__->,__action_list[__SFC_BREAKMOTION_INLINE16].state,,1);}
    else              {__SET_VAR(data__->,__action_list[__SFC_BREAKMOTION_INLINE16].state,,0);};

    if (activated)    {__SET_VAR(data__->,__action_list[__SFC_BREAKMOTION_INLINE17].state,,1);}
    else              {__SET_VAR(data__->,__action_list[__SFC_BREAKMOTION_INLINE17].state,,0);};

    if (activated)    {__SET_VAR(data__->,__action_list[__SFC_BREAKMOTION_INLINE18].state,,1);}
    else              {__SET_VAR(data__->,__action_list[__SFC_BREAKMOTION_INLINE18].state,,0);};

    if (active)       {__SET_VAR(data__->,__action_list[__SFC_BREAKMOTION_INLINE19].state,,1);};
    if (desactivated) {__SET_VAR(data__->,__action_list[__SFC_BREAKMOTION_INLINE19].state,,0);};

    if (active)       {__SET_VAR(data__->,__action_list[__SFC_BREAKMOTION_INLINE20].state,,1);};
    if (desactivated) {__SET_VAR(data__->,__action_list[__SFC_BREAKMOTION_INLINE20].state,,0);};

    if (active)       {__SET_VAR(data__->,__action_list[__SFC_BREAKMOTION_INLINE21].state,,1);};
    if (desactivated) {__SET_VAR(data__->,__action_list[__SFC_BREAKMOTION_INLINE21].state,,0);};

  }

  // MOVING action associations
  {
    char active = __GET_VAR(data__->MOVING.X);
    char activated = active && !data__->MOVING.prev_state;
    char desactivated = !active && data__->MOVING.prev_state;

    if (activated)    {__SET_VAR(data__->,__action_list[__SFC_MOVING_INLINE2].state,,1);}
    else              {__SET_VAR(data__->,__action_list[__SFC_MOVING_INLINE2].state,,0);};

    if (active)       {__SET_VAR(data__->,__action_list[__SFC_MOVING_INLINE3].state,,1);};
    if (desactivated) {__SET_VAR(data__->,__action_list[__SFC_MOVING_INLINE3].state,,0);};

    if (active)       {__SET_VAR(data__->,__action_list[__SFC_MOVING_INLINE4].state,,1);};
    if (desactivated) {__SET_VAR(data__->,__action_list[__SFC_MOVING_INLINE4].state,,0);};

    if (active)       {__SET_VAR(data__->,__action_list[__SFC_MOVING_INLINE5].state,,1);};
    if (desactivated) {__SET_VAR(data__->,__action_list[__SFC_MOVING_INLINE5].state,,0);};

  }

  // SDONE action associations
  {
    char active = __GET_VAR(data__->SDONE.X);
    char activated = active && !data__->SDONE.prev_state;
    char desactivated = !active && data__->SDONE.prev_state;

    if (active && __time_cmp(data__->SDONE.T.value, __time_to_timespec(1, 0, 0.01, 0, 0, 0)) < 0) 
                      {__SET_VAR(data__->,DONE,,1);}
    else if (desactivated || active)
                      {__SET_VAR(data__->,DONE,,0);};

    if (activated)    {__SET_VAR(data__->,__action_list[__SFC_SDONE_INLINE1].state,,1);}
    else              {__SET_VAR(data__->,__action_list[__SFC_SDONE_INLINE1].state,,0);};

  }

  // TOSS action associations
  {
    char active = __GET_VAR(data__->TOSS.X);
    char activated = active && !data__->TOSS.prev_state;
    char desactivated = !active && data__->TOSS.prev_state;

    if (activated)    {__SET_VAR(data__->,__action_list[__SFC_TOSS_INLINE26].state,,1);}
    else              {__SET_VAR(data__->,__action_list[__SFC_TOSS_INLINE26].state,,0);};

    if (active)       {__SET_VAR(data__->,__action_list[__SFC_SESSIONOVERIFSS].state,,1);};
    if (desactivated) {__SET_VAR(data__->,__action_list[__SFC_SESSIONOVERIFSS].state,,0);};

  }


  // Actions state evaluation
  for (i = 0; i < data__->__nb_actions; i++) {
    if (data__->__action_list[i].set) {
      data__->__action_list[i].set_remaining_time = __time_to_timespec(1, 0, 0, 0, 0, 0);
      data__->__action_list[i].stored = 1;
    }
    if (data__->__action_list[i].reset) {
      data__->__action_list[i].reset_remaining_time = __time_to_timespec(1, 0, 0, 0, 0, 0);
      data__->__action_list[i].stored = 0;
    }
    __SET_VAR(data__->,__action_list[i].state,,__GET_VAR(data__->__action_list[i].state) | data__->__action_list[i].stored);
  }

  // Actions execution
  if (data__->__action_list[__SFC_DONE].reset) {
    __SET_VAR(data__->,DONE,,0);
  }
  else if (data__->__action_list[__SFC_DONE].set) {
    __SET_VAR(data__->,DONE,,1);
  }
  if(__GET_VAR(data__->__action_list[__SFC_INIT_INLINE22].state)) {
    __SET_VAR(data__->,AXIS,,__GET_VAR(data__->AXISID,));
  }

  if(__GET_VAR(data__->__action_list[__SFC_INIT_INLINE23].state)) {
    __SET_VAR(data__->AI.,ROW,,__BOOL_LITERAL(FALSE));
    __SET_VAR(data__->AI.,NODEID,,__GET_VAR(data__->AXISID,));
    __SET_VAR(data__->AI.,PNAME,,__STRING_LITERAL(5,"STATE"));
    AXIS_INFO_body__(&data__->AI);
  }

  if(__GET_VAR(data__->__action_list[__SFC_INIT_INLINE24].state)) {
    __SET_VAR(data__->,SCS,,__GET_VAR(data__->AI.OUTU32,));
  }

  if(__GET_VAR(data__->__action_list[__SFC_INIT_INLINE25].state)) {
    if ((__GET_VAR(data__->SCS,) != 9)) {
      __SET_VAR(data__->RRTG.,CLK,,__GET_VAR(data__->EXECUTE,));
      R_TRIG_body__(&data__->RRTG);
      __SET_VAR(data__->,ER,,__GET_VAR(data__->RRTG.Q));
    };
  }

  if(__GET_VAR(data__->__action_list[__SFC_BREAKMOTION_INLINE9].state)) {
    __SET_VAR(data__->,ER,,0);
  }

  if(__GET_VAR(data__->__action_list[__SFC_BREAKMOTION_INLINE10].state)) {
    __SET_VAR(data__->AI.,ROW,,__BOOL_LITERAL(TRUE));
    __SET_VAR(data__->AI.,NODEID,,__GET_VAR(data__->AXISID,));
    __SET_VAR(data__->AI.,PNAME,,__STRING_LITERAL(6,"INTERV"));
    __SET_VAR(data__->AI.,INR,,0.0);
    AXIS_INFO_body__(&data__->AI);
  }

  if(__GET_VAR(data__->__action_list[__SFC_BREAKMOTION_INLINE11].state)) {
    __SET_VAR(data__->WDEC.,AXISID,,__GET_VAR(data__->AXISID,));
    __SET_VAR(data__->WDEC.,DONEFLAG,,__BOOL_LITERAL(TRUE));
    __SET_VAR(data__->WDEC.,EXECUTEFLAG,,__BOOL_LITERAL(TRUE));
    __SET_VAR(data__->WDEC.,COMMANDTYPE,,9);
    _W_DEC_body__(&data__->WDEC);
  }

  if(__GET_VAR(data__->__action_list[__SFC_BREAKMOTION_INLINE12].state)) {
    __SET_VAR(data__->AI.,ROW,,__BOOL_LITERAL(FALSE));
    __SET_VAR(data__->AI.,NODEID,,__GET_VAR(data__->AXISID,));
    __SET_VAR(data__->AI.,PNAME,,__STRING_LITERAL(4,"DMAX"));
    AXIS_INFO_body__(&data__->AI);
  }

  if(__GET_VAR(data__->__action_list[__SFC_BREAKMOTION_INLINE13].state)) {
    __SET_VAR(data__->,DECELERATION,,__GET_VAR(data__->AI.OUTR,));
  }

  if(__GET_VAR(data__->__action_list[__SFC_BREAKMOTION_INLINE14].state)) {
    __SET_VAR(data__->AI.,ROW,,__BOOL_LITERAL(FALSE));
    __SET_VAR(data__->AI.,NODEID,,__GET_VAR(data__->AXISID,));
    __SET_VAR(data__->AI.,PNAME,,__STRING_LITERAL(4,"AMAX"));
    AXIS_INFO_body__(&data__->AI);
  }

  if(__GET_VAR(data__->__action_list[__SFC_BREAKMOTION_INLINE15].state)) {
    if ((__GET_VAR(data__->AI.OUTR,) > __GET_VAR(data__->DECELERATION,))) {
      __SET_VAR(data__->,DECELERATION,,__GET_VAR(data__->AI.OUTR,));
    };
  }

  if(__GET_VAR(data__->__action_list[__SFC_BREAKMOTION_INLINE16].state)) {
    __SET_VAR(data__->AI.,ROW,,__BOOL_LITERAL(TRUE));
    __SET_VAR(data__->AI.,NODEID,,__GET_VAR(data__->AXISID,));
    __SET_VAR(data__->AI.,PNAME,,__STRING_LITERAL(6,"INTERA"));
    __SET_VAR(data__->AI.,INR,,__GET_VAR(data__->DECELERATION,));
    AXIS_INFO_body__(&data__->AI);
  }

  if(__GET_VAR(data__->__action_list[__SFC_BREAKMOTION_INLINE17].state)) {
    __SET_VAR(data__->SID.,ROW,,__BOOL_LITERAL(TRUE));
    __SET_VAR(data__->SID.,AXISID,,__GET_VAR(data__->AXISID,));
    _SESSIONID_body__(&data__->SID);
    __SET_VAR(data__->,CURLOCK,,__GET_VAR(data__->SID.FBD_ABORT_FLAG));
  }

  if(__GET_VAR(data__->__action_list[__SFC_BREAKMOTION_INLINE18].state)) {
    __SET_VAR(data__->,CL,,__GET_VAR(data__->CURLOCK,));
  }

  if(__GET_VAR(data__->__action_list[__SFC_BREAKMOTION_INLINE19].state)) {
    __SET_VAR(data__->AI.,ROW,,__BOOL_LITERAL(FALSE));
    __SET_VAR(data__->AI.,NODEID,,__GET_VAR(data__->AXISID,));
    __SET_VAR(data__->AI.,PNAME,,__STRING_LITERAL(5,"STATE"));
    AXIS_INFO_body__(&data__->AI);
  }

  if(__GET_VAR(data__->__action_list[__SFC_BREAKMOTION_INLINE20].state)) {
    __SET_VAR(data__->,SCS,,__GET_VAR(data__->AI.OUTU32,));
  }

  if(__GET_VAR(data__->__action_list[__SFC_BREAKMOTION_INLINE21].state)) {
    if ((__GET_VAR(data__->SCS,) == 4)) {
      __SET_VAR(data__->,BST,,__BOOL_LITERAL(TRUE));
    } else {
      __SET_VAR(data__->,BST,,__BOOL_LITERAL(FALSE));
    };
  }

  if(__GET_VAR(data__->__action_list[__SFC_MOVING_INLINE2].state)) {
    __SET_VAR(data__->,CS,,4);
  }

  if(__GET_VAR(data__->__action_list[__SFC_MOVING_INLINE3].state)) {
    __SET_VAR(data__->AI.,ROW,,__BOOL_LITERAL(TRUE));
    __SET_VAR(data__->AI.,NODEID,,__GET_VAR(data__->AXISID,));
    __SET_VAR(data__->AI.,PNAME,,__STRING_LITERAL(6,"INTERV"));
    __SET_VAR(data__->AI.,INR,,0.0);
    AXIS_INFO_body__(&data__->AI);
  }

  if(__GET_VAR(data__->__action_list[__SFC_MOVING_INLINE4].state)) {
    __SET_VAR(data__->AI.,ROW,,__BOOL_LITERAL(FALSE));
    __SET_VAR(data__->AI.,NODEID,,__GET_VAR(data__->AXISID,));
    __SET_VAR(data__->AI.,PNAME,,__STRING_LITERAL(6,"CURPOS"));
    AXIS_INFO_body__(&data__->AI);
    __SET_VAR(data__->,CURP,,__GET_VAR(data__->AI.OUTU32));
  }

  if(__GET_VAR(data__->__action_list[__SFC_MOVING_INLINE5].state)) {
    if ((__GET_VAR(data__->CURP,) == __GET_VAR(data__->LASTP,))) {
      __SET_VAR(data__->,DONEBOOL,,__BOOL_LITERAL(TRUE));
    } else {
      __SET_VAR(data__->,LASTP,,__GET_VAR(data__->CURP,));
    };
  }

  if(__GET_VAR(data__->__action_list[__SFC_SDONE_INLINE1].state)) {
    __SET_VAR(data__->,CS,,6);
  }

  if(__GET_VAR(data__->__action_list[__SFC_TOSS_INLINE26].state)) {
    __SET_VAR(data__->WDEC.,AXISID,,__GET_VAR(data__->AXISID,));
    __SET_VAR(data__->WDEC.,DONEFLAG,,1);
    __SET_VAR(data__->WDEC.,EXECUTEFLAG,,0);
    __SET_VAR(data__->WDEC.,COMMANDTYPE,,9);
    _W_DEC_body__(&data__->WDEC);
  }

  if(__GET_VAR(data__->__action_list[__SFC_SESSIONOVERIFSS].state)) {
    __SET_VAR(data__->AI.,ROW,,__BOOL_LITERAL(FALSE));
    __SET_VAR(data__->AI.,NODEID,,__GET_VAR(data__->AXISID,));
    __SET_VAR(data__->AI.,PNAME,,__STRING_LITERAL(5,"STATE"));
    AXIS_INFO_body__(&data__->AI);
    if ((__GET_VAR(data__->AI.OUTU32,) == 1)) {
      __SET_VAR(data__->,SESSIONOVER,,__BOOL_LITERAL(TRUE));
    } else {
      __SET_VAR(data__->,SESSIONOVER,,__BOOL_LITERAL(FALSE));
    };
  }



  goto __end;

__end:
  return;
} // MC_STOP_body__() 

// Steps undefinitions
#undef INIT
#undef __SFC_INIT
#undef BREAKMOTION
#undef __SFC_BREAKMOTION
#undef MOVING
#undef __SFC_MOVING
#undef SDONE
#undef __SFC_SDONE
#undef TOSS
#undef __SFC_TOSS

// Actions undefinitions
#undef __SFC_INIT_INLINE22
#undef __SFC_INIT_INLINE23
#undef __SFC_INIT_INLINE24
#undef __SFC_INIT_INLINE25
#undef __SFC_BREAKMOTION_INLINE9
#undef __SFC_BREAKMOTION_INLINE10
#undef __SFC_BREAKMOTION_INLINE11
#undef __SFC_BREAKMOTION_INLINE12
#undef __SFC_BREAKMOTION_INLINE13
#undef __SFC_BREAKMOTION_INLINE14
#undef __SFC_BREAKMOTION_INLINE15
#undef __SFC_BREAKMOTION_INLINE16
#undef __SFC_BREAKMOTION_INLINE17
#undef __SFC_BREAKMOTION_INLINE18
#undef __SFC_BREAKMOTION_INLINE19
#undef __SFC_BREAKMOTION_INLINE20
#undef __SFC_BREAKMOTION_INLINE21
#undef __SFC_MOVING_INLINE2
#undef __SFC_MOVING_INLINE3
#undef __SFC_MOVING_INLINE4
#undef __SFC_MOVING_INLINE5
#undef __SFC_SDONE_INLINE1
#undef __SFC_TOSS_INLINE26
#undef __SFC_SESSIONOVERIFSS
#undef __SFC_DONE





void _PULSE_CALC_init__(_PULSE_CALC *data__, BOOL retain) {
  __INIT_VAR(data__->EN,__BOOL_LITERAL(TRUE),retain)
  __INIT_VAR(data__->ENO,__BOOL_LITERAL(TRUE),retain)
  __INIT_VAR(data__->TARGETPOSITION,0,retain)
  __INIT_VAR(data__->PULSEEQUIVALENT,0,retain)
  __INIT_VAR(data__->PREPOSITION,0,retain)
  __INIT_VAR(data__->PULSENUMPERIOD,0,retain)
  __INIT_VAR(data__->PULSENUMALL,0,retain)
  __INIT_VAR(data__->TEMP_P_TARGETALL,0,retain)
}

// Code part
void _PULSE_CALC_body__(_PULSE_CALC *data__) {
  // Control execution
  if (!__GET_VAR(data__->EN)) {
    __SET_VAR(data__->,ENO,,__BOOL_LITERAL(FALSE));
    return;
  }
  else {
    __SET_VAR(data__->,ENO,,__BOOL_LITERAL(TRUE));
  }
  // Initialise TEMP variables

  __IL_DEFVAR_T __IL_DEFVAR;
  __IL_DEFVAR_T __IL_DEFVAR_BACK;
  #define GetFbVar(var,...) __GET_VAR(data__->var,__VA_ARGS__)
  #define SetFbVar(var,val,...) __SET_VAR(data__->,var,__VA_ARGS__,val)
extern void _PULSE_CALC_body2__(_PULSE_CALC *data__) ;  _PULSE_CALC_body2__(data__);
  #undef GetFbVar
  #undef SetFbVar
;

  goto __end;

__end:
  return;
} // _PULSE_CALC_body__() 





void MC_RELATIVE_init__(MC_RELATIVE *data__, BOOL retain) {
  __INIT_VAR(data__->EN,__BOOL_LITERAL(TRUE),retain)
  __INIT_VAR(data__->ENO,__BOOL_LITERAL(TRUE),retain)
  __INIT_VAR(data__->AXISID,0,retain)
  __INIT_VAR(data__->EXECUTE,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->DISTANCE,0.0,retain)
  __INIT_VAR(data__->VELOCITY,0.0,retain)
  __INIT_VAR(data__->ACCELERATION,0,retain)
  __INIT_VAR(data__->AXIS,0,retain)
  __INIT_VAR(data__->DONE,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->ABORTED,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->ERROR,__BOOL_LITERAL(FALSE),retain)
  _W_DEC_init__(&data__->WDEC,retain);
  _W_PVA_init__(&data__->WPVA,retain);
  __INIT_VAR(data__->ABORTBOOL,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->DONEBOOL,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->MOVEBOOL,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->CURLOCK,0,retain)
  __INIT_VAR(data__->RECLOCK,0,retain)
  _SESSIONID_init__(&data__->SID,retain);
  __INIT_VAR(data__->CURPC,0,retain)
  __INIT_VAR(data__->ISSAME,__BOOL_LITERAL(FALSE),retain)
  _DIFF2_init__(&data__->D2,retain);
  __INIT_VAR(data__->DONECNT,0,retain)
  __INIT_VAR(data__->DONE3OKBOOL,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->CLICK3,3,retain)
  __INIT_VAR(data__->SESSIONOVER,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->ERRORNOTRESET,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->ERRID,0,retain)
  __INIT_VAR(data__->CS,0,retain)
  __INIT_VAR(data__->SCS,0,retain)
  __INIT_VAR(data__->CANMOVE,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->AO,0,retain)
  __INIT_VAR(data__->VO,0,retain)
  _VACLAMP_init__(&data__->VCLAMP,retain);
  AXIS_INFO_init__(&data__->AI,retain);
  __INIT_VAR(data__->CURPOS,0,retain)
  __INIT_VAR(data__->CURVEL,0,retain)
  __INIT_VAR(data__->PRETARGET,0,retain)
  __INIT_VAR(data__->CANSTART,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->VE0,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->CJ,0,retain)
  __INIT_VAR(data__->LASTPC,0,retain)
  __INIT_VAR(data__->TOPC,0,retain)
  __INIT_VAR(data__->ER,__BOOL_LITERAL(FALSE),retain)
  R_TRIG_init__(&data__->RRTG,retain);
  __INIT_VAR(data__->WFED,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->TODEA,__BOOL_LITERAL(FALSE),retain)
  UINT i;
  data__->__nb_steps = 8;
  static const STEP temp_step = {{0, 0}, 0, {{0, 0}, 0}};
  for(i = 0; i < data__->__nb_steps; i++) {
    data__->__step_list[i] = temp_step;
  }
  __SET_VAR(data__->,__step_list[0].X,,1);
  data__->__nb_actions = 40;
  static const ACTION temp_action = {0, {0, 0}, 0, 0, {0, 0}, {0, 0}};
  for(i = 0; i < data__->__nb_actions; i++) {
    data__->__action_list[i] = temp_action;
  }
  data__->__nb_transitions = 10;
  data__->__lasttick_time = __CURRENT_TIME;
}

// Steps definitions
#define INIT __step_list[0]
#define __SFC_INIT 0
#define DOWN0 __step_list[1]
#define __SFC_DOWN0 1
#define START __step_list[2]
#define __SFC_START 2
#define MOVING __step_list[3]
#define __SFC_MOVING 3
#define SABORTED __step_list[4]
#define __SFC_SABORTED 4
#define SABORTED2 __step_list[5]
#define __SFC_SABORTED2 5
#define SDONE __step_list[6]
#define __SFC_SDONE 6
#define SDONE2 __step_list[7]
#define __SFC_SDONE2 7

// Actions definitions
#define __SFC_INIT_INLINE29 0
#define __SFC_INIT_INLINE30 1
#define __SFC_INIT_INLINE31 2
#define __SFC_INIT_INLINE32 3
#define __SFC_INIT_INLINE33 4
#define __SFC_INIT_INLINE34 5
#define __SFC_INIT_INLINE35 6
#define __SFC_DOWN0_INLINE9 7
#define __SFC_DOWN0_INLINE10 8
#define __SFC_DOWN0_INLINE11 9
#define __SFC_DOWN0_INLINE12 10
#define __SFC_DOWN0_INLINE13 11
#define __SFC_SETLOCKVAL 12
#define __SFC_DOWN0_INLINE14 13
#define __SFC_DOWN0_INLINE15 14
#define __SFC_DOWN0_INLINE16 15
#define __SFC_DOWN0_INLINE17 16
#define __SFC_DOWN0_INLINE18 17
#define __SFC_DOWN0_INLINE19 18
#define __SFC_DOWN0_INLINE20 19
#define __SFC_DOWN0_INLINE21 20
#define __SFC_DOWN0_INLINE22 21
#define __SFC_DOWN0_INLINE23 22
#define __SFC_DOWN0_INLINE24 23
#define __SFC_DOWN0_INLINE25 24
#define __SFC_DOWN0_INLINE26 25
#define __SFC_START_INLINE1 26
#define __SFC_START_INLINE2 27
#define __SFC_START_INLINE3 28
#define __SFC_START_INLINE4 29
#define __SFC_START_INLINE5 30
#define __SFC_MOVING_INLINE6 31
#define __SFC_ABORTERRORDONE 32
#define __SFC_SABORTED_INLINE28 33
#define __SFC_SESSIONOVERIFSS 34
#define __SFC_SABORTED2_INLINE7 35
#define __SFC_SDONE_INLINE8 36
#define __SFC_SDONE2_INLINE27 37
#define __SFC_ABORTED 38
#define __SFC_DONE 39

// Code part
void MC_RELATIVE_body__(MC_RELATIVE *data__) {
  // Control execution
  if (!__GET_VAR(data__->EN)) {
    __SET_VAR(data__->,ENO,,__BOOL_LITERAL(FALSE));
    return;
  }
  else {
    __SET_VAR(data__->,ENO,,__BOOL_LITERAL(TRUE));
  }
  // Initialise TEMP variables

  INT i;
  TIME elapsed_time, current_time;

  // Calculate elapsed_time
  current_time = __CURRENT_TIME;
  elapsed_time = __time_sub(current_time, data__->__lasttick_time);
  data__->__lasttick_time = current_time;
  // Transitions initialization
  if (__DEBUG) {
    for (i = 0; i < data__->__nb_transitions; i++) {
      data__->__transition_list[i] = data__->__debug_transition_list[i];
    }
  }
  // Steps initialization
  for (i = 0; i < data__->__nb_steps; i++) {
    data__->__step_list[i].prev_state = __GET_VAR(data__->__step_list[i].X);
    if (__GET_VAR(data__->__step_list[i].X)) {
      data__->__step_list[i].T.value = __time_add(data__->__step_list[i].T.value, elapsed_time);
    }
  }
  // Actions initialization
  for (i = 0; i < data__->__nb_actions; i++) {
    __SET_VAR(data__->,__action_list[i].state,,0);
    data__->__action_list[i].set = 0;
    data__->__action_list[i].reset = 0;
    if (__time_cmp(data__->__action_list[i].set_remaining_time, __time_to_timespec(1, 0, 0, 0, 0, 0)) > 0) {
      data__->__action_list[i].set_remaining_time = __time_sub(data__->__action_list[i].set_remaining_time, elapsed_time);
      if (__time_cmp(data__->__action_list[i].set_remaining_time, __time_to_timespec(1, 0, 0, 0, 0, 0)) <= 0) {
        data__->__action_list[i].set_remaining_time = __time_to_timespec(1, 0, 0, 0, 0, 0);
        data__->__action_list[i].set = 1;
      }
    }
    if (__time_cmp(data__->__action_list[i].reset_remaining_time, __time_to_timespec(1, 0, 0, 0, 0, 0)) > 0) {
      data__->__action_list[i].reset_remaining_time = __time_sub(data__->__action_list[i].reset_remaining_time, elapsed_time);
      if (__time_cmp(data__->__action_list[i].reset_remaining_time, __time_to_timespec(1, 0, 0, 0, 0, 0)) <= 0) {
        data__->__action_list[i].reset_remaining_time = __time_to_timespec(1, 0, 0, 0, 0, 0);
        data__->__action_list[i].reset = 1;
      }
    }
  }

  // Transitions fire test
  if (__GET_VAR(data__->INIT.X)) {
    __SET_VAR(data__->,__transition_list[0],,__GET_VAR(data__->ER,));
    if (__DEBUG) {
      __SET_VAR(data__->,__debug_transition_list[0],,__GET_VAR(data__->__transition_list[0]));
    }
  }
  else {
    if (__DEBUG) {
      __SET_VAR(data__->,__debug_transition_list[0],,__GET_VAR(data__->ER,));
    }
    __SET_VAR(data__->,__transition_list[0],,0);
  }
  if (__GET_VAR(data__->DOWN0.X)) {
    __SET_VAR(data__->,__transition_list[1],,(__GET_VAR(data__->CANSTART,) || __GET_VAR(data__->VE0,)));
    if (__DEBUG) {
      __SET_VAR(data__->,__debug_transition_list[1],,__GET_VAR(data__->__transition_list[1]));
    }
  }
  else {
    if (__DEBUG) {
      __SET_VAR(data__->,__debug_transition_list[1],,(__GET_VAR(data__->CANSTART,) || __GET_VAR(data__->VE0,)));
    }
    __SET_VAR(data__->,__transition_list[1],,0);
  }
  if (__GET_VAR(data__->START.X)) {
    __SET_VAR(data__->,__transition_list[2],,__GET_VAR(data__->MOVEBOOL,));
    if (__DEBUG) {
      __SET_VAR(data__->,__debug_transition_list[2],,__GET_VAR(data__->__transition_list[2]));
    }
  }
  else {
    if (__DEBUG) {
      __SET_VAR(data__->,__debug_transition_list[2],,__GET_VAR(data__->MOVEBOOL,));
    }
    __SET_VAR(data__->,__transition_list[2],,0);
  }
  if (__GET_VAR(data__->MOVING.X)) {
    __SET_VAR(data__->,__transition_list[3],,__GET_VAR(data__->ABORTBOOL,));
    if (__DEBUG) {
      __SET_VAR(data__->,__debug_transition_list[3],,__GET_VAR(data__->__transition_list[3]));
    }
  }
  else {
    if (__DEBUG) {
      __SET_VAR(data__->,__debug_transition_list[3],,__GET_VAR(data__->ABORTBOOL,));
    }
    __SET_VAR(data__->,__transition_list[3],,0);
  }
  if (__GET_VAR(data__->SABORTED.X)) {
    __SET_VAR(data__->,__transition_list[4],,__GET_VAR(data__->SESSIONOVER,));
    if (__DEBUG) {
      __SET_VAR(data__->,__debug_transition_list[4],,__GET_VAR(data__->__transition_list[4]));
    }
  }
  else {
    if (__DEBUG) {
      __SET_VAR(data__->,__debug_transition_list[4],,__GET_VAR(data__->SESSIONOVER,));
    }
    __SET_VAR(data__->,__transition_list[4],,0);
  }
  if (__GET_VAR(data__->SABORTED2.X)) {
    __SET_VAR(data__->,__transition_list[5],,__GET_VAR(data__->TODEA,));
    if (__DEBUG) {
      __SET_VAR(data__->,__debug_transition_list[5],,__GET_VAR(data__->__transition_list[5]));
    }
  }
  else {
    if (__DEBUG) {
      __SET_VAR(data__->,__debug_transition_list[5],,__GET_VAR(data__->TODEA,));
    }
    __SET_VAR(data__->,__transition_list[5],,0);
  }
  if (__GET_VAR(data__->MOVING.X)) {
    __SET_VAR(data__->,__transition_list[6],,__GET_VAR(data__->DONEBOOL,));
    if (__DEBUG) {
      __SET_VAR(data__->,__debug_transition_list[6],,__GET_VAR(data__->__transition_list[6]));
    }
  }
  else {
    if (__DEBUG) {
      __SET_VAR(data__->,__debug_transition_list[6],,__GET_VAR(data__->DONEBOOL,));
    }
    __SET_VAR(data__->,__transition_list[6],,0);
  }
  if (__GET_VAR(data__->SDONE.X)) {
    __SET_VAR(data__->,__transition_list[7],,__GET_VAR(data__->SESSIONOVER,));
    if (__DEBUG) {
      __SET_VAR(data__->,__debug_transition_list[7],,__GET_VAR(data__->__transition_list[7]));
    }
  }
  else {
    if (__DEBUG) {
      __SET_VAR(data__->,__debug_transition_list[7],,__GET_VAR(data__->SESSIONOVER,));
    }
    __SET_VAR(data__->,__transition_list[7],,0);
  }
  if (__GET_VAR(data__->SDONE2.X)) {
    __SET_VAR(data__->,__transition_list[8],,!(__GET_VAR(data__->EXECUTE,)));
    if (__DEBUG) {
      __SET_VAR(data__->,__debug_transition_list[8],,__GET_VAR(data__->__transition_list[8]));
    }
  }
  else {
    if (__DEBUG) {
      __SET_VAR(data__->,__debug_transition_list[8],,!(__GET_VAR(data__->EXECUTE,)));
    }
    __SET_VAR(data__->,__transition_list[8],,0);
  }
  if (__GET_VAR(data__->DOWN0.X)) {
    __SET_VAR(data__->,__transition_list[9],,__GET_VAR(data__->ABORTBOOL,));
    if (__DEBUG) {
      __SET_VAR(data__->,__debug_transition_list[9],,__GET_VAR(data__->__transition_list[9]));
    }
  }
  else {
    if (__DEBUG) {
      __SET_VAR(data__->,__debug_transition_list[9],,__GET_VAR(data__->ABORTBOOL,));
    }
    __SET_VAR(data__->,__transition_list[9],,0);
  }

  // Transitions reset steps
  if (__GET_VAR(data__->__transition_list[0])) {
    __SET_VAR(data__->,INIT.X,,0);
  }
  if (__GET_VAR(data__->__transition_list[1])) {
    __SET_VAR(data__->,DOWN0.X,,0);
  }
  if (__GET_VAR(data__->__transition_list[2])) {
    __SET_VAR(data__->,START.X,,0);
  }
  if (__GET_VAR(data__->__transition_list[3])) {
    __SET_VAR(data__->,MOVING.X,,0);
  }
  if (__GET_VAR(data__->__transition_list[4])) {
    __SET_VAR(data__->,SABORTED.X,,0);
  }
  if (__GET_VAR(data__->__transition_list[5])) {
    __SET_VAR(data__->,SABORTED2.X,,0);
  }
  if (__GET_VAR(data__->__transition_list[6])) {
    __SET_VAR(data__->,MOVING.X,,0);
  }
  if (__GET_VAR(data__->__transition_list[7])) {
    __SET_VAR(data__->,SDONE.X,,0);
  }
  if (__GET_VAR(data__->__transition_list[8])) {
    __SET_VAR(data__->,SDONE2.X,,0);
  }
  if (__GET_VAR(data__->__transition_list[9])) {
    __SET_VAR(data__->,DOWN0.X,,0);
  }

  // Transitions set steps
  if (__GET_VAR(data__->__transition_list[0])) {
    __SET_VAR(data__->,DOWN0.X,,1);
    data__->DOWN0.T.value = __time_to_timespec(1, 0, 0, 0, 0, 0);
  }
  if (__GET_VAR(data__->__transition_list[1])) {
    __SET_VAR(data__->,START.X,,1);
    data__->START.T.value = __time_to_timespec(1, 0, 0, 0, 0, 0);
  }
  if (__GET_VAR(data__->__transition_list[2])) {
    __SET_VAR(data__->,MOVING.X,,1);
    data__->MOVING.T.value = __time_to_timespec(1, 0, 0, 0, 0, 0);
  }
  if (__GET_VAR(data__->__transition_list[3])) {
    __SET_VAR(data__->,SABORTED.X,,1);
    data__->SABORTED.T.value = __time_to_timespec(1, 0, 0, 0, 0, 0);
  }
  if (__GET_VAR(data__->__transition_list[4])) {
    __SET_VAR(data__->,SABORTED2.X,,1);
    data__->SABORTED2.T.value = __time_to_timespec(1, 0, 0, 0, 0, 0);
  }
  if (__GET_VAR(data__->__transition_list[5])) {
    __SET_VAR(data__->,INIT.X,,1);
    data__->INIT.T.value = __time_to_timespec(1, 0, 0, 0, 0, 0);
  }
  if (__GET_VAR(data__->__transition_list[6])) {
    __SET_VAR(data__->,SDONE.X,,1);
    data__->SDONE.T.value = __time_to_timespec(1, 0, 0, 0, 0, 0);
  }
  if (__GET_VAR(data__->__transition_list[7])) {
    __SET_VAR(data__->,SDONE2.X,,1);
    data__->SDONE2.T.value = __time_to_timespec(1, 0, 0, 0, 0, 0);
  }
  if (__GET_VAR(data__->__transition_list[8])) {
    __SET_VAR(data__->,INIT.X,,1);
    data__->INIT.T.value = __time_to_timespec(1, 0, 0, 0, 0, 0);
  }
  if (__GET_VAR(data__->__transition_list[9])) {
    __SET_VAR(data__->,SABORTED.X,,1);
    data__->SABORTED.T.value = __time_to_timespec(1, 0, 0, 0, 0, 0);
  }

  // Steps association
  // INIT action associations
  {
    char active = __GET_VAR(data__->INIT.X);
    char activated = active && !data__->INIT.prev_state;
    char desactivated = !active && data__->INIT.prev_state;

    if (active)       {__SET_VAR(data__->,__action_list[__SFC_INIT_INLINE29].state,,1);};
    if (desactivated) {__SET_VAR(data__->,__action_list[__SFC_INIT_INLINE29].state,,0);};

    if (active)       {__SET_VAR(data__->,__action_list[__SFC_INIT_INLINE30].state,,1);};
    if (desactivated) {__SET_VAR(data__->,__action_list[__SFC_INIT_INLINE30].state,,0);};

    if (active)       {__SET_VAR(data__->,__action_list[__SFC_INIT_INLINE31].state,,1);};
    if (desactivated) {__SET_VAR(data__->,__action_list[__SFC_INIT_INLINE31].state,,0);};

    if (active)       {__SET_VAR(data__->,__action_list[__SFC_INIT_INLINE32].state,,1);};
    if (desactivated) {__SET_VAR(data__->,__action_list[__SFC_INIT_INLINE32].state,,0);};

    if (active)       {__SET_VAR(data__->,__action_list[__SFC_INIT_INLINE33].state,,1);};
    if (desactivated) {__SET_VAR(data__->,__action_list[__SFC_INIT_INLINE33].state,,0);};

    if (active)       {__SET_VAR(data__->,__action_list[__SFC_INIT_INLINE34].state,,1);};
    if (desactivated) {__SET_VAR(data__->,__action_list[__SFC_INIT_INLINE34].state,,0);};

    if (active)       {__SET_VAR(data__->,__action_list[__SFC_INIT_INLINE35].state,,1);};
    if (desactivated) {__SET_VAR(data__->,__action_list[__SFC_INIT_INLINE35].state,,0);};

  }

  // DOWN0 action associations
  {
    char active = __GET_VAR(data__->DOWN0.X);
    char activated = active && !data__->DOWN0.prev_state;
    char desactivated = !active && data__->DOWN0.prev_state;

    if (activated)    {__SET_VAR(data__->,__action_list[__SFC_DOWN0_INLINE9].state,,1);}
    else              {__SET_VAR(data__->,__action_list[__SFC_DOWN0_INLINE9].state,,0);};

    if (activated)    {__SET_VAR(data__->,__action_list[__SFC_DOWN0_INLINE10].state,,1);}
    else              {__SET_VAR(data__->,__action_list[__SFC_DOWN0_INLINE10].state,,0);};

    if (activated)    {__SET_VAR(data__->,__action_list[__SFC_DOWN0_INLINE11].state,,1);}
    else              {__SET_VAR(data__->,__action_list[__SFC_DOWN0_INLINE11].state,,0);};

    if (activated)    {__SET_VAR(data__->,__action_list[__SFC_DOWN0_INLINE12].state,,1);}
    else              {__SET_VAR(data__->,__action_list[__SFC_DOWN0_INLINE12].state,,0);};

    if (activated)    {__SET_VAR(data__->,__action_list[__SFC_DOWN0_INLINE13].state,,1);}
    else              {__SET_VAR(data__->,__action_list[__SFC_DOWN0_INLINE13].state,,0);};

    if (activated)    {__SET_VAR(data__->,__action_list[__SFC_SETLOCKVAL].state,,1);}
    else              {__SET_VAR(data__->,__action_list[__SFC_SETLOCKVAL].state,,0);};

    if (activated)    {__SET_VAR(data__->,__action_list[__SFC_DOWN0_INLINE14].state,,1);}
    else              {__SET_VAR(data__->,__action_list[__SFC_DOWN0_INLINE14].state,,0);};

    if (activated)    {__SET_VAR(data__->,__action_list[__SFC_DOWN0_INLINE15].state,,1);}
    else              {__SET_VAR(data__->,__action_list[__SFC_DOWN0_INLINE15].state,,0);};

    if (activated)    {__SET_VAR(data__->,__action_list[__SFC_DOWN0_INLINE16].state,,1);}
    else              {__SET_VAR(data__->,__action_list[__SFC_DOWN0_INLINE16].state,,0);};

    if (activated)    {__SET_VAR(data__->,__action_list[__SFC_DOWN0_INLINE17].state,,1);}
    else              {__SET_VAR(data__->,__action_list[__SFC_DOWN0_INLINE17].state,,0);};

    if (activated)    {__SET_VAR(data__->,__action_list[__SFC_DOWN0_INLINE18].state,,1);}
    else              {__SET_VAR(data__->,__action_list[__SFC_DOWN0_INLINE18].state,,0);};

    if (activated)    {__SET_VAR(data__->,__action_list[__SFC_DOWN0_INLINE19].state,,1);}
    else              {__SET_VAR(data__->,__action_list[__SFC_DOWN0_INLINE19].state,,0);};

    if (activated)    {__SET_VAR(data__->,__action_list[__SFC_DOWN0_INLINE20].state,,1);}
    else              {__SET_VAR(data__->,__action_list[__SFC_DOWN0_INLINE20].state,,0);};

    if (active)       {__SET_VAR(data__->,__action_list[__SFC_DOWN0_INLINE21].state,,1);};
    if (desactivated) {__SET_VAR(data__->,__action_list[__SFC_DOWN0_INLINE21].state,,0);};

    if (active)       {__SET_VAR(data__->,__action_list[__SFC_DOWN0_INLINE22].state,,1);};
    if (desactivated) {__SET_VAR(data__->,__action_list[__SFC_DOWN0_INLINE22].state,,0);};

    if (active)       {__SET_VAR(data__->,__action_list[__SFC_DOWN0_INLINE23].state,,1);};
    if (desactivated) {__SET_VAR(data__->,__action_list[__SFC_DOWN0_INLINE23].state,,0);};

    if (active)       {__SET_VAR(data__->,__action_list[__SFC_DOWN0_INLINE24].state,,1);};
    if (desactivated) {__SET_VAR(data__->,__action_list[__SFC_DOWN0_INLINE24].state,,0);};

    if (active)       {__SET_VAR(data__->,__action_list[__SFC_DOWN0_INLINE25].state,,1);};
    if (desactivated) {__SET_VAR(data__->,__action_list[__SFC_DOWN0_INLINE25].state,,0);};

    if (active)       {__SET_VAR(data__->,__action_list[__SFC_DOWN0_INLINE26].state,,1);};
    if (desactivated) {__SET_VAR(data__->,__action_list[__SFC_DOWN0_INLINE26].state,,0);};

  }

  // START action associations
  {
    char active = __GET_VAR(data__->START.X);
    char activated = active && !data__->START.prev_state;
    char desactivated = !active && data__->START.prev_state;

    if (activated)    {__SET_VAR(data__->,__action_list[__SFC_START_INLINE1].state,,1);}
    else              {__SET_VAR(data__->,__action_list[__SFC_START_INLINE1].state,,0);};

    if (activated)    {__SET_VAR(data__->,__action_list[__SFC_START_INLINE2].state,,1);}
    else              {__SET_VAR(data__->,__action_list[__SFC_START_INLINE2].state,,0);};

    if (activated)    {__SET_VAR(data__->,__action_list[__SFC_START_INLINE3].state,,1);}
    else              {__SET_VAR(data__->,__action_list[__SFC_START_INLINE3].state,,0);};

    if (activated)    {__SET_VAR(data__->,__action_list[__SFC_START_INLINE4].state,,1);}
    else              {__SET_VAR(data__->,__action_list[__SFC_START_INLINE4].state,,0);};

    if (activated)    {__SET_VAR(data__->,__action_list[__SFC_START_INLINE5].state,,1);}
    else              {__SET_VAR(data__->,__action_list[__SFC_START_INLINE5].state,,0);};

  }

  // MOVING action associations
  {
    char active = __GET_VAR(data__->MOVING.X);
    char activated = active && !data__->MOVING.prev_state;
    char desactivated = !active && data__->MOVING.prev_state;

    if (activated)    {__SET_VAR(data__->,__action_list[__SFC_MOVING_INLINE6].state,,1);}
    else              {__SET_VAR(data__->,__action_list[__SFC_MOVING_INLINE6].state,,0);};

    if (active)       {__SET_VAR(data__->,__action_list[__SFC_ABORTERRORDONE].state,,1);};
    if (desactivated) {__SET_VAR(data__->,__action_list[__SFC_ABORTERRORDONE].state,,0);};

  }

  // SABORTED action associations
  {
    char active = __GET_VAR(data__->SABORTED.X);
    char activated = active && !data__->SABORTED.prev_state;
    char desactivated = !active && data__->SABORTED.prev_state;

    if (activated)    {__SET_VAR(data__->,__action_list[__SFC_SABORTED_INLINE28].state,,1);}
    else              {__SET_VAR(data__->,__action_list[__SFC_SABORTED_INLINE28].state,,0);};

    if (active)       {__SET_VAR(data__->,__action_list[__SFC_SESSIONOVERIFSS].state,,1);};
    if (desactivated) {__SET_VAR(data__->,__action_list[__SFC_SESSIONOVERIFSS].state,,0);};

  }

  // SABORTED2 action associations
  {
    char active = __GET_VAR(data__->SABORTED2.X);
    char activated = active && !data__->SABORTED2.prev_state;
    char desactivated = !active && data__->SABORTED2.prev_state;

    if (activated)    {__SET_VAR(data__->,__action_list[__SFC_SABORTED2_INLINE7].state,,1);}
    else              {__SET_VAR(data__->,__action_list[__SFC_SABORTED2_INLINE7].state,,0);};

    if (active)       {__SET_VAR(data__->,ABORTED,,1);};
    if (desactivated) {__SET_VAR(data__->,ABORTED,,0);};

  }

  // SDONE action associations
  {
    char active = __GET_VAR(data__->SDONE.X);
    char activated = active && !data__->SDONE.prev_state;
    char desactivated = !active && data__->SDONE.prev_state;

    if (activated)    {__SET_VAR(data__->,__action_list[__SFC_SDONE_INLINE8].state,,1);}
    else              {__SET_VAR(data__->,__action_list[__SFC_SDONE_INLINE8].state,,0);};

    if (active)       {__SET_VAR(data__->,__action_list[__SFC_SESSIONOVERIFSS].state,,1);};
    if (desactivated) {__SET_VAR(data__->,__action_list[__SFC_SESSIONOVERIFSS].state,,0);};

  }

  // SDONE2 action associations
  {
    char active = __GET_VAR(data__->SDONE2.X);
    char activated = active && !data__->SDONE2.prev_state;
    char desactivated = !active && data__->SDONE2.prev_state;

    if (active)       {__SET_VAR(data__->,DONE,,1);};
    if (desactivated) {__SET_VAR(data__->,DONE,,0);};

    if (activated)    {__SET_VAR(data__->,__action_list[__SFC_SDONE2_INLINE27].state,,1);}
    else              {__SET_VAR(data__->,__action_list[__SFC_SDONE2_INLINE27].state,,0);};

  }


  // Actions state evaluation
  for (i = 0; i < data__->__nb_actions; i++) {
    if (data__->__action_list[i].set) {
      data__->__action_list[i].set_remaining_time = __time_to_timespec(1, 0, 0, 0, 0, 0);
      data__->__action_list[i].stored = 1;
    }
    if (data__->__action_list[i].reset) {
      data__->__action_list[i].reset_remaining_time = __time_to_timespec(1, 0, 0, 0, 0, 0);
      data__->__action_list[i].stored = 0;
    }
    __SET_VAR(data__->,__action_list[i].state,,__GET_VAR(data__->__action_list[i].state) | data__->__action_list[i].stored);
  }

  // Actions execution
  if (data__->__action_list[__SFC_ABORTED].reset) {
    __SET_VAR(data__->,ABORTED,,0);
  }
  else if (data__->__action_list[__SFC_ABORTED].set) {
    __SET_VAR(data__->,ABORTED,,1);
  }
  if (data__->__action_list[__SFC_DONE].reset) {
    __SET_VAR(data__->,DONE,,0);
  }
  else if (data__->__action_list[__SFC_DONE].set) {
    __SET_VAR(data__->,DONE,,1);
  }
  if(__GET_VAR(data__->__action_list[__SFC_INIT_INLINE29].state)) {
    __SET_VAR(data__->,AXIS,,__GET_VAR(data__->AXISID,));
  }

  if(__GET_VAR(data__->__action_list[__SFC_INIT_INLINE30].state)) {
    __SET_VAR(data__->VCLAMP.,AXISID,,__GET_VAR(data__->AXISID,));
    __SET_VAR(data__->VCLAMP.,VEL,,__GET_VAR(data__->VELOCITY,));
    __SET_VAR(data__->VCLAMP.,ACC,,__GET_VAR(data__->ACCELERATION,));
    _VACLAMP_body__(&data__->VCLAMP);
  }

  if(__GET_VAR(data__->__action_list[__SFC_INIT_INLINE31].state)) {
    __SET_VAR(data__->,VO,,__GET_VAR(data__->VCLAMP.VO,));
  }

  if(__GET_VAR(data__->__action_list[__SFC_INIT_INLINE32].state)) {
    __SET_VAR(data__->,AO,,__GET_VAR(data__->VCLAMP.AO,));
  }

  if(__GET_VAR(data__->__action_list[__SFC_INIT_INLINE33].state)) {
    __SET_VAR(data__->AI.,ROW,,__BOOL_LITERAL(FALSE));
    __SET_VAR(data__->AI.,NODEID,,__GET_VAR(data__->AXISID,));
    __SET_VAR(data__->AI.,PNAME,,__STRING_LITERAL(5,"STATE"));
    AXIS_INFO_body__(&data__->AI);
  }

  if(__GET_VAR(data__->__action_list[__SFC_INIT_INLINE34].state)) {
    __SET_VAR(data__->,SCS,,__GET_VAR(data__->AI.OUTU32,));
  }

  if(__GET_VAR(data__->__action_list[__SFC_INIT_INLINE35].state)) {
    if ((((((__GET_VAR(data__->VO,) > 0.0) && (__GET_VAR(data__->SCS,) == 1)) || (__GET_VAR(data__->SCS,) == 2)) || (__GET_VAR(data__->SCS,) == 3)) || (__GET_VAR(data__->SCS,) == 5))) {
      __SET_VAR(data__->RRTG.,CLK,,__GET_VAR(data__->EXECUTE,));
      R_TRIG_body__(&data__->RRTG);
      __SET_VAR(data__->,ER,,__GET_VAR(data__->RRTG.Q));
    };
  }

  if(__GET_VAR(data__->__action_list[__SFC_DOWN0_INLINE9].state)) {
    __SET_VAR(data__->,CS,,2);
  }

  if(__GET_VAR(data__->__action_list[__SFC_DOWN0_INLINE10].state)) {
    __SET_VAR(data__->,ER,,0);
  }

  if(__GET_VAR(data__->__action_list[__SFC_DOWN0_INLINE11].state)) {
    __SET_VAR(data__->RRTG.,CLK,,0);
    R_TRIG_body__(&data__->RRTG);
  }

  if(__GET_VAR(data__->__action_list[__SFC_DOWN0_INLINE12].state)) {
    __SET_VAR(data__->,DONEBOOL,,__BOOL_LITERAL(FALSE));
  }

  if(__GET_VAR(data__->__action_list[__SFC_DOWN0_INLINE13].state)) {
    __SET_VAR(data__->,ABORTBOOL,,__BOOL_LITERAL(FALSE));
  }

  if(__GET_VAR(data__->__action_list[__SFC_SETLOCKVAL].state)) {
    __SET_VAR(data__->SID.,ROW,,__BOOL_LITERAL(TRUE));
    __SET_VAR(data__->SID.,AXISID,,__GET_VAR(data__->AXISID,));
    _SESSIONID_body__(&data__->SID);
    __SET_VAR(data__->,CURLOCK,,__GET_VAR(data__->SID.FBD_ABORT_FLAG));
  }

  if(__GET_VAR(data__->__action_list[__SFC_DOWN0_INLINE14].state)) {
    __SET_VAR(data__->AI.,ROW,,__BOOL_LITERAL(FALSE));
    __SET_VAR(data__->AI.,NODEID,,__GET_VAR(data__->AXISID,));
    __SET_VAR(data__->AI.,PNAME,,__STRING_LITERAL(7,"INTERPC"));
    AXIS_INFO_body__(&data__->AI);
  }

  if(__GET_VAR(data__->__action_list[__SFC_DOWN0_INLINE15].state)) {
    __SET_VAR(data__->,CURPOS,,__GET_VAR(data__->AI.OUTR,));
  }

  if(__GET_VAR(data__->__action_list[__SFC_DOWN0_INLINE16].state)) {
    __SET_VAR(data__->,TOPC,,(__GET_VAR(data__->CURPOS,) + __GET_VAR(data__->DISTANCE,)));
  }

  if(__GET_VAR(data__->__action_list[__SFC_DOWN0_INLINE17].state)) {
    __SET_VAR(data__->AI.,ROW,,__BOOL_LITERAL(FALSE));
    __SET_VAR(data__->AI.,NODEID,,__GET_VAR(data__->AXISID,));
    __SET_VAR(data__->AI.,PNAME,,__STRING_LITERAL(6,"INTERP"));
    AXIS_INFO_body__(&data__->AI);
  }

  if(__GET_VAR(data__->__action_list[__SFC_DOWN0_INLINE18].state)) {
    __SET_VAR(data__->,PRETARGET,,__GET_VAR(data__->AI.OUTR,));
  }

  if(__GET_VAR(data__->__action_list[__SFC_DOWN0_INLINE19].state)) {
    __SET_VAR(data__->,CJ,,((__GET_VAR(data__->PRETARGET,) - __GET_VAR(data__->CURPOS,)) * (__GET_VAR(data__->TOPC,) - __GET_VAR(data__->CURPOS,))));
  }

  if(__GET_VAR(data__->__action_list[__SFC_DOWN0_INLINE20].state)) {
    if ((__GET_VAR(data__->CJ,) >= 0.0)) {
      __SET_VAR(data__->,CANSTART,,__BOOL_LITERAL(TRUE));
    } else {
      __SET_VAR(data__->,CANSTART,,__BOOL_LITERAL(FALSE));
    };
  }

  if(__GET_VAR(data__->__action_list[__SFC_DOWN0_INLINE21].state)) {
    __SET_VAR(data__->SID.,ROW,,__BOOL_LITERAL(FALSE));
    __SET_VAR(data__->SID.,AXISID,,__GET_VAR(data__->AXISID,));
    _SESSIONID_body__(&data__->SID);
    __SET_VAR(data__->,RECLOCK,,__GET_VAR(data__->SID.FBD_ABORT_FLAG));
  }

  if(__GET_VAR(data__->__action_list[__SFC_DOWN0_INLINE22].state)) {
    if ((__GET_VAR(data__->RECLOCK,) != __GET_VAR(data__->CURLOCK,))) {
      __SET_VAR(data__->,ABORTBOOL,,__BOOL_LITERAL(TRUE));
    } else {
      __SET_VAR(data__->,ABORTBOOL,,__BOOL_LITERAL(FALSE));
    };
  }

  if(__GET_VAR(data__->__action_list[__SFC_DOWN0_INLINE23].state)) {
    __SET_VAR(data__->AI.,ROW,,__BOOL_LITERAL(FALSE));
    __SET_VAR(data__->AI.,NODEID,,__GET_VAR(data__->AXISID,));
    __SET_VAR(data__->AI.,PNAME,,__STRING_LITERAL(7,"INTERVC"));
    AXIS_INFO_body__(&data__->AI);
  }

  if(__GET_VAR(data__->__action_list[__SFC_DOWN0_INLINE24].state)) {
    __SET_VAR(data__->,CURVEL,,__GET_VAR(data__->AI.OUTR,));
  }

  if(__GET_VAR(data__->__action_list[__SFC_DOWN0_INLINE25].state)) {
    __SET_VAR(data__->D2.,P1,,__GET_VAR(data__->CURVEL,));
    __SET_VAR(data__->D2.,P2,,0.0);
    _DIFF2_body__(&data__->D2);
  }

  if(__GET_VAR(data__->__action_list[__SFC_DOWN0_INLINE26].state)) {
    if (__GET_VAR(data__->D2.SAME,)) {
      __SET_VAR(data__->,VE0,,__BOOL_LITERAL(TRUE));
    } else {
      __SET_VAR(data__->,VE0,,__BOOL_LITERAL(FALSE));
      __SET_VAR(data__->AI.,ROW,,__BOOL_LITERAL(TRUE));
      __SET_VAR(data__->AI.,NODEID,,__GET_VAR(data__->AXISID,));
      __SET_VAR(data__->AI.,PNAME,,__STRING_LITERAL(6,"INTERV"));
      __SET_VAR(data__->AI.,INR,,0.0);
      AXIS_INFO_body__(&data__->AI);
    };
  }

  if(__GET_VAR(data__->__action_list[__SFC_START_INLINE1].state)) {
    __SET_VAR(data__->,CS,,3);
  }

  if(__GET_VAR(data__->__action_list[__SFC_START_INLINE2].state)) {
    __SET_VAR(data__->WPVA.,AXISID,,__GET_VAR(data__->AXISID,));
    __SET_VAR(data__->WPVA.,POSITION,,__GET_VAR(data__->TOPC,));
    __SET_VAR(data__->WPVA.,VELOCITY,,__GET_VAR(data__->VO,));
    __SET_VAR(data__->WPVA.,ACCELERATION,,__GET_VAR(data__->AO,));
    _W_PVA_body__(&data__->WPVA);
  }

  if(__GET_VAR(data__->__action_list[__SFC_START_INLINE3].state)) {
    __SET_VAR(data__->WDEC.,AXISID,,__GET_VAR(data__->AXISID,));
    __SET_VAR(data__->WDEC.,DONEFLAG,,__BOOL_LITERAL(FALSE));
    __SET_VAR(data__->WDEC.,EXECUTEFLAG,,__BOOL_LITERAL(TRUE));
    __SET_VAR(data__->WDEC.,COMMANDTYPE,,1);
    _W_DEC_body__(&data__->WDEC);
  }

  if(__GET_VAR(data__->__action_list[__SFC_START_INLINE4].state)) {
    __SET_VAR(data__->,MOVEBOOL,,__BOOL_LITERAL(TRUE));
  }

  if(__GET_VAR(data__->__action_list[__SFC_START_INLINE5].state)) {
    __SET_VAR(data__->,DONE,,__BOOL_LITERAL(FALSE));
  }

  if(__GET_VAR(data__->__action_list[__SFC_MOVING_INLINE6].state)) {
    __SET_VAR(data__->,CS,,4);
  }

  if(__GET_VAR(data__->__action_list[__SFC_ABORTERRORDONE].state)) {
    __SET_VAR(data__->SID.,ROW,,__BOOL_LITERAL(FALSE));
    __SET_VAR(data__->SID.,AXISID,,__GET_VAR(data__->AXISID,));
    _SESSIONID_body__(&data__->SID);
    __SET_VAR(data__->,RECLOCK,,__GET_VAR(data__->SID.FBD_ABORT_FLAG));
    if ((__GET_VAR(data__->RECLOCK,) != __GET_VAR(data__->CURLOCK,))) {
      __SET_VAR(data__->,ABORTBOOL,,__BOOL_LITERAL(TRUE));
      __SET_VAR(data__->,DONEBOOL,,__BOOL_LITERAL(FALSE));
    };
    __SET_VAR(data__->AI.,ROW,,__BOOL_LITERAL(FALSE));
    __SET_VAR(data__->AI.,NODEID,,__GET_VAR(data__->AXISID,));
    __SET_VAR(data__->AI.,PNAME,,__STRING_LITERAL(7,"INTERPC"));
    AXIS_INFO_body__(&data__->AI);
    __SET_VAR(data__->,CURPC,,__GET_VAR(data__->AI.OUTR));
    __SET_VAR(data__->D2.,P1,,__GET_VAR(data__->CURPC,));
    __SET_VAR(data__->D2.,P2,,__GET_VAR(data__->TOPC,));
    _DIFF2_body__(&data__->D2);
    __SET_VAR(data__->,ISSAME,,__GET_VAR(data__->D2.SAME));
    if (__GET_VAR(data__->ISSAME,)) {
      __SET_VAR(data__->,DONEBOOL,,__BOOL_LITERAL(TRUE));
      __SET_VAR(data__->,ABORTBOOL,,__BOOL_LITERAL(FALSE));
    };
  }

  if(__GET_VAR(data__->__action_list[__SFC_SABORTED_INLINE28].state)) {
    __SET_VAR(data__->WDEC.,AXISID,,__GET_VAR(data__->AXISID,));
    __SET_VAR(data__->WDEC.,DONEFLAG,,__BOOL_LITERAL(TRUE));
    __SET_VAR(data__->WDEC.,EXECUTEFLAG,,__BOOL_LITERAL(FALSE));
    __SET_VAR(data__->WDEC.,COMMANDTYPE,,1);
    _W_DEC_body__(&data__->WDEC);
  }

  if(__GET_VAR(data__->__action_list[__SFC_SESSIONOVERIFSS].state)) {
    __SET_VAR(data__->AI.,ROW,,__BOOL_LITERAL(FALSE));
    __SET_VAR(data__->AI.,NODEID,,__GET_VAR(data__->AXISID,));
    __SET_VAR(data__->AI.,PNAME,,__STRING_LITERAL(5,"STATE"));
    AXIS_INFO_body__(&data__->AI);
    if ((__GET_VAR(data__->AI.OUTU32,) == 1)) {
      __SET_VAR(data__->,SESSIONOVER,,__BOOL_LITERAL(TRUE));
    } else {
      __SET_VAR(data__->,SESSIONOVER,,__BOOL_LITERAL(FALSE));
    };
  }

  if(__GET_VAR(data__->__action_list[__SFC_SABORTED2_INLINE7].state)) {
    __SET_VAR(data__->,CS,,0);
  }

  if(__GET_VAR(data__->__action_list[__SFC_SDONE_INLINE8].state)) {
    __SET_VAR(data__->WDEC.,AXISID,,__GET_VAR(data__->AXISID,));
    __SET_VAR(data__->WDEC.,DONEFLAG,,__BOOL_LITERAL(TRUE));
    __SET_VAR(data__->WDEC.,EXECUTEFLAG,,__BOOL_LITERAL(FALSE));
    __SET_VAR(data__->WDEC.,COMMANDTYPE,,1);
    _W_DEC_body__(&data__->WDEC);
  }

  if(__GET_VAR(data__->__action_list[__SFC_SDONE2_INLINE27].state)) {
    __SET_VAR(data__->,CS,,6);
  }



  goto __end;

__end:
  return;
} // MC_RELATIVE_body__() 

// Steps undefinitions
#undef INIT
#undef __SFC_INIT
#undef DOWN0
#undef __SFC_DOWN0
#undef START
#undef __SFC_START
#undef MOVING
#undef __SFC_MOVING
#undef SABORTED
#undef __SFC_SABORTED
#undef SABORTED2
#undef __SFC_SABORTED2
#undef SDONE
#undef __SFC_SDONE
#undef SDONE2
#undef __SFC_SDONE2

// Actions undefinitions
#undef __SFC_INIT_INLINE29
#undef __SFC_INIT_INLINE30
#undef __SFC_INIT_INLINE31
#undef __SFC_INIT_INLINE32
#undef __SFC_INIT_INLINE33
#undef __SFC_INIT_INLINE34
#undef __SFC_INIT_INLINE35
#undef __SFC_DOWN0_INLINE9
#undef __SFC_DOWN0_INLINE10
#undef __SFC_DOWN0_INLINE11
#undef __SFC_DOWN0_INLINE12
#undef __SFC_DOWN0_INLINE13
#undef __SFC_SETLOCKVAL
#undef __SFC_DOWN0_INLINE14
#undef __SFC_DOWN0_INLINE15
#undef __SFC_DOWN0_INLINE16
#undef __SFC_DOWN0_INLINE17
#undef __SFC_DOWN0_INLINE18
#undef __SFC_DOWN0_INLINE19
#undef __SFC_DOWN0_INLINE20
#undef __SFC_DOWN0_INLINE21
#undef __SFC_DOWN0_INLINE22
#undef __SFC_DOWN0_INLINE23
#undef __SFC_DOWN0_INLINE24
#undef __SFC_DOWN0_INLINE25
#undef __SFC_DOWN0_INLINE26
#undef __SFC_START_INLINE1
#undef __SFC_START_INLINE2
#undef __SFC_START_INLINE3
#undef __SFC_START_INLINE4
#undef __SFC_START_INLINE5
#undef __SFC_MOVING_INLINE6
#undef __SFC_ABORTERRORDONE
#undef __SFC_SABORTED_INLINE28
#undef __SFC_SESSIONOVERIFSS
#undef __SFC_SABORTED2_INLINE7
#undef __SFC_SDONE_INLINE8
#undef __SFC_SDONE2_INLINE27
#undef __SFC_ABORTED
#undef __SFC_DONE





void MC_CAMOUT_init__(MC_CAMOUT *data__, BOOL retain) {
  __INIT_VAR(data__->EN,__BOOL_LITERAL(TRUE),retain)
  __INIT_VAR(data__->ENO,__BOOL_LITERAL(TRUE),retain)
  __INIT_VAR(data__->SLAVEID,0,retain)
  __INIT_VAR(data__->EXECUTE,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->SLAVE,0,retain)
  __INIT_VAR(data__->DONE,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->ERROR,__BOOL_LITERAL(FALSE),retain)
  _W_DEC_init__(&data__->WDEC,retain);
  _W_PVA_init__(&data__->WPVA,retain);
  __INIT_VAR(data__->DONECNT,0,retain)
  __INIT_VAR(data__->ABORTBOOL,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->SESSIONOVER,__BOOL_LITERAL(FALSE),retain)
  AXIS_INFO_init__(&data__->AI,retain);
  __INIT_VAR(data__->BSS,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->CST,0,retain)
  _SESSIONID_init__(&data__->SID,retain);
  R_TRIG_init__(&data__->RRTG,retain);
  __INIT_VAR(data__->ER,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->SCS,0,retain)
  __INIT_VAR(data__->CURLOCK,0,retain)
  __INIT_VAR(data__->RECLOCK,0,retain)
  UINT i;
  data__->__nb_steps = 4;
  static const STEP temp_step = {{0, 0}, 0, {{0, 0}, 0}};
  for(i = 0; i < data__->__nb_steps; i++) {
    data__->__step_list[i] = temp_step;
  }
  __SET_VAR(data__->,__step_list[0].X,,1);
  data__->__nb_actions = 12;
  static const ACTION temp_action = {0, {0, 0}, 0, 0, {0, 0}, {0, 0}};
  for(i = 0; i < data__->__nb_actions; i++) {
    data__->__action_list[i] = temp_action;
  }
  data__->__nb_transitions = 5;
  data__->__lasttick_time = __CURRENT_TIME;
}

// Steps definitions
#define INIT __step_list[0]
#define __SFC_INIT 0
#define START __step_list[1]
#define __SFC_START 1
#define SDONE __step_list[2]
#define __SFC_SDONE 2
#define SABORT __step_list[3]
#define __SFC_SABORT 3

// Actions definitions
#define __SFC_INITORRESET 0
#define __SFC_START_INLINE1 1
#define __SFC_START_INLINE2 2
#define __SFC_START_INLINE3 3
#define __SFC_START_INLINE4 4
#define __SFC_START_INLINE5 5
#define __SFC_START_INLINE6 6
#define __SFC_START_INLINE7 7
#define __SFC_SDONE_INLINE8 8
#define __SFC_SDONE_INLINE9 9
#define __SFC_SABORT_INLINE12 10
#define __SFC_SABORT_INLINE13 11

// Code part
void MC_CAMOUT_body__(MC_CAMOUT *data__) {
  // Control execution
  if (!__GET_VAR(data__->EN)) {
    __SET_VAR(data__->,ENO,,__BOOL_LITERAL(FALSE));
    return;
  }
  else {
    __SET_VAR(data__->,ENO,,__BOOL_LITERAL(TRUE));
  }
  // Initialise TEMP variables

  INT i;
  TIME elapsed_time, current_time;

  // Calculate elapsed_time
  current_time = __CURRENT_TIME;
  elapsed_time = __time_sub(current_time, data__->__lasttick_time);
  data__->__lasttick_time = current_time;
  // Transitions initialization
  if (__DEBUG) {
    for (i = 0; i < data__->__nb_transitions; i++) {
      data__->__transition_list[i] = data__->__debug_transition_list[i];
    }
  }
  // Steps initialization
  for (i = 0; i < data__->__nb_steps; i++) {
    data__->__step_list[i].prev_state = __GET_VAR(data__->__step_list[i].X);
    if (__GET_VAR(data__->__step_list[i].X)) {
      data__->__step_list[i].T.value = __time_add(data__->__step_list[i].T.value, elapsed_time);
    }
  }
  // Actions initialization
  for (i = 0; i < data__->__nb_actions; i++) {
    __SET_VAR(data__->,__action_list[i].state,,0);
    data__->__action_list[i].set = 0;
    data__->__action_list[i].reset = 0;
    if (__time_cmp(data__->__action_list[i].set_remaining_time, __time_to_timespec(1, 0, 0, 0, 0, 0)) > 0) {
      data__->__action_list[i].set_remaining_time = __time_sub(data__->__action_list[i].set_remaining_time, elapsed_time);
      if (__time_cmp(data__->__action_list[i].set_remaining_time, __time_to_timespec(1, 0, 0, 0, 0, 0)) <= 0) {
        data__->__action_list[i].set_remaining_time = __time_to_timespec(1, 0, 0, 0, 0, 0);
        data__->__action_list[i].set = 1;
      }
    }
    if (__time_cmp(data__->__action_list[i].reset_remaining_time, __time_to_timespec(1, 0, 0, 0, 0, 0)) > 0) {
      data__->__action_list[i].reset_remaining_time = __time_sub(data__->__action_list[i].reset_remaining_time, elapsed_time);
      if (__time_cmp(data__->__action_list[i].reset_remaining_time, __time_to_timespec(1, 0, 0, 0, 0, 0)) <= 0) {
        data__->__action_list[i].reset_remaining_time = __time_to_timespec(1, 0, 0, 0, 0, 0);
        data__->__action_list[i].reset = 1;
      }
    }
  }

  // Transitions fire test
  if (__GET_VAR(data__->INIT.X)) {
    __SET_VAR(data__->,__transition_list[0],,__GET_VAR(data__->ER,));
    if (__DEBUG) {
      __SET_VAR(data__->,__debug_transition_list[0],,__GET_VAR(data__->__transition_list[0]));
    }
  }
  else {
    if (__DEBUG) {
      __SET_VAR(data__->,__debug_transition_list[0],,__GET_VAR(data__->ER,));
    }
    __SET_VAR(data__->,__transition_list[0],,0);
  }
  if (__GET_VAR(data__->START.X)) {
    __SET_VAR(data__->,__transition_list[1],,__GET_VAR(data__->BSS,));
    if (__DEBUG) {
      __SET_VAR(data__->,__debug_transition_list[1],,__GET_VAR(data__->__transition_list[1]));
    }
  }
  else {
    if (__DEBUG) {
      __SET_VAR(data__->,__debug_transition_list[1],,__GET_VAR(data__->BSS,));
    }
    __SET_VAR(data__->,__transition_list[1],,0);
  }
  if (__GET_VAR(data__->SDONE.X)) {
    __SET_VAR(data__->,__transition_list[2],,__GET_VAR(data__->SESSIONOVER,));
    if (__DEBUG) {
      __SET_VAR(data__->,__debug_transition_list[2],,__GET_VAR(data__->__transition_list[2]));
    }
  }
  else {
    if (__DEBUG) {
      __SET_VAR(data__->,__debug_transition_list[2],,__GET_VAR(data__->SESSIONOVER,));
    }
    __SET_VAR(data__->,__transition_list[2],,0);
  }
  if (__GET_VAR(data__->START.X)) {
    __SET_VAR(data__->,__transition_list[3],,__GET_VAR(data__->ABORTBOOL,));
    if (__DEBUG) {
      __SET_VAR(data__->,__debug_transition_list[3],,__GET_VAR(data__->__transition_list[3]));
    }
  }
  else {
    if (__DEBUG) {
      __SET_VAR(data__->,__debug_transition_list[3],,__GET_VAR(data__->ABORTBOOL,));
    }
    __SET_VAR(data__->,__transition_list[3],,0);
  }
  if (__GET_VAR(data__->SABORT.X)) {
    __SET_VAR(data__->,__transition_list[4],,__GET_VAR(data__->SESSIONOVER,));
    if (__DEBUG) {
      __SET_VAR(data__->,__debug_transition_list[4],,__GET_VAR(data__->__transition_list[4]));
    }
  }
  else {
    if (__DEBUG) {
      __SET_VAR(data__->,__debug_transition_list[4],,__GET_VAR(data__->SESSIONOVER,));
    }
    __SET_VAR(data__->,__transition_list[4],,0);
  }

  // Transitions reset steps
  if (__GET_VAR(data__->__transition_list[0])) {
    __SET_VAR(data__->,INIT.X,,0);
  }
  if (__GET_VAR(data__->__transition_list[1])) {
    __SET_VAR(data__->,START.X,,0);
  }
  if (__GET_VAR(data__->__transition_list[2])) {
    __SET_VAR(data__->,SDONE.X,,0);
  }
  if (__GET_VAR(data__->__transition_list[3])) {
    __SET_VAR(data__->,START.X,,0);
  }
  if (__GET_VAR(data__->__transition_list[4])) {
    __SET_VAR(data__->,SABORT.X,,0);
  }

  // Transitions set steps
  if (__GET_VAR(data__->__transition_list[0])) {
    __SET_VAR(data__->,START.X,,1);
    data__->START.T.value = __time_to_timespec(1, 0, 0, 0, 0, 0);
  }
  if (__GET_VAR(data__->__transition_list[1])) {
    __SET_VAR(data__->,SDONE.X,,1);
    data__->SDONE.T.value = __time_to_timespec(1, 0, 0, 0, 0, 0);
  }
  if (__GET_VAR(data__->__transition_list[2])) {
    __SET_VAR(data__->,INIT.X,,1);
    data__->INIT.T.value = __time_to_timespec(1, 0, 0, 0, 0, 0);
  }
  if (__GET_VAR(data__->__transition_list[3])) {
    __SET_VAR(data__->,SABORT.X,,1);
    data__->SABORT.T.value = __time_to_timespec(1, 0, 0, 0, 0, 0);
  }
  if (__GET_VAR(data__->__transition_list[4])) {
    __SET_VAR(data__->,INIT.X,,1);
    data__->INIT.T.value = __time_to_timespec(1, 0, 0, 0, 0, 0);
  }

  // Steps association
  // INIT action associations
  {
    char active = __GET_VAR(data__->INIT.X);
    char activated = active && !data__->INIT.prev_state;
    char desactivated = !active && data__->INIT.prev_state;

    if (active)       {__SET_VAR(data__->,__action_list[__SFC_INITORRESET].state,,1);};
    if (desactivated) {__SET_VAR(data__->,__action_list[__SFC_INITORRESET].state,,0);};

  }

  // START action associations
  {
    char active = __GET_VAR(data__->START.X);
    char activated = active && !data__->START.prev_state;
    char desactivated = !active && data__->START.prev_state;

    if (activated)    {__SET_VAR(data__->,__action_list[__SFC_START_INLINE1].state,,1);}
    else              {__SET_VAR(data__->,__action_list[__SFC_START_INLINE1].state,,0);};

    if (activated)    {__SET_VAR(data__->,__action_list[__SFC_START_INLINE2].state,,1);}
    else              {__SET_VAR(data__->,__action_list[__SFC_START_INLINE2].state,,0);};

    if (active)       {__SET_VAR(data__->,__action_list[__SFC_START_INLINE3].state,,1);};
    if (desactivated) {__SET_VAR(data__->,__action_list[__SFC_START_INLINE3].state,,0);};

    if (active)       {__SET_VAR(data__->,__action_list[__SFC_START_INLINE4].state,,1);};
    if (desactivated) {__SET_VAR(data__->,__action_list[__SFC_START_INLINE4].state,,0);};

    if (active)       {__SET_VAR(data__->,__action_list[__SFC_START_INLINE5].state,,1);};
    if (desactivated) {__SET_VAR(data__->,__action_list[__SFC_START_INLINE5].state,,0);};

    if (active)       {__SET_VAR(data__->,__action_list[__SFC_START_INLINE6].state,,1);};
    if (desactivated) {__SET_VAR(data__->,__action_list[__SFC_START_INLINE6].state,,0);};

    if (active)       {__SET_VAR(data__->,__action_list[__SFC_START_INLINE7].state,,1);};
    if (desactivated) {__SET_VAR(data__->,__action_list[__SFC_START_INLINE7].state,,0);};

  }

  // SDONE action associations
  {
    char active = __GET_VAR(data__->SDONE.X);
    char activated = active && !data__->SDONE.prev_state;
    char desactivated = !active && data__->SDONE.prev_state;

    if (activated)    {__SET_VAR(data__->,__action_list[__SFC_SDONE_INLINE8].state,,1);}
    else              {__SET_VAR(data__->,__action_list[__SFC_SDONE_INLINE8].state,,0);};

    if (activated)    {__SET_VAR(data__->,__action_list[__SFC_SDONE_INLINE9].state,,1);}
    else              {__SET_VAR(data__->,__action_list[__SFC_SDONE_INLINE9].state,,0);};

  }

  // SABORT action associations
  {
    char active = __GET_VAR(data__->SABORT.X);
    char activated = active && !data__->SABORT.prev_state;
    char desactivated = !active && data__->SABORT.prev_state;

    if (activated)    {__SET_VAR(data__->,__action_list[__SFC_SABORT_INLINE12].state,,1);}
    else              {__SET_VAR(data__->,__action_list[__SFC_SABORT_INLINE12].state,,0);};

    if (activated)    {__SET_VAR(data__->,__action_list[__SFC_SABORT_INLINE13].state,,1);}
    else              {__SET_VAR(data__->,__action_list[__SFC_SABORT_INLINE13].state,,0);};

  }


  // Actions state evaluation
  for (i = 0; i < data__->__nb_actions; i++) {
    if (data__->__action_list[i].set) {
      data__->__action_list[i].set_remaining_time = __time_to_timespec(1, 0, 0, 0, 0, 0);
      data__->__action_list[i].stored = 1;
    }
    if (data__->__action_list[i].reset) {
      data__->__action_list[i].reset_remaining_time = __time_to_timespec(1, 0, 0, 0, 0, 0);
      data__->__action_list[i].stored = 0;
    }
    __SET_VAR(data__->,__action_list[i].state,,__GET_VAR(data__->__action_list[i].state) | data__->__action_list[i].stored);
  }

  // Actions execution
  if(__GET_VAR(data__->__action_list[__SFC_INITORRESET].state)) {
    __SET_VAR(data__->,SLAVE,,__GET_VAR(data__->SLAVEID,));
    if ((__GET_VAR(data__->DONE,) == 1)) {
      __SET_VAR(data__->,DONE,,__GET_VAR(data__->EXECUTE,));
    } else {
      __SET_VAR(data__->,BSS,,__BOOL_LITERAL(FALSE));
      __SET_VAR(data__->,SESSIONOVER,,__BOOL_LITERAL(FALSE));
    };
    __SET_VAR(data__->AI.,ROW,,__BOOL_LITERAL(FALSE));
    __SET_VAR(data__->AI.,NODEID,,__GET_VAR(data__->SLAVEID,));
    __SET_VAR(data__->AI.,PNAME,,__STRING_LITERAL(5,"STATE"));
    AXIS_INFO_body__(&data__->AI);
    __SET_VAR(data__->,SCS,,__GET_VAR(data__->AI.OUTU32,));
    if ((__GET_VAR(data__->SCS,) == 5)) {
      __SET_VAR(data__->RRTG.,CLK,,__GET_VAR(data__->EXECUTE,));
      R_TRIG_body__(&data__->RRTG);
      __SET_VAR(data__->,ER,,__GET_VAR(data__->RRTG.Q));
    } else {
      __SET_VAR(data__->,ER,,0);
    };
  }

  if(__GET_VAR(data__->__action_list[__SFC_START_INLINE1].state)) {
    __SET_VAR(data__->SID.,ROW,,__BOOL_LITERAL(TRUE));
    __SET_VAR(data__->SID.,AXISID,,__GET_VAR(data__->SLAVEID,));
    _SESSIONID_body__(&data__->SID);
  }

  if(__GET_VAR(data__->__action_list[__SFC_START_INLINE2].state)) {
    __SET_VAR(data__->WDEC.,AXISID,,__GET_VAR(data__->SLAVEID,));
    __SET_VAR(data__->WDEC.,DONEFLAG,,__BOOL_LITERAL(FALSE));
    __SET_VAR(data__->WDEC.,EXECUTEFLAG,,__BOOL_LITERAL(TRUE));
    __SET_VAR(data__->WDEC.,COMMANDTYPE,,21);
    _W_DEC_body__(&data__->WDEC);
  }

  if(__GET_VAR(data__->__action_list[__SFC_START_INLINE3].state)) {
    __SET_VAR(data__->,RECLOCK,,__GET_VAR(data__->SID.FBD_ABORT_FLAG,));
  }

  if(__GET_VAR(data__->__action_list[__SFC_START_INLINE4].state)) {
    if ((__GET_VAR(data__->RECLOCK,) != __GET_VAR(data__->CURLOCK,))) {
      __SET_VAR(data__->,ABORTBOOL,,__BOOL_LITERAL(TRUE));
    };
  }

  if(__GET_VAR(data__->__action_list[__SFC_START_INLINE5].state)) {
    __SET_VAR(data__->AI.,ROW,,__BOOL_LITERAL(FALSE));
    __SET_VAR(data__->AI.,NODEID,,__GET_VAR(data__->SLAVEID,));
    __SET_VAR(data__->AI.,PNAME,,__STRING_LITERAL(5,"STATE"));
    AXIS_INFO_body__(&data__->AI);
  }

  if(__GET_VAR(data__->__action_list[__SFC_START_INLINE6].state)) {
    __SET_VAR(data__->,CST,,__GET_VAR(data__->AI.OUTU32,));
  }

  if(__GET_VAR(data__->__action_list[__SFC_START_INLINE7].state)) {
    if ((__GET_VAR(data__->CST,) == 1)) {
      __SET_VAR(data__->,BSS,,__BOOL_LITERAL(TRUE));
    } else {
      __SET_VAR(data__->,BSS,,__BOOL_LITERAL(FALSE));
    };
  }

  if(__GET_VAR(data__->__action_list[__SFC_SDONE_INLINE8].state)) {
    __SET_VAR(data__->,DONE,,__BOOL_LITERAL(TRUE));
  }

  if(__GET_VAR(data__->__action_list[__SFC_SDONE_INLINE9].state)) {
    __SET_VAR(data__->,SESSIONOVER,,__BOOL_LITERAL(TRUE));
  }

  if(__GET_VAR(data__->__action_list[__SFC_SABORT_INLINE12].state)) {
    __SET_VAR(data__->,ERROR,,__BOOL_LITERAL(TRUE));
  }

  if(__GET_VAR(data__->__action_list[__SFC_SABORT_INLINE13].state)) {
    __SET_VAR(data__->,SESSIONOVER,,__BOOL_LITERAL(TRUE));
  }



  goto __end;

__end:
  return;
} // MC_CAMOUT_body__() 

// Steps undefinitions
#undef INIT
#undef __SFC_INIT
#undef START
#undef __SFC_START
#undef SDONE
#undef __SFC_SDONE
#undef SABORT
#undef __SFC_SABORT

// Actions undefinitions
#undef __SFC_INITORRESET
#undef __SFC_START_INLINE1
#undef __SFC_START_INLINE2
#undef __SFC_START_INLINE3
#undef __SFC_START_INLINE4
#undef __SFC_START_INLINE5
#undef __SFC_START_INLINE6
#undef __SFC_START_INLINE7
#undef __SFC_SDONE_INLINE8
#undef __SFC_SDONE_INLINE9
#undef __SFC_SABORT_INLINE12
#undef __SFC_SABORT_INLINE13





void MC_POWER_init__(MC_POWER *data__, BOOL retain) {
  __INIT_VAR(data__->EN,__BOOL_LITERAL(TRUE),retain)
  __INIT_VAR(data__->ENO,__BOOL_LITERAL(TRUE),retain)
  __INIT_VAR(data__->AXISID,0,retain)
  __INIT_VAR(data__->POWER,__BOOL_LITERAL(TRUE),retain)
  __INIT_VAR(data__->AXIS,0,retain)
  __INIT_VAR(data__->DONE,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->ERROR,__BOOL_LITERAL(FALSE),retain)
  _W_DEC_init__(&data__->WD,retain);
  AXIS_INFO_init__(&data__->AI,retain);
  UINT i;
  data__->__nb_steps = 2;
  static const STEP temp_step = {{0, 0}, 0, {{0, 0}, 0}};
  for(i = 0; i < data__->__nb_steps; i++) {
    data__->__step_list[i] = temp_step;
  }
  __SET_VAR(data__->,__step_list[0].X,,1);
  data__->__nb_actions = 9;
  static const ACTION temp_action = {0, {0, 0}, 0, 0, {0, 0}, {0, 0}};
  for(i = 0; i < data__->__nb_actions; i++) {
    data__->__action_list[i] = temp_action;
  }
  data__->__nb_transitions = 2;
  data__->__lasttick_time = __CURRENT_TIME;
}

// Steps definitions
#define SOFF __step_list[0]
#define __SFC_SOFF 0
#define SON __step_list[1]
#define __SFC_SON 1

// Actions definitions
#define __SFC_SOFF_INLINE1 0
#define __SFC_SOFF_INLINE2 1
#define __SFC_SOFF_INLINE3 2
#define __SFC_SON_INLINE4 3
#define __SFC_SON_INLINE5 4
#define __SFC_SON_INLINE6 5
#define __SFC_SON_INLINE7 6
#define __SFC_SON_INLINE8 7
#define __SFC_SON_INLINE9 8

// Code part
void MC_POWER_body__(MC_POWER *data__) {
  // Control execution
  if (!__GET_VAR(data__->EN)) {
    __SET_VAR(data__->,ENO,,__BOOL_LITERAL(FALSE));
    return;
  }
  else {
    __SET_VAR(data__->,ENO,,__BOOL_LITERAL(TRUE));
  }
  // Initialise TEMP variables

  INT i;
  TIME elapsed_time, current_time;

  // Calculate elapsed_time
  current_time = __CURRENT_TIME;
  elapsed_time = __time_sub(current_time, data__->__lasttick_time);
  data__->__lasttick_time = current_time;
  // Transitions initialization
  if (__DEBUG) {
    for (i = 0; i < data__->__nb_transitions; i++) {
      data__->__transition_list[i] = data__->__debug_transition_list[i];
    }
  }
  // Steps initialization
  for (i = 0; i < data__->__nb_steps; i++) {
    data__->__step_list[i].prev_state = __GET_VAR(data__->__step_list[i].X);
    if (__GET_VAR(data__->__step_list[i].X)) {
      data__->__step_list[i].T.value = __time_add(data__->__step_list[i].T.value, elapsed_time);
    }
  }
  // Actions initialization
  for (i = 0; i < data__->__nb_actions; i++) {
    __SET_VAR(data__->,__action_list[i].state,,0);
    data__->__action_list[i].set = 0;
    data__->__action_list[i].reset = 0;
    if (__time_cmp(data__->__action_list[i].set_remaining_time, __time_to_timespec(1, 0, 0, 0, 0, 0)) > 0) {
      data__->__action_list[i].set_remaining_time = __time_sub(data__->__action_list[i].set_remaining_time, elapsed_time);
      if (__time_cmp(data__->__action_list[i].set_remaining_time, __time_to_timespec(1, 0, 0, 0, 0, 0)) <= 0) {
        data__->__action_list[i].set_remaining_time = __time_to_timespec(1, 0, 0, 0, 0, 0);
        data__->__action_list[i].set = 1;
      }
    }
    if (__time_cmp(data__->__action_list[i].reset_remaining_time, __time_to_timespec(1, 0, 0, 0, 0, 0)) > 0) {
      data__->__action_list[i].reset_remaining_time = __time_sub(data__->__action_list[i].reset_remaining_time, elapsed_time);
      if (__time_cmp(data__->__action_list[i].reset_remaining_time, __time_to_timespec(1, 0, 0, 0, 0, 0)) <= 0) {
        data__->__action_list[i].reset_remaining_time = __time_to_timespec(1, 0, 0, 0, 0, 0);
        data__->__action_list[i].reset = 1;
      }
    }
  }

  // Transitions fire test
  if (__GET_VAR(data__->SOFF.X)) {
    __SET_VAR(data__->,__transition_list[0],,__GET_VAR(data__->POWER,));
    if (__DEBUG) {
      __SET_VAR(data__->,__debug_transition_list[0],,__GET_VAR(data__->__transition_list[0]));
    }
  }
  else {
    if (__DEBUG) {
      __SET_VAR(data__->,__debug_transition_list[0],,__GET_VAR(data__->POWER,));
    }
    __SET_VAR(data__->,__transition_list[0],,0);
  }
  if (__GET_VAR(data__->SON.X)) {
    __SET_VAR(data__->,__transition_list[1],,!(__GET_VAR(data__->POWER,)));
    if (__DEBUG) {
      __SET_VAR(data__->,__debug_transition_list[1],,__GET_VAR(data__->__transition_list[1]));
    }
  }
  else {
    if (__DEBUG) {
      __SET_VAR(data__->,__debug_transition_list[1],,!(__GET_VAR(data__->POWER,)));
    }
    __SET_VAR(data__->,__transition_list[1],,0);
  }

  // Transitions reset steps
  if (__GET_VAR(data__->__transition_list[0])) {
    __SET_VAR(data__->,SOFF.X,,0);
  }
  if (__GET_VAR(data__->__transition_list[1])) {
    __SET_VAR(data__->,SON.X,,0);
  }

  // Transitions set steps
  if (__GET_VAR(data__->__transition_list[0])) {
    __SET_VAR(data__->,SON.X,,1);
    data__->SON.T.value = __time_to_timespec(1, 0, 0, 0, 0, 0);
  }
  if (__GET_VAR(data__->__transition_list[1])) {
    __SET_VAR(data__->,SOFF.X,,1);
    data__->SOFF.T.value = __time_to_timespec(1, 0, 0, 0, 0, 0);
  }

  // Steps association
  // SOFF action associations
  {
    char active = __GET_VAR(data__->SOFF.X);
    char activated = active && !data__->SOFF.prev_state;
    char desactivated = !active && data__->SOFF.prev_state;

    if (activated)    {__SET_VAR(data__->,__action_list[__SFC_SOFF_INLINE1].state,,1);}
    else              {__SET_VAR(data__->,__action_list[__SFC_SOFF_INLINE1].state,,0);};

    if (activated)    {__SET_VAR(data__->,__action_list[__SFC_SOFF_INLINE2].state,,1);}
    else              {__SET_VAR(data__->,__action_list[__SFC_SOFF_INLINE2].state,,0);};

    if (activated)    {__SET_VAR(data__->,__action_list[__SFC_SOFF_INLINE3].state,,1);}
    else              {__SET_VAR(data__->,__action_list[__SFC_SOFF_INLINE3].state,,0);};

  }

  // SON action associations
  {
    char active = __GET_VAR(data__->SON.X);
    char activated = active && !data__->SON.prev_state;
    char desactivated = !active && data__->SON.prev_state;

    if (activated)    {__SET_VAR(data__->,__action_list[__SFC_SON_INLINE4].state,,1);}
    else              {__SET_VAR(data__->,__action_list[__SFC_SON_INLINE4].state,,0);};

    if (activated)    {__SET_VAR(data__->,__action_list[__SFC_SON_INLINE5].state,,1);}
    else              {__SET_VAR(data__->,__action_list[__SFC_SON_INLINE5].state,,0);};

    if (activated)    {__SET_VAR(data__->,__action_list[__SFC_SON_INLINE6].state,,1);}
    else              {__SET_VAR(data__->,__action_list[__SFC_SON_INLINE6].state,,0);};

    if (activated)    {__SET_VAR(data__->,__action_list[__SFC_SON_INLINE7].state,,1);}
    else              {__SET_VAR(data__->,__action_list[__SFC_SON_INLINE7].state,,0);};

    if (activated)    {__SET_VAR(data__->,__action_list[__SFC_SON_INLINE8].state,,1);}
    else              {__SET_VAR(data__->,__action_list[__SFC_SON_INLINE8].state,,0);};

    if (activated)    {__SET_VAR(data__->,__action_list[__SFC_SON_INLINE9].state,,1);}
    else              {__SET_VAR(data__->,__action_list[__SFC_SON_INLINE9].state,,0);};

  }


  // Actions state evaluation
  for (i = 0; i < data__->__nb_actions; i++) {
    if (data__->__action_list[i].set) {
      data__->__action_list[i].set_remaining_time = __time_to_timespec(1, 0, 0, 0, 0, 0);
      data__->__action_list[i].stored = 1;
    }
    if (data__->__action_list[i].reset) {
      data__->__action_list[i].reset_remaining_time = __time_to_timespec(1, 0, 0, 0, 0, 0);
      data__->__action_list[i].stored = 0;
    }
    __SET_VAR(data__->,__action_list[i].state,,__GET_VAR(data__->__action_list[i].state) | data__->__action_list[i].stored);
  }

  // Actions execution
  if(__GET_VAR(data__->__action_list[__SFC_SOFF_INLINE1].state)) {
    __SET_VAR(data__->,AXIS,,__GET_VAR(data__->AXISID,));
  }

  if(__GET_VAR(data__->__action_list[__SFC_SOFF_INLINE2].state)) {
    __SET_VAR(data__->WD.,AXISID,,__GET_VAR(data__->AXISID,));
    __SET_VAR(data__->WD.,DONEFLAG,,__BOOL_LITERAL(FALSE));
    __SET_VAR(data__->WD.,EXECUTEFLAG,,__BOOL_LITERAL(FALSE));
    __SET_VAR(data__->WD.,COMMANDTYPE,,0);
    _W_DEC_body__(&data__->WD);
  }

  if(__GET_VAR(data__->__action_list[__SFC_SOFF_INLINE3].state)) {
    __SET_VAR(data__->,DONE,,__BOOL_LITERAL(FALSE));
  }

  if(__GET_VAR(data__->__action_list[__SFC_SON_INLINE4].state)) {
    __SET_VAR(data__->,AXIS,,__GET_VAR(data__->AXISID,));
  }

  if(__GET_VAR(data__->__action_list[__SFC_SON_INLINE5].state)) {
    __SET_VAR(data__->WD.,AXISID,,__GET_VAR(data__->AXISID,));
    __SET_VAR(data__->WD.,DONEFLAG,,__BOOL_LITERAL(TRUE));
    __SET_VAR(data__->WD.,EXECUTEFLAG,,__BOOL_LITERAL(TRUE));
    __SET_VAR(data__->WD.,COMMANDTYPE,,0);
    _W_DEC_body__(&data__->WD);
  }

  if(__GET_VAR(data__->__action_list[__SFC_SON_INLINE6].state)) {
    __SET_VAR(data__->AI.,ROW,,__BOOL_LITERAL(TRUE));
    __SET_VAR(data__->AI.,NODEID,,__GET_VAR(data__->AXISID,));
    __SET_VAR(data__->AI.,PNAME,,__STRING_LITERAL(7,"INTERPC"));
    __SET_VAR(data__->AI.,INR,,0.0);
    AXIS_INFO_body__(&data__->AI);
  }

  if(__GET_VAR(data__->__action_list[__SFC_SON_INLINE7].state)) {
    __SET_VAR(data__->AI.,ROW,,__BOOL_LITERAL(TRUE));
    __SET_VAR(data__->AI.,NODEID,,__GET_VAR(data__->AXISID,));
    __SET_VAR(data__->AI.,PNAME,,__STRING_LITERAL(2,"PC"));
    __SET_VAR(data__->AI.,INR,,0.0);
    AXIS_INFO_body__(&data__->AI);
  }

  if(__GET_VAR(data__->__action_list[__SFC_SON_INLINE8].state)) {
    __SET_VAR(data__->AI.,ROW,,__BOOL_LITERAL(TRUE));
    __SET_VAR(data__->AI.,NODEID,,__GET_VAR(data__->AXISID,));
    __SET_VAR(data__->AI.,PNAME,,__STRING_LITERAL(6,"CURPOS"));
    __SET_VAR(data__->AI.,INU32,,0);
    AXIS_INFO_body__(&data__->AI);
  }

  if(__GET_VAR(data__->__action_list[__SFC_SON_INLINE9].state)) {
    __SET_VAR(data__->,DONE,,__BOOL_LITERAL(TRUE));
  }



  goto __end;

__end:
  return;
} // MC_POWER_body__() 

// Steps undefinitions
#undef SOFF
#undef __SFC_SOFF
#undef SON
#undef __SFC_SON

// Actions undefinitions
#undef __SFC_SOFF_INLINE1
#undef __SFC_SOFF_INLINE2
#undef __SFC_SOFF_INLINE3
#undef __SFC_SON_INLINE4
#undef __SFC_SON_INLINE5
#undef __SFC_SON_INLINE6
#undef __SFC_SON_INLINE7
#undef __SFC_SON_INLINE8
#undef __SFC_SON_INLINE9





void _RMOD_init__(_RMOD *data__, BOOL retain) {
  __INIT_VAR(data__->EN,__BOOL_LITERAL(TRUE),retain)
  __INIT_VAR(data__->ENO,__BOOL_LITERAL(TRUE),retain)
  __INIT_VAR(data__->PC,0,retain)
  __INIT_VAR(data__->MMM,0,retain)
  __INIT_VAR(data__->DIR,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->OPC,0,retain)
  __INIT_VAR(data__->CHANGED,__BOOL_LITERAL(FALSE),retain)
}

// Code part
void _RMOD_body__(_RMOD *data__) {
  // Control execution
  if (!__GET_VAR(data__->EN)) {
    __SET_VAR(data__->,ENO,,__BOOL_LITERAL(FALSE));
    return;
  }
  else {
    __SET_VAR(data__->,ENO,,__BOOL_LITERAL(TRUE));
  }
  // Initialise TEMP variables

  __IL_DEFVAR_T __IL_DEFVAR;
  __IL_DEFVAR_T __IL_DEFVAR_BACK;
  #define GetFbVar(var,...) __GET_VAR(data__->var,__VA_ARGS__)
  #define SetFbVar(var,val,...) __SET_VAR(data__->,var,__VA_ARGS__,val)
extern void _RMOD_body2__(_RMOD *data__) ;  _RMOD_body2__(data__);
  #undef GetFbVar
  #undef SetFbVar
;

  goto __end;

__end:
  return;
} // _RMOD_body__() 





void _INTER_WRITE_init__(_INTER_WRITE *data__, BOOL retain) {
  __INIT_VAR(data__->EN,__BOOL_LITERAL(TRUE),retain)
  __INIT_VAR(data__->ENO,__BOOL_LITERAL(TRUE),retain)
  __INIT_VAR(data__->AXISID,0,retain)
  __INIT_VAR(data__->INTERPC_IN,0.0,retain)
  __INIT_VAR(data__->INTERVC_IN,0.0,retain)
  AXIS_INFO_init__(&data__->AI,retain);
  __INIT_VAR(data__->MMOD,0,retain)
  __INIT_VAR(data__->CPC,0,retain)
  __INIT_VAR(data__->DP,0,retain)
  __INIT_VAR(data__->LASTCPC,0,retain)
  _RMOD_init__(&data__->RMD,retain);
  __INIT_VAR(data__->MMM,0,retain)
  __INIT_VAR(data__->MPP,0,retain)
  __INIT_VAR(data__->GXPHASE,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->ROTARY,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->D2G,0,retain)
  __INIT_VAR(data__->DA,0,retain)
  __INIT_VAR(data__->D2GT,0,retain)
}

// Code part
void _INTER_WRITE_body__(_INTER_WRITE *data__) {
  // Control execution
  if (!__GET_VAR(data__->EN)) {
    __SET_VAR(data__->,ENO,,__BOOL_LITERAL(FALSE));
    return;
  }
  else {
    __SET_VAR(data__->,ENO,,__BOOL_LITERAL(TRUE));
  }
  // Initialise TEMP variables

  __IL_DEFVAR_T __IL_DEFVAR;
  __IL_DEFVAR_T __IL_DEFVAR_BACK;
  #define GetFbVar(var,...) __GET_VAR(data__->var,__VA_ARGS__)
  #define SetFbVar(var,val,...) __SET_VAR(data__->,var,__VA_ARGS__,val)
extern void _INTER_WRITE_body2__(_INTER_WRITE *data__) ;  _INTER_WRITE_body2__(data__);
  #undef GetFbVar
  #undef SetFbVar
;

  goto __end;

__end:
  return;
} // _INTER_WRITE_body__() 





void _IPBYSPOS_init__(_IPBYSPOS *data__, BOOL retain) {
  __INIT_VAR(data__->EN,__BOOL_LITERAL(TRUE),retain)
  __INIT_VAR(data__->ENO,__BOOL_LITERAL(TRUE),retain)
  __INIT_VAR(data__->SLAVEID,0,retain)
  __INIT_VAR(data__->SPOS,0,retain)
  __INIT_VAR(data__->INVEL,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->SPC,0,retain)
  AXIS_INFO_init__(&data__->AI,retain);
  __INIT_VAR(data__->MPP,0,retain)
  _PULSE_CALC_init__(&data__->PULSECALC,retain);
  __INIT_VAR(data__->POUT,0,retain)
  IP_WRITE_init__(&data__->IPWRT,retain);
  __INIT_VAR(data__->CURPOS,0,retain)
  __INIT_VAR(data__->TS,0,retain)
  SYS_CFG_init__(&data__->SC,retain);
  __INIT_VAR(data__->AMX,0,retain)
  _INTER_WRITE_init__(&data__->ITWRT,retain);
}

// Code part
void _IPBYSPOS_body__(_IPBYSPOS *data__) {
  // Control execution
  if (!__GET_VAR(data__->EN)) {
    __SET_VAR(data__->,ENO,,__BOOL_LITERAL(FALSE));
    return;
  }
  else {
    __SET_VAR(data__->,ENO,,__BOOL_LITERAL(TRUE));
  }
  // Initialise TEMP variables

  __IL_DEFVAR_T __IL_DEFVAR;
  __IL_DEFVAR_T __IL_DEFVAR_BACK;
  #define GetFbVar(var,...) __GET_VAR(data__->var,__VA_ARGS__)
  #define SetFbVar(var,val,...) __SET_VAR(data__->,var,__VA_ARGS__,val)
extern void _IPBYSPOS_body2__(_IPBYSPOS *data__) ;  _IPBYSPOS_body2__(data__);
  #undef GetFbVar
  #undef SetFbVar
;

  goto __end;

__end:
  return;
} // _IPBYSPOS_body__() 





void MC_COMBINE_init__(MC_COMBINE *data__, BOOL retain) {
  __INIT_VAR(data__->EN,__BOOL_LITERAL(TRUE),retain)
  __INIT_VAR(data__->ENO,__BOOL_LITERAL(TRUE),retain)
  __INIT_VAR(data__->MASTER1,0,retain)
  __INIT_VAR(data__->MASTER2,0,retain)
  __INIT_VAR(data__->SLAVE,0,retain)
  __INIT_VAR(data__->EXECUTE,__BOOL_LITERAL(FALSE),retain)
  AXIS_INFO_init__(&data__->AI,retain);
  __INIT_VAR(data__->M1P,0,retain)
  __INIT_VAR(data__->M2P,0,retain)
  IP_WRITE_init__(&data__->IPWRT,retain);
  _INTER_WRITE_init__(&data__->ITWRT,retain);
  __INIT_VAR(data__->IP,0,retain)
  __INIT_VAR(data__->IV,0,retain)
  __INIT_VAR(data__->LTP1,0,retain)
  __INIT_VAR(data__->LTP2,0,retain)
  __INIT_VAR(data__->DELTA_M1,0,retain)
  __INIT_VAR(data__->DELTA_M2,0,retain)
  __INIT_VAR(data__->DELTA_S,0,retain)
  __INIT_VAR(data__->SLAVE_PC,0,retain)
  _IPBYSPOS_init__(&data__->IPW,retain);
  _W_DEC_init__(&data__->WDEC,retain);
  R_TRIG_init__(&data__->RT1,retain);
  F_TRIG_init__(&data__->RF1,retain);
  __INIT_VAR(data__->FLAG1,__BOOL_LITERAL(FALSE),retain)
  _INTER_WRITE_init__(&data__->IW,retain);
}

// Code part
void MC_COMBINE_body__(MC_COMBINE *data__) {
  // Control execution
  if (!__GET_VAR(data__->EN)) {
    __SET_VAR(data__->,ENO,,__BOOL_LITERAL(FALSE));
    return;
  }
  else {
    __SET_VAR(data__->,ENO,,__BOOL_LITERAL(TRUE));
  }
  // Initialise TEMP variables

  __IL_DEFVAR_T __IL_DEFVAR;
  __IL_DEFVAR_T __IL_DEFVAR_BACK;
  #define GetFbVar(var,...) __GET_VAR(data__->var,__VA_ARGS__)
  #define SetFbVar(var,val,...) __SET_VAR(data__->,var,__VA_ARGS__,val)
extern void MC_COMBINE_body2__(MC_COMBINE *data__) ;  MC_COMBINE_body2__(data__);
  #undef GetFbVar
  #undef SetFbVar
;

  goto __end;

__end:
  return;
} // MC_COMBINE_body__() 





void _CP0POS_init__(_CP0POS *data__, BOOL retain) {
  __INIT_VAR(data__->EN,__BOOL_LITERAL(TRUE),retain)
  __INIT_VAR(data__->ENO,__BOOL_LITERAL(TRUE),retain)
  __INIT_VAR(data__->AXISID,0,retain)
  __INIT_VAR(data__->LOGPOS0,0,retain)
  __INIT_VAR(data__->P0IN,0,retain)
  __INIT_VAR(data__->MPP,0,retain)
  __INIT_VAR(data__->P0OUT,0,retain)
  _PULSE_CALC_init__(&data__->CPDIST,retain);
  __INIT_VAR(data__->DIST,0,retain)
}

// Code part
void _CP0POS_body__(_CP0POS *data__) {
  // Control execution
  if (!__GET_VAR(data__->EN)) {
    __SET_VAR(data__->,ENO,,__BOOL_LITERAL(FALSE));
    return;
  }
  else {
    __SET_VAR(data__->,ENO,,__BOOL_LITERAL(TRUE));
  }
  // Initialise TEMP variables

  __IL_DEFVAR_T __IL_DEFVAR;
  __IL_DEFVAR_T __IL_DEFVAR_BACK;
  #define GetFbVar(var,...) __GET_VAR(data__->var,__VA_ARGS__)
  #define SetFbVar(var,val,...) __SET_VAR(data__->,var,__VA_ARGS__,val)
extern void _CP0POS_body2__(_CP0POS *data__) ;  _CP0POS_body2__(data__);
  #undef GetFbVar
  #undef SetFbVar
;

  goto __end;

__end:
  return;
} // _CP0POS_body__() 





void _INTER_READ_init__(_INTER_READ *data__, BOOL retain) {
  __INIT_VAR(data__->EN,__BOOL_LITERAL(TRUE),retain)
  __INIT_VAR(data__->ENO,__BOOL_LITERAL(TRUE),retain)
  __INIT_VAR(data__->AXISID,0,retain)
  AXIS_INFO_init__(&data__->AI,retain);
  __INIT_VAR(data__->ADTYPE,0,retain)
  __INIT_VAR(data__->INTERP,0,retain)
  __INIT_VAR(data__->INTERV,0,retain)
  __INIT_VAR(data__->INTERA,0,retain)
  __INIT_VAR(data__->INTERVC_OUT,0,retain)
  __INIT_VAR(data__->INTERPC_OUT,0,retain)
  __INIT_VAR(data__->MPP,0,retain)
  __INIT_VAR(data__->FEEDRATE,0,retain)
  __INIT_VAR(data__->DMAX,0,retain)
  __INIT_VAR(data__->JMAX,0,retain)
  __INIT_VAR(data__->JUMPV0,0,retain)
  __INIT_VAR(data__->JUMPV1,0,retain)
}

// Code part
void _INTER_READ_body__(_INTER_READ *data__) {
  // Control execution
  if (!__GET_VAR(data__->EN)) {
    __SET_VAR(data__->,ENO,,__BOOL_LITERAL(FALSE));
    return;
  }
  else {
    __SET_VAR(data__->,ENO,,__BOOL_LITERAL(TRUE));
  }
  // Initialise TEMP variables

  __IL_DEFVAR_T __IL_DEFVAR;
  __IL_DEFVAR_T __IL_DEFVAR_BACK;
  #define GetFbVar(var,...) __GET_VAR(data__->var,__VA_ARGS__)
  #define SetFbVar(var,val,...) __SET_VAR(data__->,var,__VA_ARGS__,val)
extern void _INTER_READ_body2__(_INTER_READ *data__) ;  _INTER_READ_body2__(data__);
  #undef GetFbVar
  #undef SetFbVar
;

  goto __end;

__end:
  return;
} // _INTER_READ_body__() 





void _SVPLAN_init__(_SVPLAN *data__, BOOL retain) {
  __INIT_VAR(data__->EN,__BOOL_LITERAL(TRUE),retain)
  __INIT_VAR(data__->ENO,__BOOL_LITERAL(TRUE),retain)
  __INIT_VAR(data__->TARGET,0,retain)
  __INIT_VAR(data__->V,0,retain)
  __INIT_VAR(data__->A,0,retain)
  __INIT_VAR(data__->J,0,retain)
  __INIT_VAR(data__->TS,0,retain)
  __INIT_VAR(data__->POSI,0,retain)
  __INIT_VAR(data__->VC,0,retain)
  __INIT_VAR(data__->POSO,0,retain)
  __INIT_VAR(data__->SI,0,retain)
  __INIT_VAR(data__->VO,0,retain)
  __INIT_VAR(data__->VI,0,retain)
  __INIT_VAR(data__->AR,0,retain)
  __INIT_VAR(data__->AI,0,retain)
  __INIT_VAR(data__->JI,0,retain)
  __INIT_VAR(data__->PHASE,0,retain)
  __INIT_VAR(data__->LAST_TARGET,0,retain)
  __INIT_VAR(data__->DISTANCE,0,retain)
  __INIT_VAR(data__->X,0,retain)
  R_TRIG_init__(&data__->RT1,retain);
  __INIT_VAR(data__->FIRST_FLAG,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->FIRST_OUT,__BOOL_LITERAL(FALSE),retain)
}

// Code part
void _SVPLAN_body__(_SVPLAN *data__) {
  // Control execution
  if (!__GET_VAR(data__->EN)) {
    __SET_VAR(data__->,ENO,,__BOOL_LITERAL(FALSE));
    return;
  }
  else {
    __SET_VAR(data__->,ENO,,__BOOL_LITERAL(TRUE));
  }
  // Initialise TEMP variables

  __IL_DEFVAR_T __IL_DEFVAR;
  __IL_DEFVAR_T __IL_DEFVAR_BACK;
  #define GetFbVar(var,...) __GET_VAR(data__->var,__VA_ARGS__)
  #define SetFbVar(var,val,...) __SET_VAR(data__->,var,__VA_ARGS__,val)
extern void _SVPLAN_body2__(_SVPLAN *data__) ;  _SVPLAN_body2__(data__);
  #undef GetFbVar
  #undef SetFbVar
;

  goto __end;

__end:
  return;
} // _SVPLAN_body__() 





void _VPLAN_init__(_VPLAN *data__, BOOL retain) {
  __INIT_VAR(data__->EN,__BOOL_LITERAL(TRUE),retain)
  __INIT_VAR(data__->ENO,__BOOL_LITERAL(TRUE),retain)
  __INIT_VAR(data__->ADTYPE,0,retain)
  __INIT_VAR(data__->TARGET,0.0,retain)
  __INIT_VAR(data__->VM,0,retain)
  __INIT_VAR(data__->AM,0,retain)
  __INIT_VAR(data__->JM,0,retain)
  __INIT_VAR(data__->TS,0,retain)
  __INIT_VAR(data__->VC,0.0,retain)
  __INIT_VAR(data__->POSI,0.0,retain)
  __INIT_VAR(data__->RATE,0,retain)
  __INIT_VAR(data__->V0,0,retain)
  __INIT_VAR(data__->V1,0,retain)
  __INIT_VAR(data__->POSO,0,retain)
  __INIT_VAR(data__->VS,0,retain)
  __INIT_VAR(data__->D0,0,retain)
  __INIT_VAR(data__->DD,0,retain)
  __INIT_VAR(data__->NV,0,retain)
  __INIT_VAR(data__->NA,0,retain)
  __INIT_VAR(data__->TM,0,retain)
  __INIT_VAR(data__->NAT,0,retain)
  __INIT_VAR(data__->DLT,0,retain)
  _SVPLAN_init__(&data__->SVP,retain);
  __INIT_VAR(data__->VSOK,__BOOL_LITERAL(FALSE),retain)
}

// Code part
void _VPLAN_body__(_VPLAN *data__) {
  // Control execution
  if (!__GET_VAR(data__->EN)) {
    __SET_VAR(data__->,ENO,,__BOOL_LITERAL(FALSE));
    return;
  }
  else {
    __SET_VAR(data__->,ENO,,__BOOL_LITERAL(TRUE));
  }
  // Initialise TEMP variables

  __IL_DEFVAR_T __IL_DEFVAR;
  __IL_DEFVAR_T __IL_DEFVAR_BACK;
  #define GetFbVar(var,...) __GET_VAR(data__->var,__VA_ARGS__)
  #define SetFbVar(var,val,...) __SET_VAR(data__->,var,__VA_ARGS__,val)
extern void _VPLAN_body2__(_VPLAN *data__) ;  _VPLAN_body2__(data__);
  #undef GetFbVar
  #undef SetFbVar
;

  goto __end;

__end:
  return;
} // _VPLAN_body__() 





void _IPPOS_init__(_IPPOS *data__, BOOL retain) {
  __INIT_VAR(data__->EN,__BOOL_LITERAL(TRUE),retain)
  __INIT_VAR(data__->ENO,__BOOL_LITERAL(TRUE),retain)
  __INIT_VAR(data__->NODEID,0,retain)
  __INIT_VAR(data__->IS_PC,0.0,retain)
  __INIT_VAR(data__->IS_VC,0.0,retain)
  IP_WRITE_init__(&data__->INTER_W,retain);
  __INIT_VAR(data__->CYCLE_TIME,0.008,retain)
  __INIT_VAR(data__->IP_PC,0.0,retain)
  __INIT_VAR(data__->IP_VC,0.0,retain)
  SYS_CFG_init__(&data__->SC,retain);
  AXIS_INFO_init__(&data__->AI,retain);
  AXIS_INFO_init__(&data__->R_P,retain);
  AXIS_INFO_init__(&data__->BLOCK3,retain);
  _INTER_WRITE_init__(&data__->IRW,retain);
  __INIT_VAR(data__->PR_PC,0,retain)
  _PULSE_CALC_init__(&data__->PP,retain);
  IPT_SHAPING_init__(&data__->ISP,retain);
  _INTER_READ_init__(&data__->IR,retain);
  _VPLAN_init__(&data__->VP,retain);
}

// Code part
void _IPPOS_body__(_IPPOS *data__) {
  // Control execution
  if (!__GET_VAR(data__->EN)) {
    __SET_VAR(data__->,ENO,,__BOOL_LITERAL(FALSE));
    return;
  }
  else {
    __SET_VAR(data__->,ENO,,__BOOL_LITERAL(TRUE));
  }
  // Initialise TEMP variables

  __IL_DEFVAR_T __IL_DEFVAR;
  __IL_DEFVAR_T __IL_DEFVAR_BACK;
  #define GetFbVar(var,...) __GET_VAR(data__->var,__VA_ARGS__)
  #define SetFbVar(var,val,...) __SET_VAR(data__->,var,__VA_ARGS__,val)
extern void _IPPOS_body2__(_IPPOS *data__) ;  _IPPOS_body2__(data__);
  #undef GetFbVar
  #undef SetFbVar
;

  goto __end;

__end:
  return;
} // _IPPOS_body__() 





void MC_SETPOSITION_init__(MC_SETPOSITION *data__, BOOL retain) {
  __INIT_VAR(data__->EN,__BOOL_LITERAL(TRUE),retain)
  __INIT_VAR(data__->ENO,__BOOL_LITERAL(TRUE),retain)
  __INIT_VAR(data__->AXISID,0,retain)
  __INIT_VAR(data__->EXECUTE,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->POSITION,0.0,retain)
  __INIT_VAR(data__->AXIS,0,retain)
  __INIT_VAR(data__->DONE,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->ERROR,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->CS,0,retain)
  __INIT_VAR(data__->DONEBOOL,__BOOL_LITERAL(FALSE),retain)
  AXIS_INFO_init__(&data__->AI,retain);
  __INIT_VAR(data__->CURPC,0,retain)
  __INIT_VAR(data__->DONE3OKBOOL,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->CLICK3,3,retain)
  __INIT_VAR(data__->SESSIONOVER,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->CURPOS,0,retain)
  _CP0POS_init__(&data__->CP0,retain);
  __INIT_VAR(data__->P0OK,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->VU32,0,retain)
  __INIT_VAR(data__->MPP,0,retain)
  __INIT_VAR(data__->MMOD,0,retain)
  _RMOD_init__(&data__->RMD,retain);
  R_TRIG_init__(&data__->RRTG,retain);
  __INIT_VAR(data__->ER,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->SCS,0,retain)
  UINT i;
  data__->__nb_steps = 3;
  static const STEP temp_step = {{0, 0}, 0, {{0, 0}, 0}};
  for(i = 0; i < data__->__nb_steps; i++) {
    data__->__step_list[i] = temp_step;
  }
  __SET_VAR(data__->,__step_list[0].X,,1);
  data__->__nb_actions = 21;
  static const ACTION temp_action = {0, {0, 0}, 0, 0, {0, 0}, {0, 0}};
  for(i = 0; i < data__->__nb_actions; i++) {
    data__->__action_list[i] = temp_action;
  }
  data__->__nb_transitions = 3;
  data__->__lasttick_time = __CURRENT_TIME;
}

// Steps definitions
#define INIT __step_list[0]
#define __SFC_INIT 0
#define SETP0 __step_list[1]
#define __SFC_SETP0 1
#define SDONE __step_list[2]
#define __SFC_SDONE 2

// Actions definitions
#define __SFC_INITORRESET 0
#define __SFC_SETP0_INLINE4 1
#define __SFC_SETP0_INLINE5 2
#define __SFC_SETP0_INLINE6 3
#define __SFC_SETP0_INLINE7 4
#define __SFC_SETP0_INLINE8 5
#define __SFC_SETP0_INLINE9 6
#define __SFC_SETP0_INLINE10 7
#define __SFC_SETP0_INLINE11 8
#define __SFC_SETP0_INLINE12 9
#define __SFC_SETP0_INLINE13 10
#define __SFC_SETP0_INLINE14 11
#define __SFC_SETP0_INLINE15 12
#define __SFC_SETP0_INLINE16 13
#define __SFC_SETP0_INLINE17 14
#define __SFC_SETP0_INLINE18 15
#define __SFC_SETP0_INLINE19 16
#define __SFC_SETP0_INLINE20 17
#define __SFC_SDONE_INLINE1 18
#define __SFC_SDONE_INLINE2 19
#define __SFC_SDONE_INLINE3 20

// Code part
void MC_SETPOSITION_body__(MC_SETPOSITION *data__) {
  // Control execution
  if (!__GET_VAR(data__->EN)) {
    __SET_VAR(data__->,ENO,,__BOOL_LITERAL(FALSE));
    return;
  }
  else {
    __SET_VAR(data__->,ENO,,__BOOL_LITERAL(TRUE));
  }
  // Initialise TEMP variables

  INT i;
  TIME elapsed_time, current_time;

  // Calculate elapsed_time
  current_time = __CURRENT_TIME;
  elapsed_time = __time_sub(current_time, data__->__lasttick_time);
  data__->__lasttick_time = current_time;
  // Transitions initialization
  if (__DEBUG) {
    for (i = 0; i < data__->__nb_transitions; i++) {
      data__->__transition_list[i] = data__->__debug_transition_list[i];
    }
  }
  // Steps initialization
  for (i = 0; i < data__->__nb_steps; i++) {
    data__->__step_list[i].prev_state = __GET_VAR(data__->__step_list[i].X);
    if (__GET_VAR(data__->__step_list[i].X)) {
      data__->__step_list[i].T.value = __time_add(data__->__step_list[i].T.value, elapsed_time);
    }
  }
  // Actions initialization
  for (i = 0; i < data__->__nb_actions; i++) {
    __SET_VAR(data__->,__action_list[i].state,,0);
    data__->__action_list[i].set = 0;
    data__->__action_list[i].reset = 0;
    if (__time_cmp(data__->__action_list[i].set_remaining_time, __time_to_timespec(1, 0, 0, 0, 0, 0)) > 0) {
      data__->__action_list[i].set_remaining_time = __time_sub(data__->__action_list[i].set_remaining_time, elapsed_time);
      if (__time_cmp(data__->__action_list[i].set_remaining_time, __time_to_timespec(1, 0, 0, 0, 0, 0)) <= 0) {
        data__->__action_list[i].set_remaining_time = __time_to_timespec(1, 0, 0, 0, 0, 0);
        data__->__action_list[i].set = 1;
      }
    }
    if (__time_cmp(data__->__action_list[i].reset_remaining_time, __time_to_timespec(1, 0, 0, 0, 0, 0)) > 0) {
      data__->__action_list[i].reset_remaining_time = __time_sub(data__->__action_list[i].reset_remaining_time, elapsed_time);
      if (__time_cmp(data__->__action_list[i].reset_remaining_time, __time_to_timespec(1, 0, 0, 0, 0, 0)) <= 0) {
        data__->__action_list[i].reset_remaining_time = __time_to_timespec(1, 0, 0, 0, 0, 0);
        data__->__action_list[i].reset = 1;
      }
    }
  }

  // Transitions fire test
  if (__GET_VAR(data__->INIT.X)) {
    __SET_VAR(data__->,__transition_list[0],,__GET_VAR(data__->ER,));
    if (__DEBUG) {
      __SET_VAR(data__->,__debug_transition_list[0],,__GET_VAR(data__->__transition_list[0]));
    }
  }
  else {
    if (__DEBUG) {
      __SET_VAR(data__->,__debug_transition_list[0],,__GET_VAR(data__->ER,));
    }
    __SET_VAR(data__->,__transition_list[0],,0);
  }
  if (__GET_VAR(data__->SETP0.X)) {
    __SET_VAR(data__->,__transition_list[1],,__GET_VAR(data__->P0OK,));
    if (__DEBUG) {
      __SET_VAR(data__->,__debug_transition_list[1],,__GET_VAR(data__->__transition_list[1]));
    }
  }
  else {
    if (__DEBUG) {
      __SET_VAR(data__->,__debug_transition_list[1],,__GET_VAR(data__->P0OK,));
    }
    __SET_VAR(data__->,__transition_list[1],,0);
  }
  if (__GET_VAR(data__->SDONE.X)) {
    __SET_VAR(data__->,__transition_list[2],,__GET_VAR(data__->SESSIONOVER,));
    if (__DEBUG) {
      __SET_VAR(data__->,__debug_transition_list[2],,__GET_VAR(data__->__transition_list[2]));
    }
  }
  else {
    if (__DEBUG) {
      __SET_VAR(data__->,__debug_transition_list[2],,__GET_VAR(data__->SESSIONOVER,));
    }
    __SET_VAR(data__->,__transition_list[2],,0);
  }

  // Transitions reset steps
  if (__GET_VAR(data__->__transition_list[0])) {
    __SET_VAR(data__->,INIT.X,,0);
  }
  if (__GET_VAR(data__->__transition_list[1])) {
    __SET_VAR(data__->,SETP0.X,,0);
  }
  if (__GET_VAR(data__->__transition_list[2])) {
    __SET_VAR(data__->,SDONE.X,,0);
  }

  // Transitions set steps
  if (__GET_VAR(data__->__transition_list[0])) {
    __SET_VAR(data__->,SETP0.X,,1);
    data__->SETP0.T.value = __time_to_timespec(1, 0, 0, 0, 0, 0);
  }
  if (__GET_VAR(data__->__transition_list[1])) {
    __SET_VAR(data__->,SDONE.X,,1);
    data__->SDONE.T.value = __time_to_timespec(1, 0, 0, 0, 0, 0);
  }
  if (__GET_VAR(data__->__transition_list[2])) {
    __SET_VAR(data__->,INIT.X,,1);
    data__->INIT.T.value = __time_to_timespec(1, 0, 0, 0, 0, 0);
  }

  // Steps association
  // INIT action associations
  {
    char active = __GET_VAR(data__->INIT.X);
    char activated = active && !data__->INIT.prev_state;
    char desactivated = !active && data__->INIT.prev_state;

    if (active)       {__SET_VAR(data__->,__action_list[__SFC_INITORRESET].state,,1);};
    if (desactivated) {__SET_VAR(data__->,__action_list[__SFC_INITORRESET].state,,0);};

  }

  // SETP0 action associations
  {
    char active = __GET_VAR(data__->SETP0.X);
    char activated = active && !data__->SETP0.prev_state;
    char desactivated = !active && data__->SETP0.prev_state;

    if (activated)    {__SET_VAR(data__->,__action_list[__SFC_SETP0_INLINE4].state,,1);}
    else              {__SET_VAR(data__->,__action_list[__SFC_SETP0_INLINE4].state,,0);};

    if (activated)    {__SET_VAR(data__->,__action_list[__SFC_SETP0_INLINE5].state,,1);}
    else              {__SET_VAR(data__->,__action_list[__SFC_SETP0_INLINE5].state,,0);};

    if (activated)    {__SET_VAR(data__->,__action_list[__SFC_SETP0_INLINE6].state,,1);}
    else              {__SET_VAR(data__->,__action_list[__SFC_SETP0_INLINE6].state,,0);};

    if (activated)    {__SET_VAR(data__->,__action_list[__SFC_SETP0_INLINE7].state,,1);}
    else              {__SET_VAR(data__->,__action_list[__SFC_SETP0_INLINE7].state,,0);};

    if (activated)    {__SET_VAR(data__->,__action_list[__SFC_SETP0_INLINE8].state,,1);}
    else              {__SET_VAR(data__->,__action_list[__SFC_SETP0_INLINE8].state,,0);};

    if (activated)    {__SET_VAR(data__->,__action_list[__SFC_SETP0_INLINE9].state,,1);}
    else              {__SET_VAR(data__->,__action_list[__SFC_SETP0_INLINE9].state,,0);};

    if (activated)    {__SET_VAR(data__->,__action_list[__SFC_SETP0_INLINE10].state,,1);}
    else              {__SET_VAR(data__->,__action_list[__SFC_SETP0_INLINE10].state,,0);};

    if (activated)    {__SET_VAR(data__->,__action_list[__SFC_SETP0_INLINE11].state,,1);}
    else              {__SET_VAR(data__->,__action_list[__SFC_SETP0_INLINE11].state,,0);};

    if (activated)    {__SET_VAR(data__->,__action_list[__SFC_SETP0_INLINE12].state,,1);}
    else              {__SET_VAR(data__->,__action_list[__SFC_SETP0_INLINE12].state,,0);};

    if (activated)    {__SET_VAR(data__->,__action_list[__SFC_SETP0_INLINE13].state,,1);}
    else              {__SET_VAR(data__->,__action_list[__SFC_SETP0_INLINE13].state,,0);};

    if (activated)    {__SET_VAR(data__->,__action_list[__SFC_SETP0_INLINE14].state,,1);}
    else              {__SET_VAR(data__->,__action_list[__SFC_SETP0_INLINE14].state,,0);};

    if (activated)    {__SET_VAR(data__->,__action_list[__SFC_SETP0_INLINE15].state,,1);}
    else              {__SET_VAR(data__->,__action_list[__SFC_SETP0_INLINE15].state,,0);};

    if (activated)    {__SET_VAR(data__->,__action_list[__SFC_SETP0_INLINE16].state,,1);}
    else              {__SET_VAR(data__->,__action_list[__SFC_SETP0_INLINE16].state,,0);};

    if (activated)    {__SET_VAR(data__->,__action_list[__SFC_SETP0_INLINE17].state,,1);}
    else              {__SET_VAR(data__->,__action_list[__SFC_SETP0_INLINE17].state,,0);};

    if (activated)    {__SET_VAR(data__->,__action_list[__SFC_SETP0_INLINE18].state,,1);}
    else              {__SET_VAR(data__->,__action_list[__SFC_SETP0_INLINE18].state,,0);};

    if (activated)    {__SET_VAR(data__->,__action_list[__SFC_SETP0_INLINE19].state,,1);}
    else              {__SET_VAR(data__->,__action_list[__SFC_SETP0_INLINE19].state,,0);};

    if (activated)    {__SET_VAR(data__->,__action_list[__SFC_SETP0_INLINE20].state,,1);}
    else              {__SET_VAR(data__->,__action_list[__SFC_SETP0_INLINE20].state,,0);};

  }

  // SDONE action associations
  {
    char active = __GET_VAR(data__->SDONE.X);
    char activated = active && !data__->SDONE.prev_state;
    char desactivated = !active && data__->SDONE.prev_state;

    if (activated)    {__SET_VAR(data__->,__action_list[__SFC_SDONE_INLINE1].state,,1);}
    else              {__SET_VAR(data__->,__action_list[__SFC_SDONE_INLINE1].state,,0);};

    if (activated)    {__SET_VAR(data__->,__action_list[__SFC_SDONE_INLINE2].state,,1);}
    else              {__SET_VAR(data__->,__action_list[__SFC_SDONE_INLINE2].state,,0);};

    if (activated)    {__SET_VAR(data__->,__action_list[__SFC_SDONE_INLINE3].state,,1);}
    else              {__SET_VAR(data__->,__action_list[__SFC_SDONE_INLINE3].state,,0);};

  }


  // Actions state evaluation
  for (i = 0; i < data__->__nb_actions; i++) {
    if (data__->__action_list[i].set) {
      data__->__action_list[i].set_remaining_time = __time_to_timespec(1, 0, 0, 0, 0, 0);
      data__->__action_list[i].stored = 1;
    }
    if (data__->__action_list[i].reset) {
      data__->__action_list[i].reset_remaining_time = __time_to_timespec(1, 0, 0, 0, 0, 0);
      data__->__action_list[i].stored = 0;
    }
    __SET_VAR(data__->,__action_list[i].state,,__GET_VAR(data__->__action_list[i].state) | data__->__action_list[i].stored);
  }

  // Actions execution
  if(__GET_VAR(data__->__action_list[__SFC_INITORRESET].state)) {
    __SET_VAR(data__->,CS,,1);
    __SET_VAR(data__->,AXIS,,__GET_VAR(data__->AXISID,));
    if ((__GET_VAR(data__->DONE,) == 1)) {
      __SET_VAR(data__->,DONE,,__GET_VAR(data__->EXECUTE,));
    } else {
      __SET_VAR(data__->,DONEBOOL,,__BOOL_LITERAL(FALSE));
    };
    __SET_VAR(data__->,SCS,,__GET_VAR(data__->AI.OUTU32,));
    if ((__GET_VAR(data__->SCS,) != 9)) {
      __SET_VAR(data__->RRTG.,CLK,,__GET_VAR(data__->EXECUTE,));
      R_TRIG_body__(&data__->RRTG);
      __SET_VAR(data__->,ER,,__GET_VAR(data__->RRTG.Q));
    };
  }

  if(__GET_VAR(data__->__action_list[__SFC_SETP0_INLINE4].state)) {
    __SET_VAR(data__->,SESSIONOVER,,0);
  }

  if(__GET_VAR(data__->__action_list[__SFC_SETP0_INLINE5].state)) {
    __SET_VAR(data__->AI.,ROW,,__BOOL_LITERAL(FALSE));
    __SET_VAR(data__->AI.,NODEID,,__GET_VAR(data__->AXISID,));
    __SET_VAR(data__->AI.,PNAME,,__STRING_LITERAL(6,"CURPOS"));
    AXIS_INFO_body__(&data__->AI);
  }

  if(__GET_VAR(data__->__action_list[__SFC_SETP0_INLINE6].state)) {
    __SET_VAR(data__->,CURPOS,,__GET_VAR(data__->AI.OUTU32,));
  }

  if(__GET_VAR(data__->__action_list[__SFC_SETP0_INLINE7].state)) {
    __SET_VAR(data__->AI.,ROW,,__BOOL_LITERAL(FALSE));
    __SET_VAR(data__->AI.,NODEID,,__GET_VAR(data__->AXISID,));
    __SET_VAR(data__->AI.,PNAME,,__STRING_LITERAL(3,"MPP"));
    AXIS_INFO_body__(&data__->AI);
  }

  if(__GET_VAR(data__->__action_list[__SFC_SETP0_INLINE8].state)) {
    __SET_VAR(data__->,MPP,,__GET_VAR(data__->AI.OUTR,));
  }

  if(__GET_VAR(data__->__action_list[__SFC_SETP0_INLINE9].state)) {
    __SET_VAR(data__->AI.,ROW,,__BOOL_LITERAL(FALSE));
    __SET_VAR(data__->AI.,NODEID,,__GET_VAR(data__->AXISID,));
    __SET_VAR(data__->AI.,PNAME,,__STRING_LITERAL(4,"AMOD"));
    AXIS_INFO_body__(&data__->AI);
  }

  if(__GET_VAR(data__->__action_list[__SFC_SETP0_INLINE10].state)) {
    __SET_VAR(data__->,MMOD,,__GET_VAR(data__->AI.OUTR,));
  }

  if(__GET_VAR(data__->__action_list[__SFC_SETP0_INLINE11].state)) {
    __SET_VAR(data__->CP0.,AXISID,,__GET_VAR(data__->AXISID,));
    __SET_VAR(data__->CP0.,LOGPOS0,,__GET_VAR(data__->POSITION,));
    __SET_VAR(data__->CP0.,P0IN,,__GET_VAR(data__->CURPOS,));
    __SET_VAR(data__->CP0.,MPP,,__GET_VAR(data__->MPP,));
    _CP0POS_body__(&data__->CP0);
  }

  if(__GET_VAR(data__->__action_list[__SFC_SETP0_INLINE12].state)) {
    __SET_VAR(data__->,CURPOS,,__GET_VAR(data__->CP0.P0OUT,));
  }

  if(__GET_VAR(data__->__action_list[__SFC_SETP0_INLINE13].state)) {
    __SET_VAR(data__->AI.,ROW,,__BOOL_LITERAL(TRUE));
    __SET_VAR(data__->AI.,NODEID,,__GET_VAR(data__->AXISID,));
    __SET_VAR(data__->AI.,PNAME,,__STRING_LITERAL(5,"P0POS"));
    __SET_VAR(data__->AI.,INU32,,__GET_VAR(data__->CURPOS,));
    AXIS_INFO_body__(&data__->AI);
  }

  if(__GET_VAR(data__->__action_list[__SFC_SETP0_INLINE14].state)) {
    __SET_VAR(data__->AI.,ROW,,__BOOL_LITERAL(TRUE));
    __SET_VAR(data__->AI.,NODEID,,__GET_VAR(data__->AXISID,));
    __SET_VAR(data__->AI.,PNAME,,__STRING_LITERAL(7,"INTERPC"));
    __SET_VAR(data__->AI.,INR,,__GET_VAR(data__->POSITION,));
    AXIS_INFO_body__(&data__->AI);
  }

  if(__GET_VAR(data__->__action_list[__SFC_SETP0_INLINE15].state)) {
    __SET_VAR(data__->AI.,ROW,,__BOOL_LITERAL(TRUE));
    __SET_VAR(data__->AI.,NODEID,,__GET_VAR(data__->AXISID,));
    __SET_VAR(data__->AI.,PNAME,,__STRING_LITERAL(6,"INTERP"));
    __SET_VAR(data__->AI.,INR,,__GET_VAR(data__->POSITION,));
    AXIS_INFO_body__(&data__->AI);
  }

  if(__GET_VAR(data__->__action_list[__SFC_SETP0_INLINE16].state)) {
    __SET_VAR(data__->RMD.,PC,,__GET_VAR(data__->POSITION,));
    __SET_VAR(data__->RMD.,MMM,,__GET_VAR(data__->MMOD,));
    __SET_VAR(data__->RMD.,DIR,,__BOOL_LITERAL(FALSE));
    _RMOD_body__(&data__->RMD);
  }

  if(__GET_VAR(data__->__action_list[__SFC_SETP0_INLINE17].state)) {
    __SET_VAR(data__->,CURPC,,__GET_VAR(data__->RMD.OPC,));
  }

  if(__GET_VAR(data__->__action_list[__SFC_SETP0_INLINE18].state)) {
    __SET_VAR(data__->AI.,ROW,,__BOOL_LITERAL(TRUE));
    __SET_VAR(data__->AI.,NODEID,,__GET_VAR(data__->AXISID,));
    __SET_VAR(data__->AI.,PNAME,,__STRING_LITERAL(2,"PC"));
    __SET_VAR(data__->AI.,INR,,__GET_VAR(data__->POSITION,));
    AXIS_INFO_body__(&data__->AI);
  }

  if(__GET_VAR(data__->__action_list[__SFC_SETP0_INLINE19].state)) {
    __SET_VAR(data__->,P0OK,,__BOOL_LITERAL(TRUE));
  }

  if(__GET_VAR(data__->__action_list[__SFC_SETP0_INLINE20].state)) {
    __SET_VAR(data__->,CS,,2);
  }

  if(__GET_VAR(data__->__action_list[__SFC_SDONE_INLINE1].state)) {
    __SET_VAR(data__->,DONE,,__BOOL_LITERAL(TRUE));
  }

  if(__GET_VAR(data__->__action_list[__SFC_SDONE_INLINE2].state)) {
    __SET_VAR(data__->,CS,,3);
  }

  if(__GET_VAR(data__->__action_list[__SFC_SDONE_INLINE3].state)) {
    __SET_VAR(data__->,SESSIONOVER,,1);
  }



  goto __end;

__end:
  return;
} // MC_SETPOSITION_body__() 

// Steps undefinitions
#undef INIT
#undef __SFC_INIT
#undef SETP0
#undef __SFC_SETP0
#undef SDONE
#undef __SFC_SDONE

// Actions undefinitions
#undef __SFC_INITORRESET
#undef __SFC_SETP0_INLINE4
#undef __SFC_SETP0_INLINE5
#undef __SFC_SETP0_INLINE6
#undef __SFC_SETP0_INLINE7
#undef __SFC_SETP0_INLINE8
#undef __SFC_SETP0_INLINE9
#undef __SFC_SETP0_INLINE10
#undef __SFC_SETP0_INLINE11
#undef __SFC_SETP0_INLINE12
#undef __SFC_SETP0_INLINE13
#undef __SFC_SETP0_INLINE14
#undef __SFC_SETP0_INLINE15
#undef __SFC_SETP0_INLINE16
#undef __SFC_SETP0_INLINE17
#undef __SFC_SETP0_INLINE18
#undef __SFC_SETP0_INLINE19
#undef __SFC_SETP0_INLINE20
#undef __SFC_SDONE_INLINE1
#undef __SFC_SDONE_INLINE2
#undef __SFC_SDONE_INLINE3





void _READ_CAM_init__(_READ_CAM *data__, BOOL retain) {
  __INIT_VAR(data__->EN,__BOOL_LITERAL(TRUE),retain)
  __INIT_VAR(data__->ENO,__BOOL_LITERAL(TRUE),retain)
  __INIT_VAR(data__->TABLEID,0,retain)
  __INIT_VAR(data__->MPOS,0,retain)
  __INIT_VAR(data__->MP01,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->SPOS,0,retain)
  __INIT_VAR(data__->IDX,0,retain)
  __INIT_VAR(data__->XS,0,retain)
  GET_CAM_init__(&data__->ODR,retain);
  __INIT_VAR(data__->BGN,0,retain)
  __INIT_VAR(data__->END,0,retain)
  __INIT_VAR(data__->MOFST,0,retain)
  __INIT_VAR(data__->SBGN,0,retain)
  __INIT_VAR(data__->SEND,0,retain)
  SYS_CFG_init__(&data__->SYSCFG,retain);
  __INIT_VAR(data__->CTIME,0,retain)
}

// Code part
void _READ_CAM_body__(_READ_CAM *data__) {
  // Control execution
  if (!__GET_VAR(data__->EN)) {
    __SET_VAR(data__->,ENO,,__BOOL_LITERAL(FALSE));
    return;
  }
  else {
    __SET_VAR(data__->,ENO,,__BOOL_LITERAL(TRUE));
  }
  // Initialise TEMP variables

  __IL_DEFVAR_T __IL_DEFVAR;
  __IL_DEFVAR_T __IL_DEFVAR_BACK;
  #define GetFbVar(var,...) __GET_VAR(data__->var,__VA_ARGS__)
  #define SetFbVar(var,val,...) __SET_VAR(data__->,var,__VA_ARGS__,val)
extern void _READ_CAM_body2__(_READ_CAM *data__) ;  _READ_CAM_body2__(data__);
  #undef GetFbVar
  #undef SetFbVar
;

  goto __end;

__end:
  return;
} // _READ_CAM_body__() 





void MC_CAMIN_init__(MC_CAMIN *data__, BOOL retain) {
  __INIT_VAR(data__->EN,__BOOL_LITERAL(TRUE),retain)
  __INIT_VAR(data__->ENO,__BOOL_LITERAL(TRUE),retain)
  __INIT_VAR(data__->MASTERID,0,retain)
  __INIT_VAR(data__->SLAVEID,0,retain)
  __INIT_VAR(data__->EXECUTE,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->TABLEID,0,retain)
  __INIT_VAR(data__->MASTER,0,retain)
  __INIT_VAR(data__->SLAVE,0,retain)
  __INIT_VAR(data__->INSYNC,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->ABORTED,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->ERROR,__BOOL_LITERAL(FALSE),retain)
  _W_DEC_init__(&data__->WDEC,retain);
  _W_PVA_init__(&data__->WPVA,retain);
  __INIT_VAR(data__->ABORTBOOL,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->DONEBOOL,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->MOVEBOOL,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->CURLOCK,0,retain)
  __INIT_VAR(data__->RECLOCK,0,retain)
  _SESSIONID_init__(&data__->SID,retain);
  AXIS_INFO_init__(&data__->AI,retain);
  __INIT_VAR(data__->CURPC,0,retain)
  __INIT_VAR(data__->CMDPC,0,retain)
  __INIT_VAR(data__->AMODPC,0,retain)
  __INIT_VAR(data__->TOPC,0,retain)
  __INIT_VAR(data__->ISSAME,__BOOL_LITERAL(FALSE),retain)
  _DIFF2_init__(&data__->D2,retain);
  __INIT_VAR(data__->DONECNT,0,retain)
  __INIT_VAR(data__->DONE3OKBOOL,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->SESSIONOVER,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->ERRID,0,retain)
  __INIT_VAR(data__->CS,0,retain)
  __INIT_VAR(data__->BSS,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->MPOS,0,retain)
  __INIT_VAR(data__->SPOS,0,retain)
  _READ_CAM_init__(&data__->RDCAM,retain);
  __INIT_VAR(data__->ALLSPOS,0.0,retain)
  __INIT_VAR(data__->MMOD,0,retain)
  _IPBYSPOS_init__(&data__->IPW,retain);
  R_TRIG_init__(&data__->RRTG,retain);
  __INIT_VAR(data__->ER,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->SCS,0,retain)
  UINT i;
  data__->__nb_steps = 4;
  static const STEP temp_step = {{0, 0}, 0, {{0, 0}, 0}};
  for(i = 0; i < data__->__nb_steps; i++) {
    data__->__step_list[i] = temp_step;
  }
  __SET_VAR(data__->,__step_list[0].X,,1);
  data__->__nb_actions = 9;
  static const ACTION temp_action = {0, {0, 0}, 0, 0, {0, 0}, {0, 0}};
  for(i = 0; i < data__->__nb_actions; i++) {
    data__->__action_list[i] = temp_action;
  }
  data__->__nb_transitions = 4;
  data__->__lasttick_time = __CURRENT_TIME;
}

// Steps definitions
#define INIT __step_list[0]
#define __SFC_INIT 0
#define START __step_list[1]
#define __SFC_START 1
#define MOVING __step_list[2]
#define __SFC_MOVING 2
#define SABORTED __step_list[3]
#define __SFC_SABORTED 3

// Actions definitions
#define __SFC_INITORRESET 0
#define __SFC_SETLOCKVAL 1
#define __SFC_START_INLINE1 2
#define __SFC_START_INLINE2 3
#define __SFC_START_INLINE3 4
#define __SFC_ABORTERRORDONE 5
#define __SFC_SABORTED_INLINE4 6
#define __SFC_SABORTED_INLINE5 7
#define __SFC_SABORTED_INLINE6 8

// Code part
void MC_CAMIN_body__(MC_CAMIN *data__) {
  // Control execution
  if (!__GET_VAR(data__->EN)) {
    __SET_VAR(data__->,ENO,,__BOOL_LITERAL(FALSE));
    return;
  }
  else {
    __SET_VAR(data__->,ENO,,__BOOL_LITERAL(TRUE));
  }
  // Initialise TEMP variables

  INT i;
  TIME elapsed_time, current_time;

  // Calculate elapsed_time
  current_time = __CURRENT_TIME;
  elapsed_time = __time_sub(current_time, data__->__lasttick_time);
  data__->__lasttick_time = current_time;
  // Transitions initialization
  if (__DEBUG) {
    for (i = 0; i < data__->__nb_transitions; i++) {
      data__->__transition_list[i] = data__->__debug_transition_list[i];
    }
  }
  // Steps initialization
  for (i = 0; i < data__->__nb_steps; i++) {
    data__->__step_list[i].prev_state = __GET_VAR(data__->__step_list[i].X);
    if (__GET_VAR(data__->__step_list[i].X)) {
      data__->__step_list[i].T.value = __time_add(data__->__step_list[i].T.value, elapsed_time);
    }
  }
  // Actions initialization
  for (i = 0; i < data__->__nb_actions; i++) {
    __SET_VAR(data__->,__action_list[i].state,,0);
    data__->__action_list[i].set = 0;
    data__->__action_list[i].reset = 0;
    if (__time_cmp(data__->__action_list[i].set_remaining_time, __time_to_timespec(1, 0, 0, 0, 0, 0)) > 0) {
      data__->__action_list[i].set_remaining_time = __time_sub(data__->__action_list[i].set_remaining_time, elapsed_time);
      if (__time_cmp(data__->__action_list[i].set_remaining_time, __time_to_timespec(1, 0, 0, 0, 0, 0)) <= 0) {
        data__->__action_list[i].set_remaining_time = __time_to_timespec(1, 0, 0, 0, 0, 0);
        data__->__action_list[i].set = 1;
      }
    }
    if (__time_cmp(data__->__action_list[i].reset_remaining_time, __time_to_timespec(1, 0, 0, 0, 0, 0)) > 0) {
      data__->__action_list[i].reset_remaining_time = __time_sub(data__->__action_list[i].reset_remaining_time, elapsed_time);
      if (__time_cmp(data__->__action_list[i].reset_remaining_time, __time_to_timespec(1, 0, 0, 0, 0, 0)) <= 0) {
        data__->__action_list[i].reset_remaining_time = __time_to_timespec(1, 0, 0, 0, 0, 0);
        data__->__action_list[i].reset = 1;
      }
    }
  }

  // Transitions fire test
  if (__GET_VAR(data__->INIT.X)) {
    __SET_VAR(data__->,__transition_list[0],,__GET_VAR(data__->ER,));
    if (__DEBUG) {
      __SET_VAR(data__->,__debug_transition_list[0],,__GET_VAR(data__->__transition_list[0]));
    }
  }
  else {
    if (__DEBUG) {
      __SET_VAR(data__->,__debug_transition_list[0],,__GET_VAR(data__->ER,));
    }
    __SET_VAR(data__->,__transition_list[0],,0);
  }
  if (__GET_VAR(data__->START.X)) {
    __SET_VAR(data__->,__transition_list[1],,__GET_VAR(data__->MOVEBOOL,));
    if (__DEBUG) {
      __SET_VAR(data__->,__debug_transition_list[1],,__GET_VAR(data__->__transition_list[1]));
    }
  }
  else {
    if (__DEBUG) {
      __SET_VAR(data__->,__debug_transition_list[1],,__GET_VAR(data__->MOVEBOOL,));
    }
    __SET_VAR(data__->,__transition_list[1],,0);
  }
  if (__GET_VAR(data__->MOVING.X)) {
    __SET_VAR(data__->,__transition_list[2],,__GET_VAR(data__->ABORTBOOL,));
    if (__DEBUG) {
      __SET_VAR(data__->,__debug_transition_list[2],,__GET_VAR(data__->__transition_list[2]));
    }
  }
  else {
    if (__DEBUG) {
      __SET_VAR(data__->,__debug_transition_list[2],,__GET_VAR(data__->ABORTBOOL,));
    }
    __SET_VAR(data__->,__transition_list[2],,0);
  }
  if (__GET_VAR(data__->SABORTED.X)) {
    __SET_VAR(data__->,__transition_list[3],,__GET_VAR(data__->SESSIONOVER,));
    if (__DEBUG) {
      __SET_VAR(data__->,__debug_transition_list[3],,__GET_VAR(data__->__transition_list[3]));
    }
  }
  else {
    if (__DEBUG) {
      __SET_VAR(data__->,__debug_transition_list[3],,__GET_VAR(data__->SESSIONOVER,));
    }
    __SET_VAR(data__->,__transition_list[3],,0);
  }

  // Transitions reset steps
  if (__GET_VAR(data__->__transition_list[0])) {
    __SET_VAR(data__->,INIT.X,,0);
  }
  if (__GET_VAR(data__->__transition_list[1])) {
    __SET_VAR(data__->,START.X,,0);
  }
  if (__GET_VAR(data__->__transition_list[2])) {
    __SET_VAR(data__->,MOVING.X,,0);
  }
  if (__GET_VAR(data__->__transition_list[3])) {
    __SET_VAR(data__->,SABORTED.X,,0);
  }

  // Transitions set steps
  if (__GET_VAR(data__->__transition_list[0])) {
    __SET_VAR(data__->,START.X,,1);
    data__->START.T.value = __time_to_timespec(1, 0, 0, 0, 0, 0);
  }
  if (__GET_VAR(data__->__transition_list[1])) {
    __SET_VAR(data__->,MOVING.X,,1);
    data__->MOVING.T.value = __time_to_timespec(1, 0, 0, 0, 0, 0);
  }
  if (__GET_VAR(data__->__transition_list[2])) {
    __SET_VAR(data__->,SABORTED.X,,1);
    data__->SABORTED.T.value = __time_to_timespec(1, 0, 0, 0, 0, 0);
  }
  if (__GET_VAR(data__->__transition_list[3])) {
    __SET_VAR(data__->,INIT.X,,1);
    data__->INIT.T.value = __time_to_timespec(1, 0, 0, 0, 0, 0);
  }

  // Steps association
  // INIT action associations
  {
    char active = __GET_VAR(data__->INIT.X);
    char activated = active && !data__->INIT.prev_state;
    char desactivated = !active && data__->INIT.prev_state;

    if (active)       {__SET_VAR(data__->,__action_list[__SFC_INITORRESET].state,,1);};
    if (desactivated) {__SET_VAR(data__->,__action_list[__SFC_INITORRESET].state,,0);};

  }

  // START action associations
  {
    char active = __GET_VAR(data__->START.X);
    char activated = active && !data__->START.prev_state;
    char desactivated = !active && data__->START.prev_state;

    if (activated)    {__SET_VAR(data__->,__action_list[__SFC_SETLOCKVAL].state,,1);}
    else              {__SET_VAR(data__->,__action_list[__SFC_SETLOCKVAL].state,,0);};

    if (activated)    {__SET_VAR(data__->,__action_list[__SFC_START_INLINE1].state,,1);}
    else              {__SET_VAR(data__->,__action_list[__SFC_START_INLINE1].state,,0);};

    if (activated)    {__SET_VAR(data__->,__action_list[__SFC_START_INLINE2].state,,1);}
    else              {__SET_VAR(data__->,__action_list[__SFC_START_INLINE2].state,,0);};

    if (activated)    {__SET_VAR(data__->,__action_list[__SFC_START_INLINE3].state,,1);}
    else              {__SET_VAR(data__->,__action_list[__SFC_START_INLINE3].state,,0);};

  }

  // MOVING action associations
  {
    char active = __GET_VAR(data__->MOVING.X);
    char activated = active && !data__->MOVING.prev_state;
    char desactivated = !active && data__->MOVING.prev_state;

    if (active)       {__SET_VAR(data__->,__action_list[__SFC_ABORTERRORDONE].state,,1);};
    if (desactivated) {__SET_VAR(data__->,__action_list[__SFC_ABORTERRORDONE].state,,0);};

  }

  // SABORTED action associations
  {
    char active = __GET_VAR(data__->SABORTED.X);
    char activated = active && !data__->SABORTED.prev_state;
    char desactivated = !active && data__->SABORTED.prev_state;

    if (activated)    {__SET_VAR(data__->,__action_list[__SFC_SABORTED_INLINE4].state,,1);}
    else              {__SET_VAR(data__->,__action_list[__SFC_SABORTED_INLINE4].state,,0);};

    if (activated)    {__SET_VAR(data__->,__action_list[__SFC_SABORTED_INLINE5].state,,1);}
    else              {__SET_VAR(data__->,__action_list[__SFC_SABORTED_INLINE5].state,,0);};

    if (activated)    {__SET_VAR(data__->,__action_list[__SFC_SABORTED_INLINE6].state,,1);}
    else              {__SET_VAR(data__->,__action_list[__SFC_SABORTED_INLINE6].state,,0);};

  }


  // Actions state evaluation
  for (i = 0; i < data__->__nb_actions; i++) {
    if (data__->__action_list[i].set) {
      data__->__action_list[i].set_remaining_time = __time_to_timespec(1, 0, 0, 0, 0, 0);
      data__->__action_list[i].stored = 1;
    }
    if (data__->__action_list[i].reset) {
      data__->__action_list[i].reset_remaining_time = __time_to_timespec(1, 0, 0, 0, 0, 0);
      data__->__action_list[i].stored = 0;
    }
    __SET_VAR(data__->,__action_list[i].state,,__GET_VAR(data__->__action_list[i].state) | data__->__action_list[i].stored);
  }

  // Actions execution
  if(__GET_VAR(data__->__action_list[__SFC_INITORRESET].state)) {
    __SET_VAR(data__->,MASTER,,__GET_VAR(data__->MASTERID,));
    __SET_VAR(data__->,SLAVE,,__GET_VAR(data__->SLAVEID,));
    if ((__GET_VAR(data__->INSYNC,) == 1)) {
      __SET_VAR(data__->,INSYNC,,__GET_VAR(data__->EXECUTE,));
    } else {
      __SET_VAR(data__->,DONEBOOL,,__BOOL_LITERAL(FALSE));
      __SET_VAR(data__->,ABORTBOOL,,0);
      __SET_VAR(data__->,SESSIONOVER,,__BOOL_LITERAL(FALSE));
    };
    __SET_VAR(data__->AI.,ROW,,__BOOL_LITERAL(FALSE));
    __SET_VAR(data__->AI.,NODEID,,__GET_VAR(data__->SLAVEID,));
    __SET_VAR(data__->AI.,PNAME,,__STRING_LITERAL(5,"STATE"));
    AXIS_INFO_body__(&data__->AI);
    __SET_VAR(data__->,SCS,,__GET_VAR(data__->AI.OUTU32,));
    if (((((__GET_VAR(data__->SCS,) == 1) || (__GET_VAR(data__->SCS,) == 2)) || (__GET_VAR(data__->SCS,) == 3)) || (__GET_VAR(data__->SCS,) == 5))) {
      __SET_VAR(data__->RRTG.,CLK,,__GET_VAR(data__->EXECUTE,));
      R_TRIG_body__(&data__->RRTG);
      __SET_VAR(data__->,ER,,__GET_VAR(data__->RRTG.Q));
    };
  }

  if(__GET_VAR(data__->__action_list[__SFC_SETLOCKVAL].state)) {
    __SET_VAR(data__->SID.,ROW,,__BOOL_LITERAL(TRUE));
    __SET_VAR(data__->SID.,AXISID,,__GET_VAR(data__->SLAVEID,));
    _SESSIONID_body__(&data__->SID);
    __SET_VAR(data__->,CURLOCK,,__GET_VAR(data__->SID.FBD_ABORT_FLAG));
  }

  if(__GET_VAR(data__->__action_list[__SFC_START_INLINE1].state)) {
    __SET_VAR(data__->WDEC.,AXISID,,__GET_VAR(data__->SLAVEID,));
    __SET_VAR(data__->WDEC.,DONEFLAG,,__BOOL_LITERAL(FALSE));
    __SET_VAR(data__->WDEC.,EXECUTEFLAG,,__BOOL_LITERAL(TRUE));
    __SET_VAR(data__->WDEC.,COMMANDTYPE,,20);
    _W_DEC_body__(&data__->WDEC);
  }

  if(__GET_VAR(data__->__action_list[__SFC_START_INLINE2].state)) {
    __SET_VAR(data__->,MOVEBOOL,,__BOOL_LITERAL(TRUE));
  }

  if(__GET_VAR(data__->__action_list[__SFC_START_INLINE3].state)) {
    __SET_VAR(data__->,INSYNC,,__BOOL_LITERAL(FALSE));
  }

  if(__GET_VAR(data__->__action_list[__SFC_ABORTERRORDONE].state)) {
    __SET_VAR(data__->SID.,ROW,,__BOOL_LITERAL(FALSE));
    __SET_VAR(data__->SID.,AXISID,,__GET_VAR(data__->SLAVEID,));
    _SESSIONID_body__(&data__->SID);
    __SET_VAR(data__->,RECLOCK,,__GET_VAR(data__->SID.FBD_ABORT_FLAG,));
    if ((__GET_VAR(data__->RECLOCK,) != __GET_VAR(data__->CURLOCK,))) {
      __SET_VAR(data__->,ABORTBOOL,,__BOOL_LITERAL(TRUE));
      __SET_VAR(data__->,DONEBOOL,,__BOOL_LITERAL(FALSE));
    };
    __SET_VAR(data__->AI.,ROW,,__BOOL_LITERAL(FALSE));
    __SET_VAR(data__->AI.,NODEID,,__GET_VAR(data__->MASTERID,));
    __SET_VAR(data__->AI.,PNAME,,__STRING_LITERAL(2,"PC"));
    AXIS_INFO_body__(&data__->AI);
    __SET_VAR(data__->,MPOS,,__GET_VAR(data__->AI.OUTR,));
    __SET_VAR(data__->AI.,ROW,,__BOOL_LITERAL(FALSE));
    __SET_VAR(data__->AI.,NODEID,,__GET_VAR(data__->MASTERID,));
    __SET_VAR(data__->AI.,PNAME,,__STRING_LITERAL(4,"AMOD"));
    AXIS_INFO_body__(&data__->AI);
    __SET_VAR(data__->,MMOD,,__GET_VAR(data__->AI.OUTR,));
    if ((__GET_VAR(data__->MMOD,) == 0.0)) {
      __SET_VAR(data__->RDCAM.,TABLEID,,__GET_VAR(data__->TABLEID,));
      __SET_VAR(data__->RDCAM.,MPOS,,__GET_VAR(data__->MPOS,));
      __SET_VAR(data__->RDCAM.,MP01,,0);
      _READ_CAM_body__(&data__->RDCAM);
    } else {
      __SET_VAR(data__->RDCAM.,TABLEID,,__GET_VAR(data__->TABLEID,));
      __SET_VAR(data__->RDCAM.,MPOS,,(__GET_VAR(data__->MPOS,) / __GET_VAR(data__->MMOD,)));
      __SET_VAR(data__->RDCAM.,MP01,,1);
      _READ_CAM_body__(&data__->RDCAM);
    };
    __SET_VAR(data__->,SPOS,,__GET_VAR(data__->RDCAM.SPOS,));
    __SET_VAR(data__->IPW.,SLAVEID,,__GET_VAR(data__->SLAVEID,));
    __SET_VAR(data__->IPW.,SPOS,,__GET_VAR(data__->SPOS,));
    _IPBYSPOS_body__(&data__->IPW);
    __SET_VAR(data__->,INSYNC,,__GET_VAR(data__->IPW.INVEL,));
    __SET_VAR(data__->,ALLSPOS,,(__GET_VAR(data__->ALLSPOS,) + __GET_VAR(data__->SPOS,)));
  }

  if(__GET_VAR(data__->__action_list[__SFC_SABORTED_INLINE4].state)) {
    __SET_VAR(data__->,ABORTED,,__BOOL_LITERAL(TRUE));
  }

  if(__GET_VAR(data__->__action_list[__SFC_SABORTED_INLINE5].state)) {
    __SET_VAR(data__->,INSYNC,,__BOOL_LITERAL(FALSE));
  }

  if(__GET_VAR(data__->__action_list[__SFC_SABORTED_INLINE6].state)) {
    __SET_VAR(data__->,SESSIONOVER,,1);
  }



  goto __end;

__end:
  return;
} // MC_CAMIN_body__() 

// Steps undefinitions
#undef INIT
#undef __SFC_INIT
#undef START
#undef __SFC_START
#undef MOVING
#undef __SFC_MOVING
#undef SABORTED
#undef __SFC_SABORTED

// Actions undefinitions
#undef __SFC_INITORRESET
#undef __SFC_SETLOCKVAL
#undef __SFC_START_INLINE1
#undef __SFC_START_INLINE2
#undef __SFC_START_INLINE3
#undef __SFC_ABORTERRORDONE
#undef __SFC_SABORTED_INLINE4
#undef __SFC_SABORTED_INLINE5
#undef __SFC_SABORTED_INLINE6





void _SSFC_init__(_SSFC *data__, BOOL retain) {
  __INIT_VAR(data__->EN,__BOOL_LITERAL(TRUE),retain)
  __INIT_VAR(data__->ENO,__BOOL_LITERAL(TRUE),retain)
  __INIT_VAR(data__->AXISID,0,retain)
  __INIT_VAR(data__->CS,0,retain)
  __INIT_VAR(data__->DONEFLAG,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->EXECUTEFLAG,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->COMMANDTYPE,0,retain)
  _IPPOS_init__(&data__->IPP,retain);
  IP_WRITE_init__(&data__->IPW,retain);
  IP_READ_init__(&data__->IPR,retain);
  __INIT_VAR(data__->GTHM,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->GTST,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->GTES,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->GTD,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->GTCM,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->GTDM,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->GTSM,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->GTSS,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->CONTINUOUS_TO_DISCRETE,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->CONTINUOUS_TO_STOP,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->STOP_TO_STANDSTILL,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->HOMING_TO_STANDSTILL,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->HOMING_TO_STOP,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->ERID,0,retain)
  _SESSIONID_init__(&data__->STLK,retain);
  __INIT_VAR(data__->MPP,0,retain)
  __INIT_VAR(data__->CURPC,0,retain)
  AXIS_INFO_init__(&data__->AI,retain);
  __INIT_VAR(data__->UDP1,0,retain)
  __INIT_VAR(data__->UDP2,0,retain)
  _DIFF2_init__(&data__->D2,retain);
  UINT i;
  data__->__nb_steps = 8;
  static const STEP temp_step = {{0, 0}, 0, {{0, 0}, 0}};
  for(i = 0; i < data__->__nb_steps; i++) {
    data__->__step_list[i] = temp_step;
  }
  __SET_VAR(data__->,__step_list[0].X,,1);
  data__->__nb_actions = 45;
  static const ACTION temp_action = {0, {0, 0}, 0, 0, {0, 0}, {0, 0}};
  for(i = 0; i < data__->__nb_actions; i++) {
    data__->__action_list[i] = temp_action;
  }
  data__->__nb_transitions = 28;
  data__->__lasttick_time = __CURRENT_TIME;
}

// Steps definitions
#define DISABLED __step_list[0]
#define __SFC_DISABLED 0
#define STANDSTILL __step_list[1]
#define __SFC_STANDSTILL 1
#define ERRORSTOP __step_list[2]
#define __SFC_ERRORSTOP 2
#define CONTINUOUSMOTION __step_list[3]
#define __SFC_CONTINUOUSMOTION 3
#define STOPPING __step_list[4]
#define __SFC_STOPPING 4
#define DISCRETEMOTION __step_list[5]
#define __SFC_DISCRETEMOTION 5
#define HOMING __step_list[6]
#define __SFC_HOMING 6
#define SYNCHRONIZEDMOTION __step_list[7]
#define __SFC_SYNCHRONIZEDMOTION 7

// Actions definitions
#define __SFC_DISABLED_INLINE22 0
#define __SFC_DISABLED_INLINE23 1
#define __SFC_STANDSTILL_INLINE1 2
#define __SFC_STANDSTILL_INLINE2 3
#define __SFC_STANDSTILL_INLINE3 4
#define __SFC_STANDSTILL_INLINE4 5
#define __SFC_STANDSTILL_INLINE5 6
#define __SFC_STANDSTILL_INLINE6 7
#define __SFC_STANDSTILL_INLINE7 8
#define __SFC_GTES_IF_ERROR 9
#define __SFC_ERRORSTOP_INLINE13 10
#define __SFC_ERRORSTOP_INLINE14 11
#define __SFC_ERRORSTOP_INLINE15 12
#define __SFC_ERRORSTOP_INLINE16 13
#define __SFC_ERRORSTOP_INLINE17 14
#define __SFC_ERRORSTOP_INLINE18 15
#define __SFC_ERRORSTOP_INLINE19 16
#define __SFC_ERRORSTOP_INLINE20 17
#define __SFC_ERRORSTOP_INLINE21 18
#define __SFC_CONTINUOUSMOTION_INLINE8 19
#define __SFC_CONTINUOUSMOTION_INLINE9 20
#define __SFC_CONTINUOUSMOTION_INLINE10 21
#define __SFC_CONTINUOUSMOTION_INLINE11 22
#define __SFC_CONTINUOUSMOTION_INLINE12 23
#define __SFC_STOPPING_INLINE29 24
#define __SFC_STOPPING_INLINE30 25
#define __SFC_STOPPING_INLINE31 26
#define __SFC_STOPPING_INLINE32 27
#define __SFC_STOPPING_INLINE33 28
#define __SFC_DISCRETEMOTION_INLINE24 29
#define __SFC_DISCRETEMOTION_INLINE25 30
#define __SFC_DISCRETEMOTION_INLINE26 31
#define __SFC_DISCRETEMOTION_INLINE27 32
#define __SFC_GTSS_IF_DONE 33
#define __SFC_DISCRETEMOTION_INLINE28 34
#define __SFC_LOGDEC 35
#define __SFC_HOMING_INLINE34 36
#define __SFC_HOMING_INLINE35 37
#define __SFC_HOMING_INLINE36 38
#define __SFC_HOMING_INLINE37 39
#define __SFC_SYNCHRONIZEDMOTION_INLINE38 40
#define __SFC_SYNCHRONIZEDMOTION_INLINE39 41
#define __SFC_SYNCHRONIZEDMOTION_INLINE40 42
#define __SFC_SYNCHRONIZEDMOTION_INLINE41 43
#define __SFC_SYNCHRONIZEDMOTION_INLINE42 44

// Code part
void _SSFC_body__(_SSFC *data__) {
  // Control execution
  if (!__GET_VAR(data__->EN)) {
    __SET_VAR(data__->,ENO,,__BOOL_LITERAL(FALSE));
    return;
  }
  else {
    __SET_VAR(data__->,ENO,,__BOOL_LITERAL(TRUE));
  }
  // Initialise TEMP variables

  INT i;
  TIME elapsed_time, current_time;

  // Calculate elapsed_time
  current_time = __CURRENT_TIME;
  elapsed_time = __time_sub(current_time, data__->__lasttick_time);
  data__->__lasttick_time = current_time;
  // Transitions initialization
  if (__DEBUG) {
    for (i = 0; i < data__->__nb_transitions; i++) {
      data__->__transition_list[i] = data__->__debug_transition_list[i];
    }
  }
  // Steps initialization
  for (i = 0; i < data__->__nb_steps; i++) {
    data__->__step_list[i].prev_state = __GET_VAR(data__->__step_list[i].X);
    if (__GET_VAR(data__->__step_list[i].X)) {
      data__->__step_list[i].T.value = __time_add(data__->__step_list[i].T.value, elapsed_time);
    }
  }
  // Actions initialization
  for (i = 0; i < data__->__nb_actions; i++) {
    __SET_VAR(data__->,__action_list[i].state,,0);
    data__->__action_list[i].set = 0;
    data__->__action_list[i].reset = 0;
    if (__time_cmp(data__->__action_list[i].set_remaining_time, __time_to_timespec(1, 0, 0, 0, 0, 0)) > 0) {
      data__->__action_list[i].set_remaining_time = __time_sub(data__->__action_list[i].set_remaining_time, elapsed_time);
      if (__time_cmp(data__->__action_list[i].set_remaining_time, __time_to_timespec(1, 0, 0, 0, 0, 0)) <= 0) {
        data__->__action_list[i].set_remaining_time = __time_to_timespec(1, 0, 0, 0, 0, 0);
        data__->__action_list[i].set = 1;
      }
    }
    if (__time_cmp(data__->__action_list[i].reset_remaining_time, __time_to_timespec(1, 0, 0, 0, 0, 0)) > 0) {
      data__->__action_list[i].reset_remaining_time = __time_sub(data__->__action_list[i].reset_remaining_time, elapsed_time);
      if (__time_cmp(data__->__action_list[i].reset_remaining_time, __time_to_timespec(1, 0, 0, 0, 0, 0)) <= 0) {
        data__->__action_list[i].reset_remaining_time = __time_to_timespec(1, 0, 0, 0, 0, 0);
        data__->__action_list[i].reset = 1;
      }
    }
  }

  // Transitions fire test
  if (__GET_VAR(data__->DISABLED.X)) {
    __SET_VAR(data__->,__transition_list[0],,__GET_VAR(data__->GTSS,));
    if (__DEBUG) {
      __SET_VAR(data__->,__debug_transition_list[0],,__GET_VAR(data__->__transition_list[0]));
    }
  }
  else {
    if (__DEBUG) {
      __SET_VAR(data__->,__debug_transition_list[0],,__GET_VAR(data__->GTSS,));
    }
    __SET_VAR(data__->,__transition_list[0],,0);
  }
  if (__GET_VAR(data__->STANDSTILL.X)) {
    __SET_VAR(data__->,__transition_list[1],,__GET_VAR(data__->GTES,));
    if (__DEBUG) {
      __SET_VAR(data__->,__debug_transition_list[1],,__GET_VAR(data__->__transition_list[1]));
    }
  }
  else {
    if (__DEBUG) {
      __SET_VAR(data__->,__debug_transition_list[1],,__GET_VAR(data__->GTES,));
    }
    __SET_VAR(data__->,__transition_list[1],,0);
  }
  if (__GET_VAR(data__->ERRORSTOP.X)) {
    __SET_VAR(data__->,__transition_list[2],,__GET_VAR(data__->GTD,));
    if (__DEBUG) {
      __SET_VAR(data__->,__debug_transition_list[2],,__GET_VAR(data__->__transition_list[2]));
    }
  }
  else {
    if (__DEBUG) {
      __SET_VAR(data__->,__debug_transition_list[2],,__GET_VAR(data__->GTD,));
    }
    __SET_VAR(data__->,__transition_list[2],,0);
  }
  if (__GET_VAR(data__->ERRORSTOP.X)) {
    __SET_VAR(data__->,__transition_list[3],,__GET_VAR(data__->GTSS,));
    if (__DEBUG) {
      __SET_VAR(data__->,__debug_transition_list[3],,__GET_VAR(data__->__transition_list[3]));
    }
  }
  else {
    if (__DEBUG) {
      __SET_VAR(data__->,__debug_transition_list[3],,__GET_VAR(data__->GTSS,));
    }
    __SET_VAR(data__->,__transition_list[3],,0);
  }
  if (__GET_VAR(data__->STANDSTILL.X)) {
    __SET_VAR(data__->,__transition_list[4],,__GET_VAR(data__->GTD,));
    if (__DEBUG) {
      __SET_VAR(data__->,__debug_transition_list[4],,__GET_VAR(data__->__transition_list[4]));
    }
  }
  else {
    if (__DEBUG) {
      __SET_VAR(data__->,__debug_transition_list[4],,__GET_VAR(data__->GTD,));
    }
    __SET_VAR(data__->,__transition_list[4],,0);
  }
  if (__GET_VAR(data__->STANDSTILL.X)) {
    __SET_VAR(data__->,__transition_list[5],,__GET_VAR(data__->GTCM,));
    if (__DEBUG) {
      __SET_VAR(data__->,__debug_transition_list[5],,__GET_VAR(data__->__transition_list[5]));
    }
  }
  else {
    if (__DEBUG) {
      __SET_VAR(data__->,__debug_transition_list[5],,__GET_VAR(data__->GTCM,));
    }
    __SET_VAR(data__->,__transition_list[5],,0);
  }
  if (__GET_VAR(data__->CONTINUOUSMOTION.X)) {
    __SET_VAR(data__->,__transition_list[6],,__GET_VAR(data__->GTES,));
    if (__DEBUG) {
      __SET_VAR(data__->,__debug_transition_list[6],,__GET_VAR(data__->__transition_list[6]));
    }
  }
  else {
    if (__DEBUG) {
      __SET_VAR(data__->,__debug_transition_list[6],,__GET_VAR(data__->GTES,));
    }
    __SET_VAR(data__->,__transition_list[6],,0);
  }
  if (__GET_VAR(data__->CONTINUOUSMOTION.X)) {
    __SET_VAR(data__->,__transition_list[7],,__GET_VAR(data__->GTST,));
    if (__DEBUG) {
      __SET_VAR(data__->,__debug_transition_list[7],,__GET_VAR(data__->__transition_list[7]));
    }
  }
  else {
    if (__DEBUG) {
      __SET_VAR(data__->,__debug_transition_list[7],,__GET_VAR(data__->GTST,));
    }
    __SET_VAR(data__->,__transition_list[7],,0);
  }
  if (__GET_VAR(data__->STOPPING.X)) {
    __SET_VAR(data__->,__transition_list[8],,__GET_VAR(data__->GTSS,));
    if (__DEBUG) {
      __SET_VAR(data__->,__debug_transition_list[8],,__GET_VAR(data__->__transition_list[8]));
    }
  }
  else {
    if (__DEBUG) {
      __SET_VAR(data__->,__debug_transition_list[8],,__GET_VAR(data__->GTSS,));
    }
    __SET_VAR(data__->,__transition_list[8],,0);
  }
  if (__GET_VAR(data__->STOPPING.X)) {
    __SET_VAR(data__->,__transition_list[9],,__GET_VAR(data__->GTD,));
    if (__DEBUG) {
      __SET_VAR(data__->,__debug_transition_list[9],,__GET_VAR(data__->__transition_list[9]));
    }
  }
  else {
    if (__DEBUG) {
      __SET_VAR(data__->,__debug_transition_list[9],,__GET_VAR(data__->GTD,));
    }
    __SET_VAR(data__->,__transition_list[9],,0);
  }
  if (__GET_VAR(data__->STOPPING.X)) {
    __SET_VAR(data__->,__transition_list[10],,__GET_VAR(data__->GTES,));
    if (__DEBUG) {
      __SET_VAR(data__->,__debug_transition_list[10],,__GET_VAR(data__->__transition_list[10]));
    }
  }
  else {
    if (__DEBUG) {
      __SET_VAR(data__->,__debug_transition_list[10],,__GET_VAR(data__->GTES,));
    }
    __SET_VAR(data__->,__transition_list[10],,0);
  }
  if (__GET_VAR(data__->CONTINUOUSMOTION.X)) {
    __SET_VAR(data__->,__transition_list[11],,__GET_VAR(data__->GTDM,));
    if (__DEBUG) {
      __SET_VAR(data__->,__debug_transition_list[11],,__GET_VAR(data__->__transition_list[11]));
    }
  }
  else {
    if (__DEBUG) {
      __SET_VAR(data__->,__debug_transition_list[11],,__GET_VAR(data__->GTDM,));
    }
    __SET_VAR(data__->,__transition_list[11],,0);
  }
  if (__GET_VAR(data__->DISCRETEMOTION.X)) {
    __SET_VAR(data__->,__transition_list[12],,__GET_VAR(data__->GTSS,));
    if (__DEBUG) {
      __SET_VAR(data__->,__debug_transition_list[12],,__GET_VAR(data__->__transition_list[12]));
    }
  }
  else {
    if (__DEBUG) {
      __SET_VAR(data__->,__debug_transition_list[12],,__GET_VAR(data__->GTSS,));
    }
    __SET_VAR(data__->,__transition_list[12],,0);
  }
  if (__GET_VAR(data__->DISCRETEMOTION.X)) {
    __SET_VAR(data__->,__transition_list[13],,__GET_VAR(data__->GTES,));
    if (__DEBUG) {
      __SET_VAR(data__->,__debug_transition_list[13],,__GET_VAR(data__->__transition_list[13]));
    }
  }
  else {
    if (__DEBUG) {
      __SET_VAR(data__->,__debug_transition_list[13],,__GET_VAR(data__->GTES,));
    }
    __SET_VAR(data__->,__transition_list[13],,0);
  }
  if (__GET_VAR(data__->DISCRETEMOTION.X)) {
    __SET_VAR(data__->,__transition_list[14],,__GET_VAR(data__->GTCM,));
    if (__DEBUG) {
      __SET_VAR(data__->,__debug_transition_list[14],,__GET_VAR(data__->__transition_list[14]));
    }
  }
  else {
    if (__DEBUG) {
      __SET_VAR(data__->,__debug_transition_list[14],,__GET_VAR(data__->GTCM,));
    }
    __SET_VAR(data__->,__transition_list[14],,0);
  }
  if (__GET_VAR(data__->DISCRETEMOTION.X)) {
    __SET_VAR(data__->,__transition_list[15],,__GET_VAR(data__->GTST,));
    if (__DEBUG) {
      __SET_VAR(data__->,__debug_transition_list[15],,__GET_VAR(data__->__transition_list[15]));
    }
  }
  else {
    if (__DEBUG) {
      __SET_VAR(data__->,__debug_transition_list[15],,__GET_VAR(data__->GTST,));
    }
    __SET_VAR(data__->,__transition_list[15],,0);
  }
  if (__GET_VAR(data__->CONTINUOUSMOTION.X)) {
    __SET_VAR(data__->,__transition_list[16],,__GET_VAR(data__->GTD,));
    if (__DEBUG) {
      __SET_VAR(data__->,__debug_transition_list[16],,__GET_VAR(data__->__transition_list[16]));
    }
  }
  else {
    if (__DEBUG) {
      __SET_VAR(data__->,__debug_transition_list[16],,__GET_VAR(data__->GTD,));
    }
    __SET_VAR(data__->,__transition_list[16],,0);
  }
  if (__GET_VAR(data__->STANDSTILL.X)) {
    __SET_VAR(data__->,__transition_list[17],,__GET_VAR(data__->GTDM,));
    if (__DEBUG) {
      __SET_VAR(data__->,__debug_transition_list[17],,__GET_VAR(data__->__transition_list[17]));
    }
  }
  else {
    if (__DEBUG) {
      __SET_VAR(data__->,__debug_transition_list[17],,__GET_VAR(data__->GTDM,));
    }
    __SET_VAR(data__->,__transition_list[17],,0);
  }
  if (__GET_VAR(data__->STANDSTILL.X)) {
    __SET_VAR(data__->,__transition_list[18],,__GET_VAR(data__->GTST,));
    if (__DEBUG) {
      __SET_VAR(data__->,__debug_transition_list[18],,__GET_VAR(data__->__transition_list[18]));
    }
  }
  else {
    if (__DEBUG) {
      __SET_VAR(data__->,__debug_transition_list[18],,__GET_VAR(data__->GTST,));
    }
    __SET_VAR(data__->,__transition_list[18],,0);
  }
  if (__GET_VAR(data__->STANDSTILL.X)) {
    __SET_VAR(data__->,__transition_list[19],,__GET_VAR(data__->GTHM,));
    if (__DEBUG) {
      __SET_VAR(data__->,__debug_transition_list[19],,__GET_VAR(data__->__transition_list[19]));
    }
  }
  else {
    if (__DEBUG) {
      __SET_VAR(data__->,__debug_transition_list[19],,__GET_VAR(data__->GTHM,));
    }
    __SET_VAR(data__->,__transition_list[19],,0);
  }
  if (__GET_VAR(data__->HOMING.X)) {
    __SET_VAR(data__->,__transition_list[20],,__GET_VAR(data__->GTSS,));
    if (__DEBUG) {
      __SET_VAR(data__->,__debug_transition_list[20],,__GET_VAR(data__->__transition_list[20]));
    }
  }
  else {
    if (__DEBUG) {
      __SET_VAR(data__->,__debug_transition_list[20],,__GET_VAR(data__->GTSS,));
    }
    __SET_VAR(data__->,__transition_list[20],,0);
  }
  if (__GET_VAR(data__->HOMING.X)) {
    __SET_VAR(data__->,__transition_list[21],,__GET_VAR(data__->GTST,));
    if (__DEBUG) {
      __SET_VAR(data__->,__debug_transition_list[21],,__GET_VAR(data__->__transition_list[21]));
    }
  }
  else {
    if (__DEBUG) {
      __SET_VAR(data__->,__debug_transition_list[21],,__GET_VAR(data__->GTST,));
    }
    __SET_VAR(data__->,__transition_list[21],,0);
  }
  if (__GET_VAR(data__->HOMING.X)) {
    __SET_VAR(data__->,__transition_list[22],,__GET_VAR(data__->GTES,));
    if (__DEBUG) {
      __SET_VAR(data__->,__debug_transition_list[22],,__GET_VAR(data__->__transition_list[22]));
    }
  }
  else {
    if (__DEBUG) {
      __SET_VAR(data__->,__debug_transition_list[22],,__GET_VAR(data__->GTES,));
    }
    __SET_VAR(data__->,__transition_list[22],,0);
  }
  if (__GET_VAR(data__->STANDSTILL.X)) {
    __SET_VAR(data__->,__transition_list[23],,__GET_VAR(data__->GTSM,));
    if (__DEBUG) {
      __SET_VAR(data__->,__debug_transition_list[23],,__GET_VAR(data__->__transition_list[23]));
    }
  }
  else {
    if (__DEBUG) {
      __SET_VAR(data__->,__debug_transition_list[23],,__GET_VAR(data__->GTSM,));
    }
    __SET_VAR(data__->,__transition_list[23],,0);
  }
  if (__GET_VAR(data__->SYNCHRONIZEDMOTION.X)) {
    __SET_VAR(data__->,__transition_list[24],,__GET_VAR(data__->GTSS,));
    if (__DEBUG) {
      __SET_VAR(data__->,__debug_transition_list[24],,__GET_VAR(data__->__transition_list[24]));
    }
  }
  else {
    if (__DEBUG) {
      __SET_VAR(data__->,__debug_transition_list[24],,__GET_VAR(data__->GTSS,));
    }
    __SET_VAR(data__->,__transition_list[24],,0);
  }
  if (__GET_VAR(data__->SYNCHRONIZEDMOTION.X)) {
    __SET_VAR(data__->,__transition_list[25],,__GET_VAR(data__->GTST,));
    if (__DEBUG) {
      __SET_VAR(data__->,__debug_transition_list[25],,__GET_VAR(data__->__transition_list[25]));
    }
  }
  else {
    if (__DEBUG) {
      __SET_VAR(data__->,__debug_transition_list[25],,__GET_VAR(data__->GTST,));
    }
    __SET_VAR(data__->,__transition_list[25],,0);
  }
  if (__GET_VAR(data__->SYNCHRONIZEDMOTION.X)) {
    __SET_VAR(data__->,__transition_list[26],,__GET_VAR(data__->GTES,));
    if (__DEBUG) {
      __SET_VAR(data__->,__debug_transition_list[26],,__GET_VAR(data__->__transition_list[26]));
    }
  }
  else {
    if (__DEBUG) {
      __SET_VAR(data__->,__debug_transition_list[26],,__GET_VAR(data__->GTES,));
    }
    __SET_VAR(data__->,__transition_list[26],,0);
  }
  if (__GET_VAR(data__->SYNCHRONIZEDMOTION.X)) {
    __SET_VAR(data__->,__transition_list[27],,__GET_VAR(data__->GTDM,));
    if (__DEBUG) {
      __SET_VAR(data__->,__debug_transition_list[27],,__GET_VAR(data__->__transition_list[27]));
    }
  }
  else {
    if (__DEBUG) {
      __SET_VAR(data__->,__debug_transition_list[27],,__GET_VAR(data__->GTDM,));
    }
    __SET_VAR(data__->,__transition_list[27],,0);
  }

  // Transitions reset steps
  if (__GET_VAR(data__->__transition_list[0])) {
    __SET_VAR(data__->,DISABLED.X,,0);
  }
  if (__GET_VAR(data__->__transition_list[1])) {
    __SET_VAR(data__->,STANDSTILL.X,,0);
  }
  if (__GET_VAR(data__->__transition_list[2])) {
    __SET_VAR(data__->,ERRORSTOP.X,,0);
  }
  if (__GET_VAR(data__->__transition_list[3])) {
    __SET_VAR(data__->,ERRORSTOP.X,,0);
  }
  if (__GET_VAR(data__->__transition_list[4])) {
    __SET_VAR(data__->,STANDSTILL.X,,0);
  }
  if (__GET_VAR(data__->__transition_list[5])) {
    __SET_VAR(data__->,STANDSTILL.X,,0);
  }
  if (__GET_VAR(data__->__transition_list[6])) {
    __SET_VAR(data__->,CONTINUOUSMOTION.X,,0);
  }
  if (__GET_VAR(data__->__transition_list[7])) {
    __SET_VAR(data__->,CONTINUOUSMOTION.X,,0);
  }
  if (__GET_VAR(data__->__transition_list[8])) {
    __SET_VAR(data__->,STOPPING.X,,0);
  }
  if (__GET_VAR(data__->__transition_list[9])) {
    __SET_VAR(data__->,STOPPING.X,,0);
  }
  if (__GET_VAR(data__->__transition_list[10])) {
    __SET_VAR(data__->,STOPPING.X,,0);
  }
  if (__GET_VAR(data__->__transition_list[11])) {
    __SET_VAR(data__->,CONTINUOUSMOTION.X,,0);
  }
  if (__GET_VAR(data__->__transition_list[12])) {
    __SET_VAR(data__->,DISCRETEMOTION.X,,0);
  }
  if (__GET_VAR(data__->__transition_list[13])) {
    __SET_VAR(data__->,DISCRETEMOTION.X,,0);
  }
  if (__GET_VAR(data__->__transition_list[14])) {
    __SET_VAR(data__->,DISCRETEMOTION.X,,0);
  }
  if (__GET_VAR(data__->__transition_list[15])) {
    __SET_VAR(data__->,DISCRETEMOTION.X,,0);
  }
  if (__GET_VAR(data__->__transition_list[16])) {
    __SET_VAR(data__->,CONTINUOUSMOTION.X,,0);
  }
  if (__GET_VAR(data__->__transition_list[17])) {
    __SET_VAR(data__->,STANDSTILL.X,,0);
  }
  if (__GET_VAR(data__->__transition_list[18])) {
    __SET_VAR(data__->,STANDSTILL.X,,0);
  }
  if (__GET_VAR(data__->__transition_list[19])) {
    __SET_VAR(data__->,STANDSTILL.X,,0);
  }
  if (__GET_VAR(data__->__transition_list[20])) {
    __SET_VAR(data__->,HOMING.X,,0);
  }
  if (__GET_VAR(data__->__transition_list[21])) {
    __SET_VAR(data__->,HOMING.X,,0);
  }
  if (__GET_VAR(data__->__transition_list[22])) {
    __SET_VAR(data__->,HOMING.X,,0);
  }
  if (__GET_VAR(data__->__transition_list[23])) {
    __SET_VAR(data__->,STANDSTILL.X,,0);
  }
  if (__GET_VAR(data__->__transition_list[24])) {
    __SET_VAR(data__->,SYNCHRONIZEDMOTION.X,,0);
  }
  if (__GET_VAR(data__->__transition_list[25])) {
    __SET_VAR(data__->,SYNCHRONIZEDMOTION.X,,0);
  }
  if (__GET_VAR(data__->__transition_list[26])) {
    __SET_VAR(data__->,SYNCHRONIZEDMOTION.X,,0);
  }
  if (__GET_VAR(data__->__transition_list[27])) {
    __SET_VAR(data__->,SYNCHRONIZEDMOTION.X,,0);
  }

  // Transitions set steps
  if (__GET_VAR(data__->__transition_list[0])) {
    __SET_VAR(data__->,STANDSTILL.X,,1);
    data__->STANDSTILL.T.value = __time_to_timespec(1, 0, 0, 0, 0, 0);
  }
  if (__GET_VAR(data__->__transition_list[1])) {
    __SET_VAR(data__->,ERRORSTOP.X,,1);
    data__->ERRORSTOP.T.value = __time_to_timespec(1, 0, 0, 0, 0, 0);
  }
  if (__GET_VAR(data__->__transition_list[2])) {
    __SET_VAR(data__->,DISABLED.X,,1);
    data__->DISABLED.T.value = __time_to_timespec(1, 0, 0, 0, 0, 0);
  }
  if (__GET_VAR(data__->__transition_list[3])) {
    __SET_VAR(data__->,STANDSTILL.X,,1);
    data__->STANDSTILL.T.value = __time_to_timespec(1, 0, 0, 0, 0, 0);
  }
  if (__GET_VAR(data__->__transition_list[4])) {
    __SET_VAR(data__->,DISABLED.X,,1);
    data__->DISABLED.T.value = __time_to_timespec(1, 0, 0, 0, 0, 0);
  }
  if (__GET_VAR(data__->__transition_list[5])) {
    __SET_VAR(data__->,CONTINUOUSMOTION.X,,1);
    data__->CONTINUOUSMOTION.T.value = __time_to_timespec(1, 0, 0, 0, 0, 0);
  }
  if (__GET_VAR(data__->__transition_list[6])) {
    __SET_VAR(data__->,ERRORSTOP.X,,1);
    data__->ERRORSTOP.T.value = __time_to_timespec(1, 0, 0, 0, 0, 0);
  }
  if (__GET_VAR(data__->__transition_list[7])) {
    __SET_VAR(data__->,STOPPING.X,,1);
    data__->STOPPING.T.value = __time_to_timespec(1, 0, 0, 0, 0, 0);
  }
  if (__GET_VAR(data__->__transition_list[8])) {
    __SET_VAR(data__->,STANDSTILL.X,,1);
    data__->STANDSTILL.T.value = __time_to_timespec(1, 0, 0, 0, 0, 0);
  }
  if (__GET_VAR(data__->__transition_list[9])) {
    __SET_VAR(data__->,DISABLED.X,,1);
    data__->DISABLED.T.value = __time_to_timespec(1, 0, 0, 0, 0, 0);
  }
  if (__GET_VAR(data__->__transition_list[10])) {
    __SET_VAR(data__->,ERRORSTOP.X,,1);
    data__->ERRORSTOP.T.value = __time_to_timespec(1, 0, 0, 0, 0, 0);
  }
  if (__GET_VAR(data__->__transition_list[11])) {
    __SET_VAR(data__->,DISCRETEMOTION.X,,1);
    data__->DISCRETEMOTION.T.value = __time_to_timespec(1, 0, 0, 0, 0, 0);
  }
  if (__GET_VAR(data__->__transition_list[12])) {
    __SET_VAR(data__->,STANDSTILL.X,,1);
    data__->STANDSTILL.T.value = __time_to_timespec(1, 0, 0, 0, 0, 0);
  }
  if (__GET_VAR(data__->__transition_list[13])) {
    __SET_VAR(data__->,ERRORSTOP.X,,1);
    data__->ERRORSTOP.T.value = __time_to_timespec(1, 0, 0, 0, 0, 0);
  }
  if (__GET_VAR(data__->__transition_list[14])) {
    __SET_VAR(data__->,CONTINUOUSMOTION.X,,1);
    data__->CONTINUOUSMOTION.T.value = __time_to_timespec(1, 0, 0, 0, 0, 0);
  }
  if (__GET_VAR(data__->__transition_list[15])) {
    __SET_VAR(data__->,STOPPING.X,,1);
    data__->STOPPING.T.value = __time_to_timespec(1, 0, 0, 0, 0, 0);
  }
  if (__GET_VAR(data__->__transition_list[16])) {
    __SET_VAR(data__->,DISABLED.X,,1);
    data__->DISABLED.T.value = __time_to_timespec(1, 0, 0, 0, 0, 0);
  }
  if (__GET_VAR(data__->__transition_list[17])) {
    __SET_VAR(data__->,DISCRETEMOTION.X,,1);
    data__->DISCRETEMOTION.T.value = __time_to_timespec(1, 0, 0, 0, 0, 0);
  }
  if (__GET_VAR(data__->__transition_list[18])) {
    __SET_VAR(data__->,STOPPING.X,,1);
    data__->STOPPING.T.value = __time_to_timespec(1, 0, 0, 0, 0, 0);
  }
  if (__GET_VAR(data__->__transition_list[19])) {
    __SET_VAR(data__->,HOMING.X,,1);
    data__->HOMING.T.value = __time_to_timespec(1, 0, 0, 0, 0, 0);
  }
  if (__GET_VAR(data__->__transition_list[20])) {
    __SET_VAR(data__->,STANDSTILL.X,,1);
    data__->STANDSTILL.T.value = __time_to_timespec(1, 0, 0, 0, 0, 0);
  }
  if (__GET_VAR(data__->__transition_list[21])) {
    __SET_VAR(data__->,STOPPING.X,,1);
    data__->STOPPING.T.value = __time_to_timespec(1, 0, 0, 0, 0, 0);
  }
  if (__GET_VAR(data__->__transition_list[22])) {
    __SET_VAR(data__->,ERRORSTOP.X,,1);
    data__->ERRORSTOP.T.value = __time_to_timespec(1, 0, 0, 0, 0, 0);
  }
  if (__GET_VAR(data__->__transition_list[23])) {
    __SET_VAR(data__->,SYNCHRONIZEDMOTION.X,,1);
    data__->SYNCHRONIZEDMOTION.T.value = __time_to_timespec(1, 0, 0, 0, 0, 0);
  }
  if (__GET_VAR(data__->__transition_list[24])) {
    __SET_VAR(data__->,STANDSTILL.X,,1);
    data__->STANDSTILL.T.value = __time_to_timespec(1, 0, 0, 0, 0, 0);
  }
  if (__GET_VAR(data__->__transition_list[25])) {
    __SET_VAR(data__->,STOPPING.X,,1);
    data__->STOPPING.T.value = __time_to_timespec(1, 0, 0, 0, 0, 0);
  }
  if (__GET_VAR(data__->__transition_list[26])) {
    __SET_VAR(data__->,ERRORSTOP.X,,1);
    data__->ERRORSTOP.T.value = __time_to_timespec(1, 0, 0, 0, 0, 0);
  }
  if (__GET_VAR(data__->__transition_list[27])) {
    __SET_VAR(data__->,DISCRETEMOTION.X,,1);
    data__->DISCRETEMOTION.T.value = __time_to_timespec(1, 0, 0, 0, 0, 0);
  }

  // Steps association
  // DISABLED action associations
  {
    char active = __GET_VAR(data__->DISABLED.X);
    char activated = active && !data__->DISABLED.prev_state;
    char desactivated = !active && data__->DISABLED.prev_state;

    if (activated)    {__SET_VAR(data__->,__action_list[__SFC_DISABLED_INLINE22].state,,1);}
    else              {__SET_VAR(data__->,__action_list[__SFC_DISABLED_INLINE22].state,,0);};

    if (active)       {__SET_VAR(data__->,__action_list[__SFC_DISABLED_INLINE23].state,,1);};
    if (desactivated) {__SET_VAR(data__->,__action_list[__SFC_DISABLED_INLINE23].state,,0);};

  }

  // STANDSTILL action associations
  {
    char active = __GET_VAR(data__->STANDSTILL.X);
    char activated = active && !data__->STANDSTILL.prev_state;
    char desactivated = !active && data__->STANDSTILL.prev_state;

    if (active)       {__SET_VAR(data__->,__action_list[__SFC_STANDSTILL_INLINE1].state,,1);};
    if (desactivated) {__SET_VAR(data__->,__action_list[__SFC_STANDSTILL_INLINE1].state,,0);};

    if (active)       {__SET_VAR(data__->,__action_list[__SFC_STANDSTILL_INLINE2].state,,1);};
    if (desactivated) {__SET_VAR(data__->,__action_list[__SFC_STANDSTILL_INLINE2].state,,0);};

    if (active)       {__SET_VAR(data__->,__action_list[__SFC_STANDSTILL_INLINE3].state,,1);};
    if (desactivated) {__SET_VAR(data__->,__action_list[__SFC_STANDSTILL_INLINE3].state,,0);};

    if (active)       {__SET_VAR(data__->,__action_list[__SFC_STANDSTILL_INLINE4].state,,1);};
    if (desactivated) {__SET_VAR(data__->,__action_list[__SFC_STANDSTILL_INLINE4].state,,0);};

    if (active)       {__SET_VAR(data__->,__action_list[__SFC_STANDSTILL_INLINE5].state,,1);};
    if (desactivated) {__SET_VAR(data__->,__action_list[__SFC_STANDSTILL_INLINE5].state,,0);};

    if (active)       {__SET_VAR(data__->,__action_list[__SFC_STANDSTILL_INLINE6].state,,1);};
    if (desactivated) {__SET_VAR(data__->,__action_list[__SFC_STANDSTILL_INLINE6].state,,0);};

    if (active)       {__SET_VAR(data__->,__action_list[__SFC_STANDSTILL_INLINE7].state,,1);};
    if (desactivated) {__SET_VAR(data__->,__action_list[__SFC_STANDSTILL_INLINE7].state,,0);};

    if (active)       {__SET_VAR(data__->,__action_list[__SFC_GTES_IF_ERROR].state,,1);};
    if (desactivated) {__SET_VAR(data__->,__action_list[__SFC_GTES_IF_ERROR].state,,0);};

  }

  // ERRORSTOP action associations
  {
    char active = __GET_VAR(data__->ERRORSTOP.X);
    char activated = active && !data__->ERRORSTOP.prev_state;
    char desactivated = !active && data__->ERRORSTOP.prev_state;

    if (activated)    {__SET_VAR(data__->,__action_list[__SFC_ERRORSTOP_INLINE13].state,,1);}
    else              {__SET_VAR(data__->,__action_list[__SFC_ERRORSTOP_INLINE13].state,,0);};

    if (activated)    {__SET_VAR(data__->,__action_list[__SFC_ERRORSTOP_INLINE14].state,,1);}
    else              {__SET_VAR(data__->,__action_list[__SFC_ERRORSTOP_INLINE14].state,,0);};

    if (activated)    {__SET_VAR(data__->,__action_list[__SFC_ERRORSTOP_INLINE15].state,,1);}
    else              {__SET_VAR(data__->,__action_list[__SFC_ERRORSTOP_INLINE15].state,,0);};

    if (activated)    {__SET_VAR(data__->,__action_list[__SFC_ERRORSTOP_INLINE16].state,,1);}
    else              {__SET_VAR(data__->,__action_list[__SFC_ERRORSTOP_INLINE16].state,,0);};

    if (activated)    {__SET_VAR(data__->,__action_list[__SFC_ERRORSTOP_INLINE17].state,,1);}
    else              {__SET_VAR(data__->,__action_list[__SFC_ERRORSTOP_INLINE17].state,,0);};

    if (activated)    {__SET_VAR(data__->,__action_list[__SFC_ERRORSTOP_INLINE18].state,,1);}
    else              {__SET_VAR(data__->,__action_list[__SFC_ERRORSTOP_INLINE18].state,,0);};

    if (active)       {__SET_VAR(data__->,__action_list[__SFC_GTES_IF_ERROR].state,,1);};
    if (desactivated) {__SET_VAR(data__->,__action_list[__SFC_GTES_IF_ERROR].state,,0);};

    if (activated)    {__SET_VAR(data__->,__action_list[__SFC_ERRORSTOP_INLINE19].state,,1);}
    else              {__SET_VAR(data__->,__action_list[__SFC_ERRORSTOP_INLINE19].state,,0);};

    if (activated)    {__SET_VAR(data__->,__action_list[__SFC_ERRORSTOP_INLINE20].state,,1);}
    else              {__SET_VAR(data__->,__action_list[__SFC_ERRORSTOP_INLINE20].state,,0);};

    if (active)       {__SET_VAR(data__->,__action_list[__SFC_ERRORSTOP_INLINE21].state,,1);};
    if (desactivated) {__SET_VAR(data__->,__action_list[__SFC_ERRORSTOP_INLINE21].state,,0);};

  }

  // CONTINUOUSMOTION action associations
  {
    char active = __GET_VAR(data__->CONTINUOUSMOTION.X);
    char activated = active && !data__->CONTINUOUSMOTION.prev_state;
    char desactivated = !active && data__->CONTINUOUSMOTION.prev_state;

    if (activated)    {__SET_VAR(data__->,__action_list[__SFC_CONTINUOUSMOTION_INLINE8].state,,1);}
    else              {__SET_VAR(data__->,__action_list[__SFC_CONTINUOUSMOTION_INLINE8].state,,0);};

    if (activated)    {__SET_VAR(data__->,__action_list[__SFC_CONTINUOUSMOTION_INLINE9].state,,1);}
    else              {__SET_VAR(data__->,__action_list[__SFC_CONTINUOUSMOTION_INLINE9].state,,0);};

    if (active)       {__SET_VAR(data__->,__action_list[__SFC_CONTINUOUSMOTION_INLINE10].state,,1);};
    if (desactivated) {__SET_VAR(data__->,__action_list[__SFC_CONTINUOUSMOTION_INLINE10].state,,0);};

    if (active)       {__SET_VAR(data__->,__action_list[__SFC_CONTINUOUSMOTION_INLINE11].state,,1);};
    if (desactivated) {__SET_VAR(data__->,__action_list[__SFC_CONTINUOUSMOTION_INLINE11].state,,0);};

    if (active)       {__SET_VAR(data__->,__action_list[__SFC_CONTINUOUSMOTION_INLINE12].state,,1);};
    if (desactivated) {__SET_VAR(data__->,__action_list[__SFC_CONTINUOUSMOTION_INLINE12].state,,0);};

    if (active)       {__SET_VAR(data__->,__action_list[__SFC_GTES_IF_ERROR].state,,1);};
    if (desactivated) {__SET_VAR(data__->,__action_list[__SFC_GTES_IF_ERROR].state,,0);};

  }

  // STOPPING action associations
  {
    char active = __GET_VAR(data__->STOPPING.X);
    char activated = active && !data__->STOPPING.prev_state;
    char desactivated = !active && data__->STOPPING.prev_state;

    if (activated)    {__SET_VAR(data__->,__action_list[__SFC_STOPPING_INLINE29].state,,1);}
    else              {__SET_VAR(data__->,__action_list[__SFC_STOPPING_INLINE29].state,,0);};

    if (active)       {__SET_VAR(data__->,__action_list[__SFC_GTES_IF_ERROR].state,,1);};
    if (desactivated) {__SET_VAR(data__->,__action_list[__SFC_GTES_IF_ERROR].state,,0);};

    if (active)       {__SET_VAR(data__->,__action_list[__SFC_STOPPING_INLINE30].state,,1);};
    if (desactivated) {__SET_VAR(data__->,__action_list[__SFC_STOPPING_INLINE30].state,,0);};

    if (active)       {__SET_VAR(data__->,__action_list[__SFC_STOPPING_INLINE31].state,,1);};
    if (desactivated) {__SET_VAR(data__->,__action_list[__SFC_STOPPING_INLINE31].state,,0);};

    if (active)       {__SET_VAR(data__->,__action_list[__SFC_STOPPING_INLINE32].state,,1);};
    if (desactivated) {__SET_VAR(data__->,__action_list[__SFC_STOPPING_INLINE32].state,,0);};

    if (active)       {__SET_VAR(data__->,__action_list[__SFC_STOPPING_INLINE33].state,,1);};
    if (desactivated) {__SET_VAR(data__->,__action_list[__SFC_STOPPING_INLINE33].state,,0);};

  }

  // DISCRETEMOTION action associations
  {
    char active = __GET_VAR(data__->DISCRETEMOTION.X);
    char activated = active && !data__->DISCRETEMOTION.prev_state;
    char desactivated = !active && data__->DISCRETEMOTION.prev_state;

    if (activated)    {__SET_VAR(data__->,__action_list[__SFC_DISCRETEMOTION_INLINE24].state,,1);}
    else              {__SET_VAR(data__->,__action_list[__SFC_DISCRETEMOTION_INLINE24].state,,0);};

    if (activated)    {__SET_VAR(data__->,__action_list[__SFC_DISCRETEMOTION_INLINE25].state,,1);}
    else              {__SET_VAR(data__->,__action_list[__SFC_DISCRETEMOTION_INLINE25].state,,0);};

    if (active)       {__SET_VAR(data__->,__action_list[__SFC_DISCRETEMOTION_INLINE26].state,,1);};
    if (desactivated) {__SET_VAR(data__->,__action_list[__SFC_DISCRETEMOTION_INLINE26].state,,0);};

    if (active)       {__SET_VAR(data__->,__action_list[__SFC_DISCRETEMOTION_INLINE27].state,,1);};
    if (desactivated) {__SET_VAR(data__->,__action_list[__SFC_DISCRETEMOTION_INLINE27].state,,0);};

    if (active)       {__SET_VAR(data__->,__action_list[__SFC_GTES_IF_ERROR].state,,1);};
    if (desactivated) {__SET_VAR(data__->,__action_list[__SFC_GTES_IF_ERROR].state,,0);};

    if (active)       {__SET_VAR(data__->,__action_list[__SFC_GTSS_IF_DONE].state,,1);};
    if (desactivated) {__SET_VAR(data__->,__action_list[__SFC_GTSS_IF_DONE].state,,0);};

    if (active)       {__SET_VAR(data__->,__action_list[__SFC_DISCRETEMOTION_INLINE28].state,,1);};
    if (desactivated) {__SET_VAR(data__->,__action_list[__SFC_DISCRETEMOTION_INLINE28].state,,0);};

    if (active)       {__SET_VAR(data__->,__action_list[__SFC_LOGDEC].state,,1);};
    if (desactivated) {__SET_VAR(data__->,__action_list[__SFC_LOGDEC].state,,0);};

  }

  // HOMING action associations
  {
    char active = __GET_VAR(data__->HOMING.X);
    char activated = active && !data__->HOMING.prev_state;
    char desactivated = !active && data__->HOMING.prev_state;

    if (activated)    {__SET_VAR(data__->,__action_list[__SFC_HOMING_INLINE34].state,,1);}
    else              {__SET_VAR(data__->,__action_list[__SFC_HOMING_INLINE34].state,,0);};

    if (activated)    {__SET_VAR(data__->,__action_list[__SFC_HOMING_INLINE35].state,,1);}
    else              {__SET_VAR(data__->,__action_list[__SFC_HOMING_INLINE35].state,,0);};

    if (active)       {__SET_VAR(data__->,__action_list[__SFC_HOMING_INLINE36].state,,1);};
    if (desactivated) {__SET_VAR(data__->,__action_list[__SFC_HOMING_INLINE36].state,,0);};

    if (active)       {__SET_VAR(data__->,__action_list[__SFC_GTSS_IF_DONE].state,,1);};
    if (desactivated) {__SET_VAR(data__->,__action_list[__SFC_GTSS_IF_DONE].state,,0);};

    if (active)       {__SET_VAR(data__->,__action_list[__SFC_GTES_IF_ERROR].state,,1);};
    if (desactivated) {__SET_VAR(data__->,__action_list[__SFC_GTES_IF_ERROR].state,,0);};

    if (active)       {__SET_VAR(data__->,__action_list[__SFC_HOMING_INLINE37].state,,1);};
    if (desactivated) {__SET_VAR(data__->,__action_list[__SFC_HOMING_INLINE37].state,,0);};

  }

  // SYNCHRONIZEDMOTION action associations
  {
    char active = __GET_VAR(data__->SYNCHRONIZEDMOTION.X);
    char activated = active && !data__->SYNCHRONIZEDMOTION.prev_state;
    char desactivated = !active && data__->SYNCHRONIZEDMOTION.prev_state;

    if (activated)    {__SET_VAR(data__->,__action_list[__SFC_SYNCHRONIZEDMOTION_INLINE38].state,,1);}
    else              {__SET_VAR(data__->,__action_list[__SFC_SYNCHRONIZEDMOTION_INLINE38].state,,0);};

    if (activated)    {__SET_VAR(data__->,__action_list[__SFC_SYNCHRONIZEDMOTION_INLINE39].state,,1);}
    else              {__SET_VAR(data__->,__action_list[__SFC_SYNCHRONIZEDMOTION_INLINE39].state,,0);};

    if (active)       {__SET_VAR(data__->,__action_list[__SFC_SYNCHRONIZEDMOTION_INLINE40].state,,1);};
    if (desactivated) {__SET_VAR(data__->,__action_list[__SFC_SYNCHRONIZEDMOTION_INLINE40].state,,0);};

    if (active)       {__SET_VAR(data__->,__action_list[__SFC_SYNCHRONIZEDMOTION_INLINE41].state,,1);};
    if (desactivated) {__SET_VAR(data__->,__action_list[__SFC_SYNCHRONIZEDMOTION_INLINE41].state,,0);};

    if (active)       {__SET_VAR(data__->,__action_list[__SFC_SYNCHRONIZEDMOTION_INLINE42].state,,1);};
    if (desactivated) {__SET_VAR(data__->,__action_list[__SFC_SYNCHRONIZEDMOTION_INLINE42].state,,0);};

    if (active)       {__SET_VAR(data__->,__action_list[__SFC_GTES_IF_ERROR].state,,1);};
    if (desactivated) {__SET_VAR(data__->,__action_list[__SFC_GTES_IF_ERROR].state,,0);};

  }


  // Actions state evaluation
  for (i = 0; i < data__->__nb_actions; i++) {
    if (data__->__action_list[i].set) {
      data__->__action_list[i].set_remaining_time = __time_to_timespec(1, 0, 0, 0, 0, 0);
      data__->__action_list[i].stored = 1;
    }
    if (data__->__action_list[i].reset) {
      data__->__action_list[i].reset_remaining_time = __time_to_timespec(1, 0, 0, 0, 0, 0);
      data__->__action_list[i].stored = 0;
    }
    __SET_VAR(data__->,__action_list[i].state,,__GET_VAR(data__->__action_list[i].state) | data__->__action_list[i].stored);
  }

  // Actions execution
  if(__GET_VAR(data__->__action_list[__SFC_DISABLED_INLINE22].state)) {
    __SET_VAR(data__->,CS,,0);
  }

  if(__GET_VAR(data__->__action_list[__SFC_DISABLED_INLINE23].state)) {
    if (((__GET_VAR(data__->COMMANDTYPE,) == 0) && (__GET_VAR(data__->DONEFLAG,) == __BOOL_LITERAL(TRUE)))) {
      __SET_VAR(data__->,GTSS,,__BOOL_LITERAL(TRUE));
    } else {
      __SET_VAR(data__->,GTSS,,__BOOL_LITERAL(FALSE));
    };
  }

  if(__GET_VAR(data__->__action_list[__SFC_STANDSTILL_INLINE1].state)) {
    __SET_VAR(data__->,CS,,1);
  }

  if(__GET_VAR(data__->__action_list[__SFC_STANDSTILL_INLINE2].state)) {
    __SET_VAR(data__->,GTSS,,__BOOL_LITERAL(FALSE));
  }

  if(__GET_VAR(data__->__action_list[__SFC_STANDSTILL_INLINE3].state)) {
    if ((((__GET_VAR(data__->COMMANDTYPE,) >= 1) && (__GET_VAR(data__->COMMANDTYPE,) <= 6)) && (__GET_VAR(data__->EXECUTEFLAG,) == __BOOL_LITERAL(TRUE)))) {
      __SET_VAR(data__->,GTDM,,__BOOL_LITERAL(TRUE));
    } else {
      __SET_VAR(data__->,GTDM,,__BOOL_LITERAL(FALSE));
    };
  }

  if(__GET_VAR(data__->__action_list[__SFC_STANDSTILL_INLINE4].state)) {
    if ((((__GET_VAR(data__->COMMANDTYPE,) == 8) || (__GET_VAR(data__->COMMANDTYPE,) == 11)) && (__GET_VAR(data__->EXECUTEFLAG,) == __BOOL_LITERAL(TRUE)))) {
      __SET_VAR(data__->,GTCM,,__BOOL_LITERAL(TRUE));
    } else {
      __SET_VAR(data__->,GTCM,,__BOOL_LITERAL(FALSE));
    };
  }

  if(__GET_VAR(data__->__action_list[__SFC_STANDSTILL_INLINE5].state)) {
    if (((__GET_VAR(data__->COMMANDTYPE,) == 9) && (__GET_VAR(data__->EXECUTEFLAG,) == __BOOL_LITERAL(TRUE)))) {
      __SET_VAR(data__->,GTST,,__BOOL_LITERAL(TRUE));
    } else {
      __SET_VAR(data__->,GTST,,__BOOL_LITERAL(FALSE));
    };
  }

  if(__GET_VAR(data__->__action_list[__SFC_STANDSTILL_INLINE6].state)) {
    if (((__GET_VAR(data__->COMMANDTYPE,) == 13) && (__GET_VAR(data__->EXECUTEFLAG,) == __BOOL_LITERAL(TRUE)))) {
      __SET_VAR(data__->,GTHM,,__BOOL_LITERAL(TRUE));
    } else {
      __SET_VAR(data__->,GTHM,,__BOOL_LITERAL(FALSE));
    };
  }

  if(__GET_VAR(data__->__action_list[__SFC_STANDSTILL_INLINE7].state)) {
    if (((__GET_VAR(data__->COMMANDTYPE,) == 20) && (__GET_VAR(data__->EXECUTEFLAG,) == __BOOL_LITERAL(TRUE)))) {
      __SET_VAR(data__->,GTSM,,__BOOL_LITERAL(TRUE));
    } else {
      __SET_VAR(data__->,GTSM,,__BOOL_LITERAL(FALSE));
    };
  }

  if(__GET_VAR(data__->__action_list[__SFC_GTES_IF_ERROR].state)) {
    __SET_VAR(data__->AI.,ROW,,0);
    __SET_VAR(data__->AI.,NODEID,,__GET_VAR(data__->AXISID,));
    __SET_VAR(data__->AI.,PNAME,,__STRING_LITERAL(7,"ERRORID"));
    AXIS_INFO_body__(&data__->AI);
    __SET_VAR(data__->,ERID,,__GET_VAR(data__->AI.OUTU32,));
    if ((__GET_VAR(data__->ERID,) > 0)) {
      __SET_VAR(data__->,GTES,,__BOOL_LITERAL(TRUE));
    } else {
      __SET_VAR(data__->,GTES,,__BOOL_LITERAL(FALSE));
    };
  }

  if(__GET_VAR(data__->__action_list[__SFC_ERRORSTOP_INLINE13].state)) {
    __SET_VAR(data__->,CS,,9);
  }

  if(__GET_VAR(data__->__action_list[__SFC_ERRORSTOP_INLINE14].state)) {
    __SET_VAR(data__->,GTES,,__BOOL_LITERAL(FALSE));
  }

  if(__GET_VAR(data__->__action_list[__SFC_ERRORSTOP_INLINE15].state)) {
    __SET_VAR(data__->,GTDM,,__BOOL_LITERAL(FALSE));
  }

  if(__GET_VAR(data__->__action_list[__SFC_ERRORSTOP_INLINE16].state)) {
    __SET_VAR(data__->,GTCM,,__BOOL_LITERAL(FALSE));
  }

  if(__GET_VAR(data__->__action_list[__SFC_ERRORSTOP_INLINE17].state)) {
    __SET_VAR(data__->,GTSM,,__BOOL_LITERAL(FALSE));
  }

  if(__GET_VAR(data__->__action_list[__SFC_ERRORSTOP_INLINE18].state)) {
    __SET_VAR(data__->STLK.,ROW,,__BOOL_LITERAL(TRUE));
    __SET_VAR(data__->STLK.,AXISID,,__GET_VAR(data__->AXISID,));
    _SESSIONID_body__(&data__->STLK);
  }

  if(__GET_VAR(data__->__action_list[__SFC_ERRORSTOP_INLINE19].state)) {
    __SET_VAR(data__->AI.,ROW,,__BOOL_LITERAL(TRUE));
    __SET_VAR(data__->AI.,NODEID,,__GET_VAR(data__->AXISID,));
    __SET_VAR(data__->AI.,PNAME,,__STRING_LITERAL(8,"DONEFLAG"));
    __SET_VAR(data__->AI.,INB,,0);
    AXIS_INFO_body__(&data__->AI);
  }

  if(__GET_VAR(data__->__action_list[__SFC_ERRORSTOP_INLINE20].state)) {
    __SET_VAR(data__->AI.,ROW,,__BOOL_LITERAL(TRUE));
    __SET_VAR(data__->AI.,NODEID,,__GET_VAR(data__->AXISID,));
    __SET_VAR(data__->AI.,PNAME,,__STRING_LITERAL(6,"INTERV"));
    __SET_VAR(data__->AI.,INR,,0.0);
    AXIS_INFO_body__(&data__->AI);
  }

  if(__GET_VAR(data__->__action_list[__SFC_ERRORSTOP_INLINE21].state)) {
    if (((__GET_VAR(data__->COMMANDTYPE,) == 14) && (__GET_VAR(data__->DONEFLAG,) == __BOOL_LITERAL(TRUE)))) {
      __SET_VAR(data__->,GTSS,,__BOOL_LITERAL(TRUE));
    } else {
      __SET_VAR(data__->,GTSS,,__BOOL_LITERAL(FALSE));
    };
  }

  if(__GET_VAR(data__->__action_list[__SFC_CONTINUOUSMOTION_INLINE8].state)) {
    __SET_VAR(data__->,GTCM,,__BOOL_LITERAL(FALSE));
  }

  if(__GET_VAR(data__->__action_list[__SFC_CONTINUOUSMOTION_INLINE9].state)) {
    __SET_VAR(data__->,CS,,3);
  }

  if(__GET_VAR(data__->__action_list[__SFC_CONTINUOUSMOTION_INLINE10].state)) {
    if (((((((__GET_VAR(data__->COMMANDTYPE,) >= 1) && (__GET_VAR(data__->COMMANDTYPE,) <= 4)) || (__GET_VAR(data__->COMMANDTYPE,) == 10)) || (__GET_VAR(data__->COMMANDTYPE,) == 15)) || (__GET_VAR(data__->COMMANDTYPE,) == 7)) && (__GET_VAR(data__->EXECUTEFLAG,) == __BOOL_LITERAL(TRUE)))) {
      __SET_VAR(data__->,GTDM,,__BOOL_LITERAL(TRUE));
    } else {
      __SET_VAR(data__->,GTDM,,__BOOL_LITERAL(FALSE));
    };
  }

  if(__GET_VAR(data__->__action_list[__SFC_CONTINUOUSMOTION_INLINE11].state)) {
    if (((__GET_VAR(data__->COMMANDTYPE,) == 9) && (__GET_VAR(data__->EXECUTEFLAG,) == __BOOL_LITERAL(TRUE)))) {
      __SET_VAR(data__->,GTST,,__BOOL_LITERAL(TRUE));
    } else {
      __SET_VAR(data__->,GTST,,__BOOL_LITERAL(FALSE));
    };
  }

  if(__GET_VAR(data__->__action_list[__SFC_CONTINUOUSMOTION_INLINE12].state)) {
    __SET_VAR(data__->IPP.,NODEID,,__GET_VAR(data__->AXISID,));
    _IPPOS_body__(&data__->IPP);
  }

  if(__GET_VAR(data__->__action_list[__SFC_STOPPING_INLINE29].state)) {
    __SET_VAR(data__->,CS,,4);
  }

  if(__GET_VAR(data__->__action_list[__SFC_STOPPING_INLINE30].state)) {
    if (((__GET_VAR(data__->DONEFLAG,) == __BOOL_LITERAL(TRUE)) && (__GET_VAR(data__->EXECUTEFLAG,) == __BOOL_LITERAL(FALSE)))) {
      __SET_VAR(data__->,GTSS,,__BOOL_LITERAL(TRUE));
    } else {
      __SET_VAR(data__->,GTSS,,__BOOL_LITERAL(FALSE));
    };
  }

  if(__GET_VAR(data__->__action_list[__SFC_STOPPING_INLINE31].state)) {
    __SET_VAR(data__->AI.,ROW,,__BOOL_LITERAL(FALSE));
    __SET_VAR(data__->AI.,NODEID,,__GET_VAR(data__->AXISID,));
    __SET_VAR(data__->AI.,PNAME,,__STRING_LITERAL(7,"INTERVC"));
    AXIS_INFO_body__(&data__->AI);
  }

  if(__GET_VAR(data__->__action_list[__SFC_STOPPING_INLINE32].state)) {
    __SET_VAR(data__->D2.,P1,,__GET_VAR(data__->AI.OUTR,));
    __SET_VAR(data__->D2.,P2,,0.0);
    _DIFF2_body__(&data__->D2);
  }

  if(__GET_VAR(data__->__action_list[__SFC_STOPPING_INLINE33].state)) {
    if (!(__GET_VAR(data__->D2.SAME,))) {
      __SET_VAR(data__->IPP.,NODEID,,__GET_VAR(data__->AXISID,));
      _IPPOS_body__(&data__->IPP);
    };
  }

  if(__GET_VAR(data__->__action_list[__SFC_DISCRETEMOTION_INLINE24].state)) {
    __SET_VAR(data__->,GTDM,,__BOOL_LITERAL(FALSE));
  }

  if(__GET_VAR(data__->__action_list[__SFC_DISCRETEMOTION_INLINE25].state)) {
    __SET_VAR(data__->,CS,,2);
  }

  if(__GET_VAR(data__->__action_list[__SFC_DISCRETEMOTION_INLINE26].state)) {
    if (((__GET_VAR(data__->COMMANDTYPE,) == 8) && (__GET_VAR(data__->EXECUTEFLAG,) == __BOOL_LITERAL(TRUE)))) {
      __SET_VAR(data__->,GTCM,,__BOOL_LITERAL(TRUE));
    } else {
      __SET_VAR(data__->,GTCM,,__BOOL_LITERAL(FALSE));
    };
  }

  if(__GET_VAR(data__->__action_list[__SFC_DISCRETEMOTION_INLINE27].state)) {
    if ((__GET_VAR(data__->COMMANDTYPE,) == 9)) {
      __SET_VAR(data__->,GTST,,__BOOL_LITERAL(TRUE));
    } else {
      __SET_VAR(data__->,GTST,,__BOOL_LITERAL(FALSE));
    };
  }

  if(__GET_VAR(data__->__action_list[__SFC_GTSS_IF_DONE].state)) {
    if ((__GET_VAR(data__->DONEFLAG,) == __BOOL_LITERAL(TRUE))) {
      __SET_VAR(data__->,GTSS,,__BOOL_LITERAL(TRUE));
    } else {
      __SET_VAR(data__->,GTSS,,__BOOL_LITERAL(FALSE));
    };
    __SET_VAR(data__->,DONEFLAG,,__BOOL_LITERAL(FALSE));
  }

  if(__GET_VAR(data__->__action_list[__SFC_DISCRETEMOTION_INLINE28].state)) {
    __SET_VAR(data__->IPP.,NODEID,,__GET_VAR(data__->AXISID,));
    _IPPOS_body__(&data__->IPP);
  }

  if(__GET_VAR(data__->__action_list[__SFC_LOGDEC].state)) {
    __IL_DEFVAR_T __IL_DEFVAR;
    __IL_DEFVAR_T __IL_DEFVAR_BACK;
    #define GetFbVar(var,...) __GET_VAR(data__->var,__VA_ARGS__)
    #define SetFbVar(var,val,...) __SET_VAR(data__->,var,__VA_ARGS__,val)

    //log_e("SSFC:%d,%d,%d",GetFbVar(DONEFLAG),GetFbVar(EXECUTEFLAG),GetFbVar(COMMANDTYPE));
    
    #undef GetFbVar
    #undef SetFbVar
;
  }

  if(__GET_VAR(data__->__action_list[__SFC_HOMING_INLINE34].state)) {
    __SET_VAR(data__->,GTHM,,__BOOL_LITERAL(FALSE));
  }

  if(__GET_VAR(data__->__action_list[__SFC_HOMING_INLINE35].state)) {
    __SET_VAR(data__->,CS,,6);
  }

  if(__GET_VAR(data__->__action_list[__SFC_HOMING_INLINE36].state)) {
    if ((__GET_VAR(data__->COMMANDTYPE,) == 9)) {
      __SET_VAR(data__->,GTST,,__BOOL_LITERAL(TRUE));
    } else {
      __SET_VAR(data__->,GTST,,__BOOL_LITERAL(FALSE));
    };
  }

  if(__GET_VAR(data__->__action_list[__SFC_HOMING_INLINE37].state)) {
    __SET_VAR(data__->IPP.,NODEID,,__GET_VAR(data__->AXISID,));
    _IPPOS_body__(&data__->IPP);
  }

  if(__GET_VAR(data__->__action_list[__SFC_SYNCHRONIZEDMOTION_INLINE38].state)) {
    __SET_VAR(data__->,GTSM,,__BOOL_LITERAL(FALSE));
  }

  if(__GET_VAR(data__->__action_list[__SFC_SYNCHRONIZEDMOTION_INLINE39].state)) {
    __SET_VAR(data__->,CS,,5);
  }

  if(__GET_VAR(data__->__action_list[__SFC_SYNCHRONIZEDMOTION_INLINE40].state)) {
    if (((((((__GET_VAR(data__->COMMANDTYPE,) >= 1) && (__GET_VAR(data__->COMMANDTYPE,) <= 4)) || (__GET_VAR(data__->COMMANDTYPE,) == 10)) || (__GET_VAR(data__->COMMANDTYPE,) == 15)) || (__GET_VAR(data__->COMMANDTYPE,) == 7)) && (__GET_VAR(data__->EXECUTEFLAG,) == __BOOL_LITERAL(TRUE)))) {
      __SET_VAR(data__->,GTDM,,__BOOL_LITERAL(TRUE));
    } else {
      __SET_VAR(data__->,GTDM,,__BOOL_LITERAL(FALSE));
    };
  }

  if(__GET_VAR(data__->__action_list[__SFC_SYNCHRONIZEDMOTION_INLINE41].state)) {
    if (((__GET_VAR(data__->COMMANDTYPE,) == 9) && (__GET_VAR(data__->EXECUTEFLAG,) == __BOOL_LITERAL(TRUE)))) {
      __SET_VAR(data__->,GTST,,__BOOL_LITERAL(TRUE));
    } else {
      __SET_VAR(data__->,GTST,,__BOOL_LITERAL(FALSE));
    };
  }

  if(__GET_VAR(data__->__action_list[__SFC_SYNCHRONIZEDMOTION_INLINE42].state)) {
    if (((__GET_VAR(data__->COMMANDTYPE,) == 21) && (__GET_VAR(data__->EXECUTEFLAG,) == __BOOL_LITERAL(TRUE)))) {
      __SET_VAR(data__->,GTSS,,__BOOL_LITERAL(TRUE));
    } else {
      __SET_VAR(data__->,GTSS,,__BOOL_LITERAL(FALSE));
    };
  }



  goto __end;

__end:
  return;
} // _SSFC_body__() 

// Steps undefinitions
#undef DISABLED
#undef __SFC_DISABLED
#undef STANDSTILL
#undef __SFC_STANDSTILL
#undef ERRORSTOP
#undef __SFC_ERRORSTOP
#undef CONTINUOUSMOTION
#undef __SFC_CONTINUOUSMOTION
#undef STOPPING
#undef __SFC_STOPPING
#undef DISCRETEMOTION
#undef __SFC_DISCRETEMOTION
#undef HOMING
#undef __SFC_HOMING
#undef SYNCHRONIZEDMOTION
#undef __SFC_SYNCHRONIZEDMOTION

// Actions undefinitions
#undef __SFC_DISABLED_INLINE22
#undef __SFC_DISABLED_INLINE23
#undef __SFC_STANDSTILL_INLINE1
#undef __SFC_STANDSTILL_INLINE2
#undef __SFC_STANDSTILL_INLINE3
#undef __SFC_STANDSTILL_INLINE4
#undef __SFC_STANDSTILL_INLINE5
#undef __SFC_STANDSTILL_INLINE6
#undef __SFC_STANDSTILL_INLINE7
#undef __SFC_GTES_IF_ERROR
#undef __SFC_ERRORSTOP_INLINE13
#undef __SFC_ERRORSTOP_INLINE14
#undef __SFC_ERRORSTOP_INLINE15
#undef __SFC_ERRORSTOP_INLINE16
#undef __SFC_ERRORSTOP_INLINE17
#undef __SFC_ERRORSTOP_INLINE18
#undef __SFC_ERRORSTOP_INLINE19
#undef __SFC_ERRORSTOP_INLINE20
#undef __SFC_ERRORSTOP_INLINE21
#undef __SFC_CONTINUOUSMOTION_INLINE8
#undef __SFC_CONTINUOUSMOTION_INLINE9
#undef __SFC_CONTINUOUSMOTION_INLINE10
#undef __SFC_CONTINUOUSMOTION_INLINE11
#undef __SFC_CONTINUOUSMOTION_INLINE12
#undef __SFC_STOPPING_INLINE29
#undef __SFC_STOPPING_INLINE30
#undef __SFC_STOPPING_INLINE31
#undef __SFC_STOPPING_INLINE32
#undef __SFC_STOPPING_INLINE33
#undef __SFC_DISCRETEMOTION_INLINE24
#undef __SFC_DISCRETEMOTION_INLINE25
#undef __SFC_DISCRETEMOTION_INLINE26
#undef __SFC_DISCRETEMOTION_INLINE27
#undef __SFC_GTSS_IF_DONE
#undef __SFC_DISCRETEMOTION_INLINE28
#undef __SFC_LOGDEC
#undef __SFC_HOMING_INLINE34
#undef __SFC_HOMING_INLINE35
#undef __SFC_HOMING_INLINE36
#undef __SFC_HOMING_INLINE37
#undef __SFC_SYNCHRONIZEDMOTION_INLINE38
#undef __SFC_SYNCHRONIZEDMOTION_INLINE39
#undef __SFC_SYNCHRONIZEDMOTION_INLINE40
#undef __SFC_SYNCHRONIZEDMOTION_INLINE41
#undef __SFC_SYNCHRONIZEDMOTION_INLINE42





void _P2R_init__(_P2R *data__, BOOL retain) {
  __INIT_VAR(data__->EN,__BOOL_LITERAL(TRUE),retain)
  __INIT_VAR(data__->ENO,__BOOL_LITERAL(TRUE),retain)
  __INIT_VAR(data__->TARGETPOSITION,0,retain)
  __INIT_VAR(data__->PULSEEQUIVALENT,0,retain)
  __INIT_VAR(data__->PULSENUMPERIOD,0,retain)
  __INIT_VAR(data__->CURRENTPOS,0,retain)
}

// Code part
void _P2R_body__(_P2R *data__) {
  // Control execution
  if (!__GET_VAR(data__->EN)) {
    __SET_VAR(data__->,ENO,,__BOOL_LITERAL(FALSE));
    return;
  }
  else {
    __SET_VAR(data__->,ENO,,__BOOL_LITERAL(TRUE));
  }
  // Initialise TEMP variables

  __IL_DEFVAR_T __IL_DEFVAR;
  __IL_DEFVAR_T __IL_DEFVAR_BACK;
  #define GetFbVar(var,...) __GET_VAR(data__->var,__VA_ARGS__)
  #define SetFbVar(var,val,...) __SET_VAR(data__->,var,__VA_ARGS__,val)
extern void _P2R_body2__(_P2R *data__) ;  _P2R_body2__(data__);
  #undef GetFbVar
  #undef SetFbVar
;

  goto __end;

__end:
  return;
} // _P2R_body__() 





void MC_INIT_init__(MC_INIT *data__, BOOL retain) {
  __INIT_VAR(data__->EN,__BOOL_LITERAL(TRUE),retain)
  __INIT_VAR(data__->ENO,__BOOL_LITERAL(TRUE),retain)
  __INIT_VAR(data__->AXISID,0,retain)
  __INIT_VAR(data__->VIRTUALAXIS,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->ROTARYAXIS,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->ENCODERINPUT,0,retain)
  __INIT_VAR(data__->AXIS,0,retain)
  __INIT_VAR(data__->DONE,__BOOL_LITERAL(FALSE),retain)
  _SSFC_init__(&data__->SFC,retain);
  AXIS_INFO_init__(&data__->AI,retain);
  __INIT_VAR(data__->DB,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->EB,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->CT,0,retain)
  _P2R_init__(&data__->P2R,retain);
  __INIT_VAR(data__->CPC,0,retain)
  __INIT_VAR(data__->CPOS,0,retain)
  __INIT_VAR(data__->MPP,0,retain)
  __INIT_VAR(data__->PPC,0,retain)
  __INIT_VAR(data__->PPCL,0,retain)
  _INTER_WRITE_init__(&data__->IW,retain);
}

// Code part
void MC_INIT_body__(MC_INIT *data__) {
  // Control execution
  if (!__GET_VAR(data__->EN)) {
    __SET_VAR(data__->,ENO,,__BOOL_LITERAL(FALSE));
    return;
  }
  else {
    __SET_VAR(data__->,ENO,,__BOOL_LITERAL(TRUE));
  }
  // Initialise TEMP variables

  __SET_VAR(data__->,AXIS,,__GET_VAR(data__->AXISID,));
  __SET_VAR(data__->AI.,ROW,,__BOOL_LITERAL(FALSE));
  __SET_VAR(data__->AI.,NODEID,,__GET_VAR(data__->AXISID,));
  __SET_VAR(data__->AI.,PNAME,,__STRING_LITERAL(11,"COMMANDTYPE"));
  AXIS_INFO_body__(&data__->AI);
  __SET_VAR(data__->,CT,,UDINT_TO_INT(
    (BOOL)__BOOL_LITERAL(TRUE),
    NULL,
    (UDINT)__GET_VAR(data__->AI.OUTU32,)));
  __SET_VAR(data__->AI.,ROW,,__BOOL_LITERAL(FALSE));
  __SET_VAR(data__->AI.,NODEID,,__GET_VAR(data__->AXISID,));
  __SET_VAR(data__->AI.,PNAME,,__STRING_LITERAL(8,"DONEFLAG"));
  AXIS_INFO_body__(&data__->AI);
  __SET_VAR(data__->,DB,,__GET_VAR(data__->AI.OUTB,));
  __SET_VAR(data__->AI.,ROW,,__BOOL_LITERAL(FALSE));
  __SET_VAR(data__->AI.,NODEID,,__GET_VAR(data__->AXISID,));
  __SET_VAR(data__->AI.,PNAME,,__STRING_LITERAL(11,"EXECUTEFLAG"));
  AXIS_INFO_body__(&data__->AI);
  __SET_VAR(data__->,EB,,__GET_VAR(data__->AI.OUTB,));
  __SET_VAR(data__->SFC.,AXISID,,__GET_VAR(data__->AXISID,));
  __SET_VAR(data__->SFC.,DONEFLAG,,__GET_VAR(data__->DB,));
  __SET_VAR(data__->SFC.,EXECUTEFLAG,,__GET_VAR(data__->EB,));
  __SET_VAR(data__->SFC.,COMMANDTYPE,,__GET_VAR(data__->CT,));
  _SSFC_body__(&data__->SFC);
  __SET_VAR(data__->AI.,ROW,,__BOOL_LITERAL(TRUE));
  __SET_VAR(data__->AI.,NODEID,,__GET_VAR(data__->AXISID,));
  __SET_VAR(data__->AI.,PNAME,,__STRING_LITERAL(5,"STATE"));
  __SET_VAR(data__->AI.,INU32,,INT_TO_UDINT(
    (BOOL)__BOOL_LITERAL(TRUE),
    NULL,
    (INT)__GET_VAR(data__->SFC.CS,)));
  AXIS_INFO_body__(&data__->AI);
  __SET_VAR(data__->AI.,ROW,,__BOOL_LITERAL(TRUE));
  __SET_VAR(data__->AI.,NODEID,,__GET_VAR(data__->AXISID,));
  __SET_VAR(data__->AI.,PNAME,,__STRING_LITERAL(2,"VA"));
  __SET_VAR(data__->AI.,INB,,__GET_VAR(data__->VIRTUALAXIS,));
  AXIS_INFO_body__(&data__->AI);
  __SET_VAR(data__->AI.,ROW,,__BOOL_LITERAL(TRUE));
  __SET_VAR(data__->AI.,NODEID,,__GET_VAR(data__->AXISID,));
  __SET_VAR(data__->AI.,PNAME,,__STRING_LITERAL(2,"RA"));
  __SET_VAR(data__->AI.,INB,,__GET_VAR(data__->ROTARYAXIS,));
  AXIS_INFO_body__(&data__->AI);
  __SET_VAR(data__->AI.,ROW,,__BOOL_LITERAL(FALSE));
  __SET_VAR(data__->AI.,NODEID,,__GET_VAR(data__->AXISID,));
  __SET_VAR(data__->AI.,PNAME,,__STRING_LITERAL(4,"AMAX"));
  AXIS_INFO_body__(&data__->AI);
  if ((__GET_VAR(data__->AI.OUTR,) < 0.0001)) {
    __SET_VAR(data__->,DONE,,__BOOL_LITERAL(FALSE));
  } else {
    __SET_VAR(data__->,DONE,,__BOOL_LITERAL(TRUE));
  };
  if ((__GET_VAR(data__->SFC.CS,) == 0)) {
    __SET_VAR(data__->AI.,ROW,,__BOOL_LITERAL(FALSE));
    __SET_VAR(data__->AI.,NODEID,,__GET_VAR(data__->AXISID,));
    __SET_VAR(data__->AI.,PNAME,,__STRING_LITERAL(3,"MPP"));
    AXIS_INFO_body__(&data__->AI);
    __SET_VAR(data__->,MPP,,__GET_VAR(data__->AI.OUTR,));
    __SET_VAR(data__->AI.,ROW,,__BOOL_LITERAL(FALSE));
    __SET_VAR(data__->AI.,NODEID,,__GET_VAR(data__->AXISID,));
    __SET_VAR(data__->AI.,PNAME,,__STRING_LITERAL(7,"INTERPC"));
    AXIS_INFO_body__(&data__->AI);
    __SET_VAR(data__->,CPC,,__GET_VAR(data__->AI.OUTR,));
    __SET_VAR(data__->AI.,ROW,,__BOOL_LITERAL(FALSE));
    __SET_VAR(data__->AI.,NODEID,,__GET_VAR(data__->AXISID,));
    __SET_VAR(data__->AI.,PNAME,,__STRING_LITERAL(6,"CURPOS"));
    AXIS_INFO_body__(&data__->AI);
    __SET_VAR(data__->,CPOS,,__GET_VAR(data__->AI.OUTU32,));
    __SET_VAR(data__->,PPCL,,UDINT_TO_LINT(
      (BOOL)__BOOL_LITERAL(TRUE),
      NULL,
      (UDINT)(__GET_VAR(data__->ENCODERINPUT,) - __GET_VAR(data__->CPOS,))));
    __SET_VAR(data__->,PPC,,LINT_TO_DINT(
      (BOOL)__BOOL_LITERAL(TRUE),
      NULL,
      (LINT)__GET_VAR(data__->PPCL,)));
    __SET_VAR(data__->P2R.,PULSEEQUIVALENT,,__GET_VAR(data__->MPP,));
    __SET_VAR(data__->P2R.,PULSENUMPERIOD,,__GET_VAR(data__->PPC,));
    __SET_VAR(data__->P2R.,CURRENTPOS,,__GET_VAR(data__->CPC,));
    _P2R_body__(&data__->P2R);
    __SET_VAR(data__->AI.,ROW,,__BOOL_LITERAL(TRUE));
    __SET_VAR(data__->AI.,NODEID,,__GET_VAR(data__->AXISID,));
    __SET_VAR(data__->AI.,PNAME,,__STRING_LITERAL(6,"CURPOS"));
    __SET_VAR(data__->AI.,INU32,,DINT_TO_UDINT(
      (BOOL)__BOOL_LITERAL(TRUE),
      NULL,
      (DINT)(UDINT_TO_DINT(
        (BOOL)__BOOL_LITERAL(TRUE),
        NULL,
        (UDINT)__GET_VAR(data__->CPOS,)) + __GET_VAR(data__->PPC,))));
    AXIS_INFO_body__(&data__->AI);
    __SET_VAR(data__->IW.,AXISID,,__GET_VAR(data__->AXISID,));
    __SET_VAR(data__->IW.,INTERPC_IN,,__GET_VAR(data__->P2R.TARGETPOSITION,));
    __SET_VAR(data__->IW.,INTERVC_IN,,0.0);
    _INTER_WRITE_body__(&data__->IW);
  };

  goto __end;

__end:
  return;
} // MC_INIT_body__() 





void MC_RESET_init__(MC_RESET *data__, BOOL retain) {
  __INIT_VAR(data__->EN,__BOOL_LITERAL(TRUE),retain)
  __INIT_VAR(data__->ENO,__BOOL_LITERAL(TRUE),retain)
  __INIT_VAR(data__->AXISID,0,retain)
  AXIS_INFO_init__(&data__->AI,retain);
  __INIT_VAR(data__->EXECUTE,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->AXIS,0,retain)
  __INIT_VAR(data__->DONE,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->ERROR,__BOOL_LITERAL(FALSE),retain)
  _W_DEC_init__(&data__->WDEC,retain);
  __INIT_VAR(data__->DONEBOOL,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->MOVEBOOL,__BOOL_LITERAL(FALSE),retain)
  _GETERRORID_init__(&data__->GETERR,retain);
  __INIT_VAR(data__->ERID,0,retain)
  __INIT_VAR(data__->BES,__BOOL_LITERAL(FALSE),retain)
  _DIFF2_init__(&data__->D2,retain);
  __INIT_VAR(data__->SCS,0,retain)
  __INIT_VAR(data__->CURPOS,0,retain)
  __INIT_VAR(data__->ABORTBOOL,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->CPC,0,retain)
  __INIT_VAR(data__->IPC,0,retain)
  __INIT_VAR(data__->RSTVEL,0,retain)
  __INIT_VAR(data__->TODEA,__BOOL_LITERAL(FALSE),retain)
  R_TRIG_init__(&data__->RRTG,retain);
  __INIT_VAR(data__->ER,__BOOL_LITERAL(FALSE),retain)
  UINT i;
  data__->__nb_steps = 5;
  static const STEP temp_step = {{0, 0}, 0, {{0, 0}, 0}};
  for(i = 0; i < data__->__nb_steps; i++) {
    data__->__step_list[i] = temp_step;
  }
  __SET_VAR(data__->,__step_list[0].X,,1);
  data__->__nb_actions = 16;
  static const ACTION temp_action = {0, {0, 0}, 0, 0, {0, 0}, {0, 0}};
  for(i = 0; i < data__->__nb_actions; i++) {
    data__->__action_list[i] = temp_action;
  }
  data__->__nb_transitions = 6;
  data__->__lasttick_time = __CURRENT_TIME;
}

// Steps definitions
#define INIT __step_list[0]
#define __SFC_INIT 0
#define START __step_list[1]
#define __SFC_START 1
#define MOVING __step_list[2]
#define __SFC_MOVING 2
#define SDONE __step_list[3]
#define __SFC_SDONE 3
#define SERROR __step_list[4]
#define __SFC_SERROR 4

// Actions definitions
#define __SFC_INIT_INLINE10 0
#define __SFC_INIT_INLINE11 1
#define __SFC_INIT_INLINE12 2
#define __SFC_INIT_INLINE13 3
#define __SFC_START_INLINE1 4
#define __SFC_START_INLINE2 5
#define __SFC_START_INLINE3 6
#define __SFC_MOVING_INLINE4 7
#define __SFC_MOVING_INLINE5 8
#define __SFC_MOVING_INLINE6 9
#define __SFC_SDONE_INLINE7 10
#define __SFC_SDONE_INLINE8 11
#define __SFC_SDONE_INLINE9 12
#define __SFC_ABORTBOOL 13
#define __SFC_DONE 14
#define __SFC_ERROR 15

// Code part
void MC_RESET_body__(MC_RESET *data__) {
  // Control execution
  if (!__GET_VAR(data__->EN)) {
    __SET_VAR(data__->,ENO,,__BOOL_LITERAL(FALSE));
    return;
  }
  else {
    __SET_VAR(data__->,ENO,,__BOOL_LITERAL(TRUE));
  }
  // Initialise TEMP variables

  INT i;
  TIME elapsed_time, current_time;

  // Calculate elapsed_time
  current_time = __CURRENT_TIME;
  elapsed_time = __time_sub(current_time, data__->__lasttick_time);
  data__->__lasttick_time = current_time;
  // Transitions initialization
  if (__DEBUG) {
    for (i = 0; i < data__->__nb_transitions; i++) {
      data__->__transition_list[i] = data__->__debug_transition_list[i];
    }
  }
  // Steps initialization
  for (i = 0; i < data__->__nb_steps; i++) {
    data__->__step_list[i].prev_state = __GET_VAR(data__->__step_list[i].X);
    if (__GET_VAR(data__->__step_list[i].X)) {
      data__->__step_list[i].T.value = __time_add(data__->__step_list[i].T.value, elapsed_time);
    }
  }
  // Actions initialization
  for (i = 0; i < data__->__nb_actions; i++) {
    __SET_VAR(data__->,__action_list[i].state,,0);
    data__->__action_list[i].set = 0;
    data__->__action_list[i].reset = 0;
    if (__time_cmp(data__->__action_list[i].set_remaining_time, __time_to_timespec(1, 0, 0, 0, 0, 0)) > 0) {
      data__->__action_list[i].set_remaining_time = __time_sub(data__->__action_list[i].set_remaining_time, elapsed_time);
      if (__time_cmp(data__->__action_list[i].set_remaining_time, __time_to_timespec(1, 0, 0, 0, 0, 0)) <= 0) {
        data__->__action_list[i].set_remaining_time = __time_to_timespec(1, 0, 0, 0, 0, 0);
        data__->__action_list[i].set = 1;
      }
    }
    if (__time_cmp(data__->__action_list[i].reset_remaining_time, __time_to_timespec(1, 0, 0, 0, 0, 0)) > 0) {
      data__->__action_list[i].reset_remaining_time = __time_sub(data__->__action_list[i].reset_remaining_time, elapsed_time);
      if (__time_cmp(data__->__action_list[i].reset_remaining_time, __time_to_timespec(1, 0, 0, 0, 0, 0)) <= 0) {
        data__->__action_list[i].reset_remaining_time = __time_to_timespec(1, 0, 0, 0, 0, 0);
        data__->__action_list[i].reset = 1;
      }
    }
  }

  // Transitions fire test
  if (__GET_VAR(data__->INIT.X)) {
    __SET_VAR(data__->,__transition_list[0],,__GET_VAR(data__->ER,));
    if (__DEBUG) {
      __SET_VAR(data__->,__debug_transition_list[0],,__GET_VAR(data__->__transition_list[0]));
    }
  }
  else {
    if (__DEBUG) {
      __SET_VAR(data__->,__debug_transition_list[0],,__GET_VAR(data__->ER,));
    }
    __SET_VAR(data__->,__transition_list[0],,0);
  }
  if (__GET_VAR(data__->START.X)) {
    __SET_VAR(data__->,__transition_list[1],,__GET_VAR(data__->MOVEBOOL,));
    if (__DEBUG) {
      __SET_VAR(data__->,__debug_transition_list[1],,__GET_VAR(data__->__transition_list[1]));
    }
  }
  else {
    if (__DEBUG) {
      __SET_VAR(data__->,__debug_transition_list[1],,__GET_VAR(data__->MOVEBOOL,));
    }
    __SET_VAR(data__->,__transition_list[1],,0);
  }
  if (__GET_VAR(data__->MOVING.X)) {
    __SET_VAR(data__->,__transition_list[2],,__GET_VAR(data__->DONEBOOL,));
    if (__DEBUG) {
      __SET_VAR(data__->,__debug_transition_list[2],,__GET_VAR(data__->__transition_list[2]));
    }
  }
  else {
    if (__DEBUG) {
      __SET_VAR(data__->,__debug_transition_list[2],,__GET_VAR(data__->DONEBOOL,));
    }
    __SET_VAR(data__->,__transition_list[2],,0);
  }
  if (__GET_VAR(data__->SDONE.X)) {
    __SET_VAR(data__->,__transition_list[3],,!(__GET_VAR(data__->EXECUTE,)));
    if (__DEBUG) {
      __SET_VAR(data__->,__debug_transition_list[3],,__GET_VAR(data__->__transition_list[3]));
    }
  }
  else {
    if (__DEBUG) {
      __SET_VAR(data__->,__debug_transition_list[3],,!(__GET_VAR(data__->EXECUTE,)));
    }
    __SET_VAR(data__->,__transition_list[3],,0);
  }
  if (__GET_VAR(data__->MOVING.X)) {
    __SET_VAR(data__->,__transition_list[4],,__GET_VAR(data__->ABORTBOOL,));
    if (__DEBUG) {
      __SET_VAR(data__->,__debug_transition_list[4],,__GET_VAR(data__->__transition_list[4]));
    }
  }
  else {
    if (__DEBUG) {
      __SET_VAR(data__->,__debug_transition_list[4],,__GET_VAR(data__->ABORTBOOL,));
    }
    __SET_VAR(data__->,__transition_list[4],,0);
  }
  if (__GET_VAR(data__->SERROR.X)) {
    __SET_VAR(data__->,__transition_list[5],,!(__GET_VAR(data__->EXECUTE,)));
    if (__DEBUG) {
      __SET_VAR(data__->,__debug_transition_list[5],,__GET_VAR(data__->__transition_list[5]));
    }
  }
  else {
    if (__DEBUG) {
      __SET_VAR(data__->,__debug_transition_list[5],,!(__GET_VAR(data__->EXECUTE,)));
    }
    __SET_VAR(data__->,__transition_list[5],,0);
  }

  // Transitions reset steps
  if (__GET_VAR(data__->__transition_list[0])) {
    __SET_VAR(data__->,INIT.X,,0);
  }
  if (__GET_VAR(data__->__transition_list[1])) {
    __SET_VAR(data__->,START.X,,0);
  }
  if (__GET_VAR(data__->__transition_list[2])) {
    __SET_VAR(data__->,MOVING.X,,0);
  }
  if (__GET_VAR(data__->__transition_list[3])) {
    __SET_VAR(data__->,SDONE.X,,0);
  }
  if (__GET_VAR(data__->__transition_list[4])) {
    __SET_VAR(data__->,MOVING.X,,0);
  }
  if (__GET_VAR(data__->__transition_list[5])) {
    __SET_VAR(data__->,SERROR.X,,0);
  }

  // Transitions set steps
  if (__GET_VAR(data__->__transition_list[0])) {
    __SET_VAR(data__->,START.X,,1);
    data__->START.T.value = __time_to_timespec(1, 0, 0, 0, 0, 0);
  }
  if (__GET_VAR(data__->__transition_list[1])) {
    __SET_VAR(data__->,MOVING.X,,1);
    data__->MOVING.T.value = __time_to_timespec(1, 0, 0, 0, 0, 0);
  }
  if (__GET_VAR(data__->__transition_list[2])) {
    __SET_VAR(data__->,SDONE.X,,1);
    data__->SDONE.T.value = __time_to_timespec(1, 0, 0, 0, 0, 0);
  }
  if (__GET_VAR(data__->__transition_list[3])) {
    __SET_VAR(data__->,INIT.X,,1);
    data__->INIT.T.value = __time_to_timespec(1, 0, 0, 0, 0, 0);
  }
  if (__GET_VAR(data__->__transition_list[4])) {
    __SET_VAR(data__->,SERROR.X,,1);
    data__->SERROR.T.value = __time_to_timespec(1, 0, 0, 0, 0, 0);
  }
  if (__GET_VAR(data__->__transition_list[5])) {
    __SET_VAR(data__->,INIT.X,,1);
    data__->INIT.T.value = __time_to_timespec(1, 0, 0, 0, 0, 0);
  }

  // Steps association
  // INIT action associations
  {
    char active = __GET_VAR(data__->INIT.X);
    char activated = active && !data__->INIT.prev_state;
    char desactivated = !active && data__->INIT.prev_state;

    if (active)       {__SET_VAR(data__->,__action_list[__SFC_INIT_INLINE10].state,,1);};
    if (desactivated) {__SET_VAR(data__->,__action_list[__SFC_INIT_INLINE10].state,,0);};

    if (active)       {__SET_VAR(data__->,__action_list[__SFC_INIT_INLINE11].state,,1);};
    if (desactivated) {__SET_VAR(data__->,__action_list[__SFC_INIT_INLINE11].state,,0);};

    if (active)       {__SET_VAR(data__->,__action_list[__SFC_INIT_INLINE12].state,,1);};
    if (desactivated) {__SET_VAR(data__->,__action_list[__SFC_INIT_INLINE12].state,,0);};

    if (active)       {__SET_VAR(data__->,__action_list[__SFC_INIT_INLINE13].state,,1);};
    if (desactivated) {__SET_VAR(data__->,__action_list[__SFC_INIT_INLINE13].state,,0);};

  }

  // START action associations
  {
    char active = __GET_VAR(data__->START.X);
    char activated = active && !data__->START.prev_state;
    char desactivated = !active && data__->START.prev_state;

    if (activated)    {__SET_VAR(data__->,__action_list[__SFC_START_INLINE1].state,,1);}
    else              {__SET_VAR(data__->,__action_list[__SFC_START_INLINE1].state,,0);};

    if (active)       {__SET_VAR(data__->,__action_list[__SFC_START_INLINE2].state,,1);};
    if (desactivated) {__SET_VAR(data__->,__action_list[__SFC_START_INLINE2].state,,0);};

    if (activated)    {__SET_VAR(data__->,__action_list[__SFC_START_INLINE3].state,,1);}
    else              {__SET_VAR(data__->,__action_list[__SFC_START_INLINE3].state,,0);};

  }

  // MOVING action associations
  {
    char active = __GET_VAR(data__->MOVING.X);
    char activated = active && !data__->MOVING.prev_state;
    char desactivated = !active && data__->MOVING.prev_state;

    if (active)       {__SET_VAR(data__->,__action_list[__SFC_MOVING_INLINE4].state,,1);};
    if (desactivated) {__SET_VAR(data__->,__action_list[__SFC_MOVING_INLINE4].state,,0);};

    if (active)       {__SET_VAR(data__->,__action_list[__SFC_MOVING_INLINE5].state,,1);};
    if (desactivated) {__SET_VAR(data__->,__action_list[__SFC_MOVING_INLINE5].state,,0);};

    if (active)       {__SET_VAR(data__->,__action_list[__SFC_MOVING_INLINE6].state,,1);};
    if (desactivated) {__SET_VAR(data__->,__action_list[__SFC_MOVING_INLINE6].state,,0);};

    if (active && __time_cmp(data__->MOVING.T.value, __time_to_timespec(1, 100, 0, 0, 0, 0)) >= 0) 
                      {__SET_VAR(data__->,ABORTBOOL,,1);}
    else if (desactivated)
                      {__SET_VAR(data__->,ABORTBOOL,,0);};

  }

  // SDONE action associations
  {
    char active = __GET_VAR(data__->SDONE.X);
    char activated = active && !data__->SDONE.prev_state;
    char desactivated = !active && data__->SDONE.prev_state;

    if (active)       {__SET_VAR(data__->,DONE,,1);};
    if (desactivated) {__SET_VAR(data__->,DONE,,0);};

    if (activated)    {__SET_VAR(data__->,__action_list[__SFC_SDONE_INLINE7].state,,1);}
    else              {__SET_VAR(data__->,__action_list[__SFC_SDONE_INLINE7].state,,0);};

    if (activated)    {__SET_VAR(data__->,__action_list[__SFC_SDONE_INLINE8].state,,1);}
    else              {__SET_VAR(data__->,__action_list[__SFC_SDONE_INLINE8].state,,0);};

    if (activated)    {__SET_VAR(data__->,__action_list[__SFC_SDONE_INLINE9].state,,1);}
    else              {__SET_VAR(data__->,__action_list[__SFC_SDONE_INLINE9].state,,0);};

  }

  // SERROR action associations
  {
    char active = __GET_VAR(data__->SERROR.X);
    char activated = active && !data__->SERROR.prev_state;
    char desactivated = !active && data__->SERROR.prev_state;

    if (active)       {__SET_VAR(data__->,ERROR,,1);};
    if (desactivated) {__SET_VAR(data__->,ERROR,,0);};

  }


  // Actions state evaluation
  for (i = 0; i < data__->__nb_actions; i++) {
    if (data__->__action_list[i].set) {
      data__->__action_list[i].set_remaining_time = __time_to_timespec(1, 0, 0, 0, 0, 0);
      data__->__action_list[i].stored = 1;
    }
    if (data__->__action_list[i].reset) {
      data__->__action_list[i].reset_remaining_time = __time_to_timespec(1, 0, 0, 0, 0, 0);
      data__->__action_list[i].stored = 0;
    }
    __SET_VAR(data__->,__action_list[i].state,,__GET_VAR(data__->__action_list[i].state) | data__->__action_list[i].stored);
  }

  // Actions execution
  if (data__->__action_list[__SFC_ABORTBOOL].reset) {
    __SET_VAR(data__->,ABORTBOOL,,0);
  }
  else if (data__->__action_list[__SFC_ABORTBOOL].set) {
    __SET_VAR(data__->,ABORTBOOL,,1);
  }
  if (data__->__action_list[__SFC_DONE].reset) {
    __SET_VAR(data__->,DONE,,0);
  }
  else if (data__->__action_list[__SFC_DONE].set) {
    __SET_VAR(data__->,DONE,,1);
  }
  if (data__->__action_list[__SFC_ERROR].reset) {
    __SET_VAR(data__->,ERROR,,0);
  }
  else if (data__->__action_list[__SFC_ERROR].set) {
    __SET_VAR(data__->,ERROR,,1);
  }
  if(__GET_VAR(data__->__action_list[__SFC_INIT_INLINE10].state)) {
    __SET_VAR(data__->,AXIS,,__GET_VAR(data__->AXISID,));
  }

  if(__GET_VAR(data__->__action_list[__SFC_INIT_INLINE11].state)) {
    __SET_VAR(data__->AI.,ROW,,__BOOL_LITERAL(FALSE));
    __SET_VAR(data__->AI.,NODEID,,__GET_VAR(data__->AXISID,));
    __SET_VAR(data__->AI.,PNAME,,__STRING_LITERAL(5,"STATE"));
    AXIS_INFO_body__(&data__->AI);
  }

  if(__GET_VAR(data__->__action_list[__SFC_INIT_INLINE12].state)) {
    __SET_VAR(data__->,SCS,,__GET_VAR(data__->AI.OUTU32,));
  }

  if(__GET_VAR(data__->__action_list[__SFC_INIT_INLINE13].state)) {
    if ((__GET_VAR(data__->SCS,) == 9)) {
      __SET_VAR(data__->RRTG.,CLK,,__GET_VAR(data__->EXECUTE,));
      R_TRIG_body__(&data__->RRTG);
      __SET_VAR(data__->,ER,,__GET_VAR(data__->RRTG.Q));
    };
  }

  if(__GET_VAR(data__->__action_list[__SFC_START_INLINE1].state)) {
    __SET_VAR(data__->WDEC.,AXISID,,__GET_VAR(data__->AXISID,));
    __SET_VAR(data__->WDEC.,DONEFLAG,,__BOOL_LITERAL(FALSE));
    __SET_VAR(data__->WDEC.,EXECUTEFLAG,,__BOOL_LITERAL(TRUE));
    __SET_VAR(data__->WDEC.,COMMANDTYPE,,14);
    _W_DEC_body__(&data__->WDEC);
  }

  if(__GET_VAR(data__->__action_list[__SFC_START_INLINE2].state)) {
    __SET_VAR(data__->RRTG.,CLK,,0);
    R_TRIG_body__(&data__->RRTG);
  }

  if(__GET_VAR(data__->__action_list[__SFC_START_INLINE3].state)) {
    __SET_VAR(data__->,MOVEBOOL,,__BOOL_LITERAL(TRUE));
  }

  if(__GET_VAR(data__->__action_list[__SFC_MOVING_INLINE4].state)) {
    __SET_VAR(data__->GETERR.,AXISID,,__GET_VAR(data__->AXISID,));
    _GETERRORID_body__(&data__->GETERR);
  }

  if(__GET_VAR(data__->__action_list[__SFC_MOVING_INLINE5].state)) {
    __SET_VAR(data__->,ERID,,__GET_VAR(data__->GETERR.ERRORID,));
  }

  if(__GET_VAR(data__->__action_list[__SFC_MOVING_INLINE6].state)) {
    if ((__GET_VAR(data__->ERID,) == 0)) {
      __SET_VAR(data__->,DONEBOOL,,__BOOL_LITERAL(TRUE));
    } else {
      __SET_VAR(data__->,DONEBOOL,,__BOOL_LITERAL(FALSE));
    };
  }

  if(__GET_VAR(data__->__action_list[__SFC_SDONE_INLINE7].state)) {
    __SET_VAR(data__->WDEC.,AXISID,,__GET_VAR(data__->AXISID,));
    __SET_VAR(data__->WDEC.,DONEFLAG,,__BOOL_LITERAL(TRUE));
    __SET_VAR(data__->WDEC.,EXECUTEFLAG,,__BOOL_LITERAL(FALSE));
    __SET_VAR(data__->WDEC.,COMMANDTYPE,,14);
    _W_DEC_body__(&data__->WDEC);
  }

  if(__GET_VAR(data__->__action_list[__SFC_SDONE_INLINE8].state)) {
    __SET_VAR(data__->AI.,ROW,,__BOOL_LITERAL(TRUE));
    __SET_VAR(data__->AI.,NODEID,,__GET_VAR(data__->AXISID,));
    __SET_VAR(data__->AI.,PNAME,,__STRING_LITERAL(7,"ERRORID"));
    __SET_VAR(data__->AI.,INU32,,0);
    AXIS_INFO_body__(&data__->AI);
  }

  if(__GET_VAR(data__->__action_list[__SFC_SDONE_INLINE9].state)) {
    __SET_VAR(data__->AI.,ROW,,__BOOL_LITERAL(TRUE));
    __SET_VAR(data__->AI.,NODEID,,__GET_VAR(data__->AXISID,));
    __SET_VAR(data__->AI.,PNAME,,__STRING_LITERAL(5,"STATE"));
    __SET_VAR(data__->AI.,INU32,,1);
    AXIS_INFO_body__(&data__->AI);
  }



  goto __end;

__end:
  return;
} // MC_RESET_body__() 

// Steps undefinitions
#undef INIT
#undef __SFC_INIT
#undef START
#undef __SFC_START
#undef MOVING
#undef __SFC_MOVING
#undef SDONE
#undef __SFC_SDONE
#undef SERROR
#undef __SFC_SERROR

// Actions undefinitions
#undef __SFC_INIT_INLINE10
#undef __SFC_INIT_INLINE11
#undef __SFC_INIT_INLINE12
#undef __SFC_INIT_INLINE13
#undef __SFC_START_INLINE1
#undef __SFC_START_INLINE2
#undef __SFC_START_INLINE3
#undef __SFC_MOVING_INLINE4
#undef __SFC_MOVING_INLINE5
#undef __SFC_MOVING_INLINE6
#undef __SFC_SDONE_INLINE7
#undef __SFC_SDONE_INLINE8
#undef __SFC_SDONE_INLINE9
#undef __SFC_ABORTBOOL
#undef __SFC_DONE
#undef __SFC_ERROR





void MC_GEAROUT_init__(MC_GEAROUT *data__, BOOL retain) {
  __INIT_VAR(data__->EN,__BOOL_LITERAL(TRUE),retain)
  __INIT_VAR(data__->ENO,__BOOL_LITERAL(TRUE),retain)
  __INIT_VAR(data__->SLAVEID,0,retain)
  __INIT_VAR(data__->EXECUTE,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->SLAVE,0,retain)
  __INIT_VAR(data__->DONE,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->ERROR,__BOOL_LITERAL(FALSE),retain)
  _W_DEC_init__(&data__->WDEC,retain);
  _W_PVA_init__(&data__->WPVA,retain);
  __INIT_VAR(data__->ABORTBOOL,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->SESSIONOVER,__BOOL_LITERAL(FALSE),retain)
  AXIS_INFO_init__(&data__->AI,retain);
  __INIT_VAR(data__->BSS,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->CST,0,retain)
  _SESSIONID_init__(&data__->SID,retain);
  R_TRIG_init__(&data__->RRTG,retain);
  __INIT_VAR(data__->ER,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->SCS,0,retain)
  __INIT_VAR(data__->RECLOCK,0,retain)
  __INIT_VAR(data__->CURLOCK,0,retain)
  UINT i;
  data__->__nb_steps = 4;
  static const STEP temp_step = {{0, 0}, 0, {{0, 0}, 0}};
  for(i = 0; i < data__->__nb_steps; i++) {
    data__->__step_list[i] = temp_step;
  }
  __SET_VAR(data__->,__step_list[0].X,,1);
  data__->__nb_actions = 12;
  static const ACTION temp_action = {0, {0, 0}, 0, 0, {0, 0}, {0, 0}};
  for(i = 0; i < data__->__nb_actions; i++) {
    data__->__action_list[i] = temp_action;
  }
  data__->__nb_transitions = 5;
  data__->__lasttick_time = __CURRENT_TIME;
}

// Steps definitions
#define INIT __step_list[0]
#define __SFC_INIT 0
#define START __step_list[1]
#define __SFC_START 1
#define SDONE __step_list[2]
#define __SFC_SDONE 2
#define SABORT __step_list[3]
#define __SFC_SABORT 3

// Actions definitions
#define __SFC_INITORRESET 0
#define __SFC_START_INLINE1 1
#define __SFC_START_INLINE2 2
#define __SFC_START_INLINE3 3
#define __SFC_START_INLINE4 4
#define __SFC_START_INLINE5 5
#define __SFC_START_INLINE6 6
#define __SFC_START_INLINE7 7
#define __SFC_SDONE_INLINE8 8
#define __SFC_SDONE_INLINE9 9
#define __SFC_SABORT_INLINE12 10
#define __SFC_SABORT_INLINE13 11

// Code part
void MC_GEAROUT_body__(MC_GEAROUT *data__) {
  // Control execution
  if (!__GET_VAR(data__->EN)) {
    __SET_VAR(data__->,ENO,,__BOOL_LITERAL(FALSE));
    return;
  }
  else {
    __SET_VAR(data__->,ENO,,__BOOL_LITERAL(TRUE));
  }
  // Initialise TEMP variables

  INT i;
  TIME elapsed_time, current_time;

  // Calculate elapsed_time
  current_time = __CURRENT_TIME;
  elapsed_time = __time_sub(current_time, data__->__lasttick_time);
  data__->__lasttick_time = current_time;
  // Transitions initialization
  if (__DEBUG) {
    for (i = 0; i < data__->__nb_transitions; i++) {
      data__->__transition_list[i] = data__->__debug_transition_list[i];
    }
  }
  // Steps initialization
  for (i = 0; i < data__->__nb_steps; i++) {
    data__->__step_list[i].prev_state = __GET_VAR(data__->__step_list[i].X);
    if (__GET_VAR(data__->__step_list[i].X)) {
      data__->__step_list[i].T.value = __time_add(data__->__step_list[i].T.value, elapsed_time);
    }
  }
  // Actions initialization
  for (i = 0; i < data__->__nb_actions; i++) {
    __SET_VAR(data__->,__action_list[i].state,,0);
    data__->__action_list[i].set = 0;
    data__->__action_list[i].reset = 0;
    if (__time_cmp(data__->__action_list[i].set_remaining_time, __time_to_timespec(1, 0, 0, 0, 0, 0)) > 0) {
      data__->__action_list[i].set_remaining_time = __time_sub(data__->__action_list[i].set_remaining_time, elapsed_time);
      if (__time_cmp(data__->__action_list[i].set_remaining_time, __time_to_timespec(1, 0, 0, 0, 0, 0)) <= 0) {
        data__->__action_list[i].set_remaining_time = __time_to_timespec(1, 0, 0, 0, 0, 0);
        data__->__action_list[i].set = 1;
      }
    }
    if (__time_cmp(data__->__action_list[i].reset_remaining_time, __time_to_timespec(1, 0, 0, 0, 0, 0)) > 0) {
      data__->__action_list[i].reset_remaining_time = __time_sub(data__->__action_list[i].reset_remaining_time, elapsed_time);
      if (__time_cmp(data__->__action_list[i].reset_remaining_time, __time_to_timespec(1, 0, 0, 0, 0, 0)) <= 0) {
        data__->__action_list[i].reset_remaining_time = __time_to_timespec(1, 0, 0, 0, 0, 0);
        data__->__action_list[i].reset = 1;
      }
    }
  }

  // Transitions fire test
  if (__GET_VAR(data__->INIT.X)) {
    __SET_VAR(data__->,__transition_list[0],,__GET_VAR(data__->ER,));
    if (__DEBUG) {
      __SET_VAR(data__->,__debug_transition_list[0],,__GET_VAR(data__->__transition_list[0]));
    }
  }
  else {
    if (__DEBUG) {
      __SET_VAR(data__->,__debug_transition_list[0],,__GET_VAR(data__->ER,));
    }
    __SET_VAR(data__->,__transition_list[0],,0);
  }
  if (__GET_VAR(data__->START.X)) {
    __SET_VAR(data__->,__transition_list[1],,__GET_VAR(data__->BSS,));
    if (__DEBUG) {
      __SET_VAR(data__->,__debug_transition_list[1],,__GET_VAR(data__->__transition_list[1]));
    }
  }
  else {
    if (__DEBUG) {
      __SET_VAR(data__->,__debug_transition_list[1],,__GET_VAR(data__->BSS,));
    }
    __SET_VAR(data__->,__transition_list[1],,0);
  }
  if (__GET_VAR(data__->SDONE.X)) {
    __SET_VAR(data__->,__transition_list[2],,__GET_VAR(data__->SESSIONOVER,));
    if (__DEBUG) {
      __SET_VAR(data__->,__debug_transition_list[2],,__GET_VAR(data__->__transition_list[2]));
    }
  }
  else {
    if (__DEBUG) {
      __SET_VAR(data__->,__debug_transition_list[2],,__GET_VAR(data__->SESSIONOVER,));
    }
    __SET_VAR(data__->,__transition_list[2],,0);
  }
  if (__GET_VAR(data__->START.X)) {
    __SET_VAR(data__->,__transition_list[3],,__GET_VAR(data__->ABORTBOOL,));
    if (__DEBUG) {
      __SET_VAR(data__->,__debug_transition_list[3],,__GET_VAR(data__->__transition_list[3]));
    }
  }
  else {
    if (__DEBUG) {
      __SET_VAR(data__->,__debug_transition_list[3],,__GET_VAR(data__->ABORTBOOL,));
    }
    __SET_VAR(data__->,__transition_list[3],,0);
  }
  if (__GET_VAR(data__->SABORT.X)) {
    __SET_VAR(data__->,__transition_list[4],,__GET_VAR(data__->SESSIONOVER,));
    if (__DEBUG) {
      __SET_VAR(data__->,__debug_transition_list[4],,__GET_VAR(data__->__transition_list[4]));
    }
  }
  else {
    if (__DEBUG) {
      __SET_VAR(data__->,__debug_transition_list[4],,__GET_VAR(data__->SESSIONOVER,));
    }
    __SET_VAR(data__->,__transition_list[4],,0);
  }

  // Transitions reset steps
  if (__GET_VAR(data__->__transition_list[0])) {
    __SET_VAR(data__->,INIT.X,,0);
  }
  if (__GET_VAR(data__->__transition_list[1])) {
    __SET_VAR(data__->,START.X,,0);
  }
  if (__GET_VAR(data__->__transition_list[2])) {
    __SET_VAR(data__->,SDONE.X,,0);
  }
  if (__GET_VAR(data__->__transition_list[3])) {
    __SET_VAR(data__->,START.X,,0);
  }
  if (__GET_VAR(data__->__transition_list[4])) {
    __SET_VAR(data__->,SABORT.X,,0);
  }

  // Transitions set steps
  if (__GET_VAR(data__->__transition_list[0])) {
    __SET_VAR(data__->,START.X,,1);
    data__->START.T.value = __time_to_timespec(1, 0, 0, 0, 0, 0);
  }
  if (__GET_VAR(data__->__transition_list[1])) {
    __SET_VAR(data__->,SDONE.X,,1);
    data__->SDONE.T.value = __time_to_timespec(1, 0, 0, 0, 0, 0);
  }
  if (__GET_VAR(data__->__transition_list[2])) {
    __SET_VAR(data__->,INIT.X,,1);
    data__->INIT.T.value = __time_to_timespec(1, 0, 0, 0, 0, 0);
  }
  if (__GET_VAR(data__->__transition_list[3])) {
    __SET_VAR(data__->,SABORT.X,,1);
    data__->SABORT.T.value = __time_to_timespec(1, 0, 0, 0, 0, 0);
  }
  if (__GET_VAR(data__->__transition_list[4])) {
    __SET_VAR(data__->,INIT.X,,1);
    data__->INIT.T.value = __time_to_timespec(1, 0, 0, 0, 0, 0);
  }

  // Steps association
  // INIT action associations
  {
    char active = __GET_VAR(data__->INIT.X);
    char activated = active && !data__->INIT.prev_state;
    char desactivated = !active && data__->INIT.prev_state;

    if (active)       {__SET_VAR(data__->,__action_list[__SFC_INITORRESET].state,,1);};
    if (desactivated) {__SET_VAR(data__->,__action_list[__SFC_INITORRESET].state,,0);};

  }

  // START action associations
  {
    char active = __GET_VAR(data__->START.X);
    char activated = active && !data__->START.prev_state;
    char desactivated = !active && data__->START.prev_state;

    if (activated)    {__SET_VAR(data__->,__action_list[__SFC_START_INLINE1].state,,1);}
    else              {__SET_VAR(data__->,__action_list[__SFC_START_INLINE1].state,,0);};

    if (activated)    {__SET_VAR(data__->,__action_list[__SFC_START_INLINE2].state,,1);}
    else              {__SET_VAR(data__->,__action_list[__SFC_START_INLINE2].state,,0);};

    if (active)       {__SET_VAR(data__->,__action_list[__SFC_START_INLINE3].state,,1);};
    if (desactivated) {__SET_VAR(data__->,__action_list[__SFC_START_INLINE3].state,,0);};

    if (active)       {__SET_VAR(data__->,__action_list[__SFC_START_INLINE4].state,,1);};
    if (desactivated) {__SET_VAR(data__->,__action_list[__SFC_START_INLINE4].state,,0);};

    if (active)       {__SET_VAR(data__->,__action_list[__SFC_START_INLINE5].state,,1);};
    if (desactivated) {__SET_VAR(data__->,__action_list[__SFC_START_INLINE5].state,,0);};

    if (active)       {__SET_VAR(data__->,__action_list[__SFC_START_INLINE6].state,,1);};
    if (desactivated) {__SET_VAR(data__->,__action_list[__SFC_START_INLINE6].state,,0);};

    if (active)       {__SET_VAR(data__->,__action_list[__SFC_START_INLINE7].state,,1);};
    if (desactivated) {__SET_VAR(data__->,__action_list[__SFC_START_INLINE7].state,,0);};

  }

  // SDONE action associations
  {
    char active = __GET_VAR(data__->SDONE.X);
    char activated = active && !data__->SDONE.prev_state;
    char desactivated = !active && data__->SDONE.prev_state;

    if (activated)    {__SET_VAR(data__->,__action_list[__SFC_SDONE_INLINE8].state,,1);}
    else              {__SET_VAR(data__->,__action_list[__SFC_SDONE_INLINE8].state,,0);};

    if (activated)    {__SET_VAR(data__->,__action_list[__SFC_SDONE_INLINE9].state,,1);}
    else              {__SET_VAR(data__->,__action_list[__SFC_SDONE_INLINE9].state,,0);};

  }

  // SABORT action associations
  {
    char active = __GET_VAR(data__->SABORT.X);
    char activated = active && !data__->SABORT.prev_state;
    char desactivated = !active && data__->SABORT.prev_state;

    if (activated)    {__SET_VAR(data__->,__action_list[__SFC_SABORT_INLINE12].state,,1);}
    else              {__SET_VAR(data__->,__action_list[__SFC_SABORT_INLINE12].state,,0);};

    if (activated)    {__SET_VAR(data__->,__action_list[__SFC_SABORT_INLINE13].state,,1);}
    else              {__SET_VAR(data__->,__action_list[__SFC_SABORT_INLINE13].state,,0);};

  }


  // Actions state evaluation
  for (i = 0; i < data__->__nb_actions; i++) {
    if (data__->__action_list[i].set) {
      data__->__action_list[i].set_remaining_time = __time_to_timespec(1, 0, 0, 0, 0, 0);
      data__->__action_list[i].stored = 1;
    }
    if (data__->__action_list[i].reset) {
      data__->__action_list[i].reset_remaining_time = __time_to_timespec(1, 0, 0, 0, 0, 0);
      data__->__action_list[i].stored = 0;
    }
    __SET_VAR(data__->,__action_list[i].state,,__GET_VAR(data__->__action_list[i].state) | data__->__action_list[i].stored);
  }

  // Actions execution
  if(__GET_VAR(data__->__action_list[__SFC_INITORRESET].state)) {
    __SET_VAR(data__->,SLAVE,,__GET_VAR(data__->SLAVEID,));
    if ((__GET_VAR(data__->DONE,) == 1)) {
      __SET_VAR(data__->,DONE,,__GET_VAR(data__->EXECUTE,));
    } else {
      __SET_VAR(data__->,BSS,,__BOOL_LITERAL(FALSE));
      __SET_VAR(data__->,SESSIONOVER,,__BOOL_LITERAL(FALSE));
      __SET_VAR(data__->RRTG.,CLK,,__GET_VAR(data__->EXECUTE,));
      R_TRIG_body__(&data__->RRTG);
      __SET_VAR(data__->,ER,,__GET_VAR(data__->RRTG.Q));
    };
  }

  if(__GET_VAR(data__->__action_list[__SFC_START_INLINE1].state)) {
    __SET_VAR(data__->SID.,ROW,,__BOOL_LITERAL(TRUE));
    __SET_VAR(data__->SID.,AXISID,,__GET_VAR(data__->SLAVEID,));
    _SESSIONID_body__(&data__->SID);
  }

  if(__GET_VAR(data__->__action_list[__SFC_START_INLINE2].state)) {
    __SET_VAR(data__->WDEC.,AXISID,,__GET_VAR(data__->SLAVEID,));
    __SET_VAR(data__->WDEC.,DONEFLAG,,__BOOL_LITERAL(FALSE));
    __SET_VAR(data__->WDEC.,EXECUTEFLAG,,__BOOL_LITERAL(TRUE));
    __SET_VAR(data__->WDEC.,COMMANDTYPE,,21);
    _W_DEC_body__(&data__->WDEC);
  }

  if(__GET_VAR(data__->__action_list[__SFC_START_INLINE3].state)) {
    __SET_VAR(data__->,RECLOCK,,__GET_VAR(data__->SID.FBD_ABORT_FLAG,));
  }

  if(__GET_VAR(data__->__action_list[__SFC_START_INLINE4].state)) {
    if ((__GET_VAR(data__->RECLOCK,) != __GET_VAR(data__->CURLOCK,))) {
      __SET_VAR(data__->,ABORTBOOL,,__BOOL_LITERAL(TRUE));
    };
  }

  if(__GET_VAR(data__->__action_list[__SFC_START_INLINE5].state)) {
    __SET_VAR(data__->AI.,ROW,,__BOOL_LITERAL(FALSE));
    __SET_VAR(data__->AI.,NODEID,,__GET_VAR(data__->SLAVEID,));
    __SET_VAR(data__->AI.,PNAME,,__STRING_LITERAL(5,"STATE"));
    AXIS_INFO_body__(&data__->AI);
  }

  if(__GET_VAR(data__->__action_list[__SFC_START_INLINE6].state)) {
    __SET_VAR(data__->,CST,,__GET_VAR(data__->AI.OUTU32,));
  }

  if(__GET_VAR(data__->__action_list[__SFC_START_INLINE7].state)) {
    if ((__GET_VAR(data__->CST,) == 1)) {
      __SET_VAR(data__->,BSS,,__BOOL_LITERAL(TRUE));
    } else {
      __SET_VAR(data__->,BSS,,__BOOL_LITERAL(FALSE));
    };
  }

  if(__GET_VAR(data__->__action_list[__SFC_SDONE_INLINE8].state)) {
    __SET_VAR(data__->,DONE,,__BOOL_LITERAL(TRUE));
  }

  if(__GET_VAR(data__->__action_list[__SFC_SDONE_INLINE9].state)) {
    __SET_VAR(data__->,SESSIONOVER,,__BOOL_LITERAL(TRUE));
  }

  if(__GET_VAR(data__->__action_list[__SFC_SABORT_INLINE12].state)) {
    __SET_VAR(data__->,ERROR,,__BOOL_LITERAL(TRUE));
  }

  if(__GET_VAR(data__->__action_list[__SFC_SABORT_INLINE13].state)) {
    __SET_VAR(data__->,SESSIONOVER,,__BOOL_LITERAL(TRUE));
  }



  goto __end;

__end:
  return;
} // MC_GEAROUT_body__() 

// Steps undefinitions
#undef INIT
#undef __SFC_INIT
#undef START
#undef __SFC_START
#undef SDONE
#undef __SFC_SDONE
#undef SABORT
#undef __SFC_SABORT

// Actions undefinitions
#undef __SFC_INITORRESET
#undef __SFC_START_INLINE1
#undef __SFC_START_INLINE2
#undef __SFC_START_INLINE3
#undef __SFC_START_INLINE4
#undef __SFC_START_INLINE5
#undef __SFC_START_INLINE6
#undef __SFC_START_INLINE7
#undef __SFC_SDONE_INLINE8
#undef __SFC_SDONE_INLINE9
#undef __SFC_SABORT_INLINE12
#undef __SFC_SABORT_INLINE13





void MC_HALT_init__(MC_HALT *data__, BOOL retain) {
  __INIT_VAR(data__->EN,__BOOL_LITERAL(TRUE),retain)
  __INIT_VAR(data__->ENO,__BOOL_LITERAL(TRUE),retain)
  __INIT_VAR(data__->AXISID,0,retain)
  __INIT_VAR(data__->EXECUTE,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->AXIS,0,retain)
  __INIT_VAR(data__->DONE,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->ABORTED,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->ERROR,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->DECELERATION,0,retain)
  _W_DEC_init__(&data__->WDEC,retain);
  _W_PVA_init__(&data__->WPVA,retain);
  __INIT_VAR(data__->DONEBOOL,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->MOVEBOOL,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->ABORTBOOL,__BOOL_LITERAL(FALSE),retain)
  AXIS_INFO_init__(&data__->AI,retain);
  __INIT_VAR(data__->ISSAME,__BOOL_LITERAL(FALSE),retain)
  _DIFF2_init__(&data__->D2,retain);
  __INIT_VAR(data__->CURLOCK,0,retain)
  __INIT_VAR(data__->CS,0,retain)
  _SESSIONID_init__(&data__->SID,retain);
  __INIT_VAR(data__->RECLOCK,0,retain)
  __INIT_VAR(data__->CURPC,0,retain)
  __INIT_VAR(data__->LASTPC,0,retain)
  __INIT_VAR(data__->CANMOVE,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->SESSIONOVER,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->CLICK3,0,retain)
  R_TRIG_init__(&data__->RRTG,retain);
  __INIT_VAR(data__->ER,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->SCS,0,retain)
  UINT i;
  data__->__nb_steps = 6;
  static const STEP temp_step = {{0, 0}, 0, {{0, 0}, 0}};
  for(i = 0; i < data__->__nb_steps; i++) {
    data__->__step_list[i] = temp_step;
  }
  __SET_VAR(data__->,__step_list[0].X,,1);
  data__->__nb_actions = 26;
  static const ACTION temp_action = {0, {0, 0}, 0, 0, {0, 0}, {0, 0}};
  for(i = 0; i < data__->__nb_actions; i++) {
    data__->__action_list[i] = temp_action;
  }
  data__->__nb_transitions = 7;
  data__->__lasttick_time = __CURRENT_TIME;
}

// Steps definitions
#define INIT __step_list[0]
#define __SFC_INIT 0
#define START __step_list[1]
#define __SFC_START 1
#define MOVING __step_list[2]
#define __SFC_MOVING 2
#define SDONE __step_list[3]
#define __SFC_SDONE 3
#define SOUTDONE __step_list[4]
#define __SFC_SOUTDONE 4
#define SABORTED2 __step_list[5]
#define __SFC_SABORTED2 5

// Actions definitions
#define __SFC_INIT_INLINE22 0
#define __SFC_INIT_INLINE23 1
#define __SFC_INIT_INLINE24 2
#define __SFC_INIT_INLINE25 3
#define __SFC_START_INLINE1 4
#define __SFC_START_INLINE2 5
#define __SFC_START_INLINE3 6
#define __SFC_START_INLINE4 7
#define __SFC_START_INLINE5 8
#define __SFC_START_INLINE6 9
#define __SFC_START_INLINE7 10
#define __SFC_START_INLINE8 11
#define __SFC_START_INLINE9 12
#define __SFC_START_INLINE10 13
#define __SFC_MOVING_INLINE11 14
#define __SFC_MOVING_INLINE12 15
#define __SFC_MOVING_INLINE13 16
#define __SFC_MOVING_INLINE14 17
#define __SFC_MOVING_INLINE15 18
#define __SFC_MOVING_INLINE16 19
#define __SFC_MOVING_INLINE17 20
#define __SFC_SDONE_INLINE18 21
#define __SFC_SDONE_INLINE19 22
#define __SFC_SESSIONOVERIFSS 23
#define __SFC_DONE 24
#define __SFC_ABORTED 25

// Code part
void MC_HALT_body__(MC_HALT *data__) {
  // Control execution
  if (!__GET_VAR(data__->EN)) {
    __SET_VAR(data__->,ENO,,__BOOL_LITERAL(FALSE));
    return;
  }
  else {
    __SET_VAR(data__->,ENO,,__BOOL_LITERAL(TRUE));
  }
  // Initialise TEMP variables

  INT i;
  TIME elapsed_time, current_time;

  // Calculate elapsed_time
  current_time = __CURRENT_TIME;
  elapsed_time = __time_sub(current_time, data__->__lasttick_time);
  data__->__lasttick_time = current_time;
  // Transitions initialization
  if (__DEBUG) {
    for (i = 0; i < data__->__nb_transitions; i++) {
      data__->__transition_list[i] = data__->__debug_transition_list[i];
    }
  }
  // Steps initialization
  for (i = 0; i < data__->__nb_steps; i++) {
    data__->__step_list[i].prev_state = __GET_VAR(data__->__step_list[i].X);
    if (__GET_VAR(data__->__step_list[i].X)) {
      data__->__step_list[i].T.value = __time_add(data__->__step_list[i].T.value, elapsed_time);
    }
  }
  // Actions initialization
  for (i = 0; i < data__->__nb_actions; i++) {
    __SET_VAR(data__->,__action_list[i].state,,0);
    data__->__action_list[i].set = 0;
    data__->__action_list[i].reset = 0;
    if (__time_cmp(data__->__action_list[i].set_remaining_time, __time_to_timespec(1, 0, 0, 0, 0, 0)) > 0) {
      data__->__action_list[i].set_remaining_time = __time_sub(data__->__action_list[i].set_remaining_time, elapsed_time);
      if (__time_cmp(data__->__action_list[i].set_remaining_time, __time_to_timespec(1, 0, 0, 0, 0, 0)) <= 0) {
        data__->__action_list[i].set_remaining_time = __time_to_timespec(1, 0, 0, 0, 0, 0);
        data__->__action_list[i].set = 1;
      }
    }
    if (__time_cmp(data__->__action_list[i].reset_remaining_time, __time_to_timespec(1, 0, 0, 0, 0, 0)) > 0) {
      data__->__action_list[i].reset_remaining_time = __time_sub(data__->__action_list[i].reset_remaining_time, elapsed_time);
      if (__time_cmp(data__->__action_list[i].reset_remaining_time, __time_to_timespec(1, 0, 0, 0, 0, 0)) <= 0) {
        data__->__action_list[i].reset_remaining_time = __time_to_timespec(1, 0, 0, 0, 0, 0);
        data__->__action_list[i].reset = 1;
      }
    }
  }

  // Transitions fire test
  if (__GET_VAR(data__->INIT.X)) {
    __SET_VAR(data__->,__transition_list[0],,__GET_VAR(data__->ER,));
    if (__DEBUG) {
      __SET_VAR(data__->,__debug_transition_list[0],,__GET_VAR(data__->__transition_list[0]));
    }
  }
  else {
    if (__DEBUG) {
      __SET_VAR(data__->,__debug_transition_list[0],,__GET_VAR(data__->ER,));
    }
    __SET_VAR(data__->,__transition_list[0],,0);
  }
  if (__GET_VAR(data__->START.X)) {
    __SET_VAR(data__->,__transition_list[1],,__GET_VAR(data__->MOVEBOOL,));
    if (__DEBUG) {
      __SET_VAR(data__->,__debug_transition_list[1],,__GET_VAR(data__->__transition_list[1]));
    }
  }
  else {
    if (__DEBUG) {
      __SET_VAR(data__->,__debug_transition_list[1],,__GET_VAR(data__->MOVEBOOL,));
    }
    __SET_VAR(data__->,__transition_list[1],,0);
  }
  if (__GET_VAR(data__->MOVING.X)) {
    __SET_VAR(data__->,__transition_list[2],,__GET_VAR(data__->DONEBOOL,));
    if (__DEBUG) {
      __SET_VAR(data__->,__debug_transition_list[2],,__GET_VAR(data__->__transition_list[2]));
    }
  }
  else {
    if (__DEBUG) {
      __SET_VAR(data__->,__debug_transition_list[2],,__GET_VAR(data__->DONEBOOL,));
    }
    __SET_VAR(data__->,__transition_list[2],,0);
  }
  if (__GET_VAR(data__->SDONE.X)) {
    __SET_VAR(data__->,__transition_list[3],,__GET_VAR(data__->SESSIONOVER,));
    if (__DEBUG) {
      __SET_VAR(data__->,__debug_transition_list[3],,__GET_VAR(data__->__transition_list[3]));
    }
  }
  else {
    if (__DEBUG) {
      __SET_VAR(data__->,__debug_transition_list[3],,__GET_VAR(data__->SESSIONOVER,));
    }
    __SET_VAR(data__->,__transition_list[3],,0);
  }
  if (__GET_VAR(data__->SOUTDONE.X)) {
    __SET_VAR(data__->,__transition_list[4],,!(__GET_VAR(data__->EXECUTE,)));
    if (__DEBUG) {
      __SET_VAR(data__->,__debug_transition_list[4],,__GET_VAR(data__->__transition_list[4]));
    }
  }
  else {
    if (__DEBUG) {
      __SET_VAR(data__->,__debug_transition_list[4],,!(__GET_VAR(data__->EXECUTE,)));
    }
    __SET_VAR(data__->,__transition_list[4],,0);
  }
  if (__GET_VAR(data__->MOVING.X)) {
    __SET_VAR(data__->,__transition_list[5],,(__GET_VAR(data__->ABORTBOOL,) || (__GET_VAR(data__->EXECUTE,) == 0)));
    if (__DEBUG) {
      __SET_VAR(data__->,__debug_transition_list[5],,__GET_VAR(data__->__transition_list[5]));
    }
  }
  else {
    if (__DEBUG) {
      __SET_VAR(data__->,__debug_transition_list[5],,(__GET_VAR(data__->ABORTBOOL,) || (__GET_VAR(data__->EXECUTE,) == 0)));
    }
    __SET_VAR(data__->,__transition_list[5],,0);
  }
  if (__GET_VAR(data__->SABORTED2.X)) {
    __SET_VAR(data__->,__transition_list[6],,!(__GET_VAR(data__->EXECUTE,)));
    if (__DEBUG) {
      __SET_VAR(data__->,__debug_transition_list[6],,__GET_VAR(data__->__transition_list[6]));
    }
  }
  else {
    if (__DEBUG) {
      __SET_VAR(data__->,__debug_transition_list[6],,!(__GET_VAR(data__->EXECUTE,)));
    }
    __SET_VAR(data__->,__transition_list[6],,0);
  }

  // Transitions reset steps
  if (__GET_VAR(data__->__transition_list[0])) {
    __SET_VAR(data__->,INIT.X,,0);
  }
  if (__GET_VAR(data__->__transition_list[1])) {
    __SET_VAR(data__->,START.X,,0);
  }
  if (__GET_VAR(data__->__transition_list[2])) {
    __SET_VAR(data__->,MOVING.X,,0);
  }
  if (__GET_VAR(data__->__transition_list[3])) {
    __SET_VAR(data__->,SDONE.X,,0);
  }
  if (__GET_VAR(data__->__transition_list[4])) {
    __SET_VAR(data__->,SOUTDONE.X,,0);
  }
  if (__GET_VAR(data__->__transition_list[5])) {
    __SET_VAR(data__->,MOVING.X,,0);
  }
  if (__GET_VAR(data__->__transition_list[6])) {
    __SET_VAR(data__->,SABORTED2.X,,0);
  }

  // Transitions set steps
  if (__GET_VAR(data__->__transition_list[0])) {
    __SET_VAR(data__->,START.X,,1);
    data__->START.T.value = __time_to_timespec(1, 0, 0, 0, 0, 0);
  }
  if (__GET_VAR(data__->__transition_list[1])) {
    __SET_VAR(data__->,MOVING.X,,1);
    data__->MOVING.T.value = __time_to_timespec(1, 0, 0, 0, 0, 0);
  }
  if (__GET_VAR(data__->__transition_list[2])) {
    __SET_VAR(data__->,SDONE.X,,1);
    data__->SDONE.T.value = __time_to_timespec(1, 0, 0, 0, 0, 0);
  }
  if (__GET_VAR(data__->__transition_list[3])) {
    __SET_VAR(data__->,SOUTDONE.X,,1);
    data__->SOUTDONE.T.value = __time_to_timespec(1, 0, 0, 0, 0, 0);
  }
  if (__GET_VAR(data__->__transition_list[4])) {
    __SET_VAR(data__->,INIT.X,,1);
    data__->INIT.T.value = __time_to_timespec(1, 0, 0, 0, 0, 0);
  }
  if (__GET_VAR(data__->__transition_list[5])) {
    __SET_VAR(data__->,SABORTED2.X,,1);
    data__->SABORTED2.T.value = __time_to_timespec(1, 0, 0, 0, 0, 0);
  }
  if (__GET_VAR(data__->__transition_list[6])) {
    __SET_VAR(data__->,INIT.X,,1);
    data__->INIT.T.value = __time_to_timespec(1, 0, 0, 0, 0, 0);
  }

  // Steps association
  // INIT action associations
  {
    char active = __GET_VAR(data__->INIT.X);
    char activated = active && !data__->INIT.prev_state;
    char desactivated = !active && data__->INIT.prev_state;

    if (active)       {__SET_VAR(data__->,__action_list[__SFC_INIT_INLINE22].state,,1);};
    if (desactivated) {__SET_VAR(data__->,__action_list[__SFC_INIT_INLINE22].state,,0);};

    if (active)       {__SET_VAR(data__->,__action_list[__SFC_INIT_INLINE23].state,,1);};
    if (desactivated) {__SET_VAR(data__->,__action_list[__SFC_INIT_INLINE23].state,,0);};

    if (active)       {__SET_VAR(data__->,__action_list[__SFC_INIT_INLINE24].state,,1);};
    if (desactivated) {__SET_VAR(data__->,__action_list[__SFC_INIT_INLINE24].state,,0);};

    if (active)       {__SET_VAR(data__->,__action_list[__SFC_INIT_INLINE25].state,,1);};
    if (desactivated) {__SET_VAR(data__->,__action_list[__SFC_INIT_INLINE25].state,,0);};

  }

  // START action associations
  {
    char active = __GET_VAR(data__->START.X);
    char activated = active && !data__->START.prev_state;
    char desactivated = !active && data__->START.prev_state;

    if (activated)    {__SET_VAR(data__->,__action_list[__SFC_START_INLINE1].state,,1);}
    else              {__SET_VAR(data__->,__action_list[__SFC_START_INLINE1].state,,0);};

    if (activated)    {__SET_VAR(data__->,__action_list[__SFC_START_INLINE2].state,,1);}
    else              {__SET_VAR(data__->,__action_list[__SFC_START_INLINE2].state,,0);};

    if (activated)    {__SET_VAR(data__->,__action_list[__SFC_START_INLINE3].state,,1);}
    else              {__SET_VAR(data__->,__action_list[__SFC_START_INLINE3].state,,0);};

    if (activated)    {__SET_VAR(data__->,__action_list[__SFC_START_INLINE4].state,,1);}
    else              {__SET_VAR(data__->,__action_list[__SFC_START_INLINE4].state,,0);};

    if (activated)    {__SET_VAR(data__->,__action_list[__SFC_START_INLINE5].state,,1);}
    else              {__SET_VAR(data__->,__action_list[__SFC_START_INLINE5].state,,0);};

    if (activated)    {__SET_VAR(data__->,__action_list[__SFC_START_INLINE6].state,,1);}
    else              {__SET_VAR(data__->,__action_list[__SFC_START_INLINE6].state,,0);};

    if (activated)    {__SET_VAR(data__->,__action_list[__SFC_START_INLINE7].state,,1);}
    else              {__SET_VAR(data__->,__action_list[__SFC_START_INLINE7].state,,0);};

    if (activated)    {__SET_VAR(data__->,__action_list[__SFC_START_INLINE8].state,,1);}
    else              {__SET_VAR(data__->,__action_list[__SFC_START_INLINE8].state,,0);};

    if (activated)    {__SET_VAR(data__->,__action_list[__SFC_START_INLINE9].state,,1);}
    else              {__SET_VAR(data__->,__action_list[__SFC_START_INLINE9].state,,0);};

    if (activated)    {__SET_VAR(data__->,__action_list[__SFC_START_INLINE10].state,,1);}
    else              {__SET_VAR(data__->,__action_list[__SFC_START_INLINE10].state,,0);};

  }

  // MOVING action associations
  {
    char active = __GET_VAR(data__->MOVING.X);
    char activated = active && !data__->MOVING.prev_state;
    char desactivated = !active && data__->MOVING.prev_state;

    if (active)       {__SET_VAR(data__->,__action_list[__SFC_MOVING_INLINE11].state,,1);};
    if (desactivated) {__SET_VAR(data__->,__action_list[__SFC_MOVING_INLINE11].state,,0);};

    if (active)       {__SET_VAR(data__->,__action_list[__SFC_MOVING_INLINE12].state,,1);};
    if (desactivated) {__SET_VAR(data__->,__action_list[__SFC_MOVING_INLINE12].state,,0);};

    if (active)       {__SET_VAR(data__->,__action_list[__SFC_MOVING_INLINE13].state,,1);};
    if (desactivated) {__SET_VAR(data__->,__action_list[__SFC_MOVING_INLINE13].state,,0);};

    if (active)       {__SET_VAR(data__->,__action_list[__SFC_MOVING_INLINE14].state,,1);};
    if (desactivated) {__SET_VAR(data__->,__action_list[__SFC_MOVING_INLINE14].state,,0);};

    if (active)       {__SET_VAR(data__->,__action_list[__SFC_MOVING_INLINE15].state,,1);};
    if (desactivated) {__SET_VAR(data__->,__action_list[__SFC_MOVING_INLINE15].state,,0);};

    if (active)       {__SET_VAR(data__->,__action_list[__SFC_MOVING_INLINE16].state,,1);};
    if (desactivated) {__SET_VAR(data__->,__action_list[__SFC_MOVING_INLINE16].state,,0);};

    if (active)       {__SET_VAR(data__->,__action_list[__SFC_MOVING_INLINE17].state,,1);};
    if (desactivated) {__SET_VAR(data__->,__action_list[__SFC_MOVING_INLINE17].state,,0);};

  }

  // SDONE action associations
  {
    char active = __GET_VAR(data__->SDONE.X);
    char activated = active && !data__->SDONE.prev_state;
    char desactivated = !active && data__->SDONE.prev_state;

    if (activated)    {__SET_VAR(data__->,__action_list[__SFC_SDONE_INLINE18].state,,1);}
    else              {__SET_VAR(data__->,__action_list[__SFC_SDONE_INLINE18].state,,0);};

    if (activated)    {__SET_VAR(data__->,__action_list[__SFC_SDONE_INLINE19].state,,1);}
    else              {__SET_VAR(data__->,__action_list[__SFC_SDONE_INLINE19].state,,0);};

    if (active)       {__SET_VAR(data__->,__action_list[__SFC_SESSIONOVERIFSS].state,,1);};
    if (desactivated) {__SET_VAR(data__->,__action_list[__SFC_SESSIONOVERIFSS].state,,0);};

  }

  // SOUTDONE action associations
  {
    char active = __GET_VAR(data__->SOUTDONE.X);
    char activated = active && !data__->SOUTDONE.prev_state;
    char desactivated = !active && data__->SOUTDONE.prev_state;

    if (active && __time_cmp(data__->SOUTDONE.T.value, __time_to_timespec(1, 0, 0.01, 0, 0, 0)) < 0) 
                      {__SET_VAR(data__->,DONE,,1);}
    else if (desactivated || active)
                      {__SET_VAR(data__->,DONE,,0);};

  }

  // SABORTED2 action associations
  {
    char active = __GET_VAR(data__->SABORTED2.X);
    char activated = active && !data__->SABORTED2.prev_state;
    char desactivated = !active && data__->SABORTED2.prev_state;

    if (active && __time_cmp(data__->SABORTED2.T.value, __time_to_timespec(1, 0, 0.01, 0, 0, 0)) < 0) 
                      {__SET_VAR(data__->,ABORTED,,1);}
    else if (desactivated || active)
                      {__SET_VAR(data__->,ABORTED,,0);};

  }


  // Actions state evaluation
  for (i = 0; i < data__->__nb_actions; i++) {
    if (data__->__action_list[i].set) {
      data__->__action_list[i].set_remaining_time = __time_to_timespec(1, 0, 0, 0, 0, 0);
      data__->__action_list[i].stored = 1;
    }
    if (data__->__action_list[i].reset) {
      data__->__action_list[i].reset_remaining_time = __time_to_timespec(1, 0, 0, 0, 0, 0);
      data__->__action_list[i].stored = 0;
    }
    __SET_VAR(data__->,__action_list[i].state,,__GET_VAR(data__->__action_list[i].state) | data__->__action_list[i].stored);
  }

  // Actions execution
  if (data__->__action_list[__SFC_DONE].reset) {
    __SET_VAR(data__->,DONE,,0);
  }
  else if (data__->__action_list[__SFC_DONE].set) {
    __SET_VAR(data__->,DONE,,1);
  }
  if (data__->__action_list[__SFC_ABORTED].reset) {
    __SET_VAR(data__->,ABORTED,,0);
  }
  else if (data__->__action_list[__SFC_ABORTED].set) {
    __SET_VAR(data__->,ABORTED,,1);
  }
  if(__GET_VAR(data__->__action_list[__SFC_INIT_INLINE22].state)) {
    __SET_VAR(data__->,AXIS,,__GET_VAR(data__->AXISID,));
  }

  if(__GET_VAR(data__->__action_list[__SFC_INIT_INLINE23].state)) {
    __SET_VAR(data__->AI.,ROW,,__BOOL_LITERAL(FALSE));
    __SET_VAR(data__->AI.,NODEID,,__GET_VAR(data__->AXISID,));
    __SET_VAR(data__->AI.,PNAME,,__STRING_LITERAL(5,"STATE"));
    AXIS_INFO_body__(&data__->AI);
  }

  if(__GET_VAR(data__->__action_list[__SFC_INIT_INLINE24].state)) {
    __SET_VAR(data__->,SCS,,__GET_VAR(data__->AI.OUTU32,));
  }

  if(__GET_VAR(data__->__action_list[__SFC_INIT_INLINE25].state)) {
    if ((((__GET_VAR(data__->SCS,) == 2) || (__GET_VAR(data__->SCS,) == 3)) || (__GET_VAR(data__->SCS,) == 5))) {
      __SET_VAR(data__->RRTG.,CLK,,__GET_VAR(data__->EXECUTE,));
      R_TRIG_body__(&data__->RRTG);
      __SET_VAR(data__->,ER,,__GET_VAR(data__->RRTG.Q));
    } else {
      __SET_VAR(data__->,ER,,0);
    };
  }

  if(__GET_VAR(data__->__action_list[__SFC_START_INLINE1].state)) {
    __SET_VAR(data__->,DONE,,__BOOL_LITERAL(FALSE));
  }

  if(__GET_VAR(data__->__action_list[__SFC_START_INLINE2].state)) {
    __SET_VAR(data__->,DONEBOOL,,__BOOL_LITERAL(FALSE));
  }

  if(__GET_VAR(data__->__action_list[__SFC_START_INLINE3].state)) {
    __SET_VAR(data__->,ABORTBOOL,,__BOOL_LITERAL(FALSE));
  }

  if(__GET_VAR(data__->__action_list[__SFC_START_INLINE4].state)) {
    __SET_VAR(data__->AI.,ROW,,__BOOL_LITERAL(FALSE));
    __SET_VAR(data__->AI.,NODEID,,__GET_VAR(data__->AXISID,));
    __SET_VAR(data__->AI.,PNAME,,__STRING_LITERAL(4,"DMAX"));
    AXIS_INFO_body__(&data__->AI);
  }

  if(__GET_VAR(data__->__action_list[__SFC_START_INLINE5].state)) {
    if ((__GET_VAR(data__->AI.OUTR,) == 0.0)) {
      __SET_VAR(data__->AI.,ROW,,__BOOL_LITERAL(FALSE));
      __SET_VAR(data__->AI.,NODEID,,__GET_VAR(data__->AXISID,));
      __SET_VAR(data__->AI.,PNAME,,__STRING_LITERAL(4,"AMAX"));
      AXIS_INFO_body__(&data__->AI);
    };
  }

  if(__GET_VAR(data__->__action_list[__SFC_START_INLINE6].state)) {
    __SET_VAR(data__->,DECELERATION,,__GET_VAR(data__->AI.OUTR,));
  }

  if(__GET_VAR(data__->__action_list[__SFC_START_INLINE7].state)) {
    __SET_VAR(data__->SID.,ROW,,__BOOL_LITERAL(TRUE));
    __SET_VAR(data__->SID.,AXISID,,__GET_VAR(data__->AXISID,));
    _SESSIONID_body__(&data__->SID);
    __SET_VAR(data__->,CURLOCK,,__GET_VAR(data__->SID.FBD_ABORT_FLAG));
  }

  if(__GET_VAR(data__->__action_list[__SFC_START_INLINE8].state)) {
    __SET_VAR(data__->WDEC.,AXISID,,__GET_VAR(data__->AXISID,));
    __SET_VAR(data__->WDEC.,DONEFLAG,,__BOOL_LITERAL(FALSE));
    __SET_VAR(data__->WDEC.,EXECUTEFLAG,,__BOOL_LITERAL(TRUE));
    __SET_VAR(data__->WDEC.,COMMANDTYPE,,7);
    _W_DEC_body__(&data__->WDEC);
  }

  if(__GET_VAR(data__->__action_list[__SFC_START_INLINE9].state)) {
    __SET_VAR(data__->AI.,ROW,,__BOOL_LITERAL(TRUE));
    __SET_VAR(data__->AI.,NODEID,,__GET_VAR(data__->AXISID,));
    __SET_VAR(data__->AI.,PNAME,,__STRING_LITERAL(6,"INTERA"));
    __SET_VAR(data__->AI.,INR,,__GET_VAR(data__->DECELERATION,));
    AXIS_INFO_body__(&data__->AI);
  }

  if(__GET_VAR(data__->__action_list[__SFC_START_INLINE10].state)) {
    __SET_VAR(data__->,MOVEBOOL,,__BOOL_LITERAL(TRUE));
  }

  if(__GET_VAR(data__->__action_list[__SFC_MOVING_INLINE11].state)) {
    __SET_VAR(data__->AI.,ROW,,__BOOL_LITERAL(TRUE));
    __SET_VAR(data__->AI.,NODEID,,__GET_VAR(data__->AXISID,));
    __SET_VAR(data__->AI.,PNAME,,__STRING_LITERAL(6,"INTERV"));
    __SET_VAR(data__->AI.,INR,,0.0);
    AXIS_INFO_body__(&data__->AI);
  }

  if(__GET_VAR(data__->__action_list[__SFC_MOVING_INLINE12].state)) {
    __SET_VAR(data__->SID.,ROW,,__BOOL_LITERAL(FALSE));
    __SET_VAR(data__->SID.,AXISID,,__GET_VAR(data__->AXISID,));
    _SESSIONID_body__(&data__->SID);
    __SET_VAR(data__->,RECLOCK,,__GET_VAR(data__->SID.FBD_ABORT_FLAG));
  }

  if(__GET_VAR(data__->__action_list[__SFC_MOVING_INLINE13].state)) {
    if ((__GET_VAR(data__->RECLOCK,) != __GET_VAR(data__->CURLOCK,))) {
      __SET_VAR(data__->,ABORTBOOL,,__BOOL_LITERAL(TRUE));
      __SET_VAR(data__->,DONEBOOL,,__BOOL_LITERAL(FALSE));
    };
  }

  if(__GET_VAR(data__->__action_list[__SFC_MOVING_INLINE14].state)) {
    __SET_VAR(data__->AI.,ROW,,__BOOL_LITERAL(FALSE));
    __SET_VAR(data__->AI.,NODEID,,__GET_VAR(data__->AXISID,));
    __SET_VAR(data__->AI.,PNAME,,__STRING_LITERAL(7,"INTERPC"));
    AXIS_INFO_body__(&data__->AI);
    __SET_VAR(data__->,CURPC,,__GET_VAR(data__->AI.OUTR));
  }

  if(__GET_VAR(data__->__action_list[__SFC_MOVING_INLINE15].state)) {
    __SET_VAR(data__->D2.,P1,,__GET_VAR(data__->LASTPC,));
    __SET_VAR(data__->D2.,P2,,__GET_VAR(data__->CURPC,));
    _DIFF2_body__(&data__->D2);
    __SET_VAR(data__->,ISSAME,,__GET_VAR(data__->D2.SAME));
  }

  if(__GET_VAR(data__->__action_list[__SFC_MOVING_INLINE16].state)) {
    if (__GET_VAR(data__->ISSAME,)) {
      __SET_VAR(data__->,DONEBOOL,,__BOOL_LITERAL(TRUE));
      __SET_VAR(data__->,ABORTBOOL,,__BOOL_LITERAL(FALSE));
    };
  }

  if(__GET_VAR(data__->__action_list[__SFC_MOVING_INLINE17].state)) {
    __SET_VAR(data__->,LASTPC,,__GET_VAR(data__->CURPC,));
  }

  if(__GET_VAR(data__->__action_list[__SFC_SDONE_INLINE18].state)) {
    __SET_VAR(data__->WDEC.,AXISID,,__GET_VAR(data__->AXISID,));
    __SET_VAR(data__->WDEC.,DONEFLAG,,__BOOL_LITERAL(TRUE));
    __SET_VAR(data__->WDEC.,EXECUTEFLAG,,__BOOL_LITERAL(FALSE));
    __SET_VAR(data__->WDEC.,COMMANDTYPE,,7);
    _W_DEC_body__(&data__->WDEC);
  }

  if(__GET_VAR(data__->__action_list[__SFC_SDONE_INLINE19].state)) {
    __SET_VAR(data__->,DONEBOOL,,0);
  }

  if(__GET_VAR(data__->__action_list[__SFC_SESSIONOVERIFSS].state)) {
    __SET_VAR(data__->AI.,ROW,,__BOOL_LITERAL(FALSE));
    __SET_VAR(data__->AI.,NODEID,,__GET_VAR(data__->AXISID,));
    __SET_VAR(data__->AI.,PNAME,,__STRING_LITERAL(5,"STATE"));
    AXIS_INFO_body__(&data__->AI);
    if ((__GET_VAR(data__->AI.OUTU32,) == 1)) {
      __SET_VAR(data__->,SESSIONOVER,,__BOOL_LITERAL(TRUE));
    } else {
      __SET_VAR(data__->,SESSIONOVER,,__BOOL_LITERAL(FALSE));
    };
  }



  goto __end;

__end:
  return;
} // MC_HALT_body__() 

// Steps undefinitions
#undef INIT
#undef __SFC_INIT
#undef START
#undef __SFC_START
#undef MOVING
#undef __SFC_MOVING
#undef SDONE
#undef __SFC_SDONE
#undef SOUTDONE
#undef __SFC_SOUTDONE
#undef SABORTED2
#undef __SFC_SABORTED2

// Actions undefinitions
#undef __SFC_INIT_INLINE22
#undef __SFC_INIT_INLINE23
#undef __SFC_INIT_INLINE24
#undef __SFC_INIT_INLINE25
#undef __SFC_START_INLINE1
#undef __SFC_START_INLINE2
#undef __SFC_START_INLINE3
#undef __SFC_START_INLINE4
#undef __SFC_START_INLINE5
#undef __SFC_START_INLINE6
#undef __SFC_START_INLINE7
#undef __SFC_START_INLINE8
#undef __SFC_START_INLINE9
#undef __SFC_START_INLINE10
#undef __SFC_MOVING_INLINE11
#undef __SFC_MOVING_INLINE12
#undef __SFC_MOVING_INLINE13
#undef __SFC_MOVING_INLINE14
#undef __SFC_MOVING_INLINE15
#undef __SFC_MOVING_INLINE16
#undef __SFC_MOVING_INLINE17
#undef __SFC_SDONE_INLINE18
#undef __SFC_SDONE_INLINE19
#undef __SFC_SESSIONOVERIFSS
#undef __SFC_DONE
#undef __SFC_ABORTED





void MC_HOME_init__(MC_HOME *data__, BOOL retain) {
  __INIT_VAR(data__->EN,__BOOL_LITERAL(TRUE),retain)
  __INIT_VAR(data__->ENO,__BOOL_LITERAL(TRUE),retain)
  __INIT_VAR(data__->AXISID,0,retain)
  __INIT_VAR(data__->EXECUTE,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->POSITION,0.0,retain)
  __INIT_VAR(data__->VELSWITCH,0.0,retain)
  __INIT_VAR(data__->SWITCH,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->AXIS,0,retain)
  __INIT_VAR(data__->DONE,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->ABORTED,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->ERROR,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->VELZPLUS,1.0,retain)
  __INIT_VAR(data__->ZPLUS,__BOOL_LITERAL(FALSE),retain)
  _W_DEC_init__(&data__->WDEC,retain);
  _W_PVA_init__(&data__->WPVA,retain);
  __INIT_VAR(data__->ABORTBOOL,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->DONEBOOL,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->MOVEBOOL,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->CURLOCK,0,retain)
  __INIT_VAR(data__->RECLOCK,0,retain)
  _SESSIONID_init__(&data__->SID,retain);
  AXIS_INFO_init__(&data__->AI,retain);
  _VACLAMP_init__(&data__->VCLAMP,retain);
  __INIT_VAR(data__->CLICK3,3,retain)
  __INIT_VAR(data__->SESSIONOVER,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->CURPOS,0,retain)
  _CP0POS_init__(&data__->CP0,retain);
  __INIT_VAR(data__->P0OK,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->VO,0,retain)
  __INIT_VAR(data__->VPC,0,retain)
  __INIT_VAR(data__->SCS,0,retain)
  __INIT_VAR(data__->BSS,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->CS,0,retain)
  __INIT_VAR(data__->AO,0,retain)
  __INIT_VAR(data__->TPNULL,0,retain)
  __INIT_VAR(data__->VE0,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->CURVEL,0,retain)
  __INIT_VAR(data__->MPP,0,retain)
  __INIT_VAR(data__->P0P,0,retain)
  F_TRIG_init__(&data__->FTG,retain);
  __INIT_VAR(data__->SWITCHFE,__BOOL_LITERAL(FALSE),retain)
  R_TRIG_init__(&data__->RRTG,retain);
  __INIT_VAR(data__->ER,__BOOL_LITERAL(FALSE),retain)
  _DIFF2_init__(&data__->D2,retain);
  __INIT_VAR(data__->ISSAME,__BOOL_LITERAL(FALSE),retain)
  UINT i;
  data__->__nb_steps = 14;
  static const STEP temp_step = {{0, 0}, 0, {{0, 0}, 0}};
  for(i = 0; i < data__->__nb_steps; i++) {
    data__->__step_list[i] = temp_step;
  }
  __SET_VAR(data__->,__step_list[0].X,,1);
  data__->__nb_actions = 48;
  static const ACTION temp_action = {0, {0, 0}, 0, 0, {0, 0}, {0, 0}};
  for(i = 0; i < data__->__nb_actions; i++) {
    data__->__action_list[i] = temp_action;
  }
  data__->__nb_transitions = 18;
  data__->__lasttick_time = __CURRENT_TIME;
}

// Steps definitions
#define INIT __step_list[0]
#define __SFC_INIT 0
#define START __step_list[1]
#define __SFC_START 1
#define SSWITCH __step_list[2]
#define __SFC_SSWITCH 2
#define SABORTED __step_list[3]
#define __SFC_SABORTED 3
#define SABORTED2 __step_list[4]
#define __SFC_SABORTED2 4
#define DOWN01 __step_list[5]
#define __SFC_DOWN01 5
#define DOWN011 __step_list[6]
#define __SFC_DOWN011 6
#define SWITCHRESET __step_list[7]
#define __SFC_SWITCHRESET 7
#define SWITCHRESET1 __step_list[8]
#define __SFC_SWITCHRESET1 8
#define DOWN02 __step_list[9]
#define __SFC_DOWN02 9
#define DOWN022 __step_list[10]
#define __SFC_DOWN022 10
#define SETP0 __step_list[11]
#define __SFC_SETP0 11
#define SDONE __step_list[12]
#define __SFC_SDONE 12
#define SDONE2 __step_list[13]
#define __SFC_SDONE2 13

// Actions definitions
#define __SFC_INIT_INLINE37 0
#define __SFC_INITORRESET 1
#define __SFC_START_INLINE1 2
#define __SFC_START_INLINE2 3
#define __SFC_START_INLINE3 4
#define __SFC_START_INLINE4 5
#define __SFC_START_INLINE5 6
#define __SFC_START_INLINE6 7
#define __SFC_START_INLINE7 8
#define __SFC_START_INLINE8 9
#define __SFC_START_INLINE9 10
#define __SFC_START_INLINE10 11
#define __SFC_SSWITCH_INLINE13 12
#define __SFC_ABORTORNOT 13
#define __SFC_SABORTED_INLINE16 14
#define __SFC_SESSIONOVERIFSS 15
#define __SFC_SABORTED2_INLINE48 16
#define __SFC_SABORTED2_INLINE49 17
#define __SFC_SABORTED2_INLINE50 18
#define __SFC_DOWN01_INLINE43 19
#define __SFC_DOWN01_INLINE44 20
#define __SFC_DOWN011_INLINE19 21
#define __SFC_VE0ORNOT 22
#define __SFC_SWITCHRESET_INLINE38 23
#define __SFC_SWITCHRESET_INLINE39 24
#define __SFC_SWITCHRESET_INLINE40 25
#define __SFC_SWITCHRESET_INLINE41 26
#define __SFC_SWITCHRESET_INLINE42 27
#define __SFC_SWITCHRESET1_INLINE17 28
#define __SFC_SWITCHRESET1_INLINE18 29
#define __SFC_DOWN02_INLINE21 30
#define __SFC_DOWN02_INLINE22 31
#define __SFC_DOWN022_INLINE20 32
#define __SFC_SETP0_INLINE23 33
#define __SFC_SETP0_INLINE24 34
#define __SFC_SETP0_INLINE25 35
#define __SFC_SETP0_INLINE26 36
#define __SFC_SETP0_INLINE27 37
#define __SFC_SETP0_INLINE28 38
#define __SFC_SETP0_INLINE29 39
#define __SFC_SETP0_INLINE30 40
#define __SFC_SETP0_INLINE31 41
#define __SFC_SETP0_INLINE32 42
#define __SFC_SDONE_INLINE14 43
#define __SFC_SDONE_INLINE15 44
#define __SFC_SDONE2_INLINE45 45
#define __SFC_SDONE2_INLINE46 46
#define __SFC_SDONE2_INLINE47 47

// Code part
void MC_HOME_body__(MC_HOME *data__) {
  // Control execution
  if (!__GET_VAR(data__->EN)) {
    __SET_VAR(data__->,ENO,,__BOOL_LITERAL(FALSE));
    return;
  }
  else {
    __SET_VAR(data__->,ENO,,__BOOL_LITERAL(TRUE));
  }
  // Initialise TEMP variables

  INT i;
  TIME elapsed_time, current_time;

  // Calculate elapsed_time
  current_time = __CURRENT_TIME;
  elapsed_time = __time_sub(current_time, data__->__lasttick_time);
  data__->__lasttick_time = current_time;
  // Transitions initialization
  if (__DEBUG) {
    for (i = 0; i < data__->__nb_transitions; i++) {
      data__->__transition_list[i] = data__->__debug_transition_list[i];
    }
  }
  // Steps initialization
  for (i = 0; i < data__->__nb_steps; i++) {
    data__->__step_list[i].prev_state = __GET_VAR(data__->__step_list[i].X);
    if (__GET_VAR(data__->__step_list[i].X)) {
      data__->__step_list[i].T.value = __time_add(data__->__step_list[i].T.value, elapsed_time);
    }
  }
  // Actions initialization
  for (i = 0; i < data__->__nb_actions; i++) {
    __SET_VAR(data__->,__action_list[i].state,,0);
    data__->__action_list[i].set = 0;
    data__->__action_list[i].reset = 0;
    if (__time_cmp(data__->__action_list[i].set_remaining_time, __time_to_timespec(1, 0, 0, 0, 0, 0)) > 0) {
      data__->__action_list[i].set_remaining_time = __time_sub(data__->__action_list[i].set_remaining_time, elapsed_time);
      if (__time_cmp(data__->__action_list[i].set_remaining_time, __time_to_timespec(1, 0, 0, 0, 0, 0)) <= 0) {
        data__->__action_list[i].set_remaining_time = __time_to_timespec(1, 0, 0, 0, 0, 0);
        data__->__action_list[i].set = 1;
      }
    }
    if (__time_cmp(data__->__action_list[i].reset_remaining_time, __time_to_timespec(1, 0, 0, 0, 0, 0)) > 0) {
      data__->__action_list[i].reset_remaining_time = __time_sub(data__->__action_list[i].reset_remaining_time, elapsed_time);
      if (__time_cmp(data__->__action_list[i].reset_remaining_time, __time_to_timespec(1, 0, 0, 0, 0, 0)) <= 0) {
        data__->__action_list[i].reset_remaining_time = __time_to_timespec(1, 0, 0, 0, 0, 0);
        data__->__action_list[i].reset = 1;
      }
    }
  }

  // Transitions fire test
  if (__GET_VAR(data__->INIT.X)) {
    __SET_VAR(data__->,__transition_list[0],,__GET_VAR(data__->ER,));
    if (__DEBUG) {
      __SET_VAR(data__->,__debug_transition_list[0],,__GET_VAR(data__->__transition_list[0]));
    }
  }
  else {
    if (__DEBUG) {
      __SET_VAR(data__->,__debug_transition_list[0],,__GET_VAR(data__->ER,));
    }
    __SET_VAR(data__->,__transition_list[0],,0);
  }
  if (__GET_VAR(data__->START.X)) {
    __SET_VAR(data__->,__transition_list[1],,__GET_VAR(data__->MOVEBOOL,));
    if (__DEBUG) {
      __SET_VAR(data__->,__debug_transition_list[1],,__GET_VAR(data__->__transition_list[1]));
    }
  }
  else {
    if (__DEBUG) {
      __SET_VAR(data__->,__debug_transition_list[1],,__GET_VAR(data__->MOVEBOOL,));
    }
    __SET_VAR(data__->,__transition_list[1],,0);
  }
  if (__GET_VAR(data__->SSWITCH.X)) {
    __SET_VAR(data__->,__transition_list[2],,__GET_VAR(data__->ABORTBOOL,));
    if (__DEBUG) {
      __SET_VAR(data__->,__debug_transition_list[2],,__GET_VAR(data__->__transition_list[2]));
    }
  }
  else {
    if (__DEBUG) {
      __SET_VAR(data__->,__debug_transition_list[2],,__GET_VAR(data__->ABORTBOOL,));
    }
    __SET_VAR(data__->,__transition_list[2],,0);
  }
  if (__GET_VAR(data__->SABORTED.X)) {
    __SET_VAR(data__->,__transition_list[3],,__GET_VAR(data__->SESSIONOVER,));
    if (__DEBUG) {
      __SET_VAR(data__->,__debug_transition_list[3],,__GET_VAR(data__->__transition_list[3]));
    }
  }
  else {
    if (__DEBUG) {
      __SET_VAR(data__->,__debug_transition_list[3],,__GET_VAR(data__->SESSIONOVER,));
    }
    __SET_VAR(data__->,__transition_list[3],,0);
  }
  if (__GET_VAR(data__->SABORTED2.X)) {
    __SET_VAR(data__->,__transition_list[4],,__GET_VAR(data__->P0OK,));
    if (__DEBUG) {
      __SET_VAR(data__->,__debug_transition_list[4],,__GET_VAR(data__->__transition_list[4]));
    }
  }
  else {
    if (__DEBUG) {
      __SET_VAR(data__->,__debug_transition_list[4],,__GET_VAR(data__->P0OK,));
    }
    __SET_VAR(data__->,__transition_list[4],,0);
  }
  if (__GET_VAR(data__->SSWITCH.X)) {
    __SET_VAR(data__->,__transition_list[5],,__GET_VAR(data__->SWITCH,));
    if (__DEBUG) {
      __SET_VAR(data__->,__debug_transition_list[5],,__GET_VAR(data__->__transition_list[5]));
    }
  }
  else {
    if (__DEBUG) {
      __SET_VAR(data__->,__debug_transition_list[5],,__GET_VAR(data__->SWITCH,));
    }
    __SET_VAR(data__->,__transition_list[5],,0);
  }
  if (__GET_VAR(data__->DOWN01.X)) {
    __SET_VAR(data__->,__transition_list[6],,__GET_VAR(data__->MOVEBOOL,));
    if (__DEBUG) {
      __SET_VAR(data__->,__debug_transition_list[6],,__GET_VAR(data__->__transition_list[6]));
    }
  }
  else {
    if (__DEBUG) {
      __SET_VAR(data__->,__debug_transition_list[6],,__GET_VAR(data__->MOVEBOOL,));
    }
    __SET_VAR(data__->,__transition_list[6],,0);
  }
  if (__GET_VAR(data__->DOWN011.X)) {
    __SET_VAR(data__->,__transition_list[7],,__GET_VAR(data__->VE0,));
    if (__DEBUG) {
      __SET_VAR(data__->,__debug_transition_list[7],,__GET_VAR(data__->__transition_list[7]));
    }
  }
  else {
    if (__DEBUG) {
      __SET_VAR(data__->,__debug_transition_list[7],,__GET_VAR(data__->VE0,));
    }
    __SET_VAR(data__->,__transition_list[7],,0);
  }
  if (__GET_VAR(data__->SWITCHRESET.X)) {
    __SET_VAR(data__->,__transition_list[8],,__GET_VAR(data__->MOVEBOOL,));
    if (__DEBUG) {
      __SET_VAR(data__->,__debug_transition_list[8],,__GET_VAR(data__->__transition_list[8]));
    }
  }
  else {
    if (__DEBUG) {
      __SET_VAR(data__->,__debug_transition_list[8],,__GET_VAR(data__->MOVEBOOL,));
    }
    __SET_VAR(data__->,__transition_list[8],,0);
  }
  if (__GET_VAR(data__->SWITCHRESET1.X)) {
    __SET_VAR(data__->,__transition_list[9],,__GET_VAR(data__->SWITCHFE,));
    if (__DEBUG) {
      __SET_VAR(data__->,__debug_transition_list[9],,__GET_VAR(data__->__transition_list[9]));
    }
  }
  else {
    if (__DEBUG) {
      __SET_VAR(data__->,__debug_transition_list[9],,__GET_VAR(data__->SWITCHFE,));
    }
    __SET_VAR(data__->,__transition_list[9],,0);
  }
  if (__GET_VAR(data__->DOWN02.X)) {
    __SET_VAR(data__->,__transition_list[10],,__GET_VAR(data__->MOVEBOOL,));
    if (__DEBUG) {
      __SET_VAR(data__->,__debug_transition_list[10],,__GET_VAR(data__->__transition_list[10]));
    }
  }
  else {
    if (__DEBUG) {
      __SET_VAR(data__->,__debug_transition_list[10],,__GET_VAR(data__->MOVEBOOL,));
    }
    __SET_VAR(data__->,__transition_list[10],,0);
  }
  if (__GET_VAR(data__->DOWN022.X)) {
    __SET_VAR(data__->,__transition_list[11],,__GET_VAR(data__->VE0,));
    if (__DEBUG) {
      __SET_VAR(data__->,__debug_transition_list[11],,__GET_VAR(data__->__transition_list[11]));
    }
  }
  else {
    if (__DEBUG) {
      __SET_VAR(data__->,__debug_transition_list[11],,__GET_VAR(data__->VE0,));
    }
    __SET_VAR(data__->,__transition_list[11],,0);
  }
  if (__GET_VAR(data__->SETP0.X)) {
    __SET_VAR(data__->,__transition_list[12],,__GET_VAR(data__->P0OK,));
    if (__DEBUG) {
      __SET_VAR(data__->,__debug_transition_list[12],,__GET_VAR(data__->__transition_list[12]));
    }
  }
  else {
    if (__DEBUG) {
      __SET_VAR(data__->,__debug_transition_list[12],,__GET_VAR(data__->P0OK,));
    }
    __SET_VAR(data__->,__transition_list[12],,0);
  }
  if (__GET_VAR(data__->SDONE.X)) {
    __SET_VAR(data__->,__transition_list[13],,__GET_VAR(data__->SESSIONOVER,));
    if (__DEBUG) {
      __SET_VAR(data__->,__debug_transition_list[13],,__GET_VAR(data__->__transition_list[13]));
    }
  }
  else {
    if (__DEBUG) {
      __SET_VAR(data__->,__debug_transition_list[13],,__GET_VAR(data__->SESSIONOVER,));
    }
    __SET_VAR(data__->,__transition_list[13],,0);
  }
  if (__GET_VAR(data__->SDONE2.X)) {
    __SET_VAR(data__->,__transition_list[14],,__GET_VAR(data__->P0OK,));
    if (__DEBUG) {
      __SET_VAR(data__->,__debug_transition_list[14],,__GET_VAR(data__->__transition_list[14]));
    }
  }
  else {
    if (__DEBUG) {
      __SET_VAR(data__->,__debug_transition_list[14],,__GET_VAR(data__->P0OK,));
    }
    __SET_VAR(data__->,__transition_list[14],,0);
  }
  if (__GET_VAR(data__->SWITCHRESET1.X)) {
    __SET_VAR(data__->,__transition_list[15],,__GET_VAR(data__->ABORTBOOL,));
    if (__DEBUG) {
      __SET_VAR(data__->,__debug_transition_list[15],,__GET_VAR(data__->__transition_list[15]));
    }
  }
  else {
    if (__DEBUG) {
      __SET_VAR(data__->,__debug_transition_list[15],,__GET_VAR(data__->ABORTBOOL,));
    }
    __SET_VAR(data__->,__transition_list[15],,0);
  }
  if (__GET_VAR(data__->SWITCHRESET1.X)) {
    __SET_VAR(data__->,__transition_list[16],,!(__GET_VAR(data__->EXECUTE,)));
    if (__DEBUG) {
      __SET_VAR(data__->,__debug_transition_list[16],,__GET_VAR(data__->__transition_list[16]));
    }
  }
  else {
    if (__DEBUG) {
      __SET_VAR(data__->,__debug_transition_list[16],,!(__GET_VAR(data__->EXECUTE,)));
    }
    __SET_VAR(data__->,__transition_list[16],,0);
  }
  if (__GET_VAR(data__->SSWITCH.X)) {
    __SET_VAR(data__->,__transition_list[17],,!(__GET_VAR(data__->EXECUTE,)));
    if (__DEBUG) {
      __SET_VAR(data__->,__debug_transition_list[17],,__GET_VAR(data__->__transition_list[17]));
    }
  }
  else {
    if (__DEBUG) {
      __SET_VAR(data__->,__debug_transition_list[17],,!(__GET_VAR(data__->EXECUTE,)));
    }
    __SET_VAR(data__->,__transition_list[17],,0);
  }

  // Transitions reset steps
  if (__GET_VAR(data__->__transition_list[0])) {
    __SET_VAR(data__->,INIT.X,,0);
  }
  if (__GET_VAR(data__->__transition_list[1])) {
    __SET_VAR(data__->,START.X,,0);
  }
  if (__GET_VAR(data__->__transition_list[2])) {
    __SET_VAR(data__->,SSWITCH.X,,0);
  }
  if (__GET_VAR(data__->__transition_list[3])) {
    __SET_VAR(data__->,SABORTED.X,,0);
  }
  if (__GET_VAR(data__->__transition_list[4])) {
    __SET_VAR(data__->,SABORTED2.X,,0);
  }
  if (__GET_VAR(data__->__transition_list[5])) {
    __SET_VAR(data__->,SSWITCH.X,,0);
  }
  if (__GET_VAR(data__->__transition_list[6])) {
    __SET_VAR(data__->,DOWN01.X,,0);
  }
  if (__GET_VAR(data__->__transition_list[7])) {
    __SET_VAR(data__->,DOWN011.X,,0);
  }
  if (__GET_VAR(data__->__transition_list[8])) {
    __SET_VAR(data__->,SWITCHRESET.X,,0);
  }
  if (__GET_VAR(data__->__transition_list[9])) {
    __SET_VAR(data__->,SWITCHRESET1.X,,0);
  }
  if (__GET_VAR(data__->__transition_list[10])) {
    __SET_VAR(data__->,DOWN02.X,,0);
  }
  if (__GET_VAR(data__->__transition_list[11])) {
    __SET_VAR(data__->,DOWN022.X,,0);
  }
  if (__GET_VAR(data__->__transition_list[12])) {
    __SET_VAR(data__->,SETP0.X,,0);
  }
  if (__GET_VAR(data__->__transition_list[13])) {
    __SET_VAR(data__->,SDONE.X,,0);
  }
  if (__GET_VAR(data__->__transition_list[14])) {
    __SET_VAR(data__->,SDONE2.X,,0);
  }
  if (__GET_VAR(data__->__transition_list[15])) {
    __SET_VAR(data__->,SWITCHRESET1.X,,0);
  }
  if (__GET_VAR(data__->__transition_list[16])) {
    __SET_VAR(data__->,SWITCHRESET1.X,,0);
  }
  if (__GET_VAR(data__->__transition_list[17])) {
    __SET_VAR(data__->,SSWITCH.X,,0);
  }

  // Transitions set steps
  if (__GET_VAR(data__->__transition_list[0])) {
    __SET_VAR(data__->,START.X,,1);
    data__->START.T.value = __time_to_timespec(1, 0, 0, 0, 0, 0);
  }
  if (__GET_VAR(data__->__transition_list[1])) {
    __SET_VAR(data__->,SSWITCH.X,,1);
    data__->SSWITCH.T.value = __time_to_timespec(1, 0, 0, 0, 0, 0);
  }
  if (__GET_VAR(data__->__transition_list[2])) {
    __SET_VAR(data__->,SABORTED.X,,1);
    data__->SABORTED.T.value = __time_to_timespec(1, 0, 0, 0, 0, 0);
  }
  if (__GET_VAR(data__->__transition_list[3])) {
    __SET_VAR(data__->,SABORTED2.X,,1);
    data__->SABORTED2.T.value = __time_to_timespec(1, 0, 0, 0, 0, 0);
  }
  if (__GET_VAR(data__->__transition_list[4])) {
    __SET_VAR(data__->,INIT.X,,1);
    data__->INIT.T.value = __time_to_timespec(1, 0, 0, 0, 0, 0);
  }
  if (__GET_VAR(data__->__transition_list[5])) {
    __SET_VAR(data__->,DOWN01.X,,1);
    data__->DOWN01.T.value = __time_to_timespec(1, 0, 0, 0, 0, 0);
  }
  if (__GET_VAR(data__->__transition_list[6])) {
    __SET_VAR(data__->,DOWN011.X,,1);
    data__->DOWN011.T.value = __time_to_timespec(1, 0, 0, 0, 0, 0);
  }
  if (__GET_VAR(data__->__transition_list[7])) {
    __SET_VAR(data__->,SWITCHRESET.X,,1);
    data__->SWITCHRESET.T.value = __time_to_timespec(1, 0, 0, 0, 0, 0);
  }
  if (__GET_VAR(data__->__transition_list[8])) {
    __SET_VAR(data__->,SWITCHRESET1.X,,1);
    data__->SWITCHRESET1.T.value = __time_to_timespec(1, 0, 0, 0, 0, 0);
  }
  if (__GET_VAR(data__->__transition_list[9])) {
    __SET_VAR(data__->,DOWN02.X,,1);
    data__->DOWN02.T.value = __time_to_timespec(1, 0, 0, 0, 0, 0);
  }
  if (__GET_VAR(data__->__transition_list[10])) {
    __SET_VAR(data__->,DOWN022.X,,1);
    data__->DOWN022.T.value = __time_to_timespec(1, 0, 0, 0, 0, 0);
  }
  if (__GET_VAR(data__->__transition_list[11])) {
    __SET_VAR(data__->,SETP0.X,,1);
    data__->SETP0.T.value = __time_to_timespec(1, 0, 0, 0, 0, 0);
  }
  if (__GET_VAR(data__->__transition_list[12])) {
    __SET_VAR(data__->,SDONE.X,,1);
    data__->SDONE.T.value = __time_to_timespec(1, 0, 0, 0, 0, 0);
  }
  if (__GET_VAR(data__->__transition_list[13])) {
    __SET_VAR(data__->,SDONE2.X,,1);
    data__->SDONE2.T.value = __time_to_timespec(1, 0, 0, 0, 0, 0);
  }
  if (__GET_VAR(data__->__transition_list[14])) {
    __SET_VAR(data__->,INIT.X,,1);
    data__->INIT.T.value = __time_to_timespec(1, 0, 0, 0, 0, 0);
  }
  if (__GET_VAR(data__->__transition_list[15])) {
    __SET_VAR(data__->,SABORTED.X,,1);
    data__->SABORTED.T.value = __time_to_timespec(1, 0, 0, 0, 0, 0);
  }
  if (__GET_VAR(data__->__transition_list[16])) {
    __SET_VAR(data__->,SABORTED.X,,1);
    data__->SABORTED.T.value = __time_to_timespec(1, 0, 0, 0, 0, 0);
  }
  if (__GET_VAR(data__->__transition_list[17])) {
    __SET_VAR(data__->,SABORTED.X,,1);
    data__->SABORTED.T.value = __time_to_timespec(1, 0, 0, 0, 0, 0);
  }

  // Steps association
  // INIT action associations
  {
    char active = __GET_VAR(data__->INIT.X);
    char activated = active && !data__->INIT.prev_state;
    char desactivated = !active && data__->INIT.prev_state;

    if (activated)    {__SET_VAR(data__->,__action_list[__SFC_INIT_INLINE37].state,,1);}
    else              {__SET_VAR(data__->,__action_list[__SFC_INIT_INLINE37].state,,0);};

    if (active)       {__SET_VAR(data__->,__action_list[__SFC_INITORRESET].state,,1);};
    if (desactivated) {__SET_VAR(data__->,__action_list[__SFC_INITORRESET].state,,0);};

  }

  // START action associations
  {
    char active = __GET_VAR(data__->START.X);
    char activated = active && !data__->START.prev_state;
    char desactivated = !active && data__->START.prev_state;

    if (activated)    {__SET_VAR(data__->,__action_list[__SFC_START_INLINE1].state,,1);}
    else              {__SET_VAR(data__->,__action_list[__SFC_START_INLINE1].state,,0);};

    if (activated)    {__SET_VAR(data__->,__action_list[__SFC_START_INLINE2].state,,1);}
    else              {__SET_VAR(data__->,__action_list[__SFC_START_INLINE2].state,,0);};

    if (activated)    {__SET_VAR(data__->,__action_list[__SFC_START_INLINE3].state,,1);}
    else              {__SET_VAR(data__->,__action_list[__SFC_START_INLINE3].state,,0);};

    if (activated)    {__SET_VAR(data__->,__action_list[__SFC_START_INLINE4].state,,1);}
    else              {__SET_VAR(data__->,__action_list[__SFC_START_INLINE4].state,,0);};

    if (activated)    {__SET_VAR(data__->,__action_list[__SFC_START_INLINE5].state,,1);}
    else              {__SET_VAR(data__->,__action_list[__SFC_START_INLINE5].state,,0);};

    if (activated)    {__SET_VAR(data__->,__action_list[__SFC_START_INLINE6].state,,1);}
    else              {__SET_VAR(data__->,__action_list[__SFC_START_INLINE6].state,,0);};

    if (activated)    {__SET_VAR(data__->,__action_list[__SFC_START_INLINE7].state,,1);}
    else              {__SET_VAR(data__->,__action_list[__SFC_START_INLINE7].state,,0);};

    if (activated)    {__SET_VAR(data__->,__action_list[__SFC_START_INLINE8].state,,1);}
    else              {__SET_VAR(data__->,__action_list[__SFC_START_INLINE8].state,,0);};

    if (activated)    {__SET_VAR(data__->,__action_list[__SFC_START_INLINE9].state,,1);}
    else              {__SET_VAR(data__->,__action_list[__SFC_START_INLINE9].state,,0);};

    if (activated)    {__SET_VAR(data__->,__action_list[__SFC_START_INLINE10].state,,1);}
    else              {__SET_VAR(data__->,__action_list[__SFC_START_INLINE10].state,,0);};

  }

  // SSWITCH action associations
  {
    char active = __GET_VAR(data__->SSWITCH.X);
    char activated = active && !data__->SSWITCH.prev_state;
    char desactivated = !active && data__->SSWITCH.prev_state;

    if (activated)    {__SET_VAR(data__->,__action_list[__SFC_SSWITCH_INLINE13].state,,1);}
    else              {__SET_VAR(data__->,__action_list[__SFC_SSWITCH_INLINE13].state,,0);};

    if (active)       {__SET_VAR(data__->,__action_list[__SFC_ABORTORNOT].state,,1);};
    if (desactivated) {__SET_VAR(data__->,__action_list[__SFC_ABORTORNOT].state,,0);};

  }

  // SABORTED action associations
  {
    char active = __GET_VAR(data__->SABORTED.X);
    char activated = active && !data__->SABORTED.prev_state;
    char desactivated = !active && data__->SABORTED.prev_state;

    if (activated)    {__SET_VAR(data__->,__action_list[__SFC_SABORTED_INLINE16].state,,1);}
    else              {__SET_VAR(data__->,__action_list[__SFC_SABORTED_INLINE16].state,,0);};

    if (active)       {__SET_VAR(data__->,__action_list[__SFC_SESSIONOVERIFSS].state,,1);};
    if (desactivated) {__SET_VAR(data__->,__action_list[__SFC_SESSIONOVERIFSS].state,,0);};

  }

  // SABORTED2 action associations
  {
    char active = __GET_VAR(data__->SABORTED2.X);
    char activated = active && !data__->SABORTED2.prev_state;
    char desactivated = !active && data__->SABORTED2.prev_state;

    if (activated)    {__SET_VAR(data__->,__action_list[__SFC_SABORTED2_INLINE48].state,,1);}
    else              {__SET_VAR(data__->,__action_list[__SFC_SABORTED2_INLINE48].state,,0);};

    if (activated)    {__SET_VAR(data__->,__action_list[__SFC_SABORTED2_INLINE49].state,,1);}
    else              {__SET_VAR(data__->,__action_list[__SFC_SABORTED2_INLINE49].state,,0);};

    if (activated)    {__SET_VAR(data__->,__action_list[__SFC_SABORTED2_INLINE50].state,,1);}
    else              {__SET_VAR(data__->,__action_list[__SFC_SABORTED2_INLINE50].state,,0);};

  }

  // DOWN01 action associations
  {
    char active = __GET_VAR(data__->DOWN01.X);
    char activated = active && !data__->DOWN01.prev_state;
    char desactivated = !active && data__->DOWN01.prev_state;

    if (activated)    {__SET_VAR(data__->,__action_list[__SFC_DOWN01_INLINE43].state,,1);}
    else              {__SET_VAR(data__->,__action_list[__SFC_DOWN01_INLINE43].state,,0);};

    if (activated)    {__SET_VAR(data__->,__action_list[__SFC_DOWN01_INLINE44].state,,1);}
    else              {__SET_VAR(data__->,__action_list[__SFC_DOWN01_INLINE44].state,,0);};

  }

  // DOWN011 action associations
  {
    char active = __GET_VAR(data__->DOWN011.X);
    char activated = active && !data__->DOWN011.prev_state;
    char desactivated = !active && data__->DOWN011.prev_state;

    if (activated)    {__SET_VAR(data__->,__action_list[__SFC_DOWN011_INLINE19].state,,1);}
    else              {__SET_VAR(data__->,__action_list[__SFC_DOWN011_INLINE19].state,,0);};

    if (active)       {__SET_VAR(data__->,__action_list[__SFC_VE0ORNOT].state,,1);};
    if (desactivated) {__SET_VAR(data__->,__action_list[__SFC_VE0ORNOT].state,,0);};

  }

  // SWITCHRESET action associations
  {
    char active = __GET_VAR(data__->SWITCHRESET.X);
    char activated = active && !data__->SWITCHRESET.prev_state;
    char desactivated = !active && data__->SWITCHRESET.prev_state;

    if (activated)    {__SET_VAR(data__->,__action_list[__SFC_SWITCHRESET_INLINE38].state,,1);}
    else              {__SET_VAR(data__->,__action_list[__SFC_SWITCHRESET_INLINE38].state,,0);};

    if (activated)    {__SET_VAR(data__->,__action_list[__SFC_SWITCHRESET_INLINE39].state,,1);}
    else              {__SET_VAR(data__->,__action_list[__SFC_SWITCHRESET_INLINE39].state,,0);};

    if (activated)    {__SET_VAR(data__->,__action_list[__SFC_SWITCHRESET_INLINE40].state,,1);}
    else              {__SET_VAR(data__->,__action_list[__SFC_SWITCHRESET_INLINE40].state,,0);};

    if (activated)    {__SET_VAR(data__->,__action_list[__SFC_SWITCHRESET_INLINE41].state,,1);}
    else              {__SET_VAR(data__->,__action_list[__SFC_SWITCHRESET_INLINE41].state,,0);};

    if (activated)    {__SET_VAR(data__->,__action_list[__SFC_SWITCHRESET_INLINE42].state,,1);}
    else              {__SET_VAR(data__->,__action_list[__SFC_SWITCHRESET_INLINE42].state,,0);};

  }

  // SWITCHRESET1 action associations
  {
    char active = __GET_VAR(data__->SWITCHRESET1.X);
    char activated = active && !data__->SWITCHRESET1.prev_state;
    char desactivated = !active && data__->SWITCHRESET1.prev_state;

    if (activated)    {__SET_VAR(data__->,__action_list[__SFC_SWITCHRESET1_INLINE17].state,,1);}
    else              {__SET_VAR(data__->,__action_list[__SFC_SWITCHRESET1_INLINE17].state,,0);};

    if (active)       {__SET_VAR(data__->,__action_list[__SFC_ABORTORNOT].state,,1);};
    if (desactivated) {__SET_VAR(data__->,__action_list[__SFC_ABORTORNOT].state,,0);};

    if (active)       {__SET_VAR(data__->,__action_list[__SFC_SWITCHRESET1_INLINE18].state,,1);};
    if (desactivated) {__SET_VAR(data__->,__action_list[__SFC_SWITCHRESET1_INLINE18].state,,0);};

  }

  // DOWN02 action associations
  {
    char active = __GET_VAR(data__->DOWN02.X);
    char activated = active && !data__->DOWN02.prev_state;
    char desactivated = !active && data__->DOWN02.prev_state;

    if (activated)    {__SET_VAR(data__->,__action_list[__SFC_DOWN02_INLINE21].state,,1);}
    else              {__SET_VAR(data__->,__action_list[__SFC_DOWN02_INLINE21].state,,0);};

    if (activated)    {__SET_VAR(data__->,__action_list[__SFC_DOWN02_INLINE22].state,,1);}
    else              {__SET_VAR(data__->,__action_list[__SFC_DOWN02_INLINE22].state,,0);};

  }

  // DOWN022 action associations
  {
    char active = __GET_VAR(data__->DOWN022.X);
    char activated = active && !data__->DOWN022.prev_state;
    char desactivated = !active && data__->DOWN022.prev_state;

    if (activated)    {__SET_VAR(data__->,__action_list[__SFC_DOWN022_INLINE20].state,,1);}
    else              {__SET_VAR(data__->,__action_list[__SFC_DOWN022_INLINE20].state,,0);};

    if (active)       {__SET_VAR(data__->,__action_list[__SFC_VE0ORNOT].state,,1);};
    if (desactivated) {__SET_VAR(data__->,__action_list[__SFC_VE0ORNOT].state,,0);};

  }

  // SETP0 action associations
  {
    char active = __GET_VAR(data__->SETP0.X);
    char activated = active && !data__->SETP0.prev_state;
    char desactivated = !active && data__->SETP0.prev_state;

    if (activated)    {__SET_VAR(data__->,__action_list[__SFC_SETP0_INLINE23].state,,1);}
    else              {__SET_VAR(data__->,__action_list[__SFC_SETP0_INLINE23].state,,0);};

    if (activated)    {__SET_VAR(data__->,__action_list[__SFC_SETP0_INLINE24].state,,1);}
    else              {__SET_VAR(data__->,__action_list[__SFC_SETP0_INLINE24].state,,0);};

    if (activated)    {__SET_VAR(data__->,__action_list[__SFC_SETP0_INLINE25].state,,1);}
    else              {__SET_VAR(data__->,__action_list[__SFC_SETP0_INLINE25].state,,0);};

    if (activated)    {__SET_VAR(data__->,__action_list[__SFC_SETP0_INLINE26].state,,1);}
    else              {__SET_VAR(data__->,__action_list[__SFC_SETP0_INLINE26].state,,0);};

    if (activated)    {__SET_VAR(data__->,__action_list[__SFC_SETP0_INLINE27].state,,1);}
    else              {__SET_VAR(data__->,__action_list[__SFC_SETP0_INLINE27].state,,0);};

    if (activated)    {__SET_VAR(data__->,__action_list[__SFC_SETP0_INLINE28].state,,1);}
    else              {__SET_VAR(data__->,__action_list[__SFC_SETP0_INLINE28].state,,0);};

    if (activated)    {__SET_VAR(data__->,__action_list[__SFC_SETP0_INLINE29].state,,1);}
    else              {__SET_VAR(data__->,__action_list[__SFC_SETP0_INLINE29].state,,0);};

    if (activated)    {__SET_VAR(data__->,__action_list[__SFC_SETP0_INLINE30].state,,1);}
    else              {__SET_VAR(data__->,__action_list[__SFC_SETP0_INLINE30].state,,0);};

    if (activated)    {__SET_VAR(data__->,__action_list[__SFC_SETP0_INLINE31].state,,1);}
    else              {__SET_VAR(data__->,__action_list[__SFC_SETP0_INLINE31].state,,0);};

    if (activated)    {__SET_VAR(data__->,__action_list[__SFC_SETP0_INLINE32].state,,1);}
    else              {__SET_VAR(data__->,__action_list[__SFC_SETP0_INLINE32].state,,0);};

  }

  // SDONE action associations
  {
    char active = __GET_VAR(data__->SDONE.X);
    char activated = active && !data__->SDONE.prev_state;
    char desactivated = !active && data__->SDONE.prev_state;

    if (active)       {__SET_VAR(data__->,__action_list[__SFC_SDONE_INLINE14].state,,1);};
    if (desactivated) {__SET_VAR(data__->,__action_list[__SFC_SDONE_INLINE14].state,,0);};

    if (activated)    {__SET_VAR(data__->,__action_list[__SFC_SDONE_INLINE15].state,,1);}
    else              {__SET_VAR(data__->,__action_list[__SFC_SDONE_INLINE15].state,,0);};

    if (active)       {__SET_VAR(data__->,__action_list[__SFC_SESSIONOVERIFSS].state,,1);};
    if (desactivated) {__SET_VAR(data__->,__action_list[__SFC_SESSIONOVERIFSS].state,,0);};

  }

  // SDONE2 action associations
  {
    char active = __GET_VAR(data__->SDONE2.X);
    char activated = active && !data__->SDONE2.prev_state;
    char desactivated = !active && data__->SDONE2.prev_state;

    if (activated)    {__SET_VAR(data__->,__action_list[__SFC_SDONE2_INLINE45].state,,1);}
    else              {__SET_VAR(data__->,__action_list[__SFC_SDONE2_INLINE45].state,,0);};

    if (activated)    {__SET_VAR(data__->,__action_list[__SFC_SDONE2_INLINE46].state,,1);}
    else              {__SET_VAR(data__->,__action_list[__SFC_SDONE2_INLINE46].state,,0);};

    if (activated)    {__SET_VAR(data__->,__action_list[__SFC_SDONE2_INLINE47].state,,1);}
    else              {__SET_VAR(data__->,__action_list[__SFC_SDONE2_INLINE47].state,,0);};

  }


  // Actions state evaluation
  for (i = 0; i < data__->__nb_actions; i++) {
    if (data__->__action_list[i].set) {
      data__->__action_list[i].set_remaining_time = __time_to_timespec(1, 0, 0, 0, 0, 0);
      data__->__action_list[i].stored = 1;
    }
    if (data__->__action_list[i].reset) {
      data__->__action_list[i].reset_remaining_time = __time_to_timespec(1, 0, 0, 0, 0, 0);
      data__->__action_list[i].stored = 0;
    }
    __SET_VAR(data__->,__action_list[i].state,,__GET_VAR(data__->__action_list[i].state) | data__->__action_list[i].stored);
  }

  // Actions execution
  if(__GET_VAR(data__->__action_list[__SFC_INIT_INLINE37].state)) {
    __SET_VAR(data__->,CS,,(__GET_VAR(data__->CS,) + 1));
  }

  if(__GET_VAR(data__->__action_list[__SFC_INITORRESET].state)) {
    __SET_VAR(data__->,AXIS,,__GET_VAR(data__->AXISID,));
    if (((__GET_VAR(data__->DONE,) == 1) || (__GET_VAR(data__->ABORTED,) == 1))) {
      __SET_VAR(data__->,DONE,,__GET_VAR(data__->EXECUTE,));
      __SET_VAR(data__->,ABORTED,,__GET_VAR(data__->EXECUTE,));
    } else {
      __SET_VAR(data__->,DONEBOOL,,__BOOL_LITERAL(FALSE));
      __SET_VAR(data__->,ABORTBOOL,,__BOOL_LITERAL(FALSE));
      __SET_VAR(data__->,P0OK,,__BOOL_LITERAL(FALSE));
      __SET_VAR(data__->VCLAMP.,AXISID,,__GET_VAR(data__->AXISID,));
      __SET_VAR(data__->VCLAMP.,VEL,,__GET_VAR(data__->VELSWITCH,));
      _VACLAMP_body__(&data__->VCLAMP);
      __SET_VAR(data__->,VO,,__GET_VAR(data__->VCLAMP.VO,));
      __SET_VAR(data__->,AO,,__GET_VAR(data__->VCLAMP.AO,));
    };
    __SET_VAR(data__->AI.,ROW,,__BOOL_LITERAL(FALSE));
    __SET_VAR(data__->AI.,NODEID,,__GET_VAR(data__->AXISID,));
    __SET_VAR(data__->AI.,PNAME,,__STRING_LITERAL(5,"STATE"));
    AXIS_INFO_body__(&data__->AI);
    __SET_VAR(data__->,SCS,,__GET_VAR(data__->AI.OUTU32,));
    if (((__GET_VAR(data__->VO,) > 0.0) && (__GET_VAR(data__->SCS,) == 1))) {
      __SET_VAR(data__->RRTG.,CLK,,__GET_VAR(data__->EXECUTE,));
      R_TRIG_body__(&data__->RRTG);
      __SET_VAR(data__->,ER,,__GET_VAR(data__->RRTG.Q));
    } else {
      __SET_VAR(data__->,ER,,0);
    };
  }

  if(__GET_VAR(data__->__action_list[__SFC_START_INLINE1].state)) {
    __SET_VAR(data__->,CS,,(__GET_VAR(data__->CS,) + 1));
  }

  if(__GET_VAR(data__->__action_list[__SFC_START_INLINE2].state)) {
    __SET_VAR(data__->,ER,,0);
  }

  if(__GET_VAR(data__->__action_list[__SFC_START_INLINE3].state)) {
    __SET_VAR(data__->SID.,ROW,,__BOOL_LITERAL(TRUE));
    __SET_VAR(data__->SID.,AXISID,,__GET_VAR(data__->AXISID,));
    _SESSIONID_body__(&data__->SID);
    __SET_VAR(data__->,CURLOCK,,__GET_VAR(data__->SID.FBD_ABORT_FLAG));
  }

  if(__GET_VAR(data__->__action_list[__SFC_START_INLINE4].state)) {
    if ((__GET_VAR(data__->VELSWITCH,) > 0.0)) {
      __SET_VAR(data__->,TPNULL,,999999.9);
    } else {
      __SET_VAR(data__->,TPNULL,,-999999.9);
    };
  }

  if(__GET_VAR(data__->__action_list[__SFC_START_INLINE5].state)) {
    __SET_VAR(data__->WPVA.,AXISID,,__GET_VAR(data__->AXISID,));
    __SET_VAR(data__->WPVA.,POSITION,,__GET_VAR(data__->TPNULL,));
    __SET_VAR(data__->WPVA.,VELOCITY,,__GET_VAR(data__->VO,));
    __SET_VAR(data__->WPVA.,ACCELERATION,,__GET_VAR(data__->AO,));
    _W_PVA_body__(&data__->WPVA);
  }

  if(__GET_VAR(data__->__action_list[__SFC_START_INLINE6].state)) {
    __SET_VAR(data__->WDEC.,AXISID,,__GET_VAR(data__->AXISID,));
    __SET_VAR(data__->WDEC.,DONEFLAG,,__BOOL_LITERAL(FALSE));
    __SET_VAR(data__->WDEC.,EXECUTEFLAG,,__BOOL_LITERAL(TRUE));
    __SET_VAR(data__->WDEC.,COMMANDTYPE,,13);
    _W_DEC_body__(&data__->WDEC);
  }

  if(__GET_VAR(data__->__action_list[__SFC_START_INLINE7].state)) {
    __SET_VAR(data__->,MOVEBOOL,,__BOOL_LITERAL(TRUE));
  }

  if(__GET_VAR(data__->__action_list[__SFC_START_INLINE8].state)) {
    __SET_VAR(data__->,DONE,,__BOOL_LITERAL(FALSE));
  }

  if(__GET_VAR(data__->__action_list[__SFC_START_INLINE9].state)) {
    __SET_VAR(data__->,SWITCH,,__BOOL_LITERAL(FALSE));
  }

  if(__GET_VAR(data__->__action_list[__SFC_START_INLINE10].state)) {
    __SET_VAR(data__->,ZPLUS,,__BOOL_LITERAL(FALSE));
  }

  if(__GET_VAR(data__->__action_list[__SFC_SSWITCH_INLINE13].state)) {
    __SET_VAR(data__->,MOVEBOOL,,__BOOL_LITERAL(FALSE));
  }

  if(__GET_VAR(data__->__action_list[__SFC_ABORTORNOT].state)) {
    __SET_VAR(data__->SID.,ROW,,__BOOL_LITERAL(FALSE));
    __SET_VAR(data__->SID.,AXISID,,__GET_VAR(data__->AXISID,));
    _SESSIONID_body__(&data__->SID);
    __SET_VAR(data__->,RECLOCK,,__GET_VAR(data__->SID.FBD_ABORT_FLAG));
    if ((__GET_VAR(data__->RECLOCK,) != __GET_VAR(data__->CURLOCK,))) {
      __SET_VAR(data__->,ABORTBOOL,,__BOOL_LITERAL(TRUE));
    };
  }

  if(__GET_VAR(data__->__action_list[__SFC_SABORTED_INLINE16].state)) {
    __SET_VAR(data__->WDEC.,AXISID,,__GET_VAR(data__->AXISID,));
    __SET_VAR(data__->WDEC.,DONEFLAG,,__BOOL_LITERAL(TRUE));
    __SET_VAR(data__->WDEC.,EXECUTEFLAG,,__BOOL_LITERAL(FALSE));
    __SET_VAR(data__->WDEC.,COMMANDTYPE,,13);
    _W_DEC_body__(&data__->WDEC);
  }

  if(__GET_VAR(data__->__action_list[__SFC_SESSIONOVERIFSS].state)) {
    __SET_VAR(data__->AI.,ROW,,__BOOL_LITERAL(FALSE));
    __SET_VAR(data__->AI.,NODEID,,__GET_VAR(data__->AXISID,));
    __SET_VAR(data__->AI.,PNAME,,__STRING_LITERAL(5,"STATE"));
    AXIS_INFO_body__(&data__->AI);
    if ((__GET_VAR(data__->AI.OUTU32,) == 1)) {
      __SET_VAR(data__->,SESSIONOVER,,__BOOL_LITERAL(TRUE));
    } else {
      __SET_VAR(data__->,SESSIONOVER,,__BOOL_LITERAL(FALSE));
    };
  }

  if(__GET_VAR(data__->__action_list[__SFC_SABORTED2_INLINE48].state)) {
    __SET_VAR(data__->,P0OK,,1);
  }

  if(__GET_VAR(data__->__action_list[__SFC_SABORTED2_INLINE49].state)) {
    __SET_VAR(data__->,CS,,0);
  }

  if(__GET_VAR(data__->__action_list[__SFC_SABORTED2_INLINE50].state)) {
    __SET_VAR(data__->,ABORTED,,1);
  }

  if(__GET_VAR(data__->__action_list[__SFC_DOWN01_INLINE43].state)) {
    __SET_VAR(data__->AI.,ROW,,__BOOL_LITERAL(TRUE));
    __SET_VAR(data__->AI.,NODEID,,__GET_VAR(data__->AXISID,));
    __SET_VAR(data__->AI.,PNAME,,__STRING_LITERAL(6,"INTERV"));
    __SET_VAR(data__->AI.,INR,,0.0);
    AXIS_INFO_body__(&data__->AI);
  }

  if(__GET_VAR(data__->__action_list[__SFC_DOWN01_INLINE44].state)) {
    __SET_VAR(data__->,MOVEBOOL,,__BOOL_LITERAL(TRUE));
  }

  if(__GET_VAR(data__->__action_list[__SFC_DOWN011_INLINE19].state)) {
    __SET_VAR(data__->,MOVEBOOL,,__BOOL_LITERAL(FALSE));
  }

  if(__GET_VAR(data__->__action_list[__SFC_VE0ORNOT].state)) {
    __SET_VAR(data__->AI.,ROW,,__BOOL_LITERAL(FALSE));
    __SET_VAR(data__->AI.,NODEID,,__GET_VAR(data__->AXISID,));
    __SET_VAR(data__->AI.,PNAME,,__STRING_LITERAL(7,"INTERVC"));
    AXIS_INFO_body__(&data__->AI);
    __SET_VAR(data__->,CURVEL,,__GET_VAR(data__->AI.OUTR,));
    __SET_VAR(data__->D2.,P1,,__GET_VAR(data__->CURVEL,));
    __SET_VAR(data__->D2.,P2,,0.0);
    _DIFF2_body__(&data__->D2);
    if (__GET_VAR(data__->D2.SAME,)) {
      __SET_VAR(data__->,VE0,,__BOOL_LITERAL(TRUE));
    } else {
      __SET_VAR(data__->,VE0,,__BOOL_LITERAL(FALSE));
    };
  }

  if(__GET_VAR(data__->__action_list[__SFC_SWITCHRESET_INLINE38].state)) {
    __SET_VAR(data__->,CS,,3);
  }

  if(__GET_VAR(data__->__action_list[__SFC_SWITCHRESET_INLINE39].state)) {
    if ((__GET_VAR(data__->VELSWITCH,) > 0.0)) {
      __SET_VAR(data__->,TPNULL,,-99999.9);
    } else {
      __SET_VAR(data__->,TPNULL,,999999.9);
    };
  }

  if(__GET_VAR(data__->__action_list[__SFC_SWITCHRESET_INLINE40].state)) {
    __SET_VAR(data__->WPVA.,AXISID,,__GET_VAR(data__->AXISID,));
    __SET_VAR(data__->WPVA.,POSITION,,__GET_VAR(data__->TPNULL,));
    __SET_VAR(data__->WPVA.,VELOCITY,,(__GET_VAR(data__->VO,) / 10.0));
    __SET_VAR(data__->WPVA.,ACCELERATION,,(__GET_VAR(data__->AO,) / 10.0));
    _W_PVA_body__(&data__->WPVA);
  }

  if(__GET_VAR(data__->__action_list[__SFC_SWITCHRESET_INLINE41].state)) {
    __SET_VAR(data__->,VE0,,__BOOL_LITERAL(FALSE));
  }

  if(__GET_VAR(data__->__action_list[__SFC_SWITCHRESET_INLINE42].state)) {
    __SET_VAR(data__->,MOVEBOOL,,__BOOL_LITERAL(TRUE));
  }

  if(__GET_VAR(data__->__action_list[__SFC_SWITCHRESET1_INLINE17].state)) {
    __SET_VAR(data__->,MOVEBOOL,,__BOOL_LITERAL(FALSE));
  }

  if(__GET_VAR(data__->__action_list[__SFC_SWITCHRESET1_INLINE18].state)) {
    __SET_VAR(data__->FTG.,CLK,,__GET_VAR(data__->SWITCH,));
    F_TRIG_body__(&data__->FTG);
    __SET_VAR(data__->,SWITCHFE,,__GET_VAR(data__->FTG.Q));
  }

  if(__GET_VAR(data__->__action_list[__SFC_DOWN02_INLINE21].state)) {
    __SET_VAR(data__->AI.,ROW,,__BOOL_LITERAL(TRUE));
    __SET_VAR(data__->AI.,NODEID,,__GET_VAR(data__->AXISID,));
    __SET_VAR(data__->AI.,PNAME,,__STRING_LITERAL(6,"INTERV"));
    __SET_VAR(data__->AI.,INR,,0.0);
    AXIS_INFO_body__(&data__->AI);
  }

  if(__GET_VAR(data__->__action_list[__SFC_DOWN02_INLINE22].state)) {
    __SET_VAR(data__->,MOVEBOOL,,__BOOL_LITERAL(TRUE));
  }

  if(__GET_VAR(data__->__action_list[__SFC_DOWN022_INLINE20].state)) {
    __SET_VAR(data__->,CS,,4);
  }

  if(__GET_VAR(data__->__action_list[__SFC_SETP0_INLINE23].state)) {
    __SET_VAR(data__->AI.,ROW,,__BOOL_LITERAL(FALSE));
    __SET_VAR(data__->AI.,NODEID,,__GET_VAR(data__->AXISID,));
    __SET_VAR(data__->AI.,PNAME,,__STRING_LITERAL(6,"CURPOS"));
    AXIS_INFO_body__(&data__->AI);
  }

  if(__GET_VAR(data__->__action_list[__SFC_SETP0_INLINE24].state)) {
    __SET_VAR(data__->,CURPOS,,__GET_VAR(data__->AI.OUTU32,));
  }

  if(__GET_VAR(data__->__action_list[__SFC_SETP0_INLINE25].state)) {
    __SET_VAR(data__->AI.,ROW,,__BOOL_LITERAL(FALSE));
    __SET_VAR(data__->AI.,NODEID,,__GET_VAR(data__->AXISID,));
    __SET_VAR(data__->AI.,PNAME,,__STRING_LITERAL(3,"MPP"));
    AXIS_INFO_body__(&data__->AI);
  }

  if(__GET_VAR(data__->__action_list[__SFC_SETP0_INLINE26].state)) {
    __SET_VAR(data__->,MPP,,__GET_VAR(data__->AI.OUTR,));
  }

  if(__GET_VAR(data__->__action_list[__SFC_SETP0_INLINE27].state)) {
    __SET_VAR(data__->CP0.,AXISID,,__GET_VAR(data__->AXISID,));
    __SET_VAR(data__->CP0.,LOGPOS0,,__GET_VAR(data__->POSITION,));
    __SET_VAR(data__->CP0.,P0IN,,__GET_VAR(data__->CURPOS,));
    __SET_VAR(data__->CP0.,MPP,,__GET_VAR(data__->MPP,));
    _CP0POS_body__(&data__->CP0);
  }

  if(__GET_VAR(data__->__action_list[__SFC_SETP0_INLINE28].state)) {
    __SET_VAR(data__->,P0P,,__GET_VAR(data__->CP0.P0OUT,));
  }

  if(__GET_VAR(data__->__action_list[__SFC_SETP0_INLINE29].state)) {
    __SET_VAR(data__->AI.,ROW,,__BOOL_LITERAL(TRUE));
    __SET_VAR(data__->AI.,NODEID,,__GET_VAR(data__->AXISID,));
    __SET_VAR(data__->AI.,PNAME,,__STRING_LITERAL(5,"P0POS"));
    __SET_VAR(data__->AI.,INU32,,__GET_VAR(data__->P0P,));
    AXIS_INFO_body__(&data__->AI);
  }

  if(__GET_VAR(data__->__action_list[__SFC_SETP0_INLINE30].state)) {
    __SET_VAR(data__->AI.,ROW,,__BOOL_LITERAL(TRUE));
    __SET_VAR(data__->AI.,NODEID,,__GET_VAR(data__->AXISID,));
    __SET_VAR(data__->AI.,PNAME,,__STRING_LITERAL(7,"INTERPC"));
    __SET_VAR(data__->AI.,INR,,__GET_VAR(data__->POSITION,));
    AXIS_INFO_body__(&data__->AI);
  }

  if(__GET_VAR(data__->__action_list[__SFC_SETP0_INLINE31].state)) {
    __SET_VAR(data__->AI.,ROW,,__BOOL_LITERAL(TRUE));
    __SET_VAR(data__->AI.,NODEID,,__GET_VAR(data__->AXISID,));
    __SET_VAR(data__->AI.,PNAME,,__STRING_LITERAL(2,"PC"));
    __SET_VAR(data__->AI.,INR,,__GET_VAR(data__->POSITION,));
    AXIS_INFO_body__(&data__->AI);
  }

  if(__GET_VAR(data__->__action_list[__SFC_SETP0_INLINE32].state)) {
    __SET_VAR(data__->,P0OK,,__BOOL_LITERAL(TRUE));
  }

  if(__GET_VAR(data__->__action_list[__SFC_SDONE_INLINE14].state)) {
    __SET_VAR(data__->,P0OK,,0);
  }

  if(__GET_VAR(data__->__action_list[__SFC_SDONE_INLINE15].state)) {
    __SET_VAR(data__->WDEC.,AXISID,,__GET_VAR(data__->AXISID,));
    __SET_VAR(data__->WDEC.,DONEFLAG,,__BOOL_LITERAL(TRUE));
    __SET_VAR(data__->WDEC.,EXECUTEFLAG,,__BOOL_LITERAL(FALSE));
    __SET_VAR(data__->WDEC.,COMMANDTYPE,,13);
    _W_DEC_body__(&data__->WDEC);
  }

  if(__GET_VAR(data__->__action_list[__SFC_SDONE2_INLINE45].state)) {
    __SET_VAR(data__->,CS,,0);
  }

  if(__GET_VAR(data__->__action_list[__SFC_SDONE2_INLINE46].state)) {
    __SET_VAR(data__->,P0OK,,1);
  }

  if(__GET_VAR(data__->__action_list[__SFC_SDONE2_INLINE47].state)) {
    __SET_VAR(data__->,DONE,,1);
  }



  goto __end;

__end:
  return;
} // MC_HOME_body__() 

// Steps undefinitions
#undef INIT
#undef __SFC_INIT
#undef START
#undef __SFC_START
#undef SSWITCH
#undef __SFC_SSWITCH
#undef SABORTED
#undef __SFC_SABORTED
#undef SABORTED2
#undef __SFC_SABORTED2
#undef DOWN01
#undef __SFC_DOWN01
#undef DOWN011
#undef __SFC_DOWN011
#undef SWITCHRESET
#undef __SFC_SWITCHRESET
#undef SWITCHRESET1
#undef __SFC_SWITCHRESET1
#undef DOWN02
#undef __SFC_DOWN02
#undef DOWN022
#undef __SFC_DOWN022
#undef SETP0
#undef __SFC_SETP0
#undef SDONE
#undef __SFC_SDONE
#undef SDONE2
#undef __SFC_SDONE2

// Actions undefinitions
#undef __SFC_INIT_INLINE37
#undef __SFC_INITORRESET
#undef __SFC_START_INLINE1
#undef __SFC_START_INLINE2
#undef __SFC_START_INLINE3
#undef __SFC_START_INLINE4
#undef __SFC_START_INLINE5
#undef __SFC_START_INLINE6
#undef __SFC_START_INLINE7
#undef __SFC_START_INLINE8
#undef __SFC_START_INLINE9
#undef __SFC_START_INLINE10
#undef __SFC_SSWITCH_INLINE13
#undef __SFC_ABORTORNOT
#undef __SFC_SABORTED_INLINE16
#undef __SFC_SESSIONOVERIFSS
#undef __SFC_SABORTED2_INLINE48
#undef __SFC_SABORTED2_INLINE49
#undef __SFC_SABORTED2_INLINE50
#undef __SFC_DOWN01_INLINE43
#undef __SFC_DOWN01_INLINE44
#undef __SFC_DOWN011_INLINE19
#undef __SFC_VE0ORNOT
#undef __SFC_SWITCHRESET_INLINE38
#undef __SFC_SWITCHRESET_INLINE39
#undef __SFC_SWITCHRESET_INLINE40
#undef __SFC_SWITCHRESET_INLINE41
#undef __SFC_SWITCHRESET_INLINE42
#undef __SFC_SWITCHRESET1_INLINE17
#undef __SFC_SWITCHRESET1_INLINE18
#undef __SFC_DOWN02_INLINE21
#undef __SFC_DOWN02_INLINE22
#undef __SFC_DOWN022_INLINE20
#undef __SFC_SETP0_INLINE23
#undef __SFC_SETP0_INLINE24
#undef __SFC_SETP0_INLINE25
#undef __SFC_SETP0_INLINE26
#undef __SFC_SETP0_INLINE27
#undef __SFC_SETP0_INLINE28
#undef __SFC_SETP0_INLINE29
#undef __SFC_SETP0_INLINE30
#undef __SFC_SETP0_INLINE31
#undef __SFC_SETP0_INLINE32
#undef __SFC_SDONE_INLINE14
#undef __SFC_SDONE_INLINE15
#undef __SFC_SDONE2_INLINE45
#undef __SFC_SDONE2_INLINE46
#undef __SFC_SDONE2_INLINE47





void MC_VELOCITY_init__(MC_VELOCITY *data__, BOOL retain) {
  __INIT_VAR(data__->EN,__BOOL_LITERAL(TRUE),retain)
  __INIT_VAR(data__->ENO,__BOOL_LITERAL(TRUE),retain)
  __INIT_VAR(data__->AXISID,0,retain)
  __INIT_VAR(data__->EXECUTE,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->VELOCITY,0,retain)
  __INIT_VAR(data__->ACCELERATION,0,retain)
  __INIT_VAR(data__->AXIS,0,retain)
  __INIT_VAR(data__->INVEL,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->ABORTED,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->ERROR,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->CS,0,retain)
  _W_DEC_init__(&data__->WDEC,retain);
  _W_PVA_init__(&data__->WPVA,retain);
  __INIT_VAR(data__->INVELBOOL,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->MOVEBOOL,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->ABORTBOOL,__BOOL_LITERAL(FALSE),retain)
  AXIS_INFO_init__(&data__->AI,retain);
  __INIT_VAR(data__->ISSAME,__BOOL_LITERAL(FALSE),retain)
  _DIFF2_init__(&data__->D2,retain);
  __INIT_VAR(data__->CURLOCK,0,retain)
  __INIT_VAR(data__->SCS,0,retain)
  _SESSIONID_init__(&data__->SID,retain);
  __INIT_VAR(data__->RECLOCK,0,retain)
  __INIT_VAR(data__->CURVC,0,retain)
  __INIT_VAR(data__->LASTVC,0,retain)
  __INIT_VAR(data__->CANMOVE,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->VO,0,retain)
  __INIT_VAR(data__->AO,0,retain)
  __INIT_VAR(data__->TOPC,0,retain)
  _VACLAMP_init__(&data__->VCLAMP,retain);
  __INIT_VAR(data__->CJ,0,retain)
  __INIT_VAR(data__->CANSTART,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->VE0,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->ER,__BOOL_LITERAL(FALSE),retain)
  R_TRIG_init__(&data__->RRTG,retain);
  __INIT_VAR(data__->CLICK3,3,retain)
  __INIT_VAR(data__->SESSIONOVER,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->DIR,1.0,retain)
  __INIT_VAR(data__->WFED,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->TODEA,__BOOL_LITERAL(FALSE),retain)
  UINT i;
  data__->__nb_steps = 6;
  static const STEP temp_step = {{0, 0}, 0, {{0, 0}, 0}};
  for(i = 0; i < data__->__nb_steps; i++) {
    data__->__step_list[i] = temp_step;
  }
  __SET_VAR(data__->,__step_list[0].X,,1);
  data__->__nb_actions = 30;
  static const ACTION temp_action = {0, {0, 0}, 0, 0, {0, 0}, {0, 0}};
  for(i = 0; i < data__->__nb_actions; i++) {
    data__->__action_list[i] = temp_action;
  }
  data__->__nb_transitions = 8;
  data__->__lasttick_time = __CURRENT_TIME;
}

// Steps definitions
#define INIT __step_list[0]
#define __SFC_INIT 0
#define DOWN0 __step_list[1]
#define __SFC_DOWN0 1
#define START __step_list[2]
#define __SFC_START 2
#define MOVING __step_list[3]
#define __SFC_MOVING 3
#define SABORTED __step_list[4]
#define __SFC_SABORTED 4
#define DONE __step_list[5]
#define __SFC_DONE 5

// Actions definitions
#define __SFC_INITORRESET 0
#define __SFC_INIT_INLINE29 1
#define __SFC_DOWN0_INLINE15 2
#define __SFC_DOWN0_INLINE16 3
#define __SFC_DOWN0_INLINE17 4
#define __SFC_DOWN0_INLINE18 5
#define __SFC_DOWN0_INLINE19 6
#define __SFC_DOWN0_INLINE20 7
#define __SFC_DOWN0_INLINE21 8
#define __SFC_DOWN0_INLINE22 9
#define __SFC_DOWN0_INLINE23 10
#define __SFC_DOWN0_INLINE24 11
#define __SFC_DOWN0_INLINE25 12
#define __SFC_DOWN0_INLINE26 13
#define __SFC_START_INLINE1 14
#define __SFC_START_INLINE2 15
#define __SFC_START_INLINE3 16
#define __SFC_START_INLINE4 17
#define __SFC_MOVING_INLINE5 18
#define __SFC_MOVING_INLINE6 19
#define __SFC_MOVING_INLINE7 20
#define __SFC_MOVING_INLINE8 21
#define __SFC_MOVING_INLINE9 22
#define __SFC_MOVING_INLINE10 23
#define __SFC_MOVING_INLINE11 24
#define __SFC_MOVING_INLINE12 25
#define __SFC_SABORTED_INLINE13 26
#define __SFC_SABORTED_INLINE14 27
#define __SFC_DONE_INLINE27 28
#define __SFC_DONE_INLINE28 29

// Code part
void MC_VELOCITY_body__(MC_VELOCITY *data__) {
  // Control execution
  if (!__GET_VAR(data__->EN)) {
    __SET_VAR(data__->,ENO,,__BOOL_LITERAL(FALSE));
    return;
  }
  else {
    __SET_VAR(data__->,ENO,,__BOOL_LITERAL(TRUE));
  }
  // Initialise TEMP variables

  INT i;
  TIME elapsed_time, current_time;

  // Calculate elapsed_time
  current_time = __CURRENT_TIME;
  elapsed_time = __time_sub(current_time, data__->__lasttick_time);
  data__->__lasttick_time = current_time;
  // Transitions initialization
  if (__DEBUG) {
    for (i = 0; i < data__->__nb_transitions; i++) {
      data__->__transition_list[i] = data__->__debug_transition_list[i];
    }
  }
  // Steps initialization
  for (i = 0; i < data__->__nb_steps; i++) {
    data__->__step_list[i].prev_state = __GET_VAR(data__->__step_list[i].X);
    if (__GET_VAR(data__->__step_list[i].X)) {
      data__->__step_list[i].T.value = __time_add(data__->__step_list[i].T.value, elapsed_time);
    }
  }
  // Actions initialization
  for (i = 0; i < data__->__nb_actions; i++) {
    __SET_VAR(data__->,__action_list[i].state,,0);
    data__->__action_list[i].set = 0;
    data__->__action_list[i].reset = 0;
    if (__time_cmp(data__->__action_list[i].set_remaining_time, __time_to_timespec(1, 0, 0, 0, 0, 0)) > 0) {
      data__->__action_list[i].set_remaining_time = __time_sub(data__->__action_list[i].set_remaining_time, elapsed_time);
      if (__time_cmp(data__->__action_list[i].set_remaining_time, __time_to_timespec(1, 0, 0, 0, 0, 0)) <= 0) {
        data__->__action_list[i].set_remaining_time = __time_to_timespec(1, 0, 0, 0, 0, 0);
        data__->__action_list[i].set = 1;
      }
    }
    if (__time_cmp(data__->__action_list[i].reset_remaining_time, __time_to_timespec(1, 0, 0, 0, 0, 0)) > 0) {
      data__->__action_list[i].reset_remaining_time = __time_sub(data__->__action_list[i].reset_remaining_time, elapsed_time);
      if (__time_cmp(data__->__action_list[i].reset_remaining_time, __time_to_timespec(1, 0, 0, 0, 0, 0)) <= 0) {
        data__->__action_list[i].reset_remaining_time = __time_to_timespec(1, 0, 0, 0, 0, 0);
        data__->__action_list[i].reset = 1;
      }
    }
  }

  // Transitions fire test
  if (__GET_VAR(data__->INIT.X)) {
    __SET_VAR(data__->,__transition_list[0],,__GET_VAR(data__->ER,));
    if (__DEBUG) {
      __SET_VAR(data__->,__debug_transition_list[0],,__GET_VAR(data__->__transition_list[0]));
    }
  }
  else {
    if (__DEBUG) {
      __SET_VAR(data__->,__debug_transition_list[0],,__GET_VAR(data__->ER,));
    }
    __SET_VAR(data__->,__transition_list[0],,0);
  }
  if (__GET_VAR(data__->DOWN0.X)) {
    __SET_VAR(data__->,__transition_list[1],,(__GET_VAR(data__->CANSTART,) || __GET_VAR(data__->VE0,)));
    if (__DEBUG) {
      __SET_VAR(data__->,__debug_transition_list[1],,__GET_VAR(data__->__transition_list[1]));
    }
  }
  else {
    if (__DEBUG) {
      __SET_VAR(data__->,__debug_transition_list[1],,(__GET_VAR(data__->CANSTART,) || __GET_VAR(data__->VE0,)));
    }
    __SET_VAR(data__->,__transition_list[1],,0);
  }
  if (__GET_VAR(data__->START.X)) {
    __SET_VAR(data__->,__transition_list[2],,__GET_VAR(data__->MOVEBOOL,));
    if (__DEBUG) {
      __SET_VAR(data__->,__debug_transition_list[2],,__GET_VAR(data__->__transition_list[2]));
    }
  }
  else {
    if (__DEBUG) {
      __SET_VAR(data__->,__debug_transition_list[2],,__GET_VAR(data__->MOVEBOOL,));
    }
    __SET_VAR(data__->,__transition_list[2],,0);
  }
  if (__GET_VAR(data__->MOVING.X)) {
    __SET_VAR(data__->,__transition_list[3],,(__GET_VAR(data__->ABORTBOOL,) || (__GET_VAR(data__->EXECUTE,) == 0)));
    if (__DEBUG) {
      __SET_VAR(data__->,__debug_transition_list[3],,__GET_VAR(data__->__transition_list[3]));
    }
  }
  else {
    if (__DEBUG) {
      __SET_VAR(data__->,__debug_transition_list[3],,(__GET_VAR(data__->ABORTBOOL,) || (__GET_VAR(data__->EXECUTE,) == 0)));
    }
    __SET_VAR(data__->,__transition_list[3],,0);
  }
  if (__GET_VAR(data__->SABORTED.X)) {
    __SET_VAR(data__->,__transition_list[4],,__GET_VAR(data__->TODEA,));
    if (__DEBUG) {
      __SET_VAR(data__->,__debug_transition_list[4],,__GET_VAR(data__->__transition_list[4]));
    }
  }
  else {
    if (__DEBUG) {
      __SET_VAR(data__->,__debug_transition_list[4],,__GET_VAR(data__->TODEA,));
    }
    __SET_VAR(data__->,__transition_list[4],,0);
  }
  if (__GET_VAR(data__->MOVING.X)) {
    __SET_VAR(data__->,__transition_list[5],,__GET_VAR(data__->INVELBOOL,));
    if (__DEBUG) {
      __SET_VAR(data__->,__debug_transition_list[5],,__GET_VAR(data__->__transition_list[5]));
    }
  }
  else {
    if (__DEBUG) {
      __SET_VAR(data__->,__debug_transition_list[5],,__GET_VAR(data__->INVELBOOL,));
    }
    __SET_VAR(data__->,__transition_list[5],,0);
  }
  if (__GET_VAR(data__->DONE.X)) {
    __SET_VAR(data__->,__transition_list[6],,__GET_VAR(data__->TODEA,));
    if (__DEBUG) {
      __SET_VAR(data__->,__debug_transition_list[6],,__GET_VAR(data__->__transition_list[6]));
    }
  }
  else {
    if (__DEBUG) {
      __SET_VAR(data__->,__debug_transition_list[6],,__GET_VAR(data__->TODEA,));
    }
    __SET_VAR(data__->,__transition_list[6],,0);
  }
  if (__GET_VAR(data__->DOWN0.X)) {
    __SET_VAR(data__->,__transition_list[7],,__GET_VAR(data__->ABORTBOOL,));
    if (__DEBUG) {
      __SET_VAR(data__->,__debug_transition_list[7],,__GET_VAR(data__->__transition_list[7]));
    }
  }
  else {
    if (__DEBUG) {
      __SET_VAR(data__->,__debug_transition_list[7],,__GET_VAR(data__->ABORTBOOL,));
    }
    __SET_VAR(data__->,__transition_list[7],,0);
  }

  // Transitions reset steps
  if (__GET_VAR(data__->__transition_list[0])) {
    __SET_VAR(data__->,INIT.X,,0);
  }
  if (__GET_VAR(data__->__transition_list[1])) {
    __SET_VAR(data__->,DOWN0.X,,0);
  }
  if (__GET_VAR(data__->__transition_list[2])) {
    __SET_VAR(data__->,START.X,,0);
  }
  if (__GET_VAR(data__->__transition_list[3])) {
    __SET_VAR(data__->,MOVING.X,,0);
  }
  if (__GET_VAR(data__->__transition_list[4])) {
    __SET_VAR(data__->,SABORTED.X,,0);
  }
  if (__GET_VAR(data__->__transition_list[5])) {
    __SET_VAR(data__->,MOVING.X,,0);
  }
  if (__GET_VAR(data__->__transition_list[6])) {
    __SET_VAR(data__->,DONE.X,,0);
  }
  if (__GET_VAR(data__->__transition_list[7])) {
    __SET_VAR(data__->,DOWN0.X,,0);
  }

  // Transitions set steps
  if (__GET_VAR(data__->__transition_list[0])) {
    __SET_VAR(data__->,DOWN0.X,,1);
    data__->DOWN0.T.value = __time_to_timespec(1, 0, 0, 0, 0, 0);
  }
  if (__GET_VAR(data__->__transition_list[1])) {
    __SET_VAR(data__->,START.X,,1);
    data__->START.T.value = __time_to_timespec(1, 0, 0, 0, 0, 0);
  }
  if (__GET_VAR(data__->__transition_list[2])) {
    __SET_VAR(data__->,MOVING.X,,1);
    data__->MOVING.T.value = __time_to_timespec(1, 0, 0, 0, 0, 0);
  }
  if (__GET_VAR(data__->__transition_list[3])) {
    __SET_VAR(data__->,SABORTED.X,,1);
    data__->SABORTED.T.value = __time_to_timespec(1, 0, 0, 0, 0, 0);
  }
  if (__GET_VAR(data__->__transition_list[4])) {
    __SET_VAR(data__->,INIT.X,,1);
    data__->INIT.T.value = __time_to_timespec(1, 0, 0, 0, 0, 0);
  }
  if (__GET_VAR(data__->__transition_list[5])) {
    __SET_VAR(data__->,DONE.X,,1);
    data__->DONE.T.value = __time_to_timespec(1, 0, 0, 0, 0, 0);
  }
  if (__GET_VAR(data__->__transition_list[6])) {
    __SET_VAR(data__->,INIT.X,,1);
    data__->INIT.T.value = __time_to_timespec(1, 0, 0, 0, 0, 0);
  }
  if (__GET_VAR(data__->__transition_list[7])) {
    __SET_VAR(data__->,SABORTED.X,,1);
    data__->SABORTED.T.value = __time_to_timespec(1, 0, 0, 0, 0, 0);
  }

  // Steps association
  // INIT action associations
  {
    char active = __GET_VAR(data__->INIT.X);
    char activated = active && !data__->INIT.prev_state;
    char desactivated = !active && data__->INIT.prev_state;

    if (active)       {__SET_VAR(data__->,__action_list[__SFC_INITORRESET].state,,1);};
    if (desactivated) {__SET_VAR(data__->,__action_list[__SFC_INITORRESET].state,,0);};

    if (active)       {__SET_VAR(data__->,__action_list[__SFC_INIT_INLINE29].state,,1);};
    if (desactivated) {__SET_VAR(data__->,__action_list[__SFC_INIT_INLINE29].state,,0);};

  }

  // DOWN0 action associations
  {
    char active = __GET_VAR(data__->DOWN0.X);
    char activated = active && !data__->DOWN0.prev_state;
    char desactivated = !active && data__->DOWN0.prev_state;

    if (active)       {__SET_VAR(data__->,__action_list[__SFC_DOWN0_INLINE15].state,,1);};
    if (desactivated) {__SET_VAR(data__->,__action_list[__SFC_DOWN0_INLINE15].state,,0);};

    if (activated)    {__SET_VAR(data__->,__action_list[__SFC_DOWN0_INLINE16].state,,1);}
    else              {__SET_VAR(data__->,__action_list[__SFC_DOWN0_INLINE16].state,,0);};

    if (activated)    {__SET_VAR(data__->,__action_list[__SFC_DOWN0_INLINE17].state,,1);}
    else              {__SET_VAR(data__->,__action_list[__SFC_DOWN0_INLINE17].state,,0);};

    if (active)       {__SET_VAR(data__->,__action_list[__SFC_DOWN0_INLINE18].state,,1);};
    if (desactivated) {__SET_VAR(data__->,__action_list[__SFC_DOWN0_INLINE18].state,,0);};

    if (active)       {__SET_VAR(data__->,__action_list[__SFC_DOWN0_INLINE19].state,,1);};
    if (desactivated) {__SET_VAR(data__->,__action_list[__SFC_DOWN0_INLINE19].state,,0);};

    if (active)       {__SET_VAR(data__->,__action_list[__SFC_DOWN0_INLINE20].state,,1);};
    if (desactivated) {__SET_VAR(data__->,__action_list[__SFC_DOWN0_INLINE20].state,,0);};

    if (active)       {__SET_VAR(data__->,__action_list[__SFC_DOWN0_INLINE21].state,,1);};
    if (desactivated) {__SET_VAR(data__->,__action_list[__SFC_DOWN0_INLINE21].state,,0);};

    if (active)       {__SET_VAR(data__->,__action_list[__SFC_DOWN0_INLINE22].state,,1);};
    if (desactivated) {__SET_VAR(data__->,__action_list[__SFC_DOWN0_INLINE22].state,,0);};

    if (active)       {__SET_VAR(data__->,__action_list[__SFC_DOWN0_INLINE23].state,,1);};
    if (desactivated) {__SET_VAR(data__->,__action_list[__SFC_DOWN0_INLINE23].state,,0);};

    if (active)       {__SET_VAR(data__->,__action_list[__SFC_DOWN0_INLINE24].state,,1);};
    if (desactivated) {__SET_VAR(data__->,__action_list[__SFC_DOWN0_INLINE24].state,,0);};

    if (active)       {__SET_VAR(data__->,__action_list[__SFC_DOWN0_INLINE25].state,,1);};
    if (desactivated) {__SET_VAR(data__->,__action_list[__SFC_DOWN0_INLINE25].state,,0);};

    if (active)       {__SET_VAR(data__->,__action_list[__SFC_DOWN0_INLINE26].state,,1);};
    if (desactivated) {__SET_VAR(data__->,__action_list[__SFC_DOWN0_INLINE26].state,,0);};

  }

  // START action associations
  {
    char active = __GET_VAR(data__->START.X);
    char activated = active && !data__->START.prev_state;
    char desactivated = !active && data__->START.prev_state;

    if (activated)    {__SET_VAR(data__->,__action_list[__SFC_START_INLINE1].state,,1);}
    else              {__SET_VAR(data__->,__action_list[__SFC_START_INLINE1].state,,0);};

    if (activated)    {__SET_VAR(data__->,__action_list[__SFC_START_INLINE2].state,,1);}
    else              {__SET_VAR(data__->,__action_list[__SFC_START_INLINE2].state,,0);};

    if (activated)    {__SET_VAR(data__->,__action_list[__SFC_START_INLINE3].state,,1);}
    else              {__SET_VAR(data__->,__action_list[__SFC_START_INLINE3].state,,0);};

    if (activated)    {__SET_VAR(data__->,__action_list[__SFC_START_INLINE4].state,,1);}
    else              {__SET_VAR(data__->,__action_list[__SFC_START_INLINE4].state,,0);};

  }

  // MOVING action associations
  {
    char active = __GET_VAR(data__->MOVING.X);
    char activated = active && !data__->MOVING.prev_state;
    char desactivated = !active && data__->MOVING.prev_state;

    if (active)       {__SET_VAR(data__->,__action_list[__SFC_MOVING_INLINE5].state,,1);};
    if (desactivated) {__SET_VAR(data__->,__action_list[__SFC_MOVING_INLINE5].state,,0);};

    if (active)       {__SET_VAR(data__->,__action_list[__SFC_MOVING_INLINE6].state,,1);};
    if (desactivated) {__SET_VAR(data__->,__action_list[__SFC_MOVING_INLINE6].state,,0);};

    if (active)       {__SET_VAR(data__->,__action_list[__SFC_MOVING_INLINE7].state,,1);};
    if (desactivated) {__SET_VAR(data__->,__action_list[__SFC_MOVING_INLINE7].state,,0);};

    if (active)       {__SET_VAR(data__->,__action_list[__SFC_MOVING_INLINE8].state,,1);};
    if (desactivated) {__SET_VAR(data__->,__action_list[__SFC_MOVING_INLINE8].state,,0);};

    if (active)       {__SET_VAR(data__->,__action_list[__SFC_MOVING_INLINE9].state,,1);};
    if (desactivated) {__SET_VAR(data__->,__action_list[__SFC_MOVING_INLINE9].state,,0);};

    if (active)       {__SET_VAR(data__->,__action_list[__SFC_MOVING_INLINE10].state,,1);};
    if (desactivated) {__SET_VAR(data__->,__action_list[__SFC_MOVING_INLINE10].state,,0);};

    if (active)       {__SET_VAR(data__->,__action_list[__SFC_MOVING_INLINE11].state,,1);};
    if (desactivated) {__SET_VAR(data__->,__action_list[__SFC_MOVING_INLINE11].state,,0);};

    if (active)       {__SET_VAR(data__->,__action_list[__SFC_MOVING_INLINE12].state,,1);};
    if (desactivated) {__SET_VAR(data__->,__action_list[__SFC_MOVING_INLINE12].state,,0);};

  }

  // SABORTED action associations
  {
    char active = __GET_VAR(data__->SABORTED.X);
    char activated = active && !data__->SABORTED.prev_state;
    char desactivated = !active && data__->SABORTED.prev_state;

    if (activated)    {__SET_VAR(data__->,__action_list[__SFC_SABORTED_INLINE13].state,,1);}
    else              {__SET_VAR(data__->,__action_list[__SFC_SABORTED_INLINE13].state,,0);};

    if (activated)    {__SET_VAR(data__->,__action_list[__SFC_SABORTED_INLINE14].state,,1);}
    else              {__SET_VAR(data__->,__action_list[__SFC_SABORTED_INLINE14].state,,0);};

  }

  // DONE action associations
  {
    char active = __GET_VAR(data__->DONE.X);
    char activated = active && !data__->DONE.prev_state;
    char desactivated = !active && data__->DONE.prev_state;

    if (activated)    {__SET_VAR(data__->,__action_list[__SFC_DONE_INLINE27].state,,1);}
    else              {__SET_VAR(data__->,__action_list[__SFC_DONE_INLINE27].state,,0);};

    if (activated)    {__SET_VAR(data__->,__action_list[__SFC_DONE_INLINE28].state,,1);}
    else              {__SET_VAR(data__->,__action_list[__SFC_DONE_INLINE28].state,,0);};

  }


  // Actions state evaluation
  for (i = 0; i < data__->__nb_actions; i++) {
    if (data__->__action_list[i].set) {
      data__->__action_list[i].set_remaining_time = __time_to_timespec(1, 0, 0, 0, 0, 0);
      data__->__action_list[i].stored = 1;
    }
    if (data__->__action_list[i].reset) {
      data__->__action_list[i].reset_remaining_time = __time_to_timespec(1, 0, 0, 0, 0, 0);
      data__->__action_list[i].stored = 0;
    }
    __SET_VAR(data__->,__action_list[i].state,,__GET_VAR(data__->__action_list[i].state) | data__->__action_list[i].stored);
  }

  // Actions execution
  if(__GET_VAR(data__->__action_list[__SFC_INITORRESET].state)) {
    __SET_VAR(data__->,SCS,,1);
    __SET_VAR(data__->,AXIS,,__GET_VAR(data__->AXISID,));
    __SET_VAR(data__->VCLAMP.,AXISID,,__GET_VAR(data__->AXISID,));
    __SET_VAR(data__->VCLAMP.,VEL,,__GET_VAR(data__->VELOCITY,));
    __SET_VAR(data__->VCLAMP.,ACC,,__GET_VAR(data__->ACCELERATION,));
    _VACLAMP_body__(&data__->VCLAMP);
    __SET_VAR(data__->,VO,,__GET_VAR(data__->VCLAMP.VO,));
    __SET_VAR(data__->,AO,,__GET_VAR(data__->VCLAMP.AO,));
    if ((__GET_VAR(data__->VELOCITY,) < 0.0)) {
      __SET_VAR(data__->,TOPC,,-999999999.9);
    } else {
      __SET_VAR(data__->,TOPC,,999999999.9);
    };
    if (((__GET_VAR(data__->INVEL,) == 1) || (__GET_VAR(data__->ABORTED,) == 1))) {
      __SET_VAR(data__->,INVEL,,__GET_VAR(data__->EXECUTE,));
      __SET_VAR(data__->,ABORTED,,__GET_VAR(data__->EXECUTE,));
    } else {
      __SET_VAR(data__->,INVELBOOL,,__BOOL_LITERAL(FALSE));
      __SET_VAR(data__->,ABORTBOOL,,__BOOL_LITERAL(FALSE));
      __SET_VAR(data__->AI.,ROW,,__BOOL_LITERAL(FALSE));
      __SET_VAR(data__->AI.,NODEID,,__GET_VAR(data__->AXISID,));
      __SET_VAR(data__->AI.,PNAME,,__STRING_LITERAL(7,"INTERVC"));
      AXIS_INFO_body__(&data__->AI);
      __SET_VAR(data__->,CURVC,,__GET_VAR(data__->AI.OUTR,));
      if ((__GET_VAR(data__->CURVC,) > 0.0)) {
        __SET_VAR(data__->,CJ,,(__GET_VAR(data__->VELOCITY,) * __GET_VAR(data__->DIR,)));
        __SET_VAR(data__->D2.,P1,,__GET_VAR(data__->CURVC,));
        __SET_VAR(data__->D2.,P2,,__GET_VAR(data__->CJ,));
        _DIFF2_body__(&data__->D2);
      };
      if (__GET_VAR(data__->D2.SAME,)) {
        __SET_VAR(data__->,INVEL,,1);
      };
    };
    __SET_VAR(data__->AI.,ROW,,__BOOL_LITERAL(FALSE));
    __SET_VAR(data__->AI.,NODEID,,__GET_VAR(data__->AXISID,));
    __SET_VAR(data__->AI.,PNAME,,__STRING_LITERAL(5,"STATE"));
    AXIS_INFO_body__(&data__->AI);
    __SET_VAR(data__->,SCS,,__GET_VAR(data__->AI.OUTU32,));
    if (((((__GET_VAR(data__->SCS,) == 1) || (__GET_VAR(data__->SCS,) == 2)) || (__GET_VAR(data__->SCS,) == 3)) || (__GET_VAR(data__->SCS,) == 5))) {
      __SET_VAR(data__->RRTG.,CLK,,__GET_VAR(data__->EXECUTE,));
      R_TRIG_body__(&data__->RRTG);
      __SET_VAR(data__->,ER,,__GET_VAR(data__->RRTG.Q));
    } else {
      __SET_VAR(data__->,ER,,0);
    };
  }

  if(__GET_VAR(data__->__action_list[__SFC_INIT_INLINE29].state)) {
    __SET_VAR(data__->,CS,,0);
  }

  if(__GET_VAR(data__->__action_list[__SFC_DOWN0_INLINE15].state)) {
    __SET_VAR(data__->,CS,,1);
  }

  if(__GET_VAR(data__->__action_list[__SFC_DOWN0_INLINE16].state)) {
    __SET_VAR(data__->,ER,,0);
  }

  if(__GET_VAR(data__->__action_list[__SFC_DOWN0_INLINE17].state)) {
    __SET_VAR(data__->SID.,ROW,,__BOOL_LITERAL(TRUE));
    __SET_VAR(data__->SID.,AXISID,,__GET_VAR(data__->AXISID,));
    _SESSIONID_body__(&data__->SID);
    __SET_VAR(data__->,CURLOCK,,__GET_VAR(data__->SID.FBD_ABORT_FLAG));
  }

  if(__GET_VAR(data__->__action_list[__SFC_DOWN0_INLINE18].state)) {
    __SET_VAR(data__->AI.,ROW,,__BOOL_LITERAL(FALSE));
    __SET_VAR(data__->AI.,NODEID,,__GET_VAR(data__->AXISID,));
    __SET_VAR(data__->AI.,PNAME,,__STRING_LITERAL(7,"INTERVC"));
    AXIS_INFO_body__(&data__->AI);
  }

  if(__GET_VAR(data__->__action_list[__SFC_DOWN0_INLINE19].state)) {
    __SET_VAR(data__->,CURVC,,__GET_VAR(data__->AI.OUTR,));
  }

  if(__GET_VAR(data__->__action_list[__SFC_DOWN0_INLINE20].state)) {
    __SET_VAR(data__->AI.,ROW,,__BOOL_LITERAL(FALSE));
    __SET_VAR(data__->AI.,NODEID,,__GET_VAR(data__->AXISID,));
    __SET_VAR(data__->AI.,PNAME,,__STRING_LITERAL(6,"INTERV"));
    AXIS_INFO_body__(&data__->AI);
  }

  if(__GET_VAR(data__->__action_list[__SFC_DOWN0_INLINE21].state)) {
    __SET_VAR(data__->,LASTVC,,__GET_VAR(data__->AI.OUTR,));
  }

  if(__GET_VAR(data__->__action_list[__SFC_DOWN0_INLINE22].state)) {
    if ((__GET_VAR(data__->CJ,) >= 0.0)) {
      __SET_VAR(data__->,CANSTART,,__BOOL_LITERAL(TRUE));
    } else {
      __SET_VAR(data__->,CANSTART,,__BOOL_LITERAL(FALSE));
      __SET_VAR(data__->AI.,ROW,,__BOOL_LITERAL(TRUE));
      __SET_VAR(data__->AI.,NODEID,,__GET_VAR(data__->AXISID,));
      __SET_VAR(data__->AI.,PNAME,,__STRING_LITERAL(6,"INTERV"));
      __SET_VAR(data__->AI.,INR,,0.0);
      AXIS_INFO_body__(&data__->AI);
    };
  }

  if(__GET_VAR(data__->__action_list[__SFC_DOWN0_INLINE23].state)) {
    __SET_VAR(data__->SID.,ROW,,__BOOL_LITERAL(FALSE));
    __SET_VAR(data__->SID.,AXISID,,__GET_VAR(data__->AXISID,));
    _SESSIONID_body__(&data__->SID);
    __SET_VAR(data__->,RECLOCK,,__GET_VAR(data__->SID.FBD_ABORT_FLAG));
  }

  if(__GET_VAR(data__->__action_list[__SFC_DOWN0_INLINE24].state)) {
    if ((__GET_VAR(data__->RECLOCK,) != __GET_VAR(data__->CURLOCK,))) {
      __SET_VAR(data__->,ABORTBOOL,,__BOOL_LITERAL(TRUE));
    } else {
      __SET_VAR(data__->,ABORTBOOL,,__BOOL_LITERAL(FALSE));
    };
  }

  if(__GET_VAR(data__->__action_list[__SFC_DOWN0_INLINE25].state)) {
    __SET_VAR(data__->D2.,P1,,__GET_VAR(data__->CURVC,));
    __SET_VAR(data__->D2.,P2,,0.0);
    _DIFF2_body__(&data__->D2);
  }

  if(__GET_VAR(data__->__action_list[__SFC_DOWN0_INLINE26].state)) {
    if (__GET_VAR(data__->D2.SAME,)) {
      __SET_VAR(data__->,VE0,,__BOOL_LITERAL(TRUE));
    } else {
      __SET_VAR(data__->,VE0,,__BOOL_LITERAL(FALSE));
    };
  }

  if(__GET_VAR(data__->__action_list[__SFC_START_INLINE1].state)) {
    __SET_VAR(data__->WPVA.,AXISID,,__GET_VAR(data__->AXISID,));
    __SET_VAR(data__->WPVA.,POSITION,,__GET_VAR(data__->TOPC,));
    __SET_VAR(data__->WPVA.,VELOCITY,,__GET_VAR(data__->VO,));
    __SET_VAR(data__->WPVA.,ACCELERATION,,__GET_VAR(data__->AO,));
    _W_PVA_body__(&data__->WPVA);
  }

  if(__GET_VAR(data__->__action_list[__SFC_START_INLINE2].state)) {
    __SET_VAR(data__->WDEC.,AXISID,,__GET_VAR(data__->AXISID,));
    __SET_VAR(data__->WDEC.,DONEFLAG,,__BOOL_LITERAL(FALSE));
    __SET_VAR(data__->WDEC.,EXECUTEFLAG,,__BOOL_LITERAL(TRUE));
    __SET_VAR(data__->WDEC.,COMMANDTYPE,,8);
    _W_DEC_body__(&data__->WDEC);
  }

  if(__GET_VAR(data__->__action_list[__SFC_START_INLINE3].state)) {
    __SET_VAR(data__->,MOVEBOOL,,__BOOL_LITERAL(TRUE));
  }

  if(__GET_VAR(data__->__action_list[__SFC_START_INLINE4].state)) {
    __SET_VAR(data__->,INVEL,,__BOOL_LITERAL(FALSE));
  }

  if(__GET_VAR(data__->__action_list[__SFC_MOVING_INLINE5].state)) {
    __SET_VAR(data__->,CS,,2);
  }

  if(__GET_VAR(data__->__action_list[__SFC_MOVING_INLINE6].state)) {
    __SET_VAR(data__->SID.,ROW,,__BOOL_LITERAL(FALSE));
    __SET_VAR(data__->SID.,AXISID,,__GET_VAR(data__->AXISID,));
    _SESSIONID_body__(&data__->SID);
    __SET_VAR(data__->,RECLOCK,,__GET_VAR(data__->SID.FBD_ABORT_FLAG));
  }

  if(__GET_VAR(data__->__action_list[__SFC_MOVING_INLINE7].state)) {
    if ((__GET_VAR(data__->RECLOCK,) != __GET_VAR(data__->CURLOCK,))) {
      __SET_VAR(data__->,ABORTBOOL,,__BOOL_LITERAL(TRUE));
      __SET_VAR(data__->,INVELBOOL,,__BOOL_LITERAL(FALSE));
    };
  }

  if(__GET_VAR(data__->__action_list[__SFC_MOVING_INLINE8].state)) {
    if ((__GET_VAR(data__->TOPC,) > 0.0)) {
      __SET_VAR(data__->,DIR,,1.0);
    } else {
      __SET_VAR(data__->,DIR,,-1.0);
    };
  }

  if(__GET_VAR(data__->__action_list[__SFC_MOVING_INLINE9].state)) {
    __SET_VAR(data__->AI.,ROW,,__BOOL_LITERAL(FALSE));
    __SET_VAR(data__->AI.,NODEID,,__GET_VAR(data__->AXISID,));
    __SET_VAR(data__->AI.,PNAME,,__STRING_LITERAL(7,"INTERVC"));
    AXIS_INFO_body__(&data__->AI);
    __SET_VAR(data__->,CURVC,,__GET_VAR(data__->AI.OUTR));
  }

  if(__GET_VAR(data__->__action_list[__SFC_MOVING_INLINE10].state)) {
    __SET_VAR(data__->,LASTVC,,__GET_VAR(data__->CURVC,));
  }

  if(__GET_VAR(data__->__action_list[__SFC_MOVING_INLINE11].state)) {
    __SET_VAR(data__->D2.,P1,,__GET_VAR(data__->CURVC,));
    __SET_VAR(data__->D2.,P2,,__GET_VAR(data__->VO,));
    _DIFF2_body__(&data__->D2);
    __SET_VAR(data__->,ISSAME,,__GET_VAR(data__->D2.SAME));
  }

  if(__GET_VAR(data__->__action_list[__SFC_MOVING_INLINE12].state)) {
    if (__GET_VAR(data__->ISSAME,)) {
      __SET_VAR(data__->,INVELBOOL,,__BOOL_LITERAL(TRUE));
    } else {
      __SET_VAR(data__->,INVELBOOL,,__BOOL_LITERAL(FALSE));
    };
  }

  if(__GET_VAR(data__->__action_list[__SFC_SABORTED_INLINE13].state)) {
    __SET_VAR(data__->,ABORTED,,1);
  }

  if(__GET_VAR(data__->__action_list[__SFC_SABORTED_INLINE14].state)) {
    __SET_VAR(data__->,TODEA,,__BOOL_LITERAL(TRUE));
  }

  if(__GET_VAR(data__->__action_list[__SFC_DONE_INLINE27].state)) {
    __SET_VAR(data__->,INVEL,,1);
  }

  if(__GET_VAR(data__->__action_list[__SFC_DONE_INLINE28].state)) {
    __SET_VAR(data__->,TODEA,,__BOOL_LITERAL(TRUE));
  }



  goto __end;

__end:
  return;
} // MC_VELOCITY_body__() 

// Steps undefinitions
#undef INIT
#undef __SFC_INIT
#undef DOWN0
#undef __SFC_DOWN0
#undef START
#undef __SFC_START
#undef MOVING
#undef __SFC_MOVING
#undef SABORTED
#undef __SFC_SABORTED
#undef DONE
#undef __SFC_DONE

// Actions undefinitions
#undef __SFC_INITORRESET
#undef __SFC_INIT_INLINE29
#undef __SFC_DOWN0_INLINE15
#undef __SFC_DOWN0_INLINE16
#undef __SFC_DOWN0_INLINE17
#undef __SFC_DOWN0_INLINE18
#undef __SFC_DOWN0_INLINE19
#undef __SFC_DOWN0_INLINE20
#undef __SFC_DOWN0_INLINE21
#undef __SFC_DOWN0_INLINE22
#undef __SFC_DOWN0_INLINE23
#undef __SFC_DOWN0_INLINE24
#undef __SFC_DOWN0_INLINE25
#undef __SFC_DOWN0_INLINE26
#undef __SFC_START_INLINE1
#undef __SFC_START_INLINE2
#undef __SFC_START_INLINE3
#undef __SFC_START_INLINE4
#undef __SFC_MOVING_INLINE5
#undef __SFC_MOVING_INLINE6
#undef __SFC_MOVING_INLINE7
#undef __SFC_MOVING_INLINE8
#undef __SFC_MOVING_INLINE9
#undef __SFC_MOVING_INLINE10
#undef __SFC_MOVING_INLINE11
#undef __SFC_MOVING_INLINE12
#undef __SFC_SABORTED_INLINE13
#undef __SFC_SABORTED_INLINE14
#undef __SFC_DONE_INLINE27
#undef __SFC_DONE_INLINE28





void MC_GEARIN_init__(MC_GEARIN *data__, BOOL retain) {
  __INIT_VAR(data__->EN,__BOOL_LITERAL(TRUE),retain)
  __INIT_VAR(data__->ENO,__BOOL_LITERAL(TRUE),retain)
  __INIT_VAR(data__->MASTERID,0,retain)
  __INIT_VAR(data__->SLAVEID,0,retain)
  __INIT_VAR(data__->EXECUTE,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->RATNUMERATOR,0,retain)
  __INIT_VAR(data__->RATDENOMINATOR,1.0,retain)
  __INIT_VAR(data__->MASTER,0,retain)
  __INIT_VAR(data__->SLAVE,0,retain)
  __INIT_VAR(data__->INGEAR,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->ABORTED,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->ERROR,__BOOL_LITERAL(FALSE),retain)
  _W_DEC_init__(&data__->WDEC,retain);
  _W_PVA_init__(&data__->WPVA,retain);
  __INIT_VAR(data__->ABORTBOOL,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->DONEBOOL,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->MOVEBOOL,__BOOL_LITERAL(FALSE),retain)
  AXIS_INFO_init__(&data__->AI,retain);
  __INIT_VAR(data__->DONECNT,0,retain)
  __INIT_VAR(data__->DONE3OKBOOL,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->CLICK3,3,retain)
  __INIT_VAR(data__->SESSIONOVER,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->ERRORNOTRESET,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->SPOS,0,retain)
  __INIT_VAR(data__->SDELTA,0,retain)
  __INIT_VAR(data__->ALLSPOS,0.0,retain)
  __INIT_VAR(data__->MDELTA,0,retain)
  _INTER_WRITE_init__(&data__->IW,retain);
  _IPBYSPOS_init__(&data__->IPW,retain);
  __INIT_VAR(data__->RATIO,0,retain)
  _SESSIONID_init__(&data__->SID,retain);
  __INIT_VAR(data__->CURLOCK,0,retain)
  __INIT_VAR(data__->RECLOCK,0,retain)
  R_TRIG_init__(&data__->RRTG,retain);
  __INIT_VAR(data__->ER,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->SCS,0,retain)
  UINT i;
  data__->__nb_steps = 4;
  static const STEP temp_step = {{0, 0}, 0, {{0, 0}, 0}};
  for(i = 0; i < data__->__nb_steps; i++) {
    data__->__step_list[i] = temp_step;
  }
  __SET_VAR(data__->,__step_list[0].X,,1);
  data__->__nb_actions = 9;
  static const ACTION temp_action = {0, {0, 0}, 0, 0, {0, 0}, {0, 0}};
  for(i = 0; i < data__->__nb_actions; i++) {
    data__->__action_list[i] = temp_action;
  }
  data__->__nb_transitions = 4;
  data__->__lasttick_time = __CURRENT_TIME;
}

// Steps definitions
#define INIT __step_list[0]
#define __SFC_INIT 0
#define START __step_list[1]
#define __SFC_START 1
#define MOVING __step_list[2]
#define __SFC_MOVING 2
#define SABORTED __step_list[3]
#define __SFC_SABORTED 3

// Actions definitions
#define __SFC_INITORRESET 0
#define __SFC_START_INLINE1 1
#define __SFC_START_INLINE2 2
#define __SFC_START_INLINE3 3
#define __SFC_START_INLINE4 4
#define __SFC_ABORTERRORDONE 5
#define __SFC_SABORTED_INLINE5 6
#define __SFC_SABORTED_INLINE6 7
#define __SFC_SABORTED_INLINE7 8

// Code part
void MC_GEARIN_body__(MC_GEARIN *data__) {
  // Control execution
  if (!__GET_VAR(data__->EN)) {
    __SET_VAR(data__->,ENO,,__BOOL_LITERAL(FALSE));
    return;
  }
  else {
    __SET_VAR(data__->,ENO,,__BOOL_LITERAL(TRUE));
  }
  // Initialise TEMP variables

  INT i;
  TIME elapsed_time, current_time;

  // Calculate elapsed_time
  current_time = __CURRENT_TIME;
  elapsed_time = __time_sub(current_time, data__->__lasttick_time);
  data__->__lasttick_time = current_time;
  // Transitions initialization
  if (__DEBUG) {
    for (i = 0; i < data__->__nb_transitions; i++) {
      data__->__transition_list[i] = data__->__debug_transition_list[i];
    }
  }
  // Steps initialization
  for (i = 0; i < data__->__nb_steps; i++) {
    data__->__step_list[i].prev_state = __GET_VAR(data__->__step_list[i].X);
    if (__GET_VAR(data__->__step_list[i].X)) {
      data__->__step_list[i].T.value = __time_add(data__->__step_list[i].T.value, elapsed_time);
    }
  }
  // Actions initialization
  for (i = 0; i < data__->__nb_actions; i++) {
    __SET_VAR(data__->,__action_list[i].state,,0);
    data__->__action_list[i].set = 0;
    data__->__action_list[i].reset = 0;
    if (__time_cmp(data__->__action_list[i].set_remaining_time, __time_to_timespec(1, 0, 0, 0, 0, 0)) > 0) {
      data__->__action_list[i].set_remaining_time = __time_sub(data__->__action_list[i].set_remaining_time, elapsed_time);
      if (__time_cmp(data__->__action_list[i].set_remaining_time, __time_to_timespec(1, 0, 0, 0, 0, 0)) <= 0) {
        data__->__action_list[i].set_remaining_time = __time_to_timespec(1, 0, 0, 0, 0, 0);
        data__->__action_list[i].set = 1;
      }
    }
    if (__time_cmp(data__->__action_list[i].reset_remaining_time, __time_to_timespec(1, 0, 0, 0, 0, 0)) > 0) {
      data__->__action_list[i].reset_remaining_time = __time_sub(data__->__action_list[i].reset_remaining_time, elapsed_time);
      if (__time_cmp(data__->__action_list[i].reset_remaining_time, __time_to_timespec(1, 0, 0, 0, 0, 0)) <= 0) {
        data__->__action_list[i].reset_remaining_time = __time_to_timespec(1, 0, 0, 0, 0, 0);
        data__->__action_list[i].reset = 1;
      }
    }
  }

  // Transitions fire test
  if (__GET_VAR(data__->INIT.X)) {
    __SET_VAR(data__->,__transition_list[0],,__GET_VAR(data__->ER,));
    if (__DEBUG) {
      __SET_VAR(data__->,__debug_transition_list[0],,__GET_VAR(data__->__transition_list[0]));
    }
  }
  else {
    if (__DEBUG) {
      __SET_VAR(data__->,__debug_transition_list[0],,__GET_VAR(data__->ER,));
    }
    __SET_VAR(data__->,__transition_list[0],,0);
  }
  if (__GET_VAR(data__->START.X)) {
    __SET_VAR(data__->,__transition_list[1],,__GET_VAR(data__->MOVEBOOL,));
    if (__DEBUG) {
      __SET_VAR(data__->,__debug_transition_list[1],,__GET_VAR(data__->__transition_list[1]));
    }
  }
  else {
    if (__DEBUG) {
      __SET_VAR(data__->,__debug_transition_list[1],,__GET_VAR(data__->MOVEBOOL,));
    }
    __SET_VAR(data__->,__transition_list[1],,0);
  }
  if (__GET_VAR(data__->MOVING.X)) {
    __SET_VAR(data__->,__transition_list[2],,__GET_VAR(data__->ABORTBOOL,));
    if (__DEBUG) {
      __SET_VAR(data__->,__debug_transition_list[2],,__GET_VAR(data__->__transition_list[2]));
    }
  }
  else {
    if (__DEBUG) {
      __SET_VAR(data__->,__debug_transition_list[2],,__GET_VAR(data__->ABORTBOOL,));
    }
    __SET_VAR(data__->,__transition_list[2],,0);
  }
  if (__GET_VAR(data__->SABORTED.X)) {
    __SET_VAR(data__->,__transition_list[3],,__GET_VAR(data__->SESSIONOVER,));
    if (__DEBUG) {
      __SET_VAR(data__->,__debug_transition_list[3],,__GET_VAR(data__->__transition_list[3]));
    }
  }
  else {
    if (__DEBUG) {
      __SET_VAR(data__->,__debug_transition_list[3],,__GET_VAR(data__->SESSIONOVER,));
    }
    __SET_VAR(data__->,__transition_list[3],,0);
  }

  // Transitions reset steps
  if (__GET_VAR(data__->__transition_list[0])) {
    __SET_VAR(data__->,INIT.X,,0);
  }
  if (__GET_VAR(data__->__transition_list[1])) {
    __SET_VAR(data__->,START.X,,0);
  }
  if (__GET_VAR(data__->__transition_list[2])) {
    __SET_VAR(data__->,MOVING.X,,0);
  }
  if (__GET_VAR(data__->__transition_list[3])) {
    __SET_VAR(data__->,SABORTED.X,,0);
  }

  // Transitions set steps
  if (__GET_VAR(data__->__transition_list[0])) {
    __SET_VAR(data__->,START.X,,1);
    data__->START.T.value = __time_to_timespec(1, 0, 0, 0, 0, 0);
  }
  if (__GET_VAR(data__->__transition_list[1])) {
    __SET_VAR(data__->,MOVING.X,,1);
    data__->MOVING.T.value = __time_to_timespec(1, 0, 0, 0, 0, 0);
  }
  if (__GET_VAR(data__->__transition_list[2])) {
    __SET_VAR(data__->,SABORTED.X,,1);
    data__->SABORTED.T.value = __time_to_timespec(1, 0, 0, 0, 0, 0);
  }
  if (__GET_VAR(data__->__transition_list[3])) {
    __SET_VAR(data__->,INIT.X,,1);
    data__->INIT.T.value = __time_to_timespec(1, 0, 0, 0, 0, 0);
  }

  // Steps association
  // INIT action associations
  {
    char active = __GET_VAR(data__->INIT.X);
    char activated = active && !data__->INIT.prev_state;
    char desactivated = !active && data__->INIT.prev_state;

    if (active)       {__SET_VAR(data__->,__action_list[__SFC_INITORRESET].state,,1);};
    if (desactivated) {__SET_VAR(data__->,__action_list[__SFC_INITORRESET].state,,0);};

  }

  // START action associations
  {
    char active = __GET_VAR(data__->START.X);
    char activated = active && !data__->START.prev_state;
    char desactivated = !active && data__->START.prev_state;

    if (activated)    {__SET_VAR(data__->,__action_list[__SFC_START_INLINE1].state,,1);}
    else              {__SET_VAR(data__->,__action_list[__SFC_START_INLINE1].state,,0);};

    if (activated)    {__SET_VAR(data__->,__action_list[__SFC_START_INLINE2].state,,1);}
    else              {__SET_VAR(data__->,__action_list[__SFC_START_INLINE2].state,,0);};

    if (activated)    {__SET_VAR(data__->,__action_list[__SFC_START_INLINE3].state,,1);}
    else              {__SET_VAR(data__->,__action_list[__SFC_START_INLINE3].state,,0);};

    if (activated)    {__SET_VAR(data__->,__action_list[__SFC_START_INLINE4].state,,1);}
    else              {__SET_VAR(data__->,__action_list[__SFC_START_INLINE4].state,,0);};

  }

  // MOVING action associations
  {
    char active = __GET_VAR(data__->MOVING.X);
    char activated = active && !data__->MOVING.prev_state;
    char desactivated = !active && data__->MOVING.prev_state;

    if (active)       {__SET_VAR(data__->,__action_list[__SFC_ABORTERRORDONE].state,,1);};
    if (desactivated) {__SET_VAR(data__->,__action_list[__SFC_ABORTERRORDONE].state,,0);};

  }

  // SABORTED action associations
  {
    char active = __GET_VAR(data__->SABORTED.X);
    char activated = active && !data__->SABORTED.prev_state;
    char desactivated = !active && data__->SABORTED.prev_state;

    if (activated)    {__SET_VAR(data__->,__action_list[__SFC_SABORTED_INLINE5].state,,1);}
    else              {__SET_VAR(data__->,__action_list[__SFC_SABORTED_INLINE5].state,,0);};

    if (activated)    {__SET_VAR(data__->,__action_list[__SFC_SABORTED_INLINE6].state,,1);}
    else              {__SET_VAR(data__->,__action_list[__SFC_SABORTED_INLINE6].state,,0);};

    if (activated)    {__SET_VAR(data__->,__action_list[__SFC_SABORTED_INLINE7].state,,1);}
    else              {__SET_VAR(data__->,__action_list[__SFC_SABORTED_INLINE7].state,,0);};

  }


  // Actions state evaluation
  for (i = 0; i < data__->__nb_actions; i++) {
    if (data__->__action_list[i].set) {
      data__->__action_list[i].set_remaining_time = __time_to_timespec(1, 0, 0, 0, 0, 0);
      data__->__action_list[i].stored = 1;
    }
    if (data__->__action_list[i].reset) {
      data__->__action_list[i].reset_remaining_time = __time_to_timespec(1, 0, 0, 0, 0, 0);
      data__->__action_list[i].stored = 0;
    }
    __SET_VAR(data__->,__action_list[i].state,,__GET_VAR(data__->__action_list[i].state) | data__->__action_list[i].stored);
  }

  // Actions execution
  if(__GET_VAR(data__->__action_list[__SFC_INITORRESET].state)) {
    __SET_VAR(data__->,MASTER,,__GET_VAR(data__->MASTERID,));
    __SET_VAR(data__->,SLAVE,,__GET_VAR(data__->SLAVEID,));
    if ((__GET_VAR(data__->INGEAR,) == 1)) {
      __SET_VAR(data__->,INGEAR,,__GET_VAR(data__->EXECUTE,));
    } else {
      __SET_VAR(data__->,DONEBOOL,,__BOOL_LITERAL(FALSE));
      __SET_VAR(data__->,ABORTBOOL,,0);
      __SET_VAR(data__->,SESSIONOVER,,__BOOL_LITERAL(FALSE));
    };
    __SET_VAR(data__->AI.,ROW,,__BOOL_LITERAL(FALSE));
    __SET_VAR(data__->AI.,NODEID,,__GET_VAR(data__->SLAVEID,));
    __SET_VAR(data__->AI.,PNAME,,__STRING_LITERAL(5,"STATE"));
    AXIS_INFO_body__(&data__->AI);
    __SET_VAR(data__->,SCS,,__GET_VAR(data__->AI.OUTU32,));
    if (((((__GET_VAR(data__->SCS,) == 1) || (__GET_VAR(data__->SCS,) == 2)) || (__GET_VAR(data__->SCS,) == 3)) || (__GET_VAR(data__->SCS,) == 5))) {
      __SET_VAR(data__->RRTG.,CLK,,__GET_VAR(data__->EXECUTE,));
      R_TRIG_body__(&data__->RRTG);
      __SET_VAR(data__->,ER,,__GET_VAR(data__->RRTG.Q));
    };
  }

  if(__GET_VAR(data__->__action_list[__SFC_START_INLINE1].state)) {
    __SET_VAR(data__->SID.,ROW,,__BOOL_LITERAL(TRUE));
    __SET_VAR(data__->SID.,AXISID,,__GET_VAR(data__->SLAVEID,));
    _SESSIONID_body__(&data__->SID);
    __SET_VAR(data__->,CURLOCK,,__GET_VAR(data__->SID.FBD_ABORT_FLAG));
  }

  if(__GET_VAR(data__->__action_list[__SFC_START_INLINE2].state)) {
    __SET_VAR(data__->WDEC.,AXISID,,__GET_VAR(data__->SLAVEID,));
    __SET_VAR(data__->WDEC.,DONEFLAG,,__BOOL_LITERAL(FALSE));
    __SET_VAR(data__->WDEC.,EXECUTEFLAG,,__BOOL_LITERAL(TRUE));
    __SET_VAR(data__->WDEC.,COMMANDTYPE,,20);
    _W_DEC_body__(&data__->WDEC);
  }

  if(__GET_VAR(data__->__action_list[__SFC_START_INLINE3].state)) {
    __SET_VAR(data__->,MOVEBOOL,,__BOOL_LITERAL(TRUE));
  }

  if(__GET_VAR(data__->__action_list[__SFC_START_INLINE4].state)) {
    __SET_VAR(data__->,INGEAR,,__BOOL_LITERAL(FALSE));
  }

  if(__GET_VAR(data__->__action_list[__SFC_ABORTERRORDONE].state)) {
    __SET_VAR(data__->SID.,ROW,,__BOOL_LITERAL(FALSE));
    __SET_VAR(data__->SID.,AXISID,,__GET_VAR(data__->SLAVEID,));
    _SESSIONID_body__(&data__->SID);
    __SET_VAR(data__->,RECLOCK,,__GET_VAR(data__->SID.FBD_ABORT_FLAG,));
    if ((__GET_VAR(data__->RECLOCK,) != __GET_VAR(data__->CURLOCK,))) {
      __SET_VAR(data__->,ABORTBOOL,,__BOOL_LITERAL(TRUE));
      __SET_VAR(data__->,DONEBOOL,,__BOOL_LITERAL(FALSE));
    };
    __SET_VAR(data__->AI.,ROW,,__BOOL_LITERAL(FALSE));
    __SET_VAR(data__->AI.,NODEID,,__GET_VAR(data__->MASTERID,));
    __SET_VAR(data__->AI.,PNAME,,__STRING_LITERAL(7,"INTERDP"));
    AXIS_INFO_body__(&data__->AI);
    __SET_VAR(data__->,MDELTA,,__GET_VAR(data__->AI.OUTR,));
    __SET_VAR(data__->,RATIO,,(__GET_VAR(data__->RATNUMERATOR,) / __GET_VAR(data__->RATDENOMINATOR,)));
    __SET_VAR(data__->,SDELTA,,(__GET_VAR(data__->MDELTA,) * __GET_VAR(data__->RATIO,)));
    __SET_VAR(data__->AI.,ROW,,__BOOL_LITERAL(FALSE));
    __SET_VAR(data__->AI.,NODEID,,__GET_VAR(data__->SLAVEID,));
    __SET_VAR(data__->AI.,PNAME,,__STRING_LITERAL(2,"PC"));
    AXIS_INFO_body__(&data__->AI);
    __SET_VAR(data__->,SPOS,,(__GET_VAR(data__->AI.OUTR,) + __GET_VAR(data__->SDELTA,)));
    __SET_VAR(data__->IPW.,SLAVEID,,__GET_VAR(data__->SLAVEID,));
    __SET_VAR(data__->IPW.,SPOS,,__GET_VAR(data__->SPOS,));
    _IPBYSPOS_body__(&data__->IPW);
    __SET_VAR(data__->,INGEAR,,__GET_VAR(data__->IPW.INVEL,));
  }

  if(__GET_VAR(data__->__action_list[__SFC_SABORTED_INLINE5].state)) {
    __SET_VAR(data__->,ABORTED,,__BOOL_LITERAL(TRUE));
  }

  if(__GET_VAR(data__->__action_list[__SFC_SABORTED_INLINE6].state)) {
    __SET_VAR(data__->,INGEAR,,__BOOL_LITERAL(FALSE));
  }

  if(__GET_VAR(data__->__action_list[__SFC_SABORTED_INLINE7].state)) {
    __SET_VAR(data__->,SESSIONOVER,,__BOOL_LITERAL(TRUE));
  }



  goto __end;

__end:
  return;
} // MC_GEARIN_body__() 

// Steps undefinitions
#undef INIT
#undef __SFC_INIT
#undef START
#undef __SFC_START
#undef MOVING
#undef __SFC_MOVING
#undef SABORTED
#undef __SFC_SABORTED

// Actions undefinitions
#undef __SFC_INITORRESET
#undef __SFC_START_INLINE1
#undef __SFC_START_INLINE2
#undef __SFC_START_INLINE3
#undef __SFC_START_INLINE4
#undef __SFC_ABORTERRORDONE
#undef __SFC_SABORTED_INLINE5
#undef __SFC_SABORTED_INLINE6
#undef __SFC_SABORTED_INLINE7





void DS402SERVOINIT_init__(DS402SERVOINIT *data__, BOOL retain) {
  __INIT_VAR(data__->EN,__BOOL_LITERAL(TRUE),retain)
  __INIT_VAR(data__->ENO,__BOOL_LITERAL(TRUE),retain)
  __INIT_VAR(data__->AXISID,0,retain)
  __INIT_VAR(data__->TARGETMODE,0,retain)
  __INIT_VAR(data__->ENABLEORNOT,__BOOL_LITERAL(FALSE),retain)
  TON_init__(&data__->BLOCK1,retain);
  TON_init__(&data__->BLOCK3,retain);
  SVRO_CONTROL_init__(&data__->SSC,retain);
  MC_RESET_init__(&data__->MMR,retain);
  U16_B16_init__(&data__->JJK,retain);
  IP_READ2_init__(&data__->IIR,retain);
  B16_U16_init__(&data__->KKL,retain);
  __INIT_VAR(data__->ENA,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->DONE,__BOOL_LITERAL(FALSE),retain)
  SVRO_MODE_init__(&data__->SVR_AXIS_MODE,retain);
  __INIT_VAR(data__->ACTUALMODE,0,retain)
  __INIT_VAR(data__->STATUS,0,retain)
  __INIT_VAR(data__->RST,__BOOL_LITERAL(FALSE),retain)
  SVRO_CLEARFAULT_init__(&data__->CSA,retain);
  R_TRIG_init__(&data__->RTG,retain);
  SR_init__(&data__->SSF,retain);
  AXIS_INFO_init__(&data__->STATE,retain);
  R_TRIG_init__(&data__->RGG,retain);
  _SESSIONID_init__(&data__->SID,retain);
  __INIT_VAR(data__->INT_TO_USINT122_OUT,0,retain)
  __INIT_VAR(data__->INT_TO_USINT7_OUT,0,retain)
  __INIT_VAR(data__->GT115_OUT,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->INT_TO_USINT117_OUT,0,retain)
  __INIT_VAR(data__->AND281_OUT,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->EQ275_OUT,__BOOL_LITERAL(FALSE),retain)
}

// Code part
void DS402SERVOINIT_body__(DS402SERVOINIT *data__) {
  // Control execution
  if (!__GET_VAR(data__->EN)) {
    __SET_VAR(data__->,ENO,,__BOOL_LITERAL(FALSE));
    return;
  }
  else {
    __SET_VAR(data__->,ENO,,__BOOL_LITERAL(TRUE));
  }
  // Initialise TEMP variables

  __SET_VAR(data__->,INT_TO_USINT122_OUT,,INT_TO_USINT(
    (BOOL)__BOOL_LITERAL(TRUE),
    NULL,
    (INT)__GET_VAR(data__->AXISID,)));
  __SET_VAR(data__->SVR_AXIS_MODE.,AXISID,,__GET_VAR(data__->INT_TO_USINT122_OUT,));
  __SET_VAR(data__->SVR_AXIS_MODE.,TARGETMODE,,__GET_VAR(data__->TARGETMODE,));
  SVRO_MODE_body__(&data__->SVR_AXIS_MODE);
  __SET_VAR(data__->,ACTUALMODE,,__GET_VAR(data__->SVR_AXIS_MODE.ACTUALMODE,));
  __SET_VAR(data__->BLOCK3.,IN,,__GET_VAR(data__->RST,));
  __SET_VAR(data__->BLOCK3.,PT,,__time_to_timespec(1, 0, 0.2, 0, 0, 0));
  TON_body__(&data__->BLOCK3);
  __SET_VAR(data__->MMR.,AXISID,,__GET_VAR(data__->AXISID,));
  __SET_VAR(data__->MMR.,EXECUTE,,__GET_VAR(data__->BLOCK3.Q,));
  MC_RESET_body__(&data__->MMR);
  __SET_VAR(data__->SSF.,S1,,__GET_VAR(data__->MMR.DONE,));
  __SET_VAR(data__->SSF.,R,,!(__GET_VAR(data__->ENA,)));
  SR_body__(&data__->SSF);
  __SET_VAR(data__->,DONE,,__GET_VAR(data__->SSF.Q1,));
  __SET_VAR(data__->,INT_TO_USINT7_OUT,,INT_TO_USINT(
    (BOOL)__BOOL_LITERAL(TRUE),
    NULL,
    (INT)__GET_VAR(data__->AXISID,)));
  __SET_VAR(data__->IIR.,NODEID,,__GET_VAR(data__->INT_TO_USINT7_OUT,));
  IP_READ2_body__(&data__->IIR);
  __SET_VAR(data__->JJK.,UI16,,__GET_VAR(data__->IIR.STATUS,));
  U16_B16_body__(&data__->JJK);
  __SET_VAR(data__->,ENA,,__GET_VAR(data__->JJK.B1,));
  __SET_VAR(data__->,RST,,__GET_VAR(data__->JJK.B2,));
  __SET_VAR(data__->,STATUS,,__GET_VAR(data__->IIR.STATUS,));
  __SET_VAR(data__->,GT115_OUT,,GT__BOOL__UDINT(
    (BOOL)__BOOL_LITERAL(TRUE),
    NULL,
    (UINT)2,
    (UDINT)__GET_VAR(data__->IIR.POSU32,),
    (UDINT)0));
  __SET_VAR(data__->RTG.,CLK,,__GET_VAR(data__->GT115_OUT,));
  R_TRIG_body__(&data__->RTG);
  __SET_VAR(data__->,INT_TO_USINT117_OUT,,INT_TO_USINT(
    (BOOL)__BOOL_LITERAL(TRUE),
    NULL,
    (INT)__GET_VAR(data__->AXISID,)));
  __SET_VAR(data__->BLOCK1.,IN,,__GET_VAR(data__->ENA,));
  __SET_VAR(data__->BLOCK1.,PT,,__time_to_timespec(1, 0, 0.2, 0, 0, 0));
  TON_body__(&data__->BLOCK1);
  __SET_VAR(data__->,AND281_OUT,,AND__BOOL__BOOL(
    (BOOL)__BOOL_LITERAL(TRUE),
    NULL,
    (UINT)2,
    (BOOL)__GET_VAR(data__->BLOCK1.Q,),
    (BOOL)__GET_VAR(data__->ENABLEORNOT,)));
  __SET_VAR(data__->SSC.,EN,,!(__GET_VAR(data__->RTG.Q,)));
  __SET_VAR(data__->SSC.,AXISID,,__GET_VAR(data__->INT_TO_USINT117_OUT,));
  __SET_VAR(data__->SSC.,ENABLE,,__GET_VAR(data__->AND281_OUT,));
  SVRO_CONTROL_body__(&data__->SSC);
  __SET_VAR(data__->CSA.,AXISID,,__GET_VAR(data__->INT_TO_USINT117_OUT,));
  __SET_VAR(data__->CSA.,ENABLE,,__GET_VAR(data__->RTG.Q,));
  SVRO_CLEARFAULT_body__(&data__->CSA);
  __SET_VAR(data__->KKL.,B0,,__GET_VAR(data__->JJK.B0,));
  __SET_VAR(data__->KKL.,B1,,__GET_VAR(data__->JJK.B1,));
  __SET_VAR(data__->KKL.,B2,,__GET_VAR(data__->JJK.B2,));
  __SET_VAR(data__->KKL.,B3,,__GET_VAR(data__->JJK.B3,));
  __SET_VAR(data__->KKL.,B4,,__GET_VAR(data__->JJK.B4,));
  __SET_VAR(data__->KKL.,B5,,__GET_VAR(data__->JJK.B5,));
  __SET_VAR(data__->KKL.,B6,,__GET_VAR(data__->JJK.B6,));
  __SET_VAR(data__->KKL.,B7,,__GET_VAR(data__->JJK.B7,));
  __SET_VAR(data__->KKL.,B8,,__GET_VAR(data__->JJK.B8,));
  __SET_VAR(data__->KKL.,B9,,__GET_VAR(data__->JJK.B9,));
  __SET_VAR(data__->KKL.,B10,,__GET_VAR(data__->JJK.B10,));
  __SET_VAR(data__->KKL.,B11,,__GET_VAR(data__->JJK.B11,));
  __SET_VAR(data__->KKL.,B12,,__GET_VAR(data__->JJK.B12,));
  __SET_VAR(data__->KKL.,B13,,__GET_VAR(data__->JJK.B13,));
  __SET_VAR(data__->KKL.,B14,,__GET_VAR(data__->JJK.B14,));
  __SET_VAR(data__->KKL.,B15,,__GET_VAR(data__->JJK.B15,));
  B16_U16_body__(&data__->KKL);
  __SET_VAR(data__->STATE.,ROW,,__BOOL_LITERAL(FALSE));
  __SET_VAR(data__->STATE.,NODEID,,__GET_VAR(data__->AXISID,));
  __SET_VAR(data__->STATE.,PNAME,,__STRING_LITERAL(5,"STATE"));
  AXIS_INFO_body__(&data__->STATE);
  __SET_VAR(data__->,EQ275_OUT,,EQ__BOOL__UDINT(
    (BOOL)__BOOL_LITERAL(TRUE),
    NULL,
    (UINT)2,
    (UDINT)__GET_VAR(data__->STATE.OUTU32,),
    (UDINT)9));
  __SET_VAR(data__->RGG.,CLK,,__GET_VAR(data__->EQ275_OUT,));
  R_TRIG_body__(&data__->RGG);
  __SET_VAR(data__->SID.,ROW,,__GET_VAR(data__->RGG.Q,));
  __SET_VAR(data__->SID.,AXISID,,__GET_VAR(data__->AXISID,));
  _SESSIONID_body__(&data__->SID);

  goto __end;

__end:
  return;
} // DS402SERVOINIT_body__() 





void PPIINFO_init__(PPIINFO *data__, BOOL retain) {
  __INIT_VAR(data__->EN,__BOOL_LITERAL(TRUE),retain)
  __INIT_VAR(data__->ENO,__BOOL_LITERAL(TRUE),retain)
  AXIS_INFO_init__(&data__->CURPOS,retain);
  __INIT_VAR(data__->AXIS,0,retain)
  __INIT_VAR(data__->ITPC,0,retain)
  __INIT_VAR(data__->ITP,0,retain)
  __INIT_VAR(data__->ITVC,0,retain)
  __INIT_VAR(data__->ITV,0,retain)
  __INIT_VAR(data__->ITA,0,retain)
  __INIT_VAR(data__->PPC,0,retain)
  AXIS_INFO_init__(&data__->INTERP,retain);
  AXIS_INFO_init__(&data__->INTERPC,retain);
  AXIS_INFO_init__(&data__->INTERV,retain);
  AXIS_INFO_init__(&data__->INTERVC,retain);
  AXIS_INFO_init__(&data__->INTERDP,retain);
  AXIS_INFO_init__(&data__->P0POS,retain);
  __INIT_VAR(data__->P0P,0,retain)
  AXIS_INFO_init__(&data__->PCC,retain);
  __INIT_VAR(data__->PC,0,retain)
  AXIS_INFO_init__(&data__->STATE,retain);
  AXIS_INFO_init__(&data__->MPP,retain);
  AXIS_INFO_init__(&data__->VMAX,retain);
  AXIS_INFO_init__(&data__->AMAX,retain);
  AXIS_INFO_init__(&data__->JMAX,retain);
  AXIS_INFO_init__(&data__->LMTL,retain);
  AXIS_INFO_init__(&data__->AMOD,retain);
  AXIS_INFO_init__(&data__->ERRORID,retain);
  AXIS_INFO_init__(&data__->ABORTFLAG,retain);
  AXIS_INFO_init__(&data__->LMTH,retain);
  AXIS_INFO_init__(&data__->BLOCK1,retain);
  QTOUCH_WRITE_init__(&data__->QW,retain);
  __INIT_VAR(data__->UDINT_TO_INT55_OUT,0,retain)
  __INIT_VAR(data__->UDINT_TO_INT87_OUT,0,retain)
  __INIT_VAR(data__->UDINT_TO_INT73_OUT,0,retain)
  __INIT_VAR(data__->UDINT_TO_INT25_OUT,0,retain)
  __INIT_VAR(data__->UDINT_TO_INT35_OUT,0,retain)
  __INIT_VAR(data__->LREAL_TO_INT61_OUT,0,retain)
  __INIT_VAR(data__->LREAL_TO_INT54_OUT,0,retain)
  __INIT_VAR(data__->LREAL_TO_INT38_OUT,0,retain)
  __INIT_VAR(data__->LREAL_TO_INT60_OUT,0,retain)
  __INIT_VAR(data__->LREAL_TO_INT45_OUT,0,retain)
  __INIT_VAR(data__->LREAL_TO_INT70_OUT,0,retain)
  __INIT_VAR(data__->LREAL_TO_INT42_OUT,0,retain)
  __INIT_VAR(data__->LREAL_TO_INT77_OUT,0,retain)
  __INIT_VAR(data__->LREAL_TO_INT92_OUT,0,retain)
  __INIT_VAR(data__->LREAL_TO_INT43_OUT,0,retain)
  __INIT_VAR(data__->LREAL_TO_INT44_OUT,0,retain)
  __INIT_VAR(data__->LREAL_TO_INT82_OUT,0,retain)
  __INIT_VAR(data__->LREAL_TO_INT49_OUT,0,retain)
  __INIT_VAR(data__->BOOL_TO_UDINT97_OUT,0,retain)
}

// Code part
void PPIINFO_body__(PPIINFO *data__) {
  // Control execution
  if (!__GET_VAR(data__->EN)) {
    __SET_VAR(data__->,ENO,,__BOOL_LITERAL(FALSE));
    return;
  }
  else {
    __SET_VAR(data__->,ENO,,__BOOL_LITERAL(TRUE));
  }
  // Initialise TEMP variables

  __SET_VAR(data__->STATE.,ROW,,__BOOL_LITERAL(FALSE));
  __SET_VAR(data__->STATE.,NODEID,,__GET_VAR(data__->AXIS,));
  __SET_VAR(data__->STATE.,PNAME,,__STRING_LITERAL(5,"STATE"));
  AXIS_INFO_body__(&data__->STATE);
  __SET_VAR(data__->ERRORID.,ROW,,__BOOL_LITERAL(FALSE));
  __SET_VAR(data__->ERRORID.,NODEID,,__GET_VAR(data__->AXIS,));
  __SET_VAR(data__->ERRORID.,PNAME,,__STRING_LITERAL(7,"ERRORID"));
  AXIS_INFO_body__(&data__->ERRORID);
  __SET_VAR(data__->,UDINT_TO_INT55_OUT,,UDINT_TO_INT(
    (BOOL)__BOOL_LITERAL(TRUE),
    NULL,
    (UDINT)__GET_VAR(data__->STATE.OUTU32,)));
  __SET_VAR(data__->,UDINT_TO_INT87_OUT,,UDINT_TO_INT(
    (BOOL)__BOOL_LITERAL(TRUE),
    NULL,
    (UDINT)__GET_VAR(data__->ERRORID.OUTU32,)));
  __SET_VAR(data__->ABORTFLAG.,ROW,,__BOOL_LITERAL(FALSE));
  __SET_VAR(data__->ABORTFLAG.,NODEID,,__GET_VAR(data__->AXIS,));
  __SET_VAR(data__->ABORTFLAG.,PNAME,,__STRING_LITERAL(9,"ABORTFLAG"));
  AXIS_INFO_body__(&data__->ABORTFLAG);
  __SET_VAR(data__->,UDINT_TO_INT73_OUT,,UDINT_TO_INT(
    (BOOL)__BOOL_LITERAL(TRUE),
    NULL,
    (UDINT)__GET_VAR(data__->ABORTFLAG.OUTU32,)));
  __SET_VAR(data__->CURPOS.,ROW,,__BOOL_LITERAL(FALSE));
  __SET_VAR(data__->CURPOS.,NODEID,,__GET_VAR(data__->AXIS,));
  __SET_VAR(data__->CURPOS.,PNAME,,__STRING_LITERAL(6,"CURPOS"));
  AXIS_INFO_body__(&data__->CURPOS);
  __SET_VAR(data__->,UDINT_TO_INT25_OUT,,UDINT_TO_INT(
    (BOOL)__BOOL_LITERAL(TRUE),
    NULL,
    (UDINT)__GET_VAR(data__->CURPOS.OUTU32,)));
  __SET_VAR(data__->P0POS.,ROW,,__BOOL_LITERAL(FALSE));
  __SET_VAR(data__->P0POS.,NODEID,,__GET_VAR(data__->AXIS,));
  __SET_VAR(data__->P0POS.,PNAME,,__STRING_LITERAL(5,"P0POS"));
  AXIS_INFO_body__(&data__->P0POS);
  __SET_VAR(data__->,UDINT_TO_INT35_OUT,,UDINT_TO_INT(
    (BOOL)__BOOL_LITERAL(TRUE),
    NULL,
    (UDINT)__GET_VAR(data__->P0POS.OUTU32,)));
  __SET_VAR(data__->INTERP.,ROW,,__BOOL_LITERAL(FALSE));
  __SET_VAR(data__->INTERP.,NODEID,,__GET_VAR(data__->AXIS,));
  __SET_VAR(data__->INTERP.,PNAME,,__STRING_LITERAL(6,"INTERP"));
  AXIS_INFO_body__(&data__->INTERP);
  __SET_VAR(data__->VMAX.,ROW,,__BOOL_LITERAL(FALSE));
  __SET_VAR(data__->VMAX.,NODEID,,__GET_VAR(data__->AXIS,));
  __SET_VAR(data__->VMAX.,PNAME,,__STRING_LITERAL(4,"VMAX"));
  AXIS_INFO_body__(&data__->VMAX);
  __SET_VAR(data__->,LREAL_TO_INT61_OUT,,LREAL_TO_INT(
    (BOOL)__BOOL_LITERAL(TRUE),
    NULL,
    (LREAL)__GET_VAR(data__->INTERP.OUTR,)));
  __SET_VAR(data__->,LREAL_TO_INT54_OUT,,LREAL_TO_INT(
    (BOOL)__BOOL_LITERAL(TRUE),
    NULL,
    (LREAL)__GET_VAR(data__->VMAX.OUTR,)));
  __SET_VAR(data__->INTERPC.,ROW,,__BOOL_LITERAL(FALSE));
  __SET_VAR(data__->INTERPC.,NODEID,,__GET_VAR(data__->AXIS,));
  __SET_VAR(data__->INTERPC.,PNAME,,__STRING_LITERAL(7,"INTERPC"));
  AXIS_INFO_body__(&data__->INTERPC);
  __SET_VAR(data__->AMAX.,ROW,,__BOOL_LITERAL(FALSE));
  __SET_VAR(data__->AMAX.,NODEID,,__GET_VAR(data__->AXIS,));
  __SET_VAR(data__->AMAX.,PNAME,,__STRING_LITERAL(4,"AMAX"));
  AXIS_INFO_body__(&data__->AMAX);
  __SET_VAR(data__->,LREAL_TO_INT38_OUT,,LREAL_TO_INT(
    (BOOL)__BOOL_LITERAL(TRUE),
    NULL,
    (LREAL)__GET_VAR(data__->INTERPC.OUTR,)));
  __SET_VAR(data__->,LREAL_TO_INT60_OUT,,LREAL_TO_INT(
    (BOOL)__BOOL_LITERAL(TRUE),
    NULL,
    (LREAL)__GET_VAR(data__->AMAX.OUTR,)));
  __SET_VAR(data__->PCC.,ROW,,__BOOL_LITERAL(FALSE));
  __SET_VAR(data__->PCC.,NODEID,,__GET_VAR(data__->AXIS,));
  __SET_VAR(data__->PCC.,PNAME,,__STRING_LITERAL(2,"PC"));
  AXIS_INFO_body__(&data__->PCC);
  __SET_VAR(data__->QW.,VARADDR,,62);
  __SET_VAR(data__->QW.,INR,,__GET_VAR(data__->PCC.OUTR,));
  QTOUCH_WRITE_body__(&data__->QW);
  __SET_VAR(data__->,LREAL_TO_INT45_OUT,,LREAL_TO_INT(
    (BOOL)__BOOL_LITERAL(TRUE),
    NULL,
    (LREAL)__GET_VAR(data__->PCC.OUTR,)));
  __SET_VAR(data__->JMAX.,ROW,,__BOOL_LITERAL(FALSE));
  __SET_VAR(data__->JMAX.,NODEID,,__GET_VAR(data__->AXIS,));
  __SET_VAR(data__->JMAX.,PNAME,,__STRING_LITERAL(4,"JMAX"));
  AXIS_INFO_body__(&data__->JMAX);
  __SET_VAR(data__->,LREAL_TO_INT70_OUT,,LREAL_TO_INT(
    (BOOL)__BOOL_LITERAL(TRUE),
    NULL,
    (LREAL)__GET_VAR(data__->JMAX.OUTR,)));
  __SET_VAR(data__->INTERV.,ROW,,__BOOL_LITERAL(FALSE));
  __SET_VAR(data__->INTERV.,NODEID,,__GET_VAR(data__->AXIS,));
  __SET_VAR(data__->INTERV.,PNAME,,__STRING_LITERAL(6,"INTERV"));
  AXIS_INFO_body__(&data__->INTERV);
  __SET_VAR(data__->LMTL.,ROW,,__BOOL_LITERAL(FALSE));
  __SET_VAR(data__->LMTL.,NODEID,,__GET_VAR(data__->AXIS,));
  __SET_VAR(data__->LMTL.,PNAME,,__STRING_LITERAL(4,"LMTL"));
  AXIS_INFO_body__(&data__->LMTL);
  __SET_VAR(data__->,LREAL_TO_INT42_OUT,,LREAL_TO_INT(
    (BOOL)__BOOL_LITERAL(TRUE),
    NULL,
    (LREAL)__GET_VAR(data__->INTERV.OUTR,)));
  __SET_VAR(data__->,LREAL_TO_INT77_OUT,,LREAL_TO_INT(
    (BOOL)__BOOL_LITERAL(TRUE),
    NULL,
    (LREAL)__GET_VAR(data__->LMTL.OUTR,)));
  __SET_VAR(data__->LMTH.,ROW,,__BOOL_LITERAL(FALSE));
  __SET_VAR(data__->LMTH.,NODEID,,__GET_VAR(data__->AXIS,));
  __SET_VAR(data__->LMTH.,PNAME,,__STRING_LITERAL(4,"LMTH"));
  AXIS_INFO_body__(&data__->LMTH);
  __SET_VAR(data__->,LREAL_TO_INT92_OUT,,LREAL_TO_INT(
    (BOOL)__BOOL_LITERAL(TRUE),
    NULL,
    (LREAL)__GET_VAR(data__->LMTH.OUTR,)));
  __SET_VAR(data__->INTERVC.,ROW,,__BOOL_LITERAL(FALSE));
  __SET_VAR(data__->INTERVC.,NODEID,,__GET_VAR(data__->AXIS,));
  __SET_VAR(data__->INTERVC.,PNAME,,__STRING_LITERAL(7,"INTERVC"));
  AXIS_INFO_body__(&data__->INTERVC);
  __SET_VAR(data__->,LREAL_TO_INT43_OUT,,LREAL_TO_INT(
    (BOOL)__BOOL_LITERAL(TRUE),
    NULL,
    (LREAL)__GET_VAR(data__->INTERVC.OUTR,)));
  __SET_VAR(data__->INTERDP.,ROW,,__BOOL_LITERAL(FALSE));
  __SET_VAR(data__->INTERDP.,NODEID,,__GET_VAR(data__->AXIS,));
  __SET_VAR(data__->INTERDP.,PNAME,,__STRING_LITERAL(7,"INTERDP"));
  AXIS_INFO_body__(&data__->INTERDP);
  __SET_VAR(data__->AMOD.,ROW,,__BOOL_LITERAL(FALSE));
  __SET_VAR(data__->AMOD.,NODEID,,__GET_VAR(data__->AXIS,));
  __SET_VAR(data__->AMOD.,PNAME,,__STRING_LITERAL(4,"AMOD"));
  AXIS_INFO_body__(&data__->AMOD);
  __SET_VAR(data__->,LREAL_TO_INT44_OUT,,LREAL_TO_INT(
    (BOOL)__BOOL_LITERAL(TRUE),
    NULL,
    (LREAL)__GET_VAR(data__->INTERDP.OUTR,)));
  __SET_VAR(data__->,LREAL_TO_INT82_OUT,,LREAL_TO_INT(
    (BOOL)__BOOL_LITERAL(TRUE),
    NULL,
    (LREAL)__GET_VAR(data__->AMOD.OUTR,)));
  __SET_VAR(data__->MPP.,ROW,,__BOOL_LITERAL(FALSE));
  __SET_VAR(data__->MPP.,NODEID,,__GET_VAR(data__->AXIS,));
  __SET_VAR(data__->MPP.,PNAME,,__STRING_LITERAL(3,"MPP"));
  AXIS_INFO_body__(&data__->MPP);
  __SET_VAR(data__->,LREAL_TO_INT49_OUT,,LREAL_TO_INT(
    (BOOL)__BOOL_LITERAL(TRUE),
    NULL,
    (LREAL)__GET_VAR(data__->MPP.OUTR,)));
  __SET_VAR(data__->BLOCK1.,ROW,,__BOOL_LITERAL(FALSE));
  __SET_VAR(data__->BLOCK1.,NODEID,,__GET_VAR(data__->AXIS,));
  __SET_VAR(data__->BLOCK1.,PNAME,,__STRING_LITERAL(2,"VA"));
  AXIS_INFO_body__(&data__->BLOCK1);
  __SET_VAR(data__->,BOOL_TO_UDINT97_OUT,,BOOL_TO_UDINT(
    (BOOL)__BOOL_LITERAL(TRUE),
    NULL,
    (BOOL)__GET_VAR(data__->BLOCK1.OUTB,)));

  goto __end;

__end:
  return;
} // PPIINFO_body__() 





void RELA_0_DIS_init__(RELA_0_DIS *data__, BOOL retain) {
  __INIT_VAR(data__->EN,__BOOL_LITERAL(TRUE),retain)
  __INIT_VAR(data__->ENO,__BOOL_LITERAL(TRUE),retain)
  __INIT_VAR(data__->AXISID,0,retain)
  __INIT_VAR(data__->STARTBTN,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->VELOCITY,0,retain)
  __INIT_VAR(data__->STEP_D,0,retain)
  __INIT_VAR(data__->STEP_D1,0,retain)
  MC_RELATIVE_init__(&data__->RELA1,retain);
  __INIT_VAR(data__->E1,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->TO_MOVE,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->TO_SELCET,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->TO_INIT,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->CONTINUE,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->STOP,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->ICOUNT,0,retain)
  __INIT_VAR(data__->E2,__BOOL_LITERAL(FALSE),retain)
  UINT i;
  data__->__nb_steps = 6;
  static const STEP temp_step = {{0, 0}, 0, {{0, 0}, 0}};
  for(i = 0; i < data__->__nb_steps; i++) {
    data__->__step_list[i] = temp_step;
  }
  __SET_VAR(data__->,__step_list[0].X,,1);
  data__->__nb_actions = 10;
  static const ACTION temp_action = {0, {0, 0}, 0, 0, {0, 0}, {0, 0}};
  for(i = 0; i < data__->__nb_actions; i++) {
    data__->__action_list[i] = temp_action;
  }
  data__->__nb_transitions = 7;
  data__->__lasttick_time = __CURRENT_TIME;
}

// Steps definitions
#define START __step_list[0]
#define __SFC_START 0
#define INIT_STEP __step_list[1]
#define __SFC_INIT_STEP 1
#define MOVE_STEP __step_list[2]
#define __SFC_MOVE_STEP 2
#define JUDGE_STEP __step_list[3]
#define __SFC_JUDGE_STEP 3
#define SELECT_STEP __step_list[4]
#define __SFC_SELECT_STEP 4
#define DELAY_STEP __step_list[5]
#define __SFC_DELAY_STEP 5

// Actions definitions
#define __SFC_INIT_STEP_INLINE9 0
#define __SFC_INIT_STEP_INLINE10 1
#define __SFC_MOVE_STEP_INLINE1 2
#define __SFC_MOVE_STEP_INLINE2 3
#define __SFC_MOVE_STEP_INLINE3 4
#define __SFC_JUDGE_STEP_INLINE4 5
#define __SFC_JUDGE_STEP_INLINE5 6
#define __SFC_JUDGE_STEP_INLINE6 7
#define __SFC_SELECT_STEP_INLINE7 8
#define __SFC_DELAY_STEP_INLINE8 9

// Code part
void RELA_0_DIS_body__(RELA_0_DIS *data__) {
  // Control execution
  if (!__GET_VAR(data__->EN)) {
    __SET_VAR(data__->,ENO,,__BOOL_LITERAL(FALSE));
    return;
  }
  else {
    __SET_VAR(data__->,ENO,,__BOOL_LITERAL(TRUE));
  }
  // Initialise TEMP variables

  INT i;
  TIME elapsed_time, current_time;

  // Calculate elapsed_time
  current_time = __CURRENT_TIME;
  elapsed_time = __time_sub(current_time, data__->__lasttick_time);
  data__->__lasttick_time = current_time;
  // Transitions initialization
  if (__DEBUG) {
    for (i = 0; i < data__->__nb_transitions; i++) {
      data__->__transition_list[i] = data__->__debug_transition_list[i];
    }
  }
  // Steps initialization
  for (i = 0; i < data__->__nb_steps; i++) {
    data__->__step_list[i].prev_state = __GET_VAR(data__->__step_list[i].X);
    if (__GET_VAR(data__->__step_list[i].X)) {
      data__->__step_list[i].T.value = __time_add(data__->__step_list[i].T.value, elapsed_time);
    }
  }
  // Actions initialization
  for (i = 0; i < data__->__nb_actions; i++) {
    __SET_VAR(data__->,__action_list[i].state,,0);
    data__->__action_list[i].set = 0;
    data__->__action_list[i].reset = 0;
    if (__time_cmp(data__->__action_list[i].set_remaining_time, __time_to_timespec(1, 0, 0, 0, 0, 0)) > 0) {
      data__->__action_list[i].set_remaining_time = __time_sub(data__->__action_list[i].set_remaining_time, elapsed_time);
      if (__time_cmp(data__->__action_list[i].set_remaining_time, __time_to_timespec(1, 0, 0, 0, 0, 0)) <= 0) {
        data__->__action_list[i].set_remaining_time = __time_to_timespec(1, 0, 0, 0, 0, 0);
        data__->__action_list[i].set = 1;
      }
    }
    if (__time_cmp(data__->__action_list[i].reset_remaining_time, __time_to_timespec(1, 0, 0, 0, 0, 0)) > 0) {
      data__->__action_list[i].reset_remaining_time = __time_sub(data__->__action_list[i].reset_remaining_time, elapsed_time);
      if (__time_cmp(data__->__action_list[i].reset_remaining_time, __time_to_timespec(1, 0, 0, 0, 0, 0)) <= 0) {
        data__->__action_list[i].reset_remaining_time = __time_to_timespec(1, 0, 0, 0, 0, 0);
        data__->__action_list[i].reset = 1;
      }
    }
  }

  // Transitions fire test
  if (__GET_VAR(data__->START.X)) {
    __SET_VAR(data__->,__transition_list[0],,__GET_VAR(data__->STARTBTN,));
    if (__DEBUG) {
      __SET_VAR(data__->,__debug_transition_list[0],,__GET_VAR(data__->__transition_list[0]));
    }
  }
  else {
    if (__DEBUG) {
      __SET_VAR(data__->,__debug_transition_list[0],,__GET_VAR(data__->STARTBTN,));
    }
    __SET_VAR(data__->,__transition_list[0],,0);
  }
  if (__GET_VAR(data__->INIT_STEP.X)) {
    __SET_VAR(data__->,__transition_list[1],,__GET_VAR(data__->TO_MOVE,));
    if (__DEBUG) {
      __SET_VAR(data__->,__debug_transition_list[1],,__GET_VAR(data__->__transition_list[1]));
    }
  }
  else {
    if (__DEBUG) {
      __SET_VAR(data__->,__debug_transition_list[1],,__GET_VAR(data__->TO_MOVE,));
    }
    __SET_VAR(data__->,__transition_list[1],,0);
  }
  if (__GET_VAR(data__->MOVE_STEP.X)) {
    __SET_VAR(data__->,__transition_list[2],,__GET_VAR(data__->RELA1.DONE,));
    if (__DEBUG) {
      __SET_VAR(data__->,__debug_transition_list[2],,__GET_VAR(data__->__transition_list[2]));
    }
  }
  else {
    if (__DEBUG) {
      __SET_VAR(data__->,__debug_transition_list[2],,__GET_VAR(data__->RELA1.DONE,));
    }
    __SET_VAR(data__->,__transition_list[2],,0);
  }
  if (__GET_VAR(data__->JUDGE_STEP.X)) {
    __SET_VAR(data__->,__transition_list[3],,__GET_VAR(data__->TO_SELCET,));
    if (__DEBUG) {
      __SET_VAR(data__->,__debug_transition_list[3],,__GET_VAR(data__->__transition_list[3]));
    }
  }
  else {
    if (__DEBUG) {
      __SET_VAR(data__->,__debug_transition_list[3],,__GET_VAR(data__->TO_SELCET,));
    }
    __SET_VAR(data__->,__transition_list[3],,0);
  }
  if (__GET_VAR(data__->SELECT_STEP.X)) {
    __SET_VAR(data__->,__transition_list[4],,__GET_VAR(data__->CONTINUE,));
    if (__DEBUG) {
      __SET_VAR(data__->,__debug_transition_list[4],,__GET_VAR(data__->__transition_list[4]));
    }
  }
  else {
    if (__DEBUG) {
      __SET_VAR(data__->,__debug_transition_list[4],,__GET_VAR(data__->CONTINUE,));
    }
    __SET_VAR(data__->,__transition_list[4],,0);
  }
  if (__GET_VAR(data__->SELECT_STEP.X)) {
    __SET_VAR(data__->,__transition_list[5],,__GET_VAR(data__->STOP,));
    if (__DEBUG) {
      __SET_VAR(data__->,__debug_transition_list[5],,__GET_VAR(data__->__transition_list[5]));
    }
  }
  else {
    if (__DEBUG) {
      __SET_VAR(data__->,__debug_transition_list[5],,__GET_VAR(data__->STOP,));
    }
    __SET_VAR(data__->,__transition_list[5],,0);
  }
  if (__GET_VAR(data__->DELAY_STEP.X)) {
    __SET_VAR(data__->,__transition_list[6],,__GET_VAR(data__->TO_INIT,));
    if (__DEBUG) {
      __SET_VAR(data__->,__debug_transition_list[6],,__GET_VAR(data__->__transition_list[6]));
    }
  }
  else {
    if (__DEBUG) {
      __SET_VAR(data__->,__debug_transition_list[6],,__GET_VAR(data__->TO_INIT,));
    }
    __SET_VAR(data__->,__transition_list[6],,0);
  }

  // Transitions reset steps
  if (__GET_VAR(data__->__transition_list[0])) {
    __SET_VAR(data__->,START.X,,0);
  }
  if (__GET_VAR(data__->__transition_list[1])) {
    __SET_VAR(data__->,INIT_STEP.X,,0);
  }
  if (__GET_VAR(data__->__transition_list[2])) {
    __SET_VAR(data__->,MOVE_STEP.X,,0);
  }
  if (__GET_VAR(data__->__transition_list[3])) {
    __SET_VAR(data__->,JUDGE_STEP.X,,0);
  }
  if (__GET_VAR(data__->__transition_list[4])) {
    __SET_VAR(data__->,SELECT_STEP.X,,0);
  }
  if (__GET_VAR(data__->__transition_list[5])) {
    __SET_VAR(data__->,SELECT_STEP.X,,0);
  }
  if (__GET_VAR(data__->__transition_list[6])) {
    __SET_VAR(data__->,DELAY_STEP.X,,0);
  }

  // Transitions set steps
  if (__GET_VAR(data__->__transition_list[0])) {
    __SET_VAR(data__->,INIT_STEP.X,,1);
    data__->INIT_STEP.T.value = __time_to_timespec(1, 0, 0, 0, 0, 0);
  }
  if (__GET_VAR(data__->__transition_list[1])) {
    __SET_VAR(data__->,MOVE_STEP.X,,1);
    data__->MOVE_STEP.T.value = __time_to_timespec(1, 0, 0, 0, 0, 0);
  }
  if (__GET_VAR(data__->__transition_list[2])) {
    __SET_VAR(data__->,JUDGE_STEP.X,,1);
    data__->JUDGE_STEP.T.value = __time_to_timespec(1, 0, 0, 0, 0, 0);
  }
  if (__GET_VAR(data__->__transition_list[3])) {
    __SET_VAR(data__->,SELECT_STEP.X,,1);
    data__->SELECT_STEP.T.value = __time_to_timespec(1, 0, 0, 0, 0, 0);
  }
  if (__GET_VAR(data__->__transition_list[4])) {
    __SET_VAR(data__->,MOVE_STEP.X,,1);
    data__->MOVE_STEP.T.value = __time_to_timespec(1, 0, 0, 0, 0, 0);
  }
  if (__GET_VAR(data__->__transition_list[5])) {
    __SET_VAR(data__->,DELAY_STEP.X,,1);
    data__->DELAY_STEP.T.value = __time_to_timespec(1, 0, 0, 0, 0, 0);
  }
  if (__GET_VAR(data__->__transition_list[6])) {
    __SET_VAR(data__->,INIT_STEP.X,,1);
    data__->INIT_STEP.T.value = __time_to_timespec(1, 0, 0, 0, 0, 0);
  }

  // Steps association
  // INIT_STEP action associations
  {
    char active = __GET_VAR(data__->INIT_STEP.X);
    char activated = active && !data__->INIT_STEP.prev_state;
    char desactivated = !active && data__->INIT_STEP.prev_state;

    if (activated)    {__SET_VAR(data__->,__action_list[__SFC_INIT_STEP_INLINE9].state,,1);}
    else              {__SET_VAR(data__->,__action_list[__SFC_INIT_STEP_INLINE9].state,,0);};

    if (activated)    {__SET_VAR(data__->,__action_list[__SFC_INIT_STEP_INLINE10].state,,1);}
    else              {__SET_VAR(data__->,__action_list[__SFC_INIT_STEP_INLINE10].state,,0);};

  }

  // MOVE_STEP action associations
  {
    char active = __GET_VAR(data__->MOVE_STEP.X);
    char activated = active && !data__->MOVE_STEP.prev_state;
    char desactivated = !active && data__->MOVE_STEP.prev_state;

    if (activated)    {__SET_VAR(data__->,__action_list[__SFC_MOVE_STEP_INLINE1].state,,1);}
    else              {__SET_VAR(data__->,__action_list[__SFC_MOVE_STEP_INLINE1].state,,0);};

    if (activated)    {__SET_VAR(data__->,__action_list[__SFC_MOVE_STEP_INLINE2].state,,1);}
    else              {__SET_VAR(data__->,__action_list[__SFC_MOVE_STEP_INLINE2].state,,0);};

    if (active)       {__SET_VAR(data__->,__action_list[__SFC_MOVE_STEP_INLINE3].state,,1);};
    if (desactivated) {__SET_VAR(data__->,__action_list[__SFC_MOVE_STEP_INLINE3].state,,0);};

  }

  // JUDGE_STEP action associations
  {
    char active = __GET_VAR(data__->JUDGE_STEP.X);
    char activated = active && !data__->JUDGE_STEP.prev_state;
    char desactivated = !active && data__->JUDGE_STEP.prev_state;

    if (activated)    {__SET_VAR(data__->,__action_list[__SFC_JUDGE_STEP_INLINE4].state,,1);}
    else              {__SET_VAR(data__->,__action_list[__SFC_JUDGE_STEP_INLINE4].state,,0);};

    if (activated)    {__SET_VAR(data__->,__action_list[__SFC_JUDGE_STEP_INLINE5].state,,1);}
    else              {__SET_VAR(data__->,__action_list[__SFC_JUDGE_STEP_INLINE5].state,,0);};

    if (activated)    {__SET_VAR(data__->,__action_list[__SFC_JUDGE_STEP_INLINE6].state,,1);}
    else              {__SET_VAR(data__->,__action_list[__SFC_JUDGE_STEP_INLINE6].state,,0);};

  }

  // SELECT_STEP action associations
  {
    char active = __GET_VAR(data__->SELECT_STEP.X);
    char activated = active && !data__->SELECT_STEP.prev_state;
    char desactivated = !active && data__->SELECT_STEP.prev_state;

    if (activated)    {__SET_VAR(data__->,__action_list[__SFC_SELECT_STEP_INLINE7].state,,1);}
    else              {__SET_VAR(data__->,__action_list[__SFC_SELECT_STEP_INLINE7].state,,0);};

  }

  // DELAY_STEP action associations
  {
    char active = __GET_VAR(data__->DELAY_STEP.X);
    char activated = active && !data__->DELAY_STEP.prev_state;
    char desactivated = !active && data__->DELAY_STEP.prev_state;

    if (active && __time_cmp(data__->DELAY_STEP.T.value, __time_to_timespec(1, 0, 8, 0, 0, 0)) >= 0) 
                      {__SET_VAR(data__->,__action_list[__SFC_DELAY_STEP_INLINE8].state,,1);}
    else if (desactivated)
                      {__SET_VAR(data__->,__action_list[__SFC_DELAY_STEP_INLINE8].state,,0);};

  }


  // Actions state evaluation
  for (i = 0; i < data__->__nb_actions; i++) {
    if (data__->__action_list[i].set) {
      data__->__action_list[i].set_remaining_time = __time_to_timespec(1, 0, 0, 0, 0, 0);
      data__->__action_list[i].stored = 1;
    }
    if (data__->__action_list[i].reset) {
      data__->__action_list[i].reset_remaining_time = __time_to_timespec(1, 0, 0, 0, 0, 0);
      data__->__action_list[i].stored = 0;
    }
    __SET_VAR(data__->,__action_list[i].state,,__GET_VAR(data__->__action_list[i].state) | data__->__action_list[i].stored);
  }

  // Actions execution
  if(__GET_VAR(data__->__action_list[__SFC_INIT_STEP_INLINE9].state)) {
    if ((__GET_VAR(data__->STEP_D,) == 0.0)) {
      __SET_VAR(data__->,STEP_D1,,1.0);
    } else {
      __SET_VAR(data__->,STEP_D1,,__GET_VAR(data__->STEP_D,));
    };
  }

  if(__GET_VAR(data__->__action_list[__SFC_INIT_STEP_INLINE10].state)) {
    __SET_VAR(data__->,TO_INIT,,0);
    __SET_VAR(data__->,STOP,,0);
    __SET_VAR(data__->,ICOUNT,,0);
    __SET_VAR(data__->,TO_MOVE,,1);
  }

  if(__GET_VAR(data__->__action_list[__SFC_MOVE_STEP_INLINE1].state)) {
    __SET_VAR(data__->,TO_MOVE,,0);
    __SET_VAR(data__->,CONTINUE,,0);
  }

  if(__GET_VAR(data__->__action_list[__SFC_MOVE_STEP_INLINE2].state)) {
    __SET_VAR(data__->,ICOUNT,,(__GET_VAR(data__->ICOUNT,) + 1));
  }

  if(__GET_VAR(data__->__action_list[__SFC_MOVE_STEP_INLINE3].state)) {
    __SET_VAR(data__->RELA1.,AXISID,,__GET_VAR(data__->AXISID,));
    __SET_VAR(data__->RELA1.,EXECUTE,,1);
    __SET_VAR(data__->RELA1.,DISTANCE,,__GET_VAR(data__->STEP_D1,));
    __SET_VAR(data__->RELA1.,VELOCITY,,__GET_VAR(data__->VELOCITY,));
    MC_RELATIVE_body__(&data__->RELA1);
  }

  if(__GET_VAR(data__->__action_list[__SFC_JUDGE_STEP_INLINE4].state)) {
    __SET_VAR(data__->RELA1.,EXECUTE,,0);
    MC_RELATIVE_body__(&data__->RELA1);
  }

  if(__GET_VAR(data__->__action_list[__SFC_JUDGE_STEP_INLINE5].state)) {
    if ((__GET_VAR(data__->ICOUNT,) == 10)) {
      __SET_VAR(data__->,STEP_D1,,( -(__GET_VAR(data__->STEP_D1,)) * 10.0));
      __SET_VAR(data__->,CONTINUE,,1);
    } else if ((__GET_VAR(data__->ICOUNT,) == 11)) {
      __SET_VAR(data__->,STOP,,1);
    } else {
      __SET_VAR(data__->,CONTINUE,,1);
    };
  }

  if(__GET_VAR(data__->__action_list[__SFC_JUDGE_STEP_INLINE6].state)) {
    __SET_VAR(data__->,TO_SELCET,,1);
  }

  if(__GET_VAR(data__->__action_list[__SFC_SELECT_STEP_INLINE7].state)) {
    __SET_VAR(data__->,TO_SELCET,,0);
  }

  if(__GET_VAR(data__->__action_list[__SFC_DELAY_STEP_INLINE8].state)) {
    __SET_VAR(data__->,TO_INIT,,1);
  }



  goto __end;

__end:
  return;
} // RELA_0_DIS_body__() 

// Steps undefinitions
#undef START
#undef __SFC_START
#undef INIT_STEP
#undef __SFC_INIT_STEP
#undef MOVE_STEP
#undef __SFC_MOVE_STEP
#undef JUDGE_STEP
#undef __SFC_JUDGE_STEP
#undef SELECT_STEP
#undef __SFC_SELECT_STEP
#undef DELAY_STEP
#undef __SFC_DELAY_STEP

// Actions undefinitions
#undef __SFC_INIT_STEP_INLINE9
#undef __SFC_INIT_STEP_INLINE10
#undef __SFC_MOVE_STEP_INLINE1
#undef __SFC_MOVE_STEP_INLINE2
#undef __SFC_MOVE_STEP_INLINE3
#undef __SFC_JUDGE_STEP_INLINE4
#undef __SFC_JUDGE_STEP_INLINE5
#undef __SFC_JUDGE_STEP_INLINE6
#undef __SFC_SELECT_STEP_INLINE7
#undef __SFC_DELAY_STEP_INLINE8





void MAIN_FBD_init__(MAIN_FBD *data__, BOOL retain) {
  __INIT_VAR(data__->AA,1,retain)
  __INIT_EXTERNAL(PYGT,PYG,data__->PYG,retain)
  __INIT_VAR(data__->RC,0,retain)
  MC_INIT_init__(&data__->MM,retain);
  MC_POWER_init__(&data__->MP,retain);
  PPIINFO_init__(&data__->P2,retain);
  DS402SERVOINIT_init__(&data__->DS2,retain);
  MC_RELATIVE_init__(&data__->MR,retain);
  __INIT_VAR(data__->NV,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->EANN,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->CMD,10.0,retain)
  __INIT_VAR(data__->CMD2,0.0,retain)
  MC_ABSOLUTE_init__(&data__->MA,retain);
  __INIT_VAR(data__->NV2,__BOOL_LITERAL(FALSE),retain)
  HOLD_WRITE_init__(&data__->H2,retain);
  BUF_WRITE_init__(&data__->BW3,retain);
  __INIT_VAR(data__->OV,127,retain)
  HOLD_READ_init__(&data__->HR2,retain);
  HOLD_READ_init__(&data__->BLOCK1,retain);
  HOLD_READ_init__(&data__->BLOCK2,retain);
  RELA_0_DIS_init__(&data__->FFG,retain);
  TON_init__(&data__->TH1S,retain);
  U16_B16_init__(&data__->TY,retain);
  __INIT_VAR(data__->INT_TO_LREAL35_OUT,0,retain)
  __INIT_VAR(data__->INT_TO_BOOL36_OUT,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->INT_TO_LREAL14_OUT,0,retain)
}

// Code part
void MAIN_FBD_body__(MAIN_FBD *data__) {
  // Initialise TEMP variables

  __SET_VAR(data__->HR2.,MBADDR,,4);
  HOLD_READ_body__(&data__->HR2);
  __SET_VAR(data__->,INT_TO_LREAL35_OUT,,INT_TO_LREAL(
    (BOOL)__BOOL_LITERAL(TRUE),
    NULL,
    (INT)__GET_VAR(data__->HR2.OUTI,)));
  __SET_EXTERNAL(data__->,PYG,.BB,__GET_VAR(data__->INT_TO_LREAL35_OUT,));
  __SET_VAR(data__->MM.,AXISID,,3);
  MC_INIT_body__(&data__->MM);
  __SET_VAR(data__->MP.,AXISID,,__GET_VAR(data__->MM.AXIS,));
  __SET_VAR(data__->MP.,POWER,,__GET_VAR(data__->MM.DONE,));
  MC_POWER_body__(&data__->MP);
  __SET_VAR(data__->DS2.,AXISID,,__GET_VAR(data__->MP.AXIS,));
  __SET_VAR(data__->DS2.,TARGETMODE,,8);
  __SET_VAR(data__->DS2.,ENABLEORNOT,,__GET_VAR(data__->MP.DONE,));
  DS402SERVOINIT_body__(&data__->DS2);
  __SET_VAR(data__->TY.,UI16,,__GET_VAR(data__->DS2.STATUS,));
  U16_B16_body__(&data__->TY);
  __SET_VAR(data__->TH1S.,IN,,__GET_VAR(data__->TY.B1,));
  __SET_VAR(data__->TH1S.,PT,,__time_to_timespec(1, 0, 1, 0, 0, 0));
  TON_body__(&data__->TH1S);
  __SET_VAR(data__->,NV2,,__GET_VAR(data__->TH1S.Q,));
  __SET_VAR(data__->BLOCK1.,MBADDR,,5);
  HOLD_READ_body__(&data__->BLOCK1);
  __SET_VAR(data__->,INT_TO_BOOL36_OUT,,INT_TO_BOOL(
    (BOOL)__BOOL_LITERAL(TRUE),
    NULL,
    (INT)__GET_VAR(data__->BLOCK1.OUTI,)));
  __SET_VAR(data__->,NV,,__GET_VAR(data__->INT_TO_BOOL36_OUT,));
  __SET_VAR(data__->BLOCK2.,MBADDR,,3);
  HOLD_READ_body__(&data__->BLOCK2);
  __SET_VAR(data__->,INT_TO_LREAL14_OUT,,INT_TO_LREAL(
    (BOOL)__BOOL_LITERAL(TRUE),
    NULL,
    (INT)__GET_VAR(data__->BLOCK2.OUTI,)));
  __SET_VAR(data__->,CMD,,__GET_VAR(data__->INT_TO_LREAL14_OUT,));
  __SET_VAR(data__->H2.,MBADDR,,2);
  __SET_VAR(data__->H2.,INTPVALUE,,2);
  HOLD_WRITE_body__(&data__->H2);
  __SET_VAR(data__->P2.,AXIS,,__GET_VAR(data__->MP.AXIS,));
  PPIINFO_body__(&data__->P2);
  __SET_VAR(data__->BW3.,BUFTYPE,,2);
  __SET_VAR(data__->BW3.,IDX,,__GET_VAR(data__->AA,));
  __SET_VAR(data__->BW3.,INU16,,__GET_VAR(data__->OV,));
  BUF_WRITE_body__(&data__->BW3);
  __SET_VAR(data__->MR.,AXISID,,__GET_VAR(data__->MM.AXIS,));
  __SET_VAR(data__->MR.,EXECUTE,,__GET_VAR(data__->NV,));
  __SET_VAR(data__->MR.,DISTANCE,,__GET_VAR(data__->CMD,));
  __SET_VAR(data__->MR.,VELOCITY,,__GET_EXTERNAL(data__->PYG,.BB));
  __SET_VAR(data__->MR.,ACCELERATION,,10.0);
  MC_RELATIVE_body__(&data__->MR);
  __SET_VAR(data__->FFG.,AXISID,,3);
  __SET_VAR(data__->FFG.,STARTBTN,,__GET_VAR(data__->NV2,));
  __SET_VAR(data__->FFG.,VELOCITY,,3.0);
  __SET_VAR(data__->FFG.,STEP_D,,3.0);
  RELA_0_DIS_body__(&data__->FFG);
  __SET_VAR(data__->MA.,AXISID,,2);
  __SET_VAR(data__->MA.,POSITION,,__GET_VAR(data__->CMD2,));
  __SET_VAR(data__->MA.,VELOCITY,,10.0);
  __SET_VAR(data__->MA.,ACCELERATION,,10.0);
  MC_ABSOLUTE_body__(&data__->MA);

  goto __end;

__end:
  return;
} // MAIN_FBD_body__() 





