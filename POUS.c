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





void SFC_HORSE_init__(SFC_HORSE *data__, BOOL retain) {
  __INIT_VAR(data__->EN,__BOOL_LITERAL(TRUE),retain)
  __INIT_VAR(data__->ENO,__BOOL_LITERAL(TRUE),retain)
  __INIT_VAR(data__->ENABLE,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->BIT0,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->BIT1,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->BIT2,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->BIT3,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->BIT4,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->BIT5,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->BIT6,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->BIT7,__BOOL_LITERAL(FALSE),retain)
  TON_init__(&data__->T1,retain);
  TON_init__(&data__->T2,retain);
  TON_init__(&data__->T3,retain);
  TON_init__(&data__->T4,retain);
  TON_init__(&data__->T5,retain);
  TON_init__(&data__->T6,retain);
  TON_init__(&data__->T7,retain);
  TON_init__(&data__->T8,retain);
  __INIT_VAR(data__->M0,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->M1,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->M2,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->M3,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->M4,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->M5,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->M6,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->M7,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->STOP,__BOOL_LITERAL(FALSE),retain)
  UINT i;
  data__->__nb_steps = 10;
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
  data__->__nb_transitions = 19;
  data__->__lasttick_time = __CURRENT_TIME;
}

// Steps definitions
#define START __step_list[0]
#define __SFC_START 0
#define LOOP __step_list[1]
#define __SFC_LOOP 1
#define S1 __step_list[2]
#define __SFC_S1 2
#define S2 __step_list[3]
#define __SFC_S2 3
#define S3 __step_list[4]
#define __SFC_S3 4
#define S4 __step_list[5]
#define __SFC_S4 5
#define S5 __step_list[6]
#define __SFC_S5 6
#define S6 __step_list[7]
#define __SFC_S6 7
#define S7 __step_list[8]
#define __SFC_S7 8
#define S8 __step_list[9]
#define __SFC_S8 9

// Actions definitions
#define __SFC_START_INLINE25 0
#define __SFC_LOOP_INLINE17 1
#define __SFC_LOOP_INLINE18 2
#define __SFC_LOOP_INLINE19 3
#define __SFC_LOOP_INLINE20 4
#define __SFC_LOOP_INLINE21 5
#define __SFC_LOOP_INLINE22 6
#define __SFC_LOOP_INLINE23 7
#define __SFC_LOOP_INLINE24 8
#define __SFC_S1_INLINE3 9
#define __SFC_S1_INLINE4 10
#define __SFC_S2_INLINE13 11
#define __SFC_S2_INLINE14 12
#define __SFC_S3_INLINE1 13
#define __SFC_S3_INLINE2 14
#define __SFC_S4_INLINE7 15
#define __SFC_S4_INLINE8 16
#define __SFC_S5_INLINE5 17
#define __SFC_S5_INLINE6 18
#define __SFC_S6_INLINE11 19
#define __SFC_S6_INLINE12 20
#define __SFC_S7_INLINE9 21
#define __SFC_S7_INLINE10 22
#define __SFC_S8_INLINE15 23
#define __SFC_S8_INLINE16 24

// Code part
void SFC_HORSE_body__(SFC_HORSE *data__) {
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
    __SET_VAR(data__->,__transition_list[0],,(__GET_VAR(data__->ENABLE,) && !(__GET_VAR(data__->STOP,))));
    if (__DEBUG) {
      __SET_VAR(data__->,__debug_transition_list[0],,__GET_VAR(data__->__transition_list[0]));
    }
  }
  else {
    if (__DEBUG) {
      __SET_VAR(data__->,__debug_transition_list[0],,(__GET_VAR(data__->ENABLE,) && !(__GET_VAR(data__->STOP,))));
    }
    __SET_VAR(data__->,__transition_list[0],,0);
  }
  if (__GET_VAR(data__->LOOP.X)) {
    __SET_VAR(data__->,__transition_list[1],,(__GET_VAR(data__->ENABLE,) || __GET_VAR(data__->BIT7,)));
    if (__DEBUG) {
      __SET_VAR(data__->,__debug_transition_list[1],,__GET_VAR(data__->__transition_list[1]));
    }
  }
  else {
    if (__DEBUG) {
      __SET_VAR(data__->,__debug_transition_list[1],,(__GET_VAR(data__->ENABLE,) || __GET_VAR(data__->BIT7,)));
    }
    __SET_VAR(data__->,__transition_list[1],,0);
  }
  if (__GET_VAR(data__->S1.X)) {
    __SET_VAR(data__->,__transition_list[2],,__GET_VAR(data__->BIT0,));
    if (__DEBUG) {
      __SET_VAR(data__->,__debug_transition_list[2],,__GET_VAR(data__->__transition_list[2]));
    }
  }
  else {
    if (__DEBUG) {
      __SET_VAR(data__->,__debug_transition_list[2],,__GET_VAR(data__->BIT0,));
    }
    __SET_VAR(data__->,__transition_list[2],,0);
  }
  if (__GET_VAR(data__->S2.X)) {
    __SET_VAR(data__->,__transition_list[3],,__GET_VAR(data__->BIT1,));
    if (__DEBUG) {
      __SET_VAR(data__->,__debug_transition_list[3],,__GET_VAR(data__->__transition_list[3]));
    }
  }
  else {
    if (__DEBUG) {
      __SET_VAR(data__->,__debug_transition_list[3],,__GET_VAR(data__->BIT1,));
    }
    __SET_VAR(data__->,__transition_list[3],,0);
  }
  if (__GET_VAR(data__->S3.X)) {
    __SET_VAR(data__->,__transition_list[4],,__GET_VAR(data__->BIT2,));
    if (__DEBUG) {
      __SET_VAR(data__->,__debug_transition_list[4],,__GET_VAR(data__->__transition_list[4]));
    }
  }
  else {
    if (__DEBUG) {
      __SET_VAR(data__->,__debug_transition_list[4],,__GET_VAR(data__->BIT2,));
    }
    __SET_VAR(data__->,__transition_list[4],,0);
  }
  if (__GET_VAR(data__->S4.X)) {
    __SET_VAR(data__->,__transition_list[5],,__GET_VAR(data__->BIT3,));
    if (__DEBUG) {
      __SET_VAR(data__->,__debug_transition_list[5],,__GET_VAR(data__->__transition_list[5]));
    }
  }
  else {
    if (__DEBUG) {
      __SET_VAR(data__->,__debug_transition_list[5],,__GET_VAR(data__->BIT3,));
    }
    __SET_VAR(data__->,__transition_list[5],,0);
  }
  if (__GET_VAR(data__->S5.X)) {
    __SET_VAR(data__->,__transition_list[6],,__GET_VAR(data__->BIT4,));
    if (__DEBUG) {
      __SET_VAR(data__->,__debug_transition_list[6],,__GET_VAR(data__->__transition_list[6]));
    }
  }
  else {
    if (__DEBUG) {
      __SET_VAR(data__->,__debug_transition_list[6],,__GET_VAR(data__->BIT4,));
    }
    __SET_VAR(data__->,__transition_list[6],,0);
  }
  if (__GET_VAR(data__->S6.X)) {
    __SET_VAR(data__->,__transition_list[7],,__GET_VAR(data__->BIT5,));
    if (__DEBUG) {
      __SET_VAR(data__->,__debug_transition_list[7],,__GET_VAR(data__->__transition_list[7]));
    }
  }
  else {
    if (__DEBUG) {
      __SET_VAR(data__->,__debug_transition_list[7],,__GET_VAR(data__->BIT5,));
    }
    __SET_VAR(data__->,__transition_list[7],,0);
  }
  if (__GET_VAR(data__->S7.X)) {
    __SET_VAR(data__->,__transition_list[8],,__GET_VAR(data__->BIT6,));
    if (__DEBUG) {
      __SET_VAR(data__->,__debug_transition_list[8],,__GET_VAR(data__->__transition_list[8]));
    }
  }
  else {
    if (__DEBUG) {
      __SET_VAR(data__->,__debug_transition_list[8],,__GET_VAR(data__->BIT6,));
    }
    __SET_VAR(data__->,__transition_list[8],,0);
  }
  if (__GET_VAR(data__->S8.X)) {
    __SET_VAR(data__->,__transition_list[9],,(__GET_VAR(data__->BIT7,) || __GET_VAR(data__->STOP,)));
    if (__DEBUG) {
      __SET_VAR(data__->,__debug_transition_list[9],,__GET_VAR(data__->__transition_list[9]));
    }
  }
  else {
    if (__DEBUG) {
      __SET_VAR(data__->,__debug_transition_list[9],,(__GET_VAR(data__->BIT7,) || __GET_VAR(data__->STOP,)));
    }
    __SET_VAR(data__->,__transition_list[9],,0);
  }
  if (__GET_VAR(data__->S8.X)) {
    __SET_VAR(data__->,__transition_list[10],,__GET_VAR(data__->STOP,));
    if (__DEBUG) {
      __SET_VAR(data__->,__debug_transition_list[10],,__GET_VAR(data__->__transition_list[10]));
    }
  }
  else {
    if (__DEBUG) {
      __SET_VAR(data__->,__debug_transition_list[10],,__GET_VAR(data__->STOP,));
    }
    __SET_VAR(data__->,__transition_list[10],,0);
  }
  if (__GET_VAR(data__->S7.X)) {
    __SET_VAR(data__->,__transition_list[11],,__GET_VAR(data__->STOP,));
    if (__DEBUG) {
      __SET_VAR(data__->,__debug_transition_list[11],,__GET_VAR(data__->__transition_list[11]));
    }
  }
  else {
    if (__DEBUG) {
      __SET_VAR(data__->,__debug_transition_list[11],,__GET_VAR(data__->STOP,));
    }
    __SET_VAR(data__->,__transition_list[11],,0);
  }
  if (__GET_VAR(data__->S6.X)) {
    __SET_VAR(data__->,__transition_list[12],,__GET_VAR(data__->STOP,));
    if (__DEBUG) {
      __SET_VAR(data__->,__debug_transition_list[12],,__GET_VAR(data__->__transition_list[12]));
    }
  }
  else {
    if (__DEBUG) {
      __SET_VAR(data__->,__debug_transition_list[12],,__GET_VAR(data__->STOP,));
    }
    __SET_VAR(data__->,__transition_list[12],,0);
  }
  if (__GET_VAR(data__->S5.X)) {
    __SET_VAR(data__->,__transition_list[13],,__GET_VAR(data__->STOP,));
    if (__DEBUG) {
      __SET_VAR(data__->,__debug_transition_list[13],,__GET_VAR(data__->__transition_list[13]));
    }
  }
  else {
    if (__DEBUG) {
      __SET_VAR(data__->,__debug_transition_list[13],,__GET_VAR(data__->STOP,));
    }
    __SET_VAR(data__->,__transition_list[13],,0);
  }
  if (__GET_VAR(data__->S4.X)) {
    __SET_VAR(data__->,__transition_list[14],,__GET_VAR(data__->STOP,));
    if (__DEBUG) {
      __SET_VAR(data__->,__debug_transition_list[14],,__GET_VAR(data__->__transition_list[14]));
    }
  }
  else {
    if (__DEBUG) {
      __SET_VAR(data__->,__debug_transition_list[14],,__GET_VAR(data__->STOP,));
    }
    __SET_VAR(data__->,__transition_list[14],,0);
  }
  if (__GET_VAR(data__->S3.X)) {
    __SET_VAR(data__->,__transition_list[15],,__GET_VAR(data__->STOP,));
    if (__DEBUG) {
      __SET_VAR(data__->,__debug_transition_list[15],,__GET_VAR(data__->__transition_list[15]));
    }
  }
  else {
    if (__DEBUG) {
      __SET_VAR(data__->,__debug_transition_list[15],,__GET_VAR(data__->STOP,));
    }
    __SET_VAR(data__->,__transition_list[15],,0);
  }
  if (__GET_VAR(data__->S2.X)) {
    __SET_VAR(data__->,__transition_list[16],,__GET_VAR(data__->STOP,));
    if (__DEBUG) {
      __SET_VAR(data__->,__debug_transition_list[16],,__GET_VAR(data__->__transition_list[16]));
    }
  }
  else {
    if (__DEBUG) {
      __SET_VAR(data__->,__debug_transition_list[16],,__GET_VAR(data__->STOP,));
    }
    __SET_VAR(data__->,__transition_list[16],,0);
  }
  if (__GET_VAR(data__->S1.X)) {
    __SET_VAR(data__->,__transition_list[17],,__GET_VAR(data__->STOP,));
    if (__DEBUG) {
      __SET_VAR(data__->,__debug_transition_list[17],,__GET_VAR(data__->__transition_list[17]));
    }
  }
  else {
    if (__DEBUG) {
      __SET_VAR(data__->,__debug_transition_list[17],,__GET_VAR(data__->STOP,));
    }
    __SET_VAR(data__->,__transition_list[17],,0);
  }
  if (__GET_VAR(data__->LOOP.X)) {
    __SET_VAR(data__->,__transition_list[18],,__GET_VAR(data__->STOP,));
    if (__DEBUG) {
      __SET_VAR(data__->,__debug_transition_list[18],,__GET_VAR(data__->__transition_list[18]));
    }
  }
  else {
    if (__DEBUG) {
      __SET_VAR(data__->,__debug_transition_list[18],,__GET_VAR(data__->STOP,));
    }
    __SET_VAR(data__->,__transition_list[18],,0);
  }

  // Transitions reset steps
  if (__GET_VAR(data__->__transition_list[0])) {
    __SET_VAR(data__->,START.X,,0);
  }
  if (__GET_VAR(data__->__transition_list[1])) {
    __SET_VAR(data__->,LOOP.X,,0);
  }
  if (__GET_VAR(data__->__transition_list[2])) {
    __SET_VAR(data__->,S1.X,,0);
  }
  if (__GET_VAR(data__->__transition_list[3])) {
    __SET_VAR(data__->,S2.X,,0);
  }
  if (__GET_VAR(data__->__transition_list[4])) {
    __SET_VAR(data__->,S3.X,,0);
  }
  if (__GET_VAR(data__->__transition_list[5])) {
    __SET_VAR(data__->,S4.X,,0);
  }
  if (__GET_VAR(data__->__transition_list[6])) {
    __SET_VAR(data__->,S5.X,,0);
  }
  if (__GET_VAR(data__->__transition_list[7])) {
    __SET_VAR(data__->,S6.X,,0);
  }
  if (__GET_VAR(data__->__transition_list[8])) {
    __SET_VAR(data__->,S7.X,,0);
  }
  if (__GET_VAR(data__->__transition_list[9])) {
    __SET_VAR(data__->,S8.X,,0);
  }
  if (__GET_VAR(data__->__transition_list[10])) {
    __SET_VAR(data__->,S8.X,,0);
  }
  if (__GET_VAR(data__->__transition_list[11])) {
    __SET_VAR(data__->,S7.X,,0);
  }
  if (__GET_VAR(data__->__transition_list[12])) {
    __SET_VAR(data__->,S6.X,,0);
  }
  if (__GET_VAR(data__->__transition_list[13])) {
    __SET_VAR(data__->,S5.X,,0);
  }
  if (__GET_VAR(data__->__transition_list[14])) {
    __SET_VAR(data__->,S4.X,,0);
  }
  if (__GET_VAR(data__->__transition_list[15])) {
    __SET_VAR(data__->,S3.X,,0);
  }
  if (__GET_VAR(data__->__transition_list[16])) {
    __SET_VAR(data__->,S2.X,,0);
  }
  if (__GET_VAR(data__->__transition_list[17])) {
    __SET_VAR(data__->,S1.X,,0);
  }
  if (__GET_VAR(data__->__transition_list[18])) {
    __SET_VAR(data__->,LOOP.X,,0);
  }

  // Transitions set steps
  if (__GET_VAR(data__->__transition_list[0])) {
    __SET_VAR(data__->,LOOP.X,,1);
    data__->LOOP.T.value = __time_to_timespec(1, 0, 0, 0, 0, 0);
  }
  if (__GET_VAR(data__->__transition_list[1])) {
    __SET_VAR(data__->,S1.X,,1);
    data__->S1.T.value = __time_to_timespec(1, 0, 0, 0, 0, 0);
  }
  if (__GET_VAR(data__->__transition_list[2])) {
    __SET_VAR(data__->,S2.X,,1);
    data__->S2.T.value = __time_to_timespec(1, 0, 0, 0, 0, 0);
  }
  if (__GET_VAR(data__->__transition_list[3])) {
    __SET_VAR(data__->,S3.X,,1);
    data__->S3.T.value = __time_to_timespec(1, 0, 0, 0, 0, 0);
  }
  if (__GET_VAR(data__->__transition_list[4])) {
    __SET_VAR(data__->,S4.X,,1);
    data__->S4.T.value = __time_to_timespec(1, 0, 0, 0, 0, 0);
  }
  if (__GET_VAR(data__->__transition_list[5])) {
    __SET_VAR(data__->,S5.X,,1);
    data__->S5.T.value = __time_to_timespec(1, 0, 0, 0, 0, 0);
  }
  if (__GET_VAR(data__->__transition_list[6])) {
    __SET_VAR(data__->,S6.X,,1);
    data__->S6.T.value = __time_to_timespec(1, 0, 0, 0, 0, 0);
  }
  if (__GET_VAR(data__->__transition_list[7])) {
    __SET_VAR(data__->,S7.X,,1);
    data__->S7.T.value = __time_to_timespec(1, 0, 0, 0, 0, 0);
  }
  if (__GET_VAR(data__->__transition_list[8])) {
    __SET_VAR(data__->,S8.X,,1);
    data__->S8.T.value = __time_to_timespec(1, 0, 0, 0, 0, 0);
  }
  if (__GET_VAR(data__->__transition_list[9])) {
    __SET_VAR(data__->,LOOP.X,,1);
    data__->LOOP.T.value = __time_to_timespec(1, 0, 0, 0, 0, 0);
  }
  if (__GET_VAR(data__->__transition_list[10])) {
    __SET_VAR(data__->,START.X,,1);
    data__->START.T.value = __time_to_timespec(1, 0, 0, 0, 0, 0);
  }
  if (__GET_VAR(data__->__transition_list[11])) {
    __SET_VAR(data__->,START.X,,1);
    data__->START.T.value = __time_to_timespec(1, 0, 0, 0, 0, 0);
  }
  if (__GET_VAR(data__->__transition_list[12])) {
    __SET_VAR(data__->,START.X,,1);
    data__->START.T.value = __time_to_timespec(1, 0, 0, 0, 0, 0);
  }
  if (__GET_VAR(data__->__transition_list[13])) {
    __SET_VAR(data__->,START.X,,1);
    data__->START.T.value = __time_to_timespec(1, 0, 0, 0, 0, 0);
  }
  if (__GET_VAR(data__->__transition_list[14])) {
    __SET_VAR(data__->,START.X,,1);
    data__->START.T.value = __time_to_timespec(1, 0, 0, 0, 0, 0);
  }
  if (__GET_VAR(data__->__transition_list[15])) {
    __SET_VAR(data__->,START.X,,1);
    data__->START.T.value = __time_to_timespec(1, 0, 0, 0, 0, 0);
  }
  if (__GET_VAR(data__->__transition_list[16])) {
    __SET_VAR(data__->,START.X,,1);
    data__->START.T.value = __time_to_timespec(1, 0, 0, 0, 0, 0);
  }
  if (__GET_VAR(data__->__transition_list[17])) {
    __SET_VAR(data__->,START.X,,1);
    data__->START.T.value = __time_to_timespec(1, 0, 0, 0, 0, 0);
  }
  if (__GET_VAR(data__->__transition_list[18])) {
    __SET_VAR(data__->,START.X,,1);
    data__->START.T.value = __time_to_timespec(1, 0, 0, 0, 0, 0);
  }

  // Steps association
  // START action associations
  {
    char active = __GET_VAR(data__->START.X);
    char activated = active && !data__->START.prev_state;
    char desactivated = !active && data__->START.prev_state;

    if (active)       {__SET_VAR(data__->,__action_list[__SFC_START_INLINE25].state,,1);};
    if (desactivated) {__SET_VAR(data__->,__action_list[__SFC_START_INLINE25].state,,0);};

  }

  // LOOP action associations
  {
    char active = __GET_VAR(data__->LOOP.X);
    char activated = active && !data__->LOOP.prev_state;
    char desactivated = !active && data__->LOOP.prev_state;

    if (active)       {__SET_VAR(data__->,__action_list[__SFC_LOOP_INLINE17].state,,1);};
    if (desactivated) {__SET_VAR(data__->,__action_list[__SFC_LOOP_INLINE17].state,,0);};

    if (active)       {__SET_VAR(data__->,__action_list[__SFC_LOOP_INLINE18].state,,1);};
    if (desactivated) {__SET_VAR(data__->,__action_list[__SFC_LOOP_INLINE18].state,,0);};

    if (active)       {__SET_VAR(data__->,__action_list[__SFC_LOOP_INLINE19].state,,1);};
    if (desactivated) {__SET_VAR(data__->,__action_list[__SFC_LOOP_INLINE19].state,,0);};

    if (active)       {__SET_VAR(data__->,__action_list[__SFC_LOOP_INLINE20].state,,1);};
    if (desactivated) {__SET_VAR(data__->,__action_list[__SFC_LOOP_INLINE20].state,,0);};

    if (active)       {__SET_VAR(data__->,__action_list[__SFC_LOOP_INLINE21].state,,1);};
    if (desactivated) {__SET_VAR(data__->,__action_list[__SFC_LOOP_INLINE21].state,,0);};

    if (active)       {__SET_VAR(data__->,__action_list[__SFC_LOOP_INLINE22].state,,1);};
    if (desactivated) {__SET_VAR(data__->,__action_list[__SFC_LOOP_INLINE22].state,,0);};

    if (active)       {__SET_VAR(data__->,__action_list[__SFC_LOOP_INLINE23].state,,1);};
    if (desactivated) {__SET_VAR(data__->,__action_list[__SFC_LOOP_INLINE23].state,,0);};

    if (active)       {__SET_VAR(data__->,__action_list[__SFC_LOOP_INLINE24].state,,1);};
    if (desactivated) {__SET_VAR(data__->,__action_list[__SFC_LOOP_INLINE24].state,,0);};

  }

  // S1 action associations
  {
    char active = __GET_VAR(data__->S1.X);
    char activated = active && !data__->S1.prev_state;
    char desactivated = !active && data__->S1.prev_state;

    if (active)       {__SET_VAR(data__->,__action_list[__SFC_S1_INLINE3].state,,1);};
    if (desactivated) {__SET_VAR(data__->,__action_list[__SFC_S1_INLINE3].state,,0);};

    if (active)       {__SET_VAR(data__->,__action_list[__SFC_S1_INLINE4].state,,1);};
    if (desactivated) {__SET_VAR(data__->,__action_list[__SFC_S1_INLINE4].state,,0);};

  }

  // S2 action associations
  {
    char active = __GET_VAR(data__->S2.X);
    char activated = active && !data__->S2.prev_state;
    char desactivated = !active && data__->S2.prev_state;

    if (active)       {__SET_VAR(data__->,__action_list[__SFC_S2_INLINE13].state,,1);};
    if (desactivated) {__SET_VAR(data__->,__action_list[__SFC_S2_INLINE13].state,,0);};

    if (active)       {__SET_VAR(data__->,__action_list[__SFC_S2_INLINE14].state,,1);};
    if (desactivated) {__SET_VAR(data__->,__action_list[__SFC_S2_INLINE14].state,,0);};

  }

  // S3 action associations
  {
    char active = __GET_VAR(data__->S3.X);
    char activated = active && !data__->S3.prev_state;
    char desactivated = !active && data__->S3.prev_state;

    if (active)       {__SET_VAR(data__->,__action_list[__SFC_S3_INLINE1].state,,1);};
    if (desactivated) {__SET_VAR(data__->,__action_list[__SFC_S3_INLINE1].state,,0);};

    if (active)       {__SET_VAR(data__->,__action_list[__SFC_S3_INLINE2].state,,1);};
    if (desactivated) {__SET_VAR(data__->,__action_list[__SFC_S3_INLINE2].state,,0);};

  }

  // S4 action associations
  {
    char active = __GET_VAR(data__->S4.X);
    char activated = active && !data__->S4.prev_state;
    char desactivated = !active && data__->S4.prev_state;

    if (active)       {__SET_VAR(data__->,__action_list[__SFC_S4_INLINE7].state,,1);};
    if (desactivated) {__SET_VAR(data__->,__action_list[__SFC_S4_INLINE7].state,,0);};

    if (active)       {__SET_VAR(data__->,__action_list[__SFC_S4_INLINE8].state,,1);};
    if (desactivated) {__SET_VAR(data__->,__action_list[__SFC_S4_INLINE8].state,,0);};

  }

  // S5 action associations
  {
    char active = __GET_VAR(data__->S5.X);
    char activated = active && !data__->S5.prev_state;
    char desactivated = !active && data__->S5.prev_state;

    if (active)       {__SET_VAR(data__->,__action_list[__SFC_S5_INLINE5].state,,1);};
    if (desactivated) {__SET_VAR(data__->,__action_list[__SFC_S5_INLINE5].state,,0);};

    if (active)       {__SET_VAR(data__->,__action_list[__SFC_S5_INLINE6].state,,1);};
    if (desactivated) {__SET_VAR(data__->,__action_list[__SFC_S5_INLINE6].state,,0);};

  }

  // S6 action associations
  {
    char active = __GET_VAR(data__->S6.X);
    char activated = active && !data__->S6.prev_state;
    char desactivated = !active && data__->S6.prev_state;

    if (active)       {__SET_VAR(data__->,__action_list[__SFC_S6_INLINE11].state,,1);};
    if (desactivated) {__SET_VAR(data__->,__action_list[__SFC_S6_INLINE11].state,,0);};

    if (active)       {__SET_VAR(data__->,__action_list[__SFC_S6_INLINE12].state,,1);};
    if (desactivated) {__SET_VAR(data__->,__action_list[__SFC_S6_INLINE12].state,,0);};

  }

  // S7 action associations
  {
    char active = __GET_VAR(data__->S7.X);
    char activated = active && !data__->S7.prev_state;
    char desactivated = !active && data__->S7.prev_state;

    if (active)       {__SET_VAR(data__->,__action_list[__SFC_S7_INLINE9].state,,1);};
    if (desactivated) {__SET_VAR(data__->,__action_list[__SFC_S7_INLINE9].state,,0);};

    if (active)       {__SET_VAR(data__->,__action_list[__SFC_S7_INLINE10].state,,1);};
    if (desactivated) {__SET_VAR(data__->,__action_list[__SFC_S7_INLINE10].state,,0);};

  }

  // S8 action associations
  {
    char active = __GET_VAR(data__->S8.X);
    char activated = active && !data__->S8.prev_state;
    char desactivated = !active && data__->S8.prev_state;

    if (active)       {__SET_VAR(data__->,__action_list[__SFC_S8_INLINE15].state,,1);};
    if (desactivated) {__SET_VAR(data__->,__action_list[__SFC_S8_INLINE15].state,,0);};

    if (active)       {__SET_VAR(data__->,__action_list[__SFC_S8_INLINE16].state,,1);};
    if (desactivated) {__SET_VAR(data__->,__action_list[__SFC_S8_INLINE16].state,,0);};

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
  if(__GET_VAR(data__->__action_list[__SFC_START_INLINE25].state)) {
    __SET_VAR(data__->,BIT0,,0);
    __SET_VAR(data__->,BIT1,,0);
    __SET_VAR(data__->,BIT2,,0);
    __SET_VAR(data__->,BIT3,,0);
    __SET_VAR(data__->,BIT4,,0);
    __SET_VAR(data__->,BIT5,,0);
    __SET_VAR(data__->,BIT6,,0);
    __SET_VAR(data__->,BIT7,,0);
  }

  if(__GET_VAR(data__->__action_list[__SFC_LOOP_INLINE17].state)) {
    __SET_VAR(data__->T1.,IN,,0);
    __SET_VAR(data__->T1.,PT,,__time_to_timespec(1, 0, 0, 0, 0, 0));
    TON_body__(&data__->T1);
  }

  if(__GET_VAR(data__->__action_list[__SFC_LOOP_INLINE18].state)) {
    __SET_VAR(data__->T2.,IN,,0);
    __SET_VAR(data__->T2.,PT,,__time_to_timespec(1, 0, 0, 0, 0, 0));
    TON_body__(&data__->T2);
  }

  if(__GET_VAR(data__->__action_list[__SFC_LOOP_INLINE19].state)) {
    __SET_VAR(data__->T3.,IN,,0);
    __SET_VAR(data__->T3.,PT,,__time_to_timespec(1, 0, 0, 0, 0, 0));
    TON_body__(&data__->T3);
  }

  if(__GET_VAR(data__->__action_list[__SFC_LOOP_INLINE20].state)) {
    __SET_VAR(data__->T4.,IN,,0);
    __SET_VAR(data__->T4.,PT,,__time_to_timespec(1, 0, 0, 0, 0, 0));
    TON_body__(&data__->T4);
  }

  if(__GET_VAR(data__->__action_list[__SFC_LOOP_INLINE21].state)) {
    __SET_VAR(data__->T5.,IN,,0);
    __SET_VAR(data__->T5.,PT,,__time_to_timespec(1, 0, 0, 0, 0, 0));
    TON_body__(&data__->T5);
  }

  if(__GET_VAR(data__->__action_list[__SFC_LOOP_INLINE22].state)) {
    __SET_VAR(data__->T6.,IN,,0);
    __SET_VAR(data__->T6.,PT,,__time_to_timespec(1, 0, 0, 0, 0, 0));
    TON_body__(&data__->T6);
  }

  if(__GET_VAR(data__->__action_list[__SFC_LOOP_INLINE23].state)) {
    __SET_VAR(data__->T7.,IN,,0);
    __SET_VAR(data__->T7.,PT,,__time_to_timespec(1, 0, 0, 0, 0, 0));
    TON_body__(&data__->T7);
  }

  if(__GET_VAR(data__->__action_list[__SFC_LOOP_INLINE24].state)) {
    __SET_VAR(data__->T8.,IN,,0);
    __SET_VAR(data__->T8.,PT,,__time_to_timespec(1, 0, 0, 0, 0, 0));
    TON_body__(&data__->T8);
  }

  if(__GET_VAR(data__->__action_list[__SFC_S1_INLINE3].state)) {
    __SET_VAR(data__->T1.,IN,,(__GET_VAR(data__->ENABLE,) || __GET_VAR(data__->BIT7,)));
    __SET_VAR(data__->T1.,PT,,__time_to_timespec(1, 0, 1, 0, 0, 0));
    TON_body__(&data__->T1);
    __SET_VAR(data__->,BIT0,,__GET_VAR(data__->T1.Q));
  }

  if(__GET_VAR(data__->__action_list[__SFC_S1_INLINE4].state)) {
    if ((__GET_VAR(data__->BIT0,) == 1)) {
      __SET_VAR(data__->,BIT7,,0);
    };
  }

  if(__GET_VAR(data__->__action_list[__SFC_S2_INLINE13].state)) {
    __SET_VAR(data__->T2.,IN,,__GET_VAR(data__->BIT0,));
    __SET_VAR(data__->T2.,PT,,__time_to_timespec(1, 0, 1, 0, 0, 0));
    TON_body__(&data__->T2);
    __SET_VAR(data__->,BIT1,,__GET_VAR(data__->T2.Q));
  }

  if(__GET_VAR(data__->__action_list[__SFC_S2_INLINE14].state)) {
    if ((__GET_VAR(data__->BIT1,) == 1)) {
      __SET_VAR(data__->,BIT0,,0);
    };
  }

  if(__GET_VAR(data__->__action_list[__SFC_S3_INLINE1].state)) {
    __SET_VAR(data__->T3.,IN,,__GET_VAR(data__->BIT1,));
    __SET_VAR(data__->T3.,PT,,__time_to_timespec(1, 0, 1, 0, 0, 0));
    TON_body__(&data__->T3);
    __SET_VAR(data__->,BIT2,,__GET_VAR(data__->T3.Q));
  }

  if(__GET_VAR(data__->__action_list[__SFC_S3_INLINE2].state)) {
    if ((__GET_VAR(data__->BIT2,) == 1)) {
      __SET_VAR(data__->,BIT1,,0);
    };
  }

  if(__GET_VAR(data__->__action_list[__SFC_S4_INLINE7].state)) {
    __SET_VAR(data__->T4.,IN,,__GET_VAR(data__->BIT2,));
    __SET_VAR(data__->T4.,PT,,__time_to_timespec(1, 0, 1, 0, 0, 0));
    TON_body__(&data__->T4);
    __SET_VAR(data__->,BIT3,,__GET_VAR(data__->T4.Q));
  }

  if(__GET_VAR(data__->__action_list[__SFC_S4_INLINE8].state)) {
    if ((__GET_VAR(data__->BIT3,) == 1)) {
      __SET_VAR(data__->,BIT2,,0);
    };
  }

  if(__GET_VAR(data__->__action_list[__SFC_S5_INLINE5].state)) {
    __SET_VAR(data__->T5.,IN,,__GET_VAR(data__->BIT3,));
    __SET_VAR(data__->T5.,PT,,__time_to_timespec(1, 0, 1, 0, 0, 0));
    TON_body__(&data__->T5);
    __SET_VAR(data__->,BIT4,,__GET_VAR(data__->T5.Q));
  }

  if(__GET_VAR(data__->__action_list[__SFC_S5_INLINE6].state)) {
    if ((__GET_VAR(data__->BIT4,) == 1)) {
      __SET_VAR(data__->,BIT3,,0);
    };
  }

  if(__GET_VAR(data__->__action_list[__SFC_S6_INLINE11].state)) {
    __SET_VAR(data__->T6.,IN,,__GET_VAR(data__->BIT4,));
    __SET_VAR(data__->T6.,PT,,__time_to_timespec(1, 0, 1, 0, 0, 0));
    TON_body__(&data__->T6);
    __SET_VAR(data__->,BIT5,,__GET_VAR(data__->T6.Q));
  }

  if(__GET_VAR(data__->__action_list[__SFC_S6_INLINE12].state)) {
    if ((__GET_VAR(data__->BIT5,) == 1)) {
      __SET_VAR(data__->,BIT4,,0);
    };
  }

  if(__GET_VAR(data__->__action_list[__SFC_S7_INLINE9].state)) {
    __SET_VAR(data__->T7.,IN,,__GET_VAR(data__->BIT5,));
    __SET_VAR(data__->T7.,PT,,__time_to_timespec(1, 0, 1, 0, 0, 0));
    TON_body__(&data__->T7);
    __SET_VAR(data__->,BIT6,,__GET_VAR(data__->T7.Q));
  }

  if(__GET_VAR(data__->__action_list[__SFC_S7_INLINE10].state)) {
    if ((__GET_VAR(data__->BIT6,) == 1)) {
      __SET_VAR(data__->,BIT5,,0);
    };
  }

  if(__GET_VAR(data__->__action_list[__SFC_S8_INLINE15].state)) {
    __SET_VAR(data__->T8.,IN,,__GET_VAR(data__->BIT6,));
    __SET_VAR(data__->T8.,PT,,__time_to_timespec(1, 0, 1, 0, 0, 0));
    TON_body__(&data__->T8);
    __SET_VAR(data__->,BIT7,,__GET_VAR(data__->T8.Q));
  }

  if(__GET_VAR(data__->__action_list[__SFC_S8_INLINE16].state)) {
    if ((__GET_VAR(data__->BIT7,) == 1)) {
      __SET_VAR(data__->,BIT6,,0);
    };
  }



  goto __end;

__end:
  return;
} // SFC_HORSE_body__() 

// Steps undefinitions
#undef START
#undef __SFC_START
#undef LOOP
#undef __SFC_LOOP
#undef S1
#undef __SFC_S1
#undef S2
#undef __SFC_S2
#undef S3
#undef __SFC_S3
#undef S4
#undef __SFC_S4
#undef S5
#undef __SFC_S5
#undef S6
#undef __SFC_S6
#undef S7
#undef __SFC_S7
#undef S8
#undef __SFC_S8

// Actions undefinitions
#undef __SFC_START_INLINE25
#undef __SFC_LOOP_INLINE17
#undef __SFC_LOOP_INLINE18
#undef __SFC_LOOP_INLINE19
#undef __SFC_LOOP_INLINE20
#undef __SFC_LOOP_INLINE21
#undef __SFC_LOOP_INLINE22
#undef __SFC_LOOP_INLINE23
#undef __SFC_LOOP_INLINE24
#undef __SFC_S1_INLINE3
#undef __SFC_S1_INLINE4
#undef __SFC_S2_INLINE13
#undef __SFC_S2_INLINE14
#undef __SFC_S3_INLINE1
#undef __SFC_S3_INLINE2
#undef __SFC_S4_INLINE7
#undef __SFC_S4_INLINE8
#undef __SFC_S5_INLINE5
#undef __SFC_S5_INLINE6
#undef __SFC_S6_INLINE11
#undef __SFC_S6_INLINE12
#undef __SFC_S7_INLINE9
#undef __SFC_S7_INLINE10
#undef __SFC_S8_INLINE15
#undef __SFC_S8_INLINE16





void IDLE_init__(IDLE *data__, BOOL retain) {
  SFC_HORSE_init__(&data__->FFG,retain);
  BUF_WRITE_init__(&data__->BW,retain);
  B16_U16_init__(&data__->BBB,retain);
}

// Code part
void IDLE_body__(IDLE *data__) {
  // Initialise TEMP variables

  __SET_VAR(data__->FFG.,ENABLE,,1);
  SFC_HORSE_body__(&data__->FFG);
  __SET_VAR(data__->BBB.,B0,,__GET_VAR(data__->FFG.BIT0,));
  __SET_VAR(data__->BBB.,B1,,__GET_VAR(data__->FFG.BIT1,));
  __SET_VAR(data__->BBB.,B2,,__GET_VAR(data__->FFG.BIT2,));
  __SET_VAR(data__->BBB.,B3,,__GET_VAR(data__->FFG.BIT3,));
  __SET_VAR(data__->BBB.,B4,,__GET_VAR(data__->FFG.BIT4,));
  __SET_VAR(data__->BBB.,B5,,__GET_VAR(data__->FFG.BIT5,));
  __SET_VAR(data__->BBB.,B6,,__GET_VAR(data__->FFG.BIT6,));
  __SET_VAR(data__->BBB.,B7,,__GET_VAR(data__->FFG.BIT7,));
  B16_U16_body__(&data__->BBB);
  __SET_VAR(data__->BW.,BUFTYPE,,2);
  __SET_VAR(data__->BW.,IDX,,0);
  __SET_VAR(data__->BW.,INU16,,__GET_VAR(data__->BBB.U16,));
  BUF_WRITE_body__(&data__->BW);

  goto __end;

__end:
  return;
} // IDLE_body__() 





