#include "HZMC.h"
void MC_COMBINE_body2__(MC_COMBINE *data__) {
    if (!__GET_VAR(data__->EN)) {
    __SET_VAR(data__->,ENO,,__BOOL_LITERAL(FALSE));
    return;
  }
  else {
    __SET_VAR(data__->,ENO,,__BOOL_LITERAL(TRUE));
  }
  
  __SET_VAR(data__->AI.,ROW,,__BOOL_LITERAL(FALSE));
  __SET_VAR(data__->AI.,NODEID,,__GET_VAR(data__->SLAVE,));
  __SET_VAR(data__->AI.,PNAME,,__STRING_LITERAL(5,"STATE"));
  AXIS_INFO_body__(&data__->AI);
  if ((__GET_VAR(data__->AI.OUTU32,) < 1)) {
    goto __end;
  };
  __SET_VAR(data__->RT1.,CLK,,__GET_VAR(data__->EXECUTE,));
  R_TRIG_body__(&data__->RT1);
  __SET_VAR(data__->RF1.,CLK,,__GET_VAR(data__->EXECUTE,));
  F_TRIG_body__(&data__->RF1);
  if (__GET_VAR(data__->RT1.Q,)) {
    __SET_VAR(data__->WDEC.,AXISID,,__GET_VAR(data__->SLAVE,));
    __SET_VAR(data__->WDEC.,DONEFLAG,,__BOOL_LITERAL(FALSE));
    __SET_VAR(data__->WDEC.,EXECUTEFLAG,,__BOOL_LITERAL(TRUE));
    __SET_VAR(data__->WDEC.,COMMANDTYPE,,20);
    _W_DEC_body__(&data__->WDEC);
  };
  if (__GET_VAR(data__->RF1.Q,)) {
    __SET_VAR(data__->WDEC.,AXISID,,__GET_VAR(data__->SLAVE,));
    __SET_VAR(data__->WDEC.,DONEFLAG,,__BOOL_LITERAL(FALSE));
    __SET_VAR(data__->WDEC.,EXECUTEFLAG,,__BOOL_LITERAL(TRUE));
    __SET_VAR(data__->WDEC.,COMMANDTYPE,,21);
    _W_DEC_body__(&data__->WDEC);
  };
  if ((__GET_VAR(data__->EXECUTE,) == __BOOL_LITERAL(TRUE))) {
    __SET_VAR(data__->AI.,ROW,,__BOOL_LITERAL(FALSE));
    __SET_VAR(data__->AI.,NODEID,,__GET_VAR(data__->MASTER1,));
    __SET_VAR(data__->AI.,PNAME,,__STRING_LITERAL(7,"INTERDP"));
    AXIS_INFO_body__(&data__->AI);
    __SET_VAR(data__->,DELTA_M1,,__GET_VAR(data__->AI.OUTR,));
    __SET_VAR(data__->AI.,ROW,,__BOOL_LITERAL(FALSE));
    __SET_VAR(data__->AI.,NODEID,,__GET_VAR(data__->MASTER2,));
    __SET_VAR(data__->AI.,PNAME,,__STRING_LITERAL(7,"INTERDP"));
    AXIS_INFO_body__(&data__->AI);
    __SET_VAR(data__->,DELTA_M2,,__GET_VAR(data__->AI.OUTR,));
    __SET_VAR(data__->,DELTA_S,,(__GET_VAR(data__->DELTA_M1,) + __GET_VAR(data__->DELTA_M2,)));
    __SET_VAR(data__->AI.,ROW,,__BOOL_LITERAL(FALSE));
    __SET_VAR(data__->AI.,NODEID,,__GET_VAR(data__->SLAVE,));
    __SET_VAR(data__->AI.,PNAME,,__STRING_LITERAL(2,"PC"));
    AXIS_INFO_body__(&data__->AI);
    __SET_VAR(data__->,SLAVE_PC,,(__GET_VAR(data__->AI.OUTR,) + __GET_VAR(data__->DELTA_S,)));
    __SET_VAR(data__->IPW.,SLAVEID,,__GET_VAR(data__->SLAVE,));
    __SET_VAR(data__->IPW.,SPOS,,__GET_VAR(data__->SLAVE_PC,));
    _IPBYSPOS_body__(&data__->IPW);
  };

  goto __end;

__end:
  return;
} 
void _PULSE_CALC_body2__(_PULSE_CALC *data__) {
    if (!__GET_VAR(data__->EN)) {
    __SET_VAR(data__->,ENO,,__BOOL_LITERAL(FALSE));
    return;
  }
  else {
    __SET_VAR(data__->,ENO,,__BOOL_LITERAL(TRUE));
  }
  
  __SET_VAR(data__->,TEMP_P_TARGETALL,,LREAL_TO_DINT(
    (BOOL)__BOOL_LITERAL(TRUE),
    NULL,
    (LREAL)((__GET_VAR(data__->TARGETPOSITION,) * 1000.0) / __GET_VAR(data__->PULSEEQUIVALENT,))));
  __SET_VAR(data__->,PULSENUMALL,,__GET_VAR(data__->TEMP_P_TARGETALL,));

  goto __end;

__end:
  return;
} 
void _VPLAN_body2__(_VPLAN *data__) {
    if (!__GET_VAR(data__->EN)) {
    __SET_VAR(data__->,ENO,,__BOOL_LITERAL(FALSE));
    return;
  }
  else {
    __SET_VAR(data__->,ENO,,__BOOL_LITERAL(TRUE));
  }
  
  __SET_VAR(data__->,VC,,ABS__LREAL__LREAL(
    (BOOL)__BOOL_LITERAL(TRUE),
    NULL,
    (LREAL)__GET_VAR(data__->VC,)));
  __SET_VAR(data__->,D0,,(((0.5 * __GET_VAR(data__->TS,)) * __GET_VAR(data__->VC,)) - ABS__LREAL__LREAL(
    (BOOL)__BOOL_LITERAL(TRUE),
    NULL,
    (LREAL)(__GET_VAR(data__->TARGET,) - __GET_VAR(data__->POSI,)))));
  if (((__GET_VAR(data__->D0,) > 0.0) || __GET_VAR(data__->VSOK,))) {
    __SET_VAR(data__->,NV,,0.0);
    __SET_VAR(data__->,VM,,0.0);
    __SET_VAR(data__->,POSO,,__GET_VAR(data__->TARGET,));
    __SET_VAR(data__->,VS,,0.0);
    goto __end;
  } else if (((__GET_VAR(data__->D0,) ==  -(__GET_VAR(data__->TARGET,))) && (__GET_VAR(data__->V0,) > 0.0))) {
    __SET_VAR(data__->,NV,,__GET_VAR(data__->V0,));
    __SET_VAR(data__->,DLT,,(((0.5 * (__GET_VAR(data__->NV,) * __GET_VAR(data__->NV,))) / __GET_VAR(data__->AM,)) * __GET_VAR(data__->RATE,)));
    __SET_VAR(data__->,POSO,,(__GET_VAR(data__->POSI,) + __GET_VAR(data__->DLT,)));
    __SET_VAR(data__->,VS,,__GET_VAR(data__->NV,));
    __SET_VAR(data__->,VSOK,,0);
    goto __end;
  } else {
    __SET_VAR(data__->,TM,,((-2.0 / __GET_VAR(data__->AM,)) * __GET_VAR(data__->D0,)));
    __SET_VAR(data__->,DD,,(__GET_VAR(data__->TM,) + ((0.25 * __GET_VAR(data__->TS,)) * __GET_VAR(data__->TS,))));
    __SET_VAR(data__->,NV,,((__GET_VAR(data__->AM,) * SQRT__LREAL__LREAL(
      (BOOL)__BOOL_LITERAL(TRUE),
      NULL,
      (LREAL)__GET_VAR(data__->DD,))) - ((0.5 * __GET_VAR(data__->AM,)) * __GET_VAR(data__->TS,))));
  };
  if ((__GET_VAR(data__->NV,) > __GET_VAR(data__->VM,))) {
    __SET_VAR(data__->,NV,,__GET_VAR(data__->VM,));
  };
  __SET_VAR(data__->,NA,,((__GET_VAR(data__->NV,) - __GET_VAR(data__->VC,)) / __GET_VAR(data__->TS,)));
  if (((__GET_VAR(data__->NA,) > 0.0) && (__GET_VAR(data__->NA,) > __GET_VAR(data__->AM,)))) {
    __SET_VAR(data__->,NA,,__GET_VAR(data__->AM,));
    __SET_VAR(data__->,NV,,(__GET_VAR(data__->VC,) + (__GET_VAR(data__->NA,) * __GET_VAR(data__->TS,))));
  } else if (((__GET_VAR(data__->NA,) < 0.0) && (__GET_VAR(data__->NA,) <  -(__GET_VAR(data__->AM,))))) {
    __SET_VAR(data__->,NA,, -(__GET_VAR(data__->AM,)));
    __SET_VAR(data__->,NV,,(__GET_VAR(data__->VC,) + (__GET_VAR(data__->NA,) * __GET_VAR(data__->TS,))));
  };
  if ((__GET_VAR(data__->NV,) < __GET_VAR(data__->V1,))) {
    __SET_VAR(data__->,VSOK,,1);
  };
  if ((__GET_VAR(data__->TARGET,) > __GET_VAR(data__->POSI,))) {
    __SET_VAR(data__->,DLT,,((((__GET_VAR(data__->NV,) + __GET_VAR(data__->VC,)) * 0.5) * __GET_VAR(data__->TS,)) * __GET_VAR(data__->RATE,)));
    __SET_VAR(data__->,POSO,,(__GET_VAR(data__->POSI,) + __GET_VAR(data__->DLT,)));
  } else {
    __SET_VAR(data__->,DLT,,((((-1.0 * (__GET_VAR(data__->NV,) + __GET_VAR(data__->VC,))) * 0.5) * __GET_VAR(data__->TS,)) * __GET_VAR(data__->RATE,)));
    __SET_VAR(data__->,POSO,,(__GET_VAR(data__->POSI,) + __GET_VAR(data__->DLT,)));
  };
  __SET_VAR(data__->,VS,,__GET_VAR(data__->NV,));

  goto __end;

__end:
  return;
} 
void _INTER_READ_body2__(_INTER_READ *data__) {
    if (!__GET_VAR(data__->EN)) {
    __SET_VAR(data__->,ENO,,__BOOL_LITERAL(FALSE));
    return;
  }
  else {
    __SET_VAR(data__->,ENO,,__BOOL_LITERAL(TRUE));
  }
  
  __SET_VAR(data__->AI.,ROW,,__BOOL_LITERAL(FALSE));
  __SET_VAR(data__->AI.,NODEID,,__GET_VAR(data__->AXISID,));
  __SET_VAR(data__->AI.,PNAME,,__STRING_LITERAL(6,"INTERP"));
  AXIS_INFO_body__(&data__->AI);
  __SET_VAR(data__->,INTERP,,__GET_VAR(data__->AI.OUTR));
  __SET_VAR(data__->AI.,ROW,,__BOOL_LITERAL(FALSE));
  __SET_VAR(data__->AI.,NODEID,,__GET_VAR(data__->AXISID,));
  __SET_VAR(data__->AI.,PNAME,,__STRING_LITERAL(6,"INTERV"));
  AXIS_INFO_body__(&data__->AI);
  __SET_VAR(data__->,INTERV,,__GET_VAR(data__->AI.OUTR));
  __SET_VAR(data__->AI.,ROW,,__BOOL_LITERAL(FALSE));
  __SET_VAR(data__->AI.,NODEID,,__GET_VAR(data__->AXISID,));
  __SET_VAR(data__->AI.,PNAME,,__STRING_LITERAL(6,"INTERA"));
  AXIS_INFO_body__(&data__->AI);
  __SET_VAR(data__->,INTERA,,__GET_VAR(data__->AI.OUTR));
  __SET_VAR(data__->AI.,ROW,,__BOOL_LITERAL(FALSE));
  __SET_VAR(data__->AI.,NODEID,,__GET_VAR(data__->AXISID,));
  __SET_VAR(data__->AI.,PNAME,,__STRING_LITERAL(7,"INTERVC"));
  AXIS_INFO_body__(&data__->AI);
  __SET_VAR(data__->,INTERVC_OUT,,__GET_VAR(data__->AI.OUTR));
  __SET_VAR(data__->AI.,ROW,,__BOOL_LITERAL(FALSE));
  __SET_VAR(data__->AI.,NODEID,,__GET_VAR(data__->AXISID,));
  __SET_VAR(data__->AI.,PNAME,,__STRING_LITERAL(7,"INTERPC"));
  AXIS_INFO_body__(&data__->AI);
  __SET_VAR(data__->,INTERPC_OUT,,__GET_VAR(data__->AI.OUTR));
  __SET_VAR(data__->AI.,ROW,,__BOOL_LITERAL(FALSE));
  __SET_VAR(data__->AI.,NODEID,,__GET_VAR(data__->AXISID,));
  __SET_VAR(data__->AI.,PNAME,,__STRING_LITERAL(3,"MPP"));
  AXIS_INFO_body__(&data__->AI);
  __SET_VAR(data__->,MPP,,__GET_VAR(data__->AI.OUTR));
  __SET_VAR(data__->AI.,ROW,,__BOOL_LITERAL(FALSE));
  __SET_VAR(data__->AI.,NODEID,,__GET_VAR(data__->AXISID,));
  __SET_VAR(data__->AI.,PNAME,,__STRING_LITERAL(8,"FEEDRATE"));
  AXIS_INFO_body__(&data__->AI);
  __SET_VAR(data__->,FEEDRATE,,__GET_VAR(data__->AI.OUTR));
  __SET_VAR(data__->AI.,ROW,,__BOOL_LITERAL(FALSE));
  __SET_VAR(data__->AI.,NODEID,,__GET_VAR(data__->AXISID,));
  __SET_VAR(data__->AI.,PNAME,,__STRING_LITERAL(4,"DMAX"));
  AXIS_INFO_body__(&data__->AI);
  __SET_VAR(data__->,DMAX,,__GET_VAR(data__->AI.OUTR));
  __SET_VAR(data__->AI.,ROW,,__BOOL_LITERAL(FALSE));
  __SET_VAR(data__->AI.,NODEID,,__GET_VAR(data__->AXISID,));
  __SET_VAR(data__->AI.,PNAME,,__STRING_LITERAL(4,"JMAX"));
  AXIS_INFO_body__(&data__->AI);
  __SET_VAR(data__->,JMAX,,__GET_VAR(data__->AI.OUTR));
  __SET_VAR(data__->AI.,ROW,,__BOOL_LITERAL(FALSE));
  __SET_VAR(data__->AI.,NODEID,,__GET_VAR(data__->AXISID,));
  __SET_VAR(data__->AI.,PNAME,,__STRING_LITERAL(6,"ADTYPE"));
  AXIS_INFO_body__(&data__->AI);
  __SET_VAR(data__->,ADTYPE,,__GET_VAR(data__->AI.OUTU32));
  __SET_VAR(data__->AI.,ROW,,__BOOL_LITERAL(FALSE));
  __SET_VAR(data__->AI.,NODEID,,__GET_VAR(data__->AXISID,));
  __SET_VAR(data__->AI.,PNAME,,__STRING_LITERAL(6,"JUMPV0"));
  AXIS_INFO_body__(&data__->AI);
  __SET_VAR(data__->,JUMPV0,,__GET_VAR(data__->AI.OUTR));
  __SET_VAR(data__->AI.,ROW,,__BOOL_LITERAL(FALSE));
  __SET_VAR(data__->AI.,NODEID,,__GET_VAR(data__->AXISID,));
  __SET_VAR(data__->AI.,PNAME,,__STRING_LITERAL(6,"JUMPV1"));
  AXIS_INFO_body__(&data__->AI);
  __SET_VAR(data__->,JUMPV1,,__GET_VAR(data__->AI.OUTR));

  goto __end;

__end:
  return;
} 
void _W_DEC_body2__(_W_DEC *data__) {
    if (!__GET_VAR(data__->EN)) {
    __SET_VAR(data__->,ENO,,__BOOL_LITERAL(FALSE));
    return;
  }
  else {
    __SET_VAR(data__->,ENO,,__BOOL_LITERAL(TRUE));
  }
  
  __SET_VAR(data__->AI.,ROW,,__BOOL_LITERAL(TRUE));
  __SET_VAR(data__->AI.,NODEID,,__GET_VAR(data__->AXISID,));
  __SET_VAR(data__->AI.,PNAME,,__STRING_LITERAL(8,"DONEFLAG"));
  __SET_VAR(data__->AI.,INB,,__GET_VAR(data__->DONEFLAG,));
  AXIS_INFO_body__(&data__->AI);
  __SET_VAR(data__->AI.,ROW,,__BOOL_LITERAL(TRUE));
  __SET_VAR(data__->AI.,NODEID,,__GET_VAR(data__->AXISID,));
  __SET_VAR(data__->AI.,PNAME,,__STRING_LITERAL(11,"EXECUTEFLAG"));
  __SET_VAR(data__->AI.,INB,,__GET_VAR(data__->EXECUTEFLAG,));
  AXIS_INFO_body__(&data__->AI);
  __SET_VAR(data__->AI.,ROW,,__BOOL_LITERAL(TRUE));
  __SET_VAR(data__->AI.,NODEID,,__GET_VAR(data__->AXISID,));
  __SET_VAR(data__->AI.,PNAME,,__STRING_LITERAL(11,"COMMANDTYPE"));
  __SET_VAR(data__->AI.,INU32,,INT_TO_UDINT(
    (BOOL)__BOOL_LITERAL(TRUE),
    NULL,
    (INT)__GET_VAR(data__->COMMANDTYPE,)));
  AXIS_INFO_body__(&data__->AI);

  goto __end;

__end:
  return;
} 
void _INTER_WRITE_body2__(_INTER_WRITE *data__) {
    if (!__GET_VAR(data__->EN)) {
    __SET_VAR(data__->,ENO,,__BOOL_LITERAL(FALSE));
    return;
  }
  else {
    __SET_VAR(data__->,ENO,,__BOOL_LITERAL(TRUE));
  }
  
  __SET_VAR(data__->AI.,ROW,,__BOOL_LITERAL(FALSE));
  __SET_VAR(data__->AI.,NODEID,,__GET_VAR(data__->AXISID,));
  __SET_VAR(data__->AI.,PNAME,,__STRING_LITERAL(3,"MPP"));
  AXIS_INFO_body__(&data__->AI);
  __SET_VAR(data__->,MPP,,__GET_VAR(data__->AI.OUTR,));
  __SET_VAR(data__->,MMM,,((ULINT_TO_LREAL(
    (BOOL)__BOOL_LITERAL(TRUE),
    NULL,
    (ULINT)0x100000000) * __GET_VAR(data__->MPP,)) / 2000.0));
  __SET_VAR(data__->AI.,ROW,,__BOOL_LITERAL(FALSE));
  __SET_VAR(data__->AI.,NODEID,,__GET_VAR(data__->AXISID,));
  __SET_VAR(data__->AI.,PNAME,,__STRING_LITERAL(7,"INTERPC"));
  AXIS_INFO_body__(&data__->AI);
  __SET_VAR(data__->,LASTCPC,,__GET_VAR(data__->AI.OUTR,));
  if ((ABS__LREAL__LREAL(
    (BOOL)__BOOL_LITERAL(TRUE),
    NULL,
    (LREAL)(__GET_VAR(data__->INTERPC_IN,) - __GET_VAR(data__->LASTCPC,))) > (__GET_VAR(data__->MMM,) / 2.0))) {
    if (((__GET_VAR(data__->INTERPC_IN,) - __GET_VAR(data__->LASTCPC,)) > 0.0)) {
      __SET_VAR(data__->,DP,,((__GET_VAR(data__->INTERPC_IN,) - __GET_VAR(data__->LASTCPC,)) - (2.0 * __GET_VAR(data__->MMM,))));
    } else {
      __SET_VAR(data__->,DP,,((__GET_VAR(data__->INTERPC_IN,) - __GET_VAR(data__->LASTCPC,)) + (2.0 * __GET_VAR(data__->MMM,))));
    };
  } else {
    __SET_VAR(data__->,DP,,(__GET_VAR(data__->INTERPC_IN,) - __GET_VAR(data__->LASTCPC,)));
  };
  __SET_VAR(data__->AI.,ROW,,__BOOL_LITERAL(FALSE));
  __SET_VAR(data__->AI.,NODEID,,__GET_VAR(data__->AXISID,));
  __SET_VAR(data__->AI.,PNAME,,__STRING_LITERAL(4,"DMAX"));
  AXIS_INFO_body__(&data__->AI);
  __SET_VAR(data__->,DA,,__GET_VAR(data__->AI.OUTR,));
  if ((__GET_VAR(data__->DA,) > 0.0)) {
    __SET_VAR(data__->AI.,ROW,,__BOOL_LITERAL(FALSE));
    __SET_VAR(data__->AI.,NODEID,,__GET_VAR(data__->AXISID,));
    __SET_VAR(data__->AI.,PNAME,,__STRING_LITERAL(7,"INTERPC"));
    AXIS_INFO_body__(&data__->AI);
    __SET_VAR(data__->,D2G,,__GET_VAR(data__->AI.OUTR,));
    __SET_VAR(data__->AI.,ROW,,__BOOL_LITERAL(FALSE));
    __SET_VAR(data__->AI.,NODEID,,__GET_VAR(data__->AXISID,));
    __SET_VAR(data__->AI.,PNAME,,__STRING_LITERAL(6,"INTERP"));
    AXIS_INFO_body__(&data__->AI);
    __SET_VAR(data__->,D2G,,ABS__LREAL__LREAL(
      (BOOL)__BOOL_LITERAL(TRUE),
      NULL,
      (LREAL)(__GET_VAR(data__->D2G,) - __GET_VAR(data__->AI.OUTR,))));
    __SET_VAR(data__->,D2GT,,((((0.5 * __GET_VAR(data__->INTERVC_IN,)) * __GET_VAR(data__->INTERVC_IN,)) / __GET_VAR(data__->DA,)) + 1.0));
    if ((__GET_VAR(data__->D2G,) < __GET_VAR(data__->D2GT,))) {
      __SET_VAR(data__->AI.,ROW,,__BOOL_LITERAL(TRUE));
      __SET_VAR(data__->AI.,NODEID,,__GET_VAR(data__->AXISID,));
      __SET_VAR(data__->AI.,PNAME,,__STRING_LITERAL(6,"INTERA"));
      __SET_VAR(data__->AI.,INR,,__GET_VAR(data__->DA,));
      AXIS_INFO_body__(&data__->AI);
    };
  };
  __SET_VAR(data__->RMD.,PC,,__GET_VAR(data__->INTERPC_IN,));
  __SET_VAR(data__->RMD.,MMM,,__GET_VAR(data__->MMM,));
  __SET_VAR(data__->RMD.,DIR,,__BOOL_LITERAL(TRUE));
  _RMOD_body__(&data__->RMD);
  __SET_VAR(data__->,INTERPC_IN,,__GET_VAR(data__->RMD.OPC,));
  __SET_VAR(data__->AI.,ROW,,__BOOL_LITERAL(TRUE));
  __SET_VAR(data__->AI.,NODEID,,__GET_VAR(data__->AXISID,));
  __SET_VAR(data__->AI.,PNAME,,__STRING_LITERAL(7,"INTERPC"));
  __SET_VAR(data__->AI.,INR,,__GET_VAR(data__->INTERPC_IN,));
  AXIS_INFO_body__(&data__->AI);
  __SET_VAR(data__->AI.,ROW,,__BOOL_LITERAL(TRUE));
  __SET_VAR(data__->AI.,NODEID,,__GET_VAR(data__->AXISID,));
  __SET_VAR(data__->AI.,PNAME,,__STRING_LITERAL(7,"INTERVC"));
  __SET_VAR(data__->AI.,INR,,__GET_VAR(data__->INTERVC_IN,));
  AXIS_INFO_body__(&data__->AI);
  __SET_VAR(data__->AI.,ROW,,__BOOL_LITERAL(TRUE));
  __SET_VAR(data__->AI.,NODEID,,__GET_VAR(data__->AXISID,));
  __SET_VAR(data__->AI.,PNAME,,__STRING_LITERAL(7,"INTERDP"));
  __SET_VAR(data__->AI.,INR,,__GET_VAR(data__->DP,));
  AXIS_INFO_body__(&data__->AI);
  __SET_VAR(data__->AI.,ROW,,__BOOL_LITERAL(FALSE));
  __SET_VAR(data__->AI.,NODEID,,__GET_VAR(data__->AXISID,));
  __SET_VAR(data__->AI.,PNAME,,__STRING_LITERAL(2,"PC"));
  AXIS_INFO_body__(&data__->AI);
  __SET_VAR(data__->,LASTCPC,,__GET_VAR(data__->AI.OUTR,));
  __SET_VAR(data__->AI.,ROW,,__BOOL_LITERAL(FALSE));
  __SET_VAR(data__->AI.,NODEID,,__GET_VAR(data__->AXISID,));
  __SET_VAR(data__->AI.,PNAME,,__STRING_LITERAL(2,"RA"));
  AXIS_INFO_body__(&data__->AI);
  __SET_VAR(data__->,ROTARY,,__GET_VAR(data__->AI.OUTB,));
  __SET_VAR(data__->AI.,ROW,,__BOOL_LITERAL(FALSE));
  __SET_VAR(data__->AI.,NODEID,,__GET_VAR(data__->AXISID,));
  __SET_VAR(data__->AI.,PNAME,,__STRING_LITERAL(4,"AMOD"));
  AXIS_INFO_body__(&data__->AI);
  __SET_VAR(data__->,MMOD,,__GET_VAR(data__->AI.OUTR,));
  if ((ABS__LREAL__LREAL(
    (BOOL)__BOOL_LITERAL(TRUE),
    NULL,
    (LREAL)__GET_VAR(data__->MMOD,)) < 0.0001)) {
    __SET_VAR(data__->AI.,ROW,,__BOOL_LITERAL(TRUE));
    __SET_VAR(data__->AI.,NODEID,,__GET_VAR(data__->AXISID,));
    __SET_VAR(data__->AI.,PNAME,,__STRING_LITERAL(2,"PC"));
    __SET_VAR(data__->AI.,INR,,__GET_VAR(data__->INTERPC_IN,));
    AXIS_INFO_body__(&data__->AI);
    goto __end;
  };
  __SET_VAR(data__->,CPC,,(__GET_VAR(data__->LASTCPC,) + __GET_VAR(data__->DP,)));
  __SET_VAR(data__->RMD.,PC,,__GET_VAR(data__->CPC,));
  __SET_VAR(data__->RMD.,MMM,,__GET_VAR(data__->MMOD,));
  __SET_VAR(data__->RMD.,DIR,,__BOOL_LITERAL(FALSE));
  _RMOD_body__(&data__->RMD);
  __SET_VAR(data__->,CPC,,__GET_VAR(data__->RMD.OPC,));
  __SET_VAR(data__->AI.,ROW,,__BOOL_LITERAL(TRUE));
  __SET_VAR(data__->AI.,NODEID,,__GET_VAR(data__->AXISID,));
  __SET_VAR(data__->AI.,PNAME,,__STRING_LITERAL(2,"PC"));
  __SET_VAR(data__->AI.,INR,,__GET_VAR(data__->CPC,));
  AXIS_INFO_body__(&data__->AI);
  goto __end;

  goto __end;

__end:
  return;
} 
void _DIFF2_body2__(_DIFF2 *data__) {
    if (!__GET_VAR(data__->EN)) {
    __SET_VAR(data__->,ENO,,__BOOL_LITERAL(FALSE));
    return;
  }
  else {
    __SET_VAR(data__->,ENO,,__BOOL_LITERAL(TRUE));
  }
  
  if ((ABS__LREAL__LREAL(
    (BOOL)__BOOL_LITERAL(TRUE),
    NULL,
    (LREAL)(__GET_VAR(data__->P1,) - __GET_VAR(data__->P2,))) < 1.0E-6)) {
    __SET_VAR(data__->,SAME,,__BOOL_LITERAL(TRUE));
  } else {
    __SET_VAR(data__->,SAME,,__BOOL_LITERAL(FALSE));
  };

  goto __end;

__end:
  return;
} 
void _W_PVA_body2__(_W_PVA *data__) {
    if (!__GET_VAR(data__->EN)) {
    __SET_VAR(data__->,ENO,,__BOOL_LITERAL(FALSE));
    return;
  }
  else {
    __SET_VAR(data__->,ENO,,__BOOL_LITERAL(TRUE));
  }
  
  __SET_VAR(data__->AI.,ROW,,__BOOL_LITERAL(TRUE));
  __SET_VAR(data__->AI.,NODEID,,__GET_VAR(data__->AXISID,));
  __SET_VAR(data__->AI.,PNAME,,__STRING_LITERAL(6,"INTERP"));
  __SET_VAR(data__->AI.,INR,,__GET_VAR(data__->POSITION,));
  AXIS_INFO_body__(&data__->AI);
  __SET_VAR(data__->AI.,ROW,,__BOOL_LITERAL(TRUE));
  __SET_VAR(data__->AI.,NODEID,,__GET_VAR(data__->AXISID,));
  __SET_VAR(data__->AI.,PNAME,,__STRING_LITERAL(6,"INTERV"));
  __SET_VAR(data__->AI.,INR,,__GET_VAR(data__->VELOCITY,));
  AXIS_INFO_body__(&data__->AI);
  __SET_VAR(data__->AI.,ROW,,__BOOL_LITERAL(TRUE));
  __SET_VAR(data__->AI.,NODEID,,__GET_VAR(data__->AXISID,));
  __SET_VAR(data__->AI.,PNAME,,__STRING_LITERAL(6,"INTERA"));
  __SET_VAR(data__->AI.,INR,,__GET_VAR(data__->ACCELERATION,));
  AXIS_INFO_body__(&data__->AI);

  goto __end;

__end:
  return;
} 
void _IPPOS_body2__(_IPPOS *data__) {
    if (!__GET_VAR(data__->EN)) {
    __SET_VAR(data__->,ENO,,__BOOL_LITERAL(FALSE));
    return;
  }
  else {
    __SET_VAR(data__->,ENO,,__BOOL_LITERAL(TRUE));
  }
  
  __SET_VAR(data__->IR.,AXISID,,__GET_VAR(data__->NODEID,));
  _INTER_READ_body__(&data__->IR);
  __SET_VAR(data__->,ABS9_OUT,,ABS__LREAL__LREAL(
    (BOOL)__BOOL_LITERAL(TRUE),
    NULL,
    (LREAL)__GET_VAR(data__->IR.INTERV,)));
  SYS_CFG_body__(&data__->SC);
  __SET_VAR(data__->VP.,ADTYPE,,__GET_VAR(data__->IR.ADTYPE,));
  __SET_VAR(data__->VP.,TARGET,,__GET_VAR(data__->IR.INTERP,));
  __SET_VAR(data__->VP.,VM,,__GET_VAR(data__->ABS9_OUT,));
  __SET_VAR(data__->VP.,AM,,__GET_VAR(data__->IR.INTERA,));
  __SET_VAR(data__->VP.,JM,,__GET_VAR(data__->IR.JMAX,));
  __SET_VAR(data__->VP.,TS,,__GET_VAR(data__->SC.CYCLE_TIME,));
  __SET_VAR(data__->VP.,VC,,__GET_VAR(data__->IR.INTERVC_OUT,));
  __SET_VAR(data__->VP.,POSI,,__GET_VAR(data__->IR.INTERPC_OUT,));
  __SET_VAR(data__->VP.,RATE,,__GET_VAR(data__->IR.FEEDRATE,));
  __SET_VAR(data__->VP.,V0,,__GET_VAR(data__->IR.JUMPV0,));
  __SET_VAR(data__->VP.,V1,,__GET_VAR(data__->IR.JUMPV1,));
  _VPLAN_body__(&data__->VP);
  __SET_VAR(data__->,IP_PC,,__GET_VAR(data__->VP.POSO,));
  __SET_VAR(data__->,IP_VC,,__GET_VAR(data__->VP.VS,));
  __SET_VAR(data__->ISP.,NODEID,,__GET_VAR(data__->NODEID,));
  __SET_VAR(data__->ISP.,INPC,,__GET_VAR(data__->IP_PC,));
  __SET_VAR(data__->ISP.,INVC,,__GET_VAR(data__->IP_VC,));
  IPT_SHAPING_body__(&data__->ISP);
  __SET_VAR(data__->,IS_PC,,__GET_VAR(data__->ISP.OUTPC,));
  __SET_VAR(data__->,IS_VC,,__GET_VAR(data__->ISP.OUTVC,));
  __SET_VAR(data__->PP.,TARGETPOSITION,,__GET_VAR(data__->IS_PC,));
  __SET_VAR(data__->PP.,PULSEEQUIVALENT,,__GET_VAR(data__->IR.MPP,));
  _PULSE_CALC_body__(&data__->PP);
  __SET_VAR(data__->R_P.,ROW,,__BOOL_LITERAL(FALSE));
  __SET_VAR(data__->R_P.,NODEID,,__GET_VAR(data__->NODEID,));
  __SET_VAR(data__->R_P.,PNAME,,__STRING_LITERAL(5,"P0POS"));
  AXIS_INFO_body__(&data__->R_P);
  __SET_VAR(data__->,UDINT_TO_DINT111_OUT,,UDINT_TO_DINT(
    (BOOL)__BOOL_LITERAL(TRUE),
    NULL,
    (UDINT)__GET_VAR(data__->R_P.OUTU32,)));
  __SET_VAR(data__->,ADD112_OUT,,ADD__DINT__DINT(
    (BOOL)__BOOL_LITERAL(TRUE),
    NULL,
    (UINT)2,
    (DINT)__GET_VAR(data__->PP.PULSENUMALL,),
    (DINT)__GET_VAR(data__->UDINT_TO_DINT111_OUT,)));
  __SET_VAR(data__->,DINT_TO_UDINT113_OUT,,DINT_TO_UDINT(
    (BOOL)__BOOL_LITERAL(TRUE),
    NULL,
    (DINT)__GET_VAR(data__->ADD112_OUT,)));
  __SET_VAR(data__->AI.,ROW,,__BOOL_LITERAL(TRUE));
  __SET_VAR(data__->AI.,NODEID,,__GET_VAR(data__->NODEID,));
  __SET_VAR(data__->AI.,PNAME,,__STRING_LITERAL(6,"CURPOS"));
  __SET_VAR(data__->AI.,INU32,,__GET_VAR(data__->DINT_TO_UDINT113_OUT,));
  AXIS_INFO_body__(&data__->AI);
  __SET_VAR(data__->BLOCK3.,ROW,,__BOOL_LITERAL(FALSE));
  __SET_VAR(data__->BLOCK3.,NODEID,,__GET_VAR(data__->NODEID,));
  __SET_VAR(data__->BLOCK3.,PNAME,,__STRING_LITERAL(2,"VA"));
  AXIS_INFO_body__(&data__->BLOCK3);
  __SET_VAR(data__->,INT_TO_USINT16_OUT,,INT_TO_USINT(
    (BOOL)__BOOL_LITERAL(TRUE),
    NULL,
    (INT)__GET_VAR(data__->NODEID,)));
  __SET_VAR(data__->INTER_W.,EN,,!(__GET_VAR(data__->BLOCK3.OUTB,)));
  __SET_VAR(data__->INTER_W.,NODEID,,__GET_VAR(data__->INT_TO_USINT16_OUT,));
  __SET_VAR(data__->INTER_W.,POS,,__GET_VAR(data__->DINT_TO_UDINT113_OUT,));
  IP_WRITE_body__(&data__->INTER_W);
  __SET_VAR(data__->IRW.,AXISID,,__GET_VAR(data__->NODEID,));
  __SET_VAR(data__->IRW.,INTERPC_IN,,__GET_VAR(data__->IS_PC,));
  __SET_VAR(data__->IRW.,INTERVC_IN,,__GET_VAR(data__->IS_VC,));
  _INTER_WRITE_body__(&data__->IRW);

  goto __end;

__end:
  return;
} 
void _VACLAMP_body2__(_VACLAMP *data__) {
    if (!__GET_VAR(data__->EN)) {
    __SET_VAR(data__->,ENO,,__BOOL_LITERAL(FALSE));
    return;
  }
  else {
    __SET_VAR(data__->,ENO,,__BOOL_LITERAL(TRUE));
  }
  
  __SET_VAR(data__->AI.,ROW,,__BOOL_LITERAL(FALSE));
  __SET_VAR(data__->AI.,NODEID,,__GET_VAR(data__->AXISID,));
  __SET_VAR(data__->AI.,PNAME,,__STRING_LITERAL(4,"VMAX"));
  AXIS_INFO_body__(&data__->AI);
  __SET_VAR(data__->,VO,,__GET_VAR(data__->AI.OUTR,));
  if ((ABS__LREAL__LREAL(
    (BOOL)__BOOL_LITERAL(TRUE),
    NULL,
    (LREAL)__GET_VAR(data__->VEL,)) > ABS__LREAL__LREAL(
    (BOOL)__BOOL_LITERAL(TRUE),
    NULL,
    (LREAL)__GET_VAR(data__->VO,)))) {
    __SET_VAR(data__->,VO,,ABS__LREAL__LREAL(
      (BOOL)__BOOL_LITERAL(TRUE),
      NULL,
      (LREAL)__GET_VAR(data__->VO,)));
  } else {
    __SET_VAR(data__->,VO,,ABS__LREAL__LREAL(
      (BOOL)__BOOL_LITERAL(TRUE),
      NULL,
      (LREAL)__GET_VAR(data__->VEL,)));
  };
  __SET_VAR(data__->AI.,ROW,,__BOOL_LITERAL(FALSE));
  __SET_VAR(data__->AI.,NODEID,,__GET_VAR(data__->AXISID,));
  __SET_VAR(data__->AI.,PNAME,,__STRING_LITERAL(4,"AMAX"));
  AXIS_INFO_body__(&data__->AI);
  __SET_VAR(data__->,AO,,__GET_VAR(data__->AI.OUTR,));
  __SET_VAR(data__->D2.,P1,,__GET_VAR(data__->ACC,));
  __SET_VAR(data__->D2.,P2,,0.0);
  _DIFF2_body__(&data__->D2);
  if (((ABS__LREAL__LREAL(
    (BOOL)__BOOL_LITERAL(TRUE),
    NULL,
    (LREAL)__GET_VAR(data__->ACC,)) > ABS__LREAL__LREAL(
    (BOOL)__BOOL_LITERAL(TRUE),
    NULL,
    (LREAL)__GET_VAR(data__->AO,))) || __GET_VAR(data__->D2.SAME,))) {
    __SET_VAR(data__->,AO,,ABS__LREAL__LREAL(
      (BOOL)__BOOL_LITERAL(TRUE),
      NULL,
      (LREAL)__GET_VAR(data__->AO,)));
  } else {
    __SET_VAR(data__->,AO,,ABS__LREAL__LREAL(
      (BOOL)__BOOL_LITERAL(TRUE),
      NULL,
      (LREAL)__GET_VAR(data__->ACC,)));
  };
  goto __end;
  if ((ABS__LREAL__LREAL(
    (BOOL)__BOOL_LITERAL(TRUE),
    NULL,
    (LREAL)__GET_VAR(data__->VEL,)) > ABS__LREAL__LREAL(
    (BOOL)__BOOL_LITERAL(TRUE),
    NULL,
    (LREAL)__GET_VAR(data__->VO,)))) {
    if (((__GET_VAR(data__->DIR,) == __BOOL_LITERAL(TRUE)) && (__GET_VAR(data__->VEL,) < 0.0))) {
      __SET_VAR(data__->,VO,,(-1.0 * __GET_VAR(data__->VO,)));
    };
  } else {
    if (((__GET_VAR(data__->DIR,) == __BOOL_LITERAL(FALSE)) && (__GET_VAR(data__->VEL,) < 0.0))) {
      __SET_VAR(data__->,VO,,ABS__LREAL__LREAL(
        (BOOL)__BOOL_LITERAL(TRUE),
        NULL,
        (LREAL)__GET_VAR(data__->VEL,)));
    } else {
      __SET_VAR(data__->,VO,,__GET_VAR(data__->VEL,));
    };
  };

  goto __end;

__end:
  return;
} 
void _CP0POS_body2__(_CP0POS *data__) {
    if (!__GET_VAR(data__->EN)) {
    __SET_VAR(data__->,ENO,,__BOOL_LITERAL(FALSE));
    return;
  }
  else {
    __SET_VAR(data__->,ENO,,__BOOL_LITERAL(TRUE));
  }
  
  __SET_VAR(data__->CPDIST.,TARGETPOSITION,,__GET_VAR(data__->LOGPOS0,));
  __SET_VAR(data__->CPDIST.,PULSEEQUIVALENT,,__GET_VAR(data__->MPP,));
  _PULSE_CALC_body__(&data__->CPDIST);
  __SET_VAR(data__->,DIST,,__GET_VAR(data__->CPDIST.PULSENUMALL,));
  __SET_VAR(data__->,P0OUT,,(__GET_VAR(data__->P0IN,) - DINT_TO_UDINT(
    (BOOL)__BOOL_LITERAL(TRUE),
    NULL,
    (DINT)__GET_VAR(data__->DIST,))));

  goto __end;

__end:
  return;
} 
void _GETERRORID_body2__(_GETERRORID *data__) {
    if (!__GET_VAR(data__->EN)) {
    __SET_VAR(data__->,ENO,,__BOOL_LITERAL(FALSE));
    return;
  }
  else {
    __SET_VAR(data__->,ENO,,__BOOL_LITERAL(TRUE));
  }
  
  __SET_VAR(data__->,ERRORID,,0);
  __SET_VAR(data__->IPRD.,NODEID,,INT_TO_USINT(
    (BOOL)__BOOL_LITERAL(TRUE),
    NULL,
    (INT)__GET_VAR(data__->AXISID,)));
  IP_READ_body__(&data__->IPRD);
  __SET_VAR(data__->,STS,,UINT_TO_WORD(
    (BOOL)__BOOL_LITERAL(TRUE),
    NULL,
    (UINT)__GET_VAR(data__->IPRD.STATUS,)));
  __SET_VAR(data__->,ERRORID,,WORD_TO_INT(
    (BOOL)__BOOL_LITERAL(TRUE),
    NULL,
    (WORD)AND__WORD__WORD(
      (BOOL)__BOOL_LITERAL(TRUE),
      NULL,
      (UINT)2,
      (WORD)__GET_VAR(data__->STS,),
      (WORD)0x8)));
  if ((__GET_VAR(data__->ERRORID,) > 0)) {
    __SET_VAR(data__->AI.,ROW,,__BOOL_LITERAL(TRUE));
    __SET_VAR(data__->AI.,NODEID,,__GET_VAR(data__->AXISID,));
    __SET_VAR(data__->AI.,PNAME,,__STRING_LITERAL(7,"ERRORID"));
    __SET_VAR(data__->AI.,INU32,,8);
    AXIS_INFO_body__(&data__->AI);
    goto __end;
  };
  __SET_VAR(data__->,ERRORID,,WORD_TO_INT(
    (BOOL)__BOOL_LITERAL(TRUE),
    NULL,
    (WORD)AND__WORD__WORD(
      (BOOL)__BOOL_LITERAL(TRUE),
      NULL,
      (UINT)2,
      (WORD)__GET_VAR(data__->STS,),
      (WORD)0x4)));
  if ((__GET_VAR(data__->ERRORID,) == 0)) {
    __SET_VAR(data__->,ERRORID,,4);
    __SET_VAR(data__->AI.,ROW,,__BOOL_LITERAL(TRUE));
    __SET_VAR(data__->AI.,NODEID,,__GET_VAR(data__->AXISID,));
    __SET_VAR(data__->AI.,PNAME,,__STRING_LITERAL(7,"ERRORID"));
    __SET_VAR(data__->AI.,INU32,,4);
    AXIS_INFO_body__(&data__->AI);
    goto __end;
  };
  __SET_VAR(data__->,ERRORID,,0);
  __SET_VAR(data__->AI.,ROW,,__BOOL_LITERAL(FALSE));
  __SET_VAR(data__->AI.,NODEID,,__GET_VAR(data__->AXISID,));
  __SET_VAR(data__->AI.,PNAME,,__STRING_LITERAL(5,"STATE"));
  AXIS_INFO_body__(&data__->AI);
  __SET_VAR(data__->,CS,,UDINT_TO_INT(
    (BOOL)__BOOL_LITERAL(TRUE),
    NULL,
    (UDINT)__GET_VAR(data__->AI.OUTU32,)));
  __SET_VAR(data__->AI.,ROW,,__BOOL_LITERAL(FALSE));
  __SET_VAR(data__->AI.,NODEID,,__GET_VAR(data__->AXISID,));
  __SET_VAR(data__->AI.,PNAME,,__STRING_LITERAL(2,"RA"));
  AXIS_INFO_body__(&data__->AI);
  __SET_VAR(data__->,ROTARY,,__GET_VAR(data__->AI.OUTB,));
  if (__GET_VAR(data__->ROTARY,)) {
    goto __end;
  };
  __SET_VAR(data__->AI.,ROW,,__BOOL_LITERAL(FALSE));
  __SET_VAR(data__->AI.,NODEID,,__GET_VAR(data__->AXISID,));
  __SET_VAR(data__->AI.,PNAME,,__STRING_LITERAL(6,"INTERP"));
  AXIS_INFO_body__(&data__->AI);
  __SET_VAR(data__->,TPC,,__GET_VAR(data__->AI.OUTR,));
  __SET_VAR(data__->AI.,ROW,,__BOOL_LITERAL(FALSE));
  __SET_VAR(data__->AI.,NODEID,,__GET_VAR(data__->AXISID,));
  __SET_VAR(data__->AI.,PNAME,,__STRING_LITERAL(2,"PC"));
  AXIS_INFO_body__(&data__->AI);
  __SET_VAR(data__->,CPC,,__GET_VAR(data__->AI.OUTR,));
  __SET_VAR(data__->AI.,ROW,,__BOOL_LITERAL(FALSE));
  __SET_VAR(data__->AI.,NODEID,,__GET_VAR(data__->AXISID,));
  __SET_VAR(data__->AI.,PNAME,,__STRING_LITERAL(4,"LMTL"));
  AXIS_INFO_body__(&data__->AI);
  __SET_VAR(data__->,LP0,,__GET_VAR(data__->AI.OUTR,));
  __SET_VAR(data__->AI.,ROW,,__BOOL_LITERAL(FALSE));
  __SET_VAR(data__->AI.,NODEID,,__GET_VAR(data__->AXISID,));
  __SET_VAR(data__->AI.,PNAME,,__STRING_LITERAL(4,"LMTH"));
  AXIS_INFO_body__(&data__->AI);
  __SET_VAR(data__->,LP1,,__GET_VAR(data__->AI.OUTR,));
  if (((__GET_VAR(data__->CPC,) > __GET_VAR(data__->LP1,)) && (__GET_VAR(data__->TPC,) > (__GET_VAR(data__->LP1,) + 1.0)))) {
    __SET_VAR(data__->,ERRORID,,2);
    __SET_VAR(data__->AI.,ROW,,__BOOL_LITERAL(TRUE));
    __SET_VAR(data__->AI.,NODEID,,__GET_VAR(data__->AXISID,));
    __SET_VAR(data__->AI.,PNAME,,__STRING_LITERAL(7,"ERRORID"));
    __SET_VAR(data__->AI.,INU32,,2);
    AXIS_INFO_body__(&data__->AI);
    __SET_VAR(data__->AI.,ROW,,__BOOL_LITERAL(TRUE));
    __SET_VAR(data__->AI.,NODEID,,__GET_VAR(data__->AXISID,));
    __SET_VAR(data__->AI.,PNAME,,__STRING_LITERAL(2,"PC"));
    __SET_VAR(data__->AI.,INR,,__GET_VAR(data__->LP1,));
    AXIS_INFO_body__(&data__->AI);
    __SET_VAR(data__->AI.,ROW,,__BOOL_LITERAL(TRUE));
    __SET_VAR(data__->AI.,NODEID,,__GET_VAR(data__->AXISID,));
    __SET_VAR(data__->AI.,PNAME,,__STRING_LITERAL(7,"INTERVC"));
    __SET_VAR(data__->AI.,INR,,0.0);
    AXIS_INFO_body__(&data__->AI);
  };
  if (((__GET_VAR(data__->CPC,) < __GET_VAR(data__->LP0,)) && (__GET_VAR(data__->TPC,) < (__GET_VAR(data__->LP0,) - 1.0)))) {
    __SET_VAR(data__->,ERRORID,,3);
    __SET_VAR(data__->AI.,ROW,,__BOOL_LITERAL(TRUE));
    __SET_VAR(data__->AI.,NODEID,,__GET_VAR(data__->AXISID,));
    __SET_VAR(data__->AI.,PNAME,,__STRING_LITERAL(7,"ERRORID"));
    __SET_VAR(data__->AI.,INU32,,3);
    AXIS_INFO_body__(&data__->AI);
    __SET_VAR(data__->AI.,ROW,,__BOOL_LITERAL(TRUE));
    __SET_VAR(data__->AI.,NODEID,,__GET_VAR(data__->AXISID,));
    __SET_VAR(data__->AI.,PNAME,,__STRING_LITERAL(2,"PC"));
    __SET_VAR(data__->AI.,INR,,__GET_VAR(data__->LP0,));
    AXIS_INFO_body__(&data__->AI);
    __SET_VAR(data__->AI.,ROW,,__BOOL_LITERAL(TRUE));
    __SET_VAR(data__->AI.,NODEID,,__GET_VAR(data__->AXISID,));
    __SET_VAR(data__->AI.,PNAME,,__STRING_LITERAL(7,"INTERVC"));
    __SET_VAR(data__->AI.,INR,,0.0);
    AXIS_INFO_body__(&data__->AI);
  };

  goto __end;

__end:
  return;
} 
void _P2R_body2__(_P2R *data__) {
    if (!__GET_VAR(data__->EN)) {
    __SET_VAR(data__->,ENO,,__BOOL_LITERAL(FALSE));
    return;
  }
  else {
    __SET_VAR(data__->,ENO,,__BOOL_LITERAL(TRUE));
  }
  
  __SET_VAR(data__->,TARGETPOSITION,,(__GET_VAR(data__->CURRENTPOS,) + ((DINT_TO_LREAL(
    (BOOL)__BOOL_LITERAL(TRUE),
    NULL,
    (DINT)__GET_VAR(data__->PULSENUMPERIOD,)) * __GET_VAR(data__->PULSEEQUIVALENT,)) / 1000.0)));

  goto __end;

__end:
  return;
} 
void _SVPLAN_body2__(_SVPLAN *data__) {
    if (!__GET_VAR(data__->EN)) {
    __SET_VAR(data__->,ENO,,__BOOL_LITERAL(FALSE));
    return;
  }
  else {
    __SET_VAR(data__->,ENO,,__BOOL_LITERAL(TRUE));
  }
  
  if (((__GET_VAR(data__->POSI,) != __GET_VAR(data__->POSO,)) && (__GET_VAR(data__->POSO,) == __GET_VAR(data__->LAST_TARGET,)))) {
    __SET_VAR(data__->,FIRST_OUT,,1);
  } else {
    __SET_VAR(data__->,FIRST_OUT,,0);
  };
  __SET_VAR(data__->RT1.,CLK,,__GET_VAR(data__->FIRST_OUT,));
  R_TRIG_body__(&data__->RT1);
  __SET_VAR(data__->,FIRST_FLAG,,__GET_VAR(data__->RT1.Q));
  if ((__GET_VAR(data__->FIRST_FLAG,) == 1)) {
    __SET_VAR(data__->,LAST_TARGET,,__GET_VAR(data__->POSI,));
  };
  __SET_VAR(data__->,DISTANCE,,(__GET_VAR(data__->TARGET,) - __GET_VAR(data__->LAST_TARGET,)));
  if ((__GET_VAR(data__->DISTANCE,) == 0.0)) {
    __SET_VAR(data__->,SI,,__GET_VAR(data__->TARGET,));
    __SET_VAR(data__->,POSO,,__GET_VAR(data__->TARGET,));
    __SET_VAR(data__->,LAST_TARGET,,__GET_VAR(data__->TARGET,));
    __SET_VAR(data__->,VO,,0.0);
    goto __end;
  };
  __SET_VAR(data__->,X,,EXPT__LREAL__LREAL__REAL(
    (BOOL)__BOOL_LITERAL(TRUE),
    NULL,
    (LREAL)ABS__LREAL__LREAL(
      (BOOL)__BOOL_LITERAL(TRUE),
      NULL,
      (LREAL)(__GET_VAR(data__->DISTANCE,) / (2.0 * __GET_VAR(data__->J,)))),
    (REAL)(1.0 / 3.0)));
  if ((__GET_VAR(data__->DISTANCE,) > 0.0)) {
    if ((((__GET_VAR(data__->V,) < ((__GET_VAR(data__->A,) * __GET_VAR(data__->A,)) / __GET_VAR(data__->J,))) && (__GET_VAR(data__->DISTANCE,) < ((2.0 * __GET_VAR(data__->V,)) * SQRT__LREAL__LREAL(
      (BOOL)__BOOL_LITERAL(TRUE),
      NULL,
      (LREAL)(__GET_VAR(data__->V,) / __GET_VAR(data__->J,)))))) || ((__GET_VAR(data__->V,) > ((__GET_VAR(data__->A,) * __GET_VAR(data__->A,)) / __GET_VAR(data__->J,))) && (__GET_VAR(data__->DISTANCE,) < ((((2.0 * __GET_VAR(data__->A,)) * __GET_VAR(data__->A,)) * __GET_VAR(data__->A,)) / (__GET_VAR(data__->J,) * __GET_VAR(data__->J,))))))) {
      if (((__GET_VAR(data__->POSO,) - __GET_VAR(data__->LAST_TARGET,)) < (__GET_VAR(data__->DISTANCE,) / 12.0))) {
        __SET_VAR(data__->,AR,,(__GET_VAR(data__->AI,) + (__GET_VAR(data__->J,) * __GET_VAR(data__->TS,))));
        __SET_VAR(data__->,VO,,((__GET_VAR(data__->VC,) + (__GET_VAR(data__->AI,) * __GET_VAR(data__->TS,))) + (((__GET_VAR(data__->J,) * __GET_VAR(data__->TS,)) * __GET_VAR(data__->TS,)) / 2.0)));
        __SET_VAR(data__->,POSO,,(((__GET_VAR(data__->POSI,) + (__GET_VAR(data__->VC,) * __GET_VAR(data__->TS,))) + (((__GET_VAR(data__->AI,) * __GET_VAR(data__->TS,)) * __GET_VAR(data__->TS,)) / 2.0)) + ((((__GET_VAR(data__->J,) * __GET_VAR(data__->TS,)) * __GET_VAR(data__->TS,)) * __GET_VAR(data__->TS,)) / 6.0)));
        if (((__GET_VAR(data__->POSO,) - __GET_VAR(data__->LAST_TARGET,)) < (__GET_VAR(data__->DISTANCE,) / 12.0))) {
          __SET_VAR(data__->,SI,,__GET_VAR(data__->POSO,));
          __SET_VAR(data__->,VI,,__GET_VAR(data__->VO,));
          __SET_VAR(data__->,AI,,__GET_VAR(data__->AR,));
          __SET_VAR(data__->,JI,,__GET_VAR(data__->J,));
          __SET_VAR(data__->,PHASE,,1111.0);
        } else if (((__GET_VAR(data__->POSO,) - __GET_VAR(data__->LAST_TARGET,)) >= (__GET_VAR(data__->DISTANCE,) / 12.0))) {
          __SET_VAR(data__->,SI,,(__GET_VAR(data__->LAST_TARGET,) + (__GET_VAR(data__->DISTANCE,) / 12.0)));
          __SET_VAR(data__->,VI,,(__GET_VAR(data__->DISTANCE,) / (4.0 * __GET_VAR(data__->X,))));
          __SET_VAR(data__->,AI,,__GET_VAR(data__->AR,));
          __SET_VAR(data__->,PHASE,,1111.1);
        };
      } else if ((((__GET_VAR(data__->POSO,) - __GET_VAR(data__->LAST_TARGET,)) >= (__GET_VAR(data__->DISTANCE,) / 12.0)) && ((__GET_VAR(data__->POSO,) - __GET_VAR(data__->LAST_TARGET,)) < (__GET_VAR(data__->DISTANCE,) / 2.0)))) {
        __SET_VAR(data__->,AR,,(__GET_VAR(data__->AI,) - (__GET_VAR(data__->J,) * __GET_VAR(data__->TS,))));
        __SET_VAR(data__->,VO,,((__GET_VAR(data__->VC,) + (__GET_VAR(data__->AI,) * __GET_VAR(data__->TS,))) - (((__GET_VAR(data__->J,) * __GET_VAR(data__->TS,)) * __GET_VAR(data__->TS,)) / 2.0)));
        __SET_VAR(data__->,POSO,,(((__GET_VAR(data__->POSI,) + (__GET_VAR(data__->VC,) * __GET_VAR(data__->TS,))) + (((__GET_VAR(data__->AI,) * __GET_VAR(data__->TS,)) * __GET_VAR(data__->TS,)) / 2.0)) - ((((__GET_VAR(data__->J,) * __GET_VAR(data__->TS,)) * __GET_VAR(data__->TS,)) * __GET_VAR(data__->TS,)) / 6.0)));
        if (((__GET_VAR(data__->POSO,) - __GET_VAR(data__->LAST_TARGET,)) < (__GET_VAR(data__->DISTANCE,) / 2.0))) {
          __SET_VAR(data__->,SI,,__GET_VAR(data__->POSO,));
          __SET_VAR(data__->,VI,,__GET_VAR(data__->VO,));
          __SET_VAR(data__->,AI,,__GET_VAR(data__->AR,));
          __SET_VAR(data__->,JI,, -(__GET_VAR(data__->J,)));
          __SET_VAR(data__->,PHASE,,2222.0);
        } else if (((__GET_VAR(data__->POSO,) - __GET_VAR(data__->LAST_TARGET,)) >= (__GET_VAR(data__->DISTANCE,) / 2.0))) {
          __SET_VAR(data__->,SI,,(__GET_VAR(data__->LAST_TARGET,) + (__GET_VAR(data__->DISTANCE,) / 2.0)));
          __SET_VAR(data__->,VI,,(__GET_VAR(data__->DISTANCE,) / (2.0 * __GET_VAR(data__->X,))));
          __SET_VAR(data__->,AI,,0.0);
          __SET_VAR(data__->,PHASE,,2222.1);
        };
      } else if ((((__GET_VAR(data__->POSO,) - __GET_VAR(data__->LAST_TARGET,)) >= (__GET_VAR(data__->DISTANCE,) / 2.0)) && ((__GET_VAR(data__->POSO,) - __GET_VAR(data__->LAST_TARGET,)) < ((11.0 * __GET_VAR(data__->DISTANCE,)) / 12.0)))) {
        __SET_VAR(data__->,AR,,(__GET_VAR(data__->AI,) - (__GET_VAR(data__->J,) * __GET_VAR(data__->TS,))));
        __SET_VAR(data__->,VO,,((__GET_VAR(data__->VC,) + (__GET_VAR(data__->AI,) * __GET_VAR(data__->TS,))) - (((__GET_VAR(data__->J,) * __GET_VAR(data__->TS,)) * __GET_VAR(data__->TS,)) / 2.0)));
        __SET_VAR(data__->,POSO,,(((__GET_VAR(data__->POSI,) + (__GET_VAR(data__->VC,) * __GET_VAR(data__->TS,))) + (((__GET_VAR(data__->AI,) * __GET_VAR(data__->TS,)) * __GET_VAR(data__->TS,)) / 2.0)) - ((((__GET_VAR(data__->J,) * __GET_VAR(data__->TS,)) * __GET_VAR(data__->TS,)) * __GET_VAR(data__->TS,)) / 6.0)));
        if (((__GET_VAR(data__->POSO,) - __GET_VAR(data__->LAST_TARGET,)) < ((11.0 * __GET_VAR(data__->DISTANCE,)) / 12.0))) {
          __SET_VAR(data__->,SI,,__GET_VAR(data__->POSO,));
          __SET_VAR(data__->,VI,,__GET_VAR(data__->VO,));
          __SET_VAR(data__->,AI,,__GET_VAR(data__->AR,));
          __SET_VAR(data__->,JI,, -(__GET_VAR(data__->J,)));
          __SET_VAR(data__->,PHASE,,3333.0);
        } else if (((__GET_VAR(data__->POSO,) - __GET_VAR(data__->LAST_TARGET,)) >= ((11.0 * __GET_VAR(data__->DISTANCE,)) / 12.0))) {
          __SET_VAR(data__->,SI,,(__GET_VAR(data__->LAST_TARGET,) + ((11.0 * __GET_VAR(data__->DISTANCE,)) / 12.0)));
          __SET_VAR(data__->,VI,,(__GET_VAR(data__->DISTANCE,) / (4.0 * __GET_VAR(data__->X,))));
          __SET_VAR(data__->,AI,,( -(__GET_VAR(data__->J,)) * __GET_VAR(data__->X,)));
          __SET_VAR(data__->,PHASE,,3333.1);
        };
      } else if ((((__GET_VAR(data__->POSO,) - __GET_VAR(data__->LAST_TARGET,)) >= ((11.0 * __GET_VAR(data__->DISTANCE,)) / 12.0)) && ((__GET_VAR(data__->POSO,) - __GET_VAR(data__->LAST_TARGET,)) < __GET_VAR(data__->DISTANCE,)))) {
        __SET_VAR(data__->,AR,,(__GET_VAR(data__->AI,) + (__GET_VAR(data__->J,) * __GET_VAR(data__->TS,))));
        __SET_VAR(data__->,VO,,((__GET_VAR(data__->VC,) + (__GET_VAR(data__->AI,) * __GET_VAR(data__->TS,))) + (((__GET_VAR(data__->J,) * __GET_VAR(data__->TS,)) * __GET_VAR(data__->TS,)) / 2.0)));
        __SET_VAR(data__->,POSO,,(((__GET_VAR(data__->POSI,) + (__GET_VAR(data__->VC,) * __GET_VAR(data__->TS,))) + (((__GET_VAR(data__->AI,) * __GET_VAR(data__->TS,)) * __GET_VAR(data__->TS,)) / 2.0)) + ((((__GET_VAR(data__->J,) * __GET_VAR(data__->TS,)) * __GET_VAR(data__->TS,)) * __GET_VAR(data__->TS,)) / 6.0)));
        if (((__GET_VAR(data__->POSO,) - __GET_VAR(data__->LAST_TARGET,)) < __GET_VAR(data__->DISTANCE,))) {
          __SET_VAR(data__->,SI,,__GET_VAR(data__->POSO,));
          __SET_VAR(data__->,VI,,__GET_VAR(data__->VO,));
          __SET_VAR(data__->,AI,,__GET_VAR(data__->AR,));
          __SET_VAR(data__->,JI,,__GET_VAR(data__->J,));
          __SET_VAR(data__->,PHASE,,4444.0);
        } else if (((__GET_VAR(data__->POSO,) - __GET_VAR(data__->LAST_TARGET,)) >= __GET_VAR(data__->DISTANCE,))) {
          __SET_VAR(data__->,SI,,__GET_VAR(data__->TARGET,));
          __SET_VAR(data__->,POSO,,__GET_VAR(data__->TARGET,));
          __SET_VAR(data__->,LAST_TARGET,,__GET_VAR(data__->TARGET,));
          __SET_VAR(data__->,VI,,0.0);
          __SET_VAR(data__->,VO,,0.0);
          __SET_VAR(data__->,AI,,0.0);
          __SET_VAR(data__->,JI,,0.0);
          __SET_VAR(data__->,PHASE,,4444.1);
        };
      };
    };
    if (((__GET_VAR(data__->V,) <= ((__GET_VAR(data__->A,) * __GET_VAR(data__->A,)) / __GET_VAR(data__->J,))) && (__GET_VAR(data__->DISTANCE,) >= ((2.0 * __GET_VAR(data__->V,)) * SQRT__LREAL__LREAL(
      (BOOL)__BOOL_LITERAL(TRUE),
      NULL,
      (LREAL)(__GET_VAR(data__->V,) / __GET_VAR(data__->J,))))))) {
      if (((__GET_VAR(data__->POSO,) - __GET_VAR(data__->LAST_TARGET,)) < ((((__GET_VAR(data__->J,) * SQRT__LREAL__LREAL(
        (BOOL)__BOOL_LITERAL(TRUE),
        NULL,
        (LREAL)(__GET_VAR(data__->V,) / __GET_VAR(data__->J,)))) * SQRT__LREAL__LREAL(
        (BOOL)__BOOL_LITERAL(TRUE),
        NULL,
        (LREAL)(__GET_VAR(data__->V,) / __GET_VAR(data__->J,)))) * SQRT__LREAL__LREAL(
        (BOOL)__BOOL_LITERAL(TRUE),
        NULL,
        (LREAL)(__GET_VAR(data__->V,) / __GET_VAR(data__->J,)))) / 6.0))) {
        __SET_VAR(data__->,AR,,(__GET_VAR(data__->AI,) + (__GET_VAR(data__->J,) * __GET_VAR(data__->TS,))));
        __SET_VAR(data__->,VO,,((__GET_VAR(data__->VC,) + (__GET_VAR(data__->AI,) * __GET_VAR(data__->TS,))) + (((__GET_VAR(data__->J,) * __GET_VAR(data__->TS,)) * __GET_VAR(data__->TS,)) / 2.0)));
        __SET_VAR(data__->,POSO,,(((__GET_VAR(data__->POSI,) + (__GET_VAR(data__->VC,) * __GET_VAR(data__->TS,))) + (((__GET_VAR(data__->AI,) * __GET_VAR(data__->TS,)) * __GET_VAR(data__->TS,)) / 2.0)) + ((((__GET_VAR(data__->J,) * __GET_VAR(data__->TS,)) * __GET_VAR(data__->TS,)) * __GET_VAR(data__->TS,)) / 6.0)));
        if (((__GET_VAR(data__->POSO,) - __GET_VAR(data__->LAST_TARGET,)) < ((((__GET_VAR(data__->J,) * SQRT__LREAL__LREAL(
          (BOOL)__BOOL_LITERAL(TRUE),
          NULL,
          (LREAL)(__GET_VAR(data__->V,) / __GET_VAR(data__->J,)))) * SQRT__LREAL__LREAL(
          (BOOL)__BOOL_LITERAL(TRUE),
          NULL,
          (LREAL)(__GET_VAR(data__->V,) / __GET_VAR(data__->J,)))) * SQRT__LREAL__LREAL(
          (BOOL)__BOOL_LITERAL(TRUE),
          NULL,
          (LREAL)(__GET_VAR(data__->V,) / __GET_VAR(data__->J,)))) / 6.0))) {
          __SET_VAR(data__->,SI,,__GET_VAR(data__->POSO,));
          __SET_VAR(data__->,VI,,__GET_VAR(data__->VO,));
          __SET_VAR(data__->,AI,,__GET_VAR(data__->AR,));
          __SET_VAR(data__->,JI,,__GET_VAR(data__->J,));
          __SET_VAR(data__->,PHASE,,111.0);
        } else if (((__GET_VAR(data__->POSO,) - __GET_VAR(data__->LAST_TARGET,)) >= ((((__GET_VAR(data__->J,) * SQRT__LREAL__LREAL(
          (BOOL)__BOOL_LITERAL(TRUE),
          NULL,
          (LREAL)(__GET_VAR(data__->V,) / __GET_VAR(data__->J,)))) * SQRT__LREAL__LREAL(
          (BOOL)__BOOL_LITERAL(TRUE),
          NULL,
          (LREAL)(__GET_VAR(data__->V,) / __GET_VAR(data__->J,)))) * SQRT__LREAL__LREAL(
          (BOOL)__BOOL_LITERAL(TRUE),
          NULL,
          (LREAL)(__GET_VAR(data__->V,) / __GET_VAR(data__->J,)))) / 6.0))) {
          __SET_VAR(data__->,SI,,(__GET_VAR(data__->LAST_TARGET,) + ((((__GET_VAR(data__->J,) * SQRT__LREAL__LREAL(
            (BOOL)__BOOL_LITERAL(TRUE),
            NULL,
            (LREAL)(__GET_VAR(data__->V,) / __GET_VAR(data__->J,)))) * SQRT__LREAL__LREAL(
            (BOOL)__BOOL_LITERAL(TRUE),
            NULL,
            (LREAL)(__GET_VAR(data__->V,) / __GET_VAR(data__->J,)))) * SQRT__LREAL__LREAL(
            (BOOL)__BOOL_LITERAL(TRUE),
            NULL,
            (LREAL)(__GET_VAR(data__->V,) / __GET_VAR(data__->J,)))) / 6.0)));
          __SET_VAR(data__->,VI,,(__GET_VAR(data__->V,) / 2.0));
          __SET_VAR(data__->,AI,,(__GET_VAR(data__->J,) * SQRT__LREAL__LREAL(
            (BOOL)__BOOL_LITERAL(TRUE),
            NULL,
            (LREAL)(__GET_VAR(data__->V,) / __GET_VAR(data__->J,)))));
          __SET_VAR(data__->,PHASE,,111.1);
        };
      } else if ((((__GET_VAR(data__->POSO,) - __GET_VAR(data__->LAST_TARGET,)) >= ((((__GET_VAR(data__->J,) * SQRT__LREAL__LREAL(
        (BOOL)__BOOL_LITERAL(TRUE),
        NULL,
        (LREAL)(__GET_VAR(data__->V,) / __GET_VAR(data__->J,)))) * SQRT__LREAL__LREAL(
        (BOOL)__BOOL_LITERAL(TRUE),
        NULL,
        (LREAL)(__GET_VAR(data__->V,) / __GET_VAR(data__->J,)))) * SQRT__LREAL__LREAL(
        (BOOL)__BOOL_LITERAL(TRUE),
        NULL,
        (LREAL)(__GET_VAR(data__->V,) / __GET_VAR(data__->J,)))) / 6.0)) && ((__GET_VAR(data__->POSO,) - __GET_VAR(data__->LAST_TARGET,)) < (__GET_VAR(data__->V,) * SQRT__LREAL__LREAL(
        (BOOL)__BOOL_LITERAL(TRUE),
        NULL,
        (LREAL)(__GET_VAR(data__->V,) / __GET_VAR(data__->J,))))))) {
        __SET_VAR(data__->,AR,,(__GET_VAR(data__->AI,) - (__GET_VAR(data__->J,) * __GET_VAR(data__->TS,))));
        __SET_VAR(data__->,VO,,((__GET_VAR(data__->VC,) + (__GET_VAR(data__->AI,) * __GET_VAR(data__->TS,))) - (((__GET_VAR(data__->J,) * __GET_VAR(data__->TS,)) * __GET_VAR(data__->TS,)) / 2.0)));
        __SET_VAR(data__->,POSO,,(((__GET_VAR(data__->POSI,) + (__GET_VAR(data__->VC,) * __GET_VAR(data__->TS,))) + (((__GET_VAR(data__->AI,) * __GET_VAR(data__->TS,)) * __GET_VAR(data__->TS,)) / 2.0)) - ((((__GET_VAR(data__->J,) * __GET_VAR(data__->TS,)) * __GET_VAR(data__->TS,)) * __GET_VAR(data__->TS,)) / 6.0)));
        if (((__GET_VAR(data__->POSO,) - __GET_VAR(data__->LAST_TARGET,)) < (__GET_VAR(data__->V,) * SQRT__LREAL__LREAL(
          (BOOL)__BOOL_LITERAL(TRUE),
          NULL,
          (LREAL)(__GET_VAR(data__->V,) / __GET_VAR(data__->J,)))))) {
          __SET_VAR(data__->,SI,,__GET_VAR(data__->POSO,));
          __SET_VAR(data__->,VI,,__GET_VAR(data__->VO,));
          __SET_VAR(data__->,AI,,__GET_VAR(data__->AR,));
          __SET_VAR(data__->,JI,, -(__GET_VAR(data__->J,)));
          __SET_VAR(data__->,PHASE,,222.0);
        } else if (((__GET_VAR(data__->POSO,) - __GET_VAR(data__->LAST_TARGET,)) >= (__GET_VAR(data__->V,) * SQRT__LREAL__LREAL(
          (BOOL)__BOOL_LITERAL(TRUE),
          NULL,
          (LREAL)(__GET_VAR(data__->V,) / __GET_VAR(data__->J,)))))) {
          __SET_VAR(data__->,SI,,(__GET_VAR(data__->LAST_TARGET,) + (__GET_VAR(data__->V,) * SQRT__LREAL__LREAL(
            (BOOL)__BOOL_LITERAL(TRUE),
            NULL,
            (LREAL)(__GET_VAR(data__->V,) / __GET_VAR(data__->J,))))));
          __SET_VAR(data__->,VI,,__GET_VAR(data__->V,));
          __SET_VAR(data__->,AI,,0.0);
          __SET_VAR(data__->,JI,,0.0);
          __SET_VAR(data__->,PHASE,,222.1);
        };
      } else if ((((__GET_VAR(data__->POSO,) - __GET_VAR(data__->LAST_TARGET,)) >= (__GET_VAR(data__->V,) * SQRT__LREAL__LREAL(
        (BOOL)__BOOL_LITERAL(TRUE),
        NULL,
        (LREAL)(__GET_VAR(data__->V,) / __GET_VAR(data__->J,))))) && ((__GET_VAR(data__->POSO,) - __GET_VAR(data__->LAST_TARGET,)) < (__GET_VAR(data__->DISTANCE,) - (__GET_VAR(data__->V,) * SQRT__LREAL__LREAL(
        (BOOL)__BOOL_LITERAL(TRUE),
        NULL,
        (LREAL)(__GET_VAR(data__->V,) / __GET_VAR(data__->J,)))))))) {
        __SET_VAR(data__->,AR,,__GET_VAR(data__->AI,));
        __SET_VAR(data__->,VO,,(__GET_VAR(data__->VC,) + (__GET_VAR(data__->AR,) * __GET_VAR(data__->TS,))));
        __SET_VAR(data__->,POSO,,((__GET_VAR(data__->POSI,) + (__GET_VAR(data__->VC,) * __GET_VAR(data__->TS,))) + (((__GET_VAR(data__->J,) * __GET_VAR(data__->TS,)) * __GET_VAR(data__->TS,)) / 2.0)));
        if (((__GET_VAR(data__->POSO,) - __GET_VAR(data__->LAST_TARGET,)) < (__GET_VAR(data__->DISTANCE,) - (__GET_VAR(data__->V,) * SQRT__LREAL__LREAL(
          (BOOL)__BOOL_LITERAL(TRUE),
          NULL,
          (LREAL)(__GET_VAR(data__->V,) / __GET_VAR(data__->J,))))))) {
          __SET_VAR(data__->,SI,,__GET_VAR(data__->POSO,));
          __SET_VAR(data__->,VI,,__GET_VAR(data__->VO,));
          __SET_VAR(data__->,AI,,__GET_VAR(data__->AR,));
          __SET_VAR(data__->,JI,,0.0);
          __SET_VAR(data__->,PHASE,,333.0);
        } else if (((__GET_VAR(data__->POSO,) - __GET_VAR(data__->LAST_TARGET,)) >= (__GET_VAR(data__->DISTANCE,) - (__GET_VAR(data__->V,) * SQRT__LREAL__LREAL(
          (BOOL)__BOOL_LITERAL(TRUE),
          NULL,
          (LREAL)(__GET_VAR(data__->V,) / __GET_VAR(data__->J,))))))) {
          __SET_VAR(data__->,SI,,((__GET_VAR(data__->LAST_TARGET,) + __GET_VAR(data__->DISTANCE,)) - (__GET_VAR(data__->V,) * SQRT__LREAL__LREAL(
            (BOOL)__BOOL_LITERAL(TRUE),
            NULL,
            (LREAL)(__GET_VAR(data__->V,) / __GET_VAR(data__->J,))))));
          __SET_VAR(data__->,VI,,__GET_VAR(data__->V,));
          __SET_VAR(data__->,AI,,0.0);
          __SET_VAR(data__->,PHASE,,333.1);
        };
      } else if ((((__GET_VAR(data__->POSO,) - __GET_VAR(data__->LAST_TARGET,)) >= (__GET_VAR(data__->DISTANCE,) - (__GET_VAR(data__->V,) * SQRT__LREAL__LREAL(
        (BOOL)__BOOL_LITERAL(TRUE),
        NULL,
        (LREAL)(__GET_VAR(data__->V,) / __GET_VAR(data__->J,)))))) && ((__GET_VAR(data__->POSO,) - __GET_VAR(data__->LAST_TARGET,)) < (__GET_VAR(data__->DISTANCE,) - ((((__GET_VAR(data__->J,) * SQRT__LREAL__LREAL(
        (BOOL)__BOOL_LITERAL(TRUE),
        NULL,
        (LREAL)(__GET_VAR(data__->V,) / __GET_VAR(data__->J,)))) * SQRT__LREAL__LREAL(
        (BOOL)__BOOL_LITERAL(TRUE),
        NULL,
        (LREAL)(__GET_VAR(data__->V,) / __GET_VAR(data__->J,)))) * SQRT__LREAL__LREAL(
        (BOOL)__BOOL_LITERAL(TRUE),
        NULL,
        (LREAL)(__GET_VAR(data__->V,) / __GET_VAR(data__->J,)))) / 6.0))))) {
        __SET_VAR(data__->,AR,,(__GET_VAR(data__->AI,) - (__GET_VAR(data__->J,) * __GET_VAR(data__->TS,))));
        __SET_VAR(data__->,VO,,((__GET_VAR(data__->VC,) + (__GET_VAR(data__->AI,) * __GET_VAR(data__->TS,))) - (((__GET_VAR(data__->J,) * __GET_VAR(data__->TS,)) * __GET_VAR(data__->TS,)) / 2.0)));
        __SET_VAR(data__->,POSO,,(((__GET_VAR(data__->POSI,) + (__GET_VAR(data__->VC,) * __GET_VAR(data__->TS,))) + (((__GET_VAR(data__->AI,) * __GET_VAR(data__->TS,)) * __GET_VAR(data__->TS,)) / 2.0)) - ((((__GET_VAR(data__->J,) * __GET_VAR(data__->TS,)) * __GET_VAR(data__->TS,)) * __GET_VAR(data__->TS,)) / 6.0)));
        if (((__GET_VAR(data__->POSO,) - __GET_VAR(data__->LAST_TARGET,)) < (__GET_VAR(data__->DISTANCE,) - ((((__GET_VAR(data__->J,) * SQRT__LREAL__LREAL(
          (BOOL)__BOOL_LITERAL(TRUE),
          NULL,
          (LREAL)(__GET_VAR(data__->V,) / __GET_VAR(data__->J,)))) * SQRT__LREAL__LREAL(
          (BOOL)__BOOL_LITERAL(TRUE),
          NULL,
          (LREAL)(__GET_VAR(data__->V,) / __GET_VAR(data__->J,)))) * SQRT__LREAL__LREAL(
          (BOOL)__BOOL_LITERAL(TRUE),
          NULL,
          (LREAL)(__GET_VAR(data__->V,) / __GET_VAR(data__->J,)))) / 6.0)))) {
          __SET_VAR(data__->,SI,,__GET_VAR(data__->POSO,));
          __SET_VAR(data__->,VI,,__GET_VAR(data__->VO,));
          __SET_VAR(data__->,AI,,__GET_VAR(data__->AR,));
          __SET_VAR(data__->,JI,, -(__GET_VAR(data__->J,)));
          __SET_VAR(data__->,PHASE,,444.0);
        } else if (((__GET_VAR(data__->POSO,) - __GET_VAR(data__->LAST_TARGET,)) >= (__GET_VAR(data__->DISTANCE,) - ((((__GET_VAR(data__->J,) * SQRT__LREAL__LREAL(
          (BOOL)__BOOL_LITERAL(TRUE),
          NULL,
          (LREAL)(__GET_VAR(data__->V,) / __GET_VAR(data__->J,)))) * SQRT__LREAL__LREAL(
          (BOOL)__BOOL_LITERAL(TRUE),
          NULL,
          (LREAL)(__GET_VAR(data__->V,) / __GET_VAR(data__->J,)))) * SQRT__LREAL__LREAL(
          (BOOL)__BOOL_LITERAL(TRUE),
          NULL,
          (LREAL)(__GET_VAR(data__->V,) / __GET_VAR(data__->J,)))) / 6.0)))) {
          __SET_VAR(data__->,SI,,((__GET_VAR(data__->LAST_TARGET,) + __GET_VAR(data__->DISTANCE,)) - ((((__GET_VAR(data__->J,) * SQRT__LREAL__LREAL(
            (BOOL)__BOOL_LITERAL(TRUE),
            NULL,
            (LREAL)(__GET_VAR(data__->V,) / __GET_VAR(data__->J,)))) * SQRT__LREAL__LREAL(
            (BOOL)__BOOL_LITERAL(TRUE),
            NULL,
            (LREAL)(__GET_VAR(data__->V,) / __GET_VAR(data__->J,)))) * SQRT__LREAL__LREAL(
            (BOOL)__BOOL_LITERAL(TRUE),
            NULL,
            (LREAL)(__GET_VAR(data__->V,) / __GET_VAR(data__->J,)))) / 6.0)));
          __SET_VAR(data__->,VI,,(__GET_VAR(data__->V,) / 2.0));
          __SET_VAR(data__->,AI,,( -(__GET_VAR(data__->J,)) * SQRT__LREAL__LREAL(
            (BOOL)__BOOL_LITERAL(TRUE),
            NULL,
            (LREAL)(__GET_VAR(data__->V,) / __GET_VAR(data__->J,)))));
          __SET_VAR(data__->,PHASE,,444.1);
        };
      } else if ((((__GET_VAR(data__->POSO,) - __GET_VAR(data__->LAST_TARGET,)) >= (__GET_VAR(data__->DISTANCE,) - ((((__GET_VAR(data__->J,) * SQRT__LREAL__LREAL(
        (BOOL)__BOOL_LITERAL(TRUE),
        NULL,
        (LREAL)(__GET_VAR(data__->V,) / __GET_VAR(data__->J,)))) * SQRT__LREAL__LREAL(
        (BOOL)__BOOL_LITERAL(TRUE),
        NULL,
        (LREAL)(__GET_VAR(data__->V,) / __GET_VAR(data__->J,)))) * SQRT__LREAL__LREAL(
        (BOOL)__BOOL_LITERAL(TRUE),
        NULL,
        (LREAL)(__GET_VAR(data__->V,) / __GET_VAR(data__->J,)))) / 6.0))) && ((__GET_VAR(data__->POSO,) - __GET_VAR(data__->LAST_TARGET,)) < __GET_VAR(data__->DISTANCE,)))) {
        __SET_VAR(data__->,AR,,(__GET_VAR(data__->AI,) + (__GET_VAR(data__->J,) * __GET_VAR(data__->TS,))));
        __SET_VAR(data__->,VO,,((__GET_VAR(data__->VC,) + (__GET_VAR(data__->AI,) * __GET_VAR(data__->TS,))) + (((__GET_VAR(data__->J,) * __GET_VAR(data__->TS,)) * __GET_VAR(data__->TS,)) / 2.0)));
        __SET_VAR(data__->,POSO,,(((__GET_VAR(data__->POSI,) + (__GET_VAR(data__->VC,) * __GET_VAR(data__->TS,))) + (((__GET_VAR(data__->AI,) * __GET_VAR(data__->TS,)) * __GET_VAR(data__->TS,)) / 2.0)) + ((((__GET_VAR(data__->J,) * __GET_VAR(data__->TS,)) * __GET_VAR(data__->TS,)) * __GET_VAR(data__->TS,)) / 6.0)));
        if (((__GET_VAR(data__->POSO,) - __GET_VAR(data__->LAST_TARGET,)) < __GET_VAR(data__->DISTANCE,))) {
          __SET_VAR(data__->,SI,,__GET_VAR(data__->POSO,));
          __SET_VAR(data__->,VI,,__GET_VAR(data__->VO,));
          __SET_VAR(data__->,AI,,__GET_VAR(data__->AR,));
          __SET_VAR(data__->,JI,,__GET_VAR(data__->J,));
          __SET_VAR(data__->,PHASE,,555.0);
        } else if (((__GET_VAR(data__->POSO,) - __GET_VAR(data__->LAST_TARGET,)) >= __GET_VAR(data__->DISTANCE,))) {
          __SET_VAR(data__->,SI,,__GET_VAR(data__->TARGET,));
          __SET_VAR(data__->,POSO,,__GET_VAR(data__->TARGET,));
          __SET_VAR(data__->,LAST_TARGET,,__GET_VAR(data__->TARGET,));
          __SET_VAR(data__->,VI,,0.0);
          __SET_VAR(data__->,VO,,0.0);
          __SET_VAR(data__->,AI,,0.0);
          __SET_VAR(data__->,JI,,0.0);
          __SET_VAR(data__->,PHASE,,555.1);
        };
      };
    };
    if ((((__GET_VAR(data__->V,) > ((__GET_VAR(data__->A,) * __GET_VAR(data__->A,)) / __GET_VAR(data__->J,))) && (__GET_VAR(data__->DISTANCE,) < (__GET_VAR(data__->V,) * ((__GET_VAR(data__->V,) / __GET_VAR(data__->A,)) + (__GET_VAR(data__->A,) / __GET_VAR(data__->J,)))))) && (__GET_VAR(data__->DISTANCE,) >= ((((2.0 * __GET_VAR(data__->A,)) * __GET_VAR(data__->A,)) * __GET_VAR(data__->A,)) / (__GET_VAR(data__->J,) * __GET_VAR(data__->J,)))))) {
      if (((__GET_VAR(data__->POSO,) - __GET_VAR(data__->LAST_TARGET,)) < (((__GET_VAR(data__->A,) * __GET_VAR(data__->A,)) * __GET_VAR(data__->A,)) / ((6.0 * __GET_VAR(data__->J,)) * __GET_VAR(data__->J,))))) {
        __SET_VAR(data__->,AR,,(__GET_VAR(data__->AI,) + (__GET_VAR(data__->J,) * __GET_VAR(data__->TS,))));
        __SET_VAR(data__->,VO,,((__GET_VAR(data__->VC,) + (__GET_VAR(data__->AI,) * __GET_VAR(data__->TS,))) + (((__GET_VAR(data__->J,) * __GET_VAR(data__->TS,)) * __GET_VAR(data__->TS,)) / 2.0)));
        __SET_VAR(data__->,POSO,,(((__GET_VAR(data__->POSI,) + (__GET_VAR(data__->VC,) * __GET_VAR(data__->TS,))) + (((__GET_VAR(data__->AI,) * __GET_VAR(data__->TS,)) * __GET_VAR(data__->TS,)) / 2.0)) + ((((__GET_VAR(data__->J,) * __GET_VAR(data__->TS,)) * __GET_VAR(data__->TS,)) * __GET_VAR(data__->TS,)) / 6.0)));
        if (((__GET_VAR(data__->POSO,) - __GET_VAR(data__->LAST_TARGET,)) < (((__GET_VAR(data__->A,) * __GET_VAR(data__->A,)) * __GET_VAR(data__->A,)) / ((6.0 * __GET_VAR(data__->J,)) * __GET_VAR(data__->J,))))) {
          __SET_VAR(data__->,SI,,__GET_VAR(data__->POSO,));
          __SET_VAR(data__->,VI,,__GET_VAR(data__->VO,));
          __SET_VAR(data__->,AI,,__GET_VAR(data__->AR,));
          __SET_VAR(data__->,JI,,__GET_VAR(data__->J,));
          __SET_VAR(data__->,PHASE,,11.0);
        } else if (((__GET_VAR(data__->POSO,) - __GET_VAR(data__->LAST_TARGET,)) >= (((__GET_VAR(data__->A,) * __GET_VAR(data__->A,)) * __GET_VAR(data__->A,)) / ((6.0 * __GET_VAR(data__->J,)) * __GET_VAR(data__->J,))))) {
          __SET_VAR(data__->,SI,,(__GET_VAR(data__->LAST_TARGET,) + (((__GET_VAR(data__->A,) * __GET_VAR(data__->A,)) * __GET_VAR(data__->A,)) / ((6.0 * __GET_VAR(data__->J,)) * __GET_VAR(data__->J,)))));
          __SET_VAR(data__->,VI,,__GET_VAR(data__->VO,));
          __SET_VAR(data__->,AI,,__GET_VAR(data__->A,));
          __SET_VAR(data__->,JI,,0.0);
          __SET_VAR(data__->,PHASE,,11.1);
        };
      } else if ((((__GET_VAR(data__->POSO,) - __GET_VAR(data__->LAST_TARGET,)) >= (((__GET_VAR(data__->A,) * __GET_VAR(data__->A,)) * __GET_VAR(data__->A,)) / ((6.0 * __GET_VAR(data__->J,)) * __GET_VAR(data__->J,)))) && ((__GET_VAR(data__->POSO,) - __GET_VAR(data__->LAST_TARGET,)) < (((((((__GET_VAR(data__->A,) * __GET_VAR(data__->A,)) * __GET_VAR(data__->A,)) / (__GET_VAR(data__->J,) * __GET_VAR(data__->J,))) + __GET_VAR(data__->DISTANCE,)) - (((__GET_VAR(data__->A,) * __GET_VAR(data__->A,)) * SQRT__LREAL__LREAL(
        (BOOL)__BOOL_LITERAL(TRUE),
        NULL,
        (LREAL)(((__GET_VAR(data__->A,) * __GET_VAR(data__->A,)) / (__GET_VAR(data__->J,) * __GET_VAR(data__->J,))) + ((4.0 * __GET_VAR(data__->DISTANCE,)) / __GET_VAR(data__->A,))))) / __GET_VAR(data__->J,))) / 2.0) + (((__GET_VAR(data__->A,) * __GET_VAR(data__->A,)) * __GET_VAR(data__->A,)) / ((6.0 * __GET_VAR(data__->J,)) * __GET_VAR(data__->J,))))))) {
        __SET_VAR(data__->,AR,,__GET_VAR(data__->AI,));
        __SET_VAR(data__->,VO,,(__GET_VAR(data__->VC,) + (__GET_VAR(data__->AI,) * __GET_VAR(data__->TS,))));
        __SET_VAR(data__->,POSO,,((__GET_VAR(data__->POSI,) + (__GET_VAR(data__->VC,) * __GET_VAR(data__->TS,))) + (((__GET_VAR(data__->J,) * __GET_VAR(data__->TS,)) * __GET_VAR(data__->TS,)) / 2.0)));
        if (((__GET_VAR(data__->POSO,) - __GET_VAR(data__->LAST_TARGET,)) < (((((((__GET_VAR(data__->A,) * __GET_VAR(data__->A,)) * __GET_VAR(data__->A,)) / (__GET_VAR(data__->J,) * __GET_VAR(data__->J,))) + __GET_VAR(data__->DISTANCE,)) - (((__GET_VAR(data__->A,) * __GET_VAR(data__->A,)) * SQRT__LREAL__LREAL(
          (BOOL)__BOOL_LITERAL(TRUE),
          NULL,
          (LREAL)(((__GET_VAR(data__->A,) * __GET_VAR(data__->A,)) / (__GET_VAR(data__->J,) * __GET_VAR(data__->J,))) + ((4.0 * __GET_VAR(data__->DISTANCE,)) / __GET_VAR(data__->A,))))) / __GET_VAR(data__->J,))) / 2.0) + (((__GET_VAR(data__->A,) * __GET_VAR(data__->A,)) * __GET_VAR(data__->A,)) / ((6.0 * __GET_VAR(data__->J,)) * __GET_VAR(data__->J,)))))) {
          __SET_VAR(data__->,SI,,__GET_VAR(data__->POSO,));
          __SET_VAR(data__->,VI,,__GET_VAR(data__->VO,));
          __SET_VAR(data__->,AI,,__GET_VAR(data__->AR,));
          __SET_VAR(data__->,JI,,0.0);
          __SET_VAR(data__->,PHASE,,22.0);
        } else if (((__GET_VAR(data__->POSO,) - __GET_VAR(data__->LAST_TARGET,)) >= (((((((__GET_VAR(data__->A,) * __GET_VAR(data__->A,)) * __GET_VAR(data__->A,)) / (__GET_VAR(data__->J,) * __GET_VAR(data__->J,))) + __GET_VAR(data__->DISTANCE,)) - (((__GET_VAR(data__->A,) * __GET_VAR(data__->A,)) * SQRT__LREAL__LREAL(
          (BOOL)__BOOL_LITERAL(TRUE),
          NULL,
          (LREAL)(((__GET_VAR(data__->A,) * __GET_VAR(data__->A,)) / (__GET_VAR(data__->J,) * __GET_VAR(data__->J,))) + ((4.0 * __GET_VAR(data__->DISTANCE,)) / __GET_VAR(data__->A,))))) / __GET_VAR(data__->J,))) / 2.0) + (((__GET_VAR(data__->A,) * __GET_VAR(data__->A,)) * __GET_VAR(data__->A,)) / ((6.0 * __GET_VAR(data__->J,)) * __GET_VAR(data__->J,)))))) {
          __SET_VAR(data__->,SI,,((__GET_VAR(data__->LAST_TARGET,) + ((((((__GET_VAR(data__->A,) * __GET_VAR(data__->A,)) * __GET_VAR(data__->A,)) / (__GET_VAR(data__->J,) * __GET_VAR(data__->J,))) + __GET_VAR(data__->DISTANCE,)) - (((__GET_VAR(data__->A,) * __GET_VAR(data__->A,)) * SQRT__LREAL__LREAL(
            (BOOL)__BOOL_LITERAL(TRUE),
            NULL,
            (LREAL)(((__GET_VAR(data__->A,) * __GET_VAR(data__->A,)) / (__GET_VAR(data__->J,) * __GET_VAR(data__->J,))) + ((4.0 * __GET_VAR(data__->DISTANCE,)) / __GET_VAR(data__->A,))))) / __GET_VAR(data__->J,))) / 2.0)) + (((__GET_VAR(data__->A,) * __GET_VAR(data__->A,)) * __GET_VAR(data__->A,)) / ((6.0 * __GET_VAR(data__->J,)) * __GET_VAR(data__->J,)))));
          __SET_VAR(data__->,VI,,((( -(__GET_VAR(data__->A,)) * __GET_VAR(data__->A,)) / __GET_VAR(data__->J,)) + ((__GET_VAR(data__->A,) * SQRT__LREAL__LREAL(
            (BOOL)__BOOL_LITERAL(TRUE),
            NULL,
            (LREAL)(((__GET_VAR(data__->A,) * __GET_VAR(data__->A,)) / (__GET_VAR(data__->J,) * __GET_VAR(data__->J,))) + ((4.0 * __GET_VAR(data__->DISTANCE,)) / __GET_VAR(data__->A,))))) / 2.0)));
          __SET_VAR(data__->,AI,,__GET_VAR(data__->A,));
          __SET_VAR(data__->,JI,,0.0);
          __SET_VAR(data__->,PHASE,,22.1);
        };
      } else if ((((__GET_VAR(data__->POSO,) - __GET_VAR(data__->LAST_TARGET,)) >= (((((((__GET_VAR(data__->A,) * __GET_VAR(data__->A,)) * __GET_VAR(data__->A,)) / (__GET_VAR(data__->J,) * __GET_VAR(data__->J,))) + __GET_VAR(data__->DISTANCE,)) - (((__GET_VAR(data__->A,) * __GET_VAR(data__->A,)) * SQRT__LREAL__LREAL(
        (BOOL)__BOOL_LITERAL(TRUE),
        NULL,
        (LREAL)(((__GET_VAR(data__->A,) * __GET_VAR(data__->A,)) / (__GET_VAR(data__->J,) * __GET_VAR(data__->J,))) + ((4.0 * __GET_VAR(data__->DISTANCE,)) / __GET_VAR(data__->A,))))) / __GET_VAR(data__->J,))) / 2.0) + (((__GET_VAR(data__->A,) * __GET_VAR(data__->A,)) * __GET_VAR(data__->A,)) / ((6.0 * __GET_VAR(data__->J,)) * __GET_VAR(data__->J,))))) && ((__GET_VAR(data__->POSO,) - __GET_VAR(data__->LAST_TARGET,)) < (__GET_VAR(data__->DISTANCE,) / 2.0)))) {
        __SET_VAR(data__->,AR,,(__GET_VAR(data__->AI,) - (__GET_VAR(data__->J,) * __GET_VAR(data__->TS,))));
        __SET_VAR(data__->,VO,,((__GET_VAR(data__->VC,) + (__GET_VAR(data__->AI,) * __GET_VAR(data__->TS,))) - (((__GET_VAR(data__->J,) * __GET_VAR(data__->TS,)) * __GET_VAR(data__->TS,)) / 2.0)));
        __SET_VAR(data__->,POSO,,(((__GET_VAR(data__->POSI,) + (__GET_VAR(data__->VC,) * __GET_VAR(data__->TS,))) + (((__GET_VAR(data__->AR,) * __GET_VAR(data__->TS,)) * __GET_VAR(data__->TS,)) / 2.0)) - ((((__GET_VAR(data__->J,) * __GET_VAR(data__->TS,)) * __GET_VAR(data__->TS,)) * __GET_VAR(data__->TS,)) / 6.0)));
        if (((__GET_VAR(data__->POSO,) - __GET_VAR(data__->LAST_TARGET,)) < (__GET_VAR(data__->DISTANCE,) / 2.0))) {
          __SET_VAR(data__->,SI,,__GET_VAR(data__->POSO,));
          __SET_VAR(data__->,VI,,__GET_VAR(data__->VO,));
          __SET_VAR(data__->,AI,,__GET_VAR(data__->AR,));
          __SET_VAR(data__->,JI,, -(__GET_VAR(data__->J,)));
          __SET_VAR(data__->,PHASE,,33.0);
        } else if (((__GET_VAR(data__->POSO,) - __GET_VAR(data__->LAST_TARGET,)) >= (__GET_VAR(data__->DISTANCE,) / 2.0))) {
          __SET_VAR(data__->,SI,,(__GET_VAR(data__->LAST_TARGET,) + (__GET_VAR(data__->DISTANCE,) / 2.0)));
          __SET_VAR(data__->,VI,,((( -(__GET_VAR(data__->A,)) * __GET_VAR(data__->A,)) / (2.0 * __GET_VAR(data__->J,))) + ((__GET_VAR(data__->A,) * SQRT__LREAL__LREAL(
            (BOOL)__BOOL_LITERAL(TRUE),
            NULL,
            (LREAL)(((__GET_VAR(data__->A,) * __GET_VAR(data__->A,)) / (__GET_VAR(data__->J,) * __GET_VAR(data__->J,))) + ((4.0 * __GET_VAR(data__->DISTANCE,)) / __GET_VAR(data__->A,))))) / 2.0)));
          __SET_VAR(data__->,AI,,0.0);
          __SET_VAR(data__->,JI,,0.0);
          __SET_VAR(data__->,PHASE,,33.1);
        };
      } else if ((((__GET_VAR(data__->POSO,) - __GET_VAR(data__->LAST_TARGET,)) >= (__GET_VAR(data__->DISTANCE,) / 2.0)) && ((__GET_VAR(data__->POSO,) - __GET_VAR(data__->LAST_TARGET,)) < (__GET_VAR(data__->DISTANCE,) - (((((((__GET_VAR(data__->A,) * __GET_VAR(data__->A,)) * __GET_VAR(data__->A,)) / (__GET_VAR(data__->J,) * __GET_VAR(data__->J,))) + __GET_VAR(data__->DISTANCE,)) - (((__GET_VAR(data__->A,) * __GET_VAR(data__->A,)) * SQRT__LREAL__LREAL(
        (BOOL)__BOOL_LITERAL(TRUE),
        NULL,
        (LREAL)(((__GET_VAR(data__->A,) * __GET_VAR(data__->A,)) / (__GET_VAR(data__->J,) * __GET_VAR(data__->J,))) + ((4.0 * __GET_VAR(data__->DISTANCE,)) / __GET_VAR(data__->A,))))) / __GET_VAR(data__->J,))) / 2.0) + (((__GET_VAR(data__->A,) * __GET_VAR(data__->A,)) * __GET_VAR(data__->A,)) / ((6.0 * __GET_VAR(data__->J,)) * __GET_VAR(data__->J,)))))))) {
        __SET_VAR(data__->,AR,,(__GET_VAR(data__->AI,) - (__GET_VAR(data__->J,) * __GET_VAR(data__->TS,))));
        __SET_VAR(data__->,VO,,((__GET_VAR(data__->VC,) + (__GET_VAR(data__->AI,) * __GET_VAR(data__->TS,))) - (((__GET_VAR(data__->J,) * __GET_VAR(data__->TS,)) * __GET_VAR(data__->TS,)) / 2.0)));
        __SET_VAR(data__->,POSO,,(((__GET_VAR(data__->POSI,) + (__GET_VAR(data__->VC,) * __GET_VAR(data__->TS,))) + (((__GET_VAR(data__->AR,) * __GET_VAR(data__->TS,)) * __GET_VAR(data__->TS,)) / 2.0)) - ((((__GET_VAR(data__->J,) * __GET_VAR(data__->TS,)) * __GET_VAR(data__->TS,)) * __GET_VAR(data__->TS,)) / 6.0)));
        if (((__GET_VAR(data__->POSO,) - __GET_VAR(data__->LAST_TARGET,)) < (__GET_VAR(data__->DISTANCE,) - (((((((__GET_VAR(data__->A,) * __GET_VAR(data__->A,)) * __GET_VAR(data__->A,)) / (__GET_VAR(data__->J,) * __GET_VAR(data__->J,))) + __GET_VAR(data__->DISTANCE,)) - (((__GET_VAR(data__->A,) * __GET_VAR(data__->A,)) * SQRT__LREAL__LREAL(
          (BOOL)__BOOL_LITERAL(TRUE),
          NULL,
          (LREAL)(((__GET_VAR(data__->A,) * __GET_VAR(data__->A,)) / (__GET_VAR(data__->J,) * __GET_VAR(data__->J,))) + ((4.0 * __GET_VAR(data__->DISTANCE,)) / __GET_VAR(data__->A,))))) / __GET_VAR(data__->J,))) / 2.0) + (((__GET_VAR(data__->A,) * __GET_VAR(data__->A,)) * __GET_VAR(data__->A,)) / ((6.0 * __GET_VAR(data__->J,)) * __GET_VAR(data__->J,))))))) {
          __SET_VAR(data__->,SI,,__GET_VAR(data__->POSO,));
          __SET_VAR(data__->,VI,,__GET_VAR(data__->VO,));
          __SET_VAR(data__->,AI,,__GET_VAR(data__->AR,));
          __SET_VAR(data__->,JI,, -(__GET_VAR(data__->J,)));
          __SET_VAR(data__->,PHASE,,44.0);
        } else if (((__GET_VAR(data__->POSO,) - __GET_VAR(data__->LAST_TARGET,)) >= (__GET_VAR(data__->DISTANCE,) - (((((((__GET_VAR(data__->A,) * __GET_VAR(data__->A,)) * __GET_VAR(data__->A,)) / (__GET_VAR(data__->J,) * __GET_VAR(data__->J,))) + __GET_VAR(data__->DISTANCE,)) - (((__GET_VAR(data__->A,) * __GET_VAR(data__->A,)) * SQRT__LREAL__LREAL(
          (BOOL)__BOOL_LITERAL(TRUE),
          NULL,
          (LREAL)(((__GET_VAR(data__->A,) * __GET_VAR(data__->A,)) / (__GET_VAR(data__->J,) * __GET_VAR(data__->J,))) + ((4.0 * __GET_VAR(data__->DISTANCE,)) / __GET_VAR(data__->A,))))) / __GET_VAR(data__->J,))) / 2.0) + (((__GET_VAR(data__->A,) * __GET_VAR(data__->A,)) * __GET_VAR(data__->A,)) / ((6.0 * __GET_VAR(data__->J,)) * __GET_VAR(data__->J,))))))) {
          __SET_VAR(data__->,SI,,((__GET_VAR(data__->LAST_TARGET,) + __GET_VAR(data__->DISTANCE,)) - (((((((__GET_VAR(data__->A,) * __GET_VAR(data__->A,)) * __GET_VAR(data__->A,)) / (__GET_VAR(data__->J,) * __GET_VAR(data__->J,))) + __GET_VAR(data__->DISTANCE,)) - (((__GET_VAR(data__->A,) * __GET_VAR(data__->A,)) * SQRT__LREAL__LREAL(
            (BOOL)__BOOL_LITERAL(TRUE),
            NULL,
            (LREAL)(((__GET_VAR(data__->A,) * __GET_VAR(data__->A,)) / (__GET_VAR(data__->J,) * __GET_VAR(data__->J,))) + ((4.0 * __GET_VAR(data__->DISTANCE,)) / __GET_VAR(data__->A,))))) / __GET_VAR(data__->J,))) / 2.0) + (((__GET_VAR(data__->A,) * __GET_VAR(data__->A,)) * __GET_VAR(data__->A,)) / ((6.0 * __GET_VAR(data__->J,)) * __GET_VAR(data__->J,))))));
          __SET_VAR(data__->,VI,,((( -(__GET_VAR(data__->A,)) * __GET_VAR(data__->A,)) / __GET_VAR(data__->J,)) + ((__GET_VAR(data__->A,) * SQRT__LREAL__LREAL(
            (BOOL)__BOOL_LITERAL(TRUE),
            NULL,
            (LREAL)(((__GET_VAR(data__->A,) * __GET_VAR(data__->A,)) / (__GET_VAR(data__->J,) * __GET_VAR(data__->J,))) + ((4.0 * __GET_VAR(data__->DISTANCE,)) / __GET_VAR(data__->A,))))) / 2.0)));
          __SET_VAR(data__->,AI,, -(__GET_VAR(data__->A,)));
          __SET_VAR(data__->,JI,,0.0);
          __SET_VAR(data__->,PHASE,,44.1);
        };
      } else if ((((__GET_VAR(data__->POSO,) - __GET_VAR(data__->LAST_TARGET,)) >= (__GET_VAR(data__->DISTANCE,) - (((((((__GET_VAR(data__->A,) * __GET_VAR(data__->A,)) * __GET_VAR(data__->A,)) / (__GET_VAR(data__->J,) * __GET_VAR(data__->J,))) + __GET_VAR(data__->DISTANCE,)) - (((__GET_VAR(data__->A,) * __GET_VAR(data__->A,)) * SQRT__LREAL__LREAL(
        (BOOL)__BOOL_LITERAL(TRUE),
        NULL,
        (LREAL)(((__GET_VAR(data__->A,) * __GET_VAR(data__->A,)) / (__GET_VAR(data__->J,) * __GET_VAR(data__->J,))) + ((4.0 * __GET_VAR(data__->DISTANCE,)) / __GET_VAR(data__->A,))))) / __GET_VAR(data__->J,))) / 2.0) + (((__GET_VAR(data__->A,) * __GET_VAR(data__->A,)) * __GET_VAR(data__->A,)) / ((6.0 * __GET_VAR(data__->J,)) * __GET_VAR(data__->J,)))))) && ((__GET_VAR(data__->POSO,) - __GET_VAR(data__->LAST_TARGET,)) < (__GET_VAR(data__->DISTANCE,) - (((__GET_VAR(data__->A,) * __GET_VAR(data__->A,)) * __GET_VAR(data__->A,)) / ((6.0 * __GET_VAR(data__->J,)) * __GET_VAR(data__->J,))))))) {
        __SET_VAR(data__->,AR,,__GET_VAR(data__->AI,));
        __SET_VAR(data__->,VO,,(__GET_VAR(data__->VC,) + (__GET_VAR(data__->AI,) * __GET_VAR(data__->TS,))));
        __SET_VAR(data__->,POSO,,((__GET_VAR(data__->POSI,) + (__GET_VAR(data__->VC,) * __GET_VAR(data__->TS,))) + (((__GET_VAR(data__->J,) * __GET_VAR(data__->TS,)) * __GET_VAR(data__->TS,)) / 2.0)));
        if (((__GET_VAR(data__->POSO,) - __GET_VAR(data__->LAST_TARGET,)) < (__GET_VAR(data__->DISTANCE,) - (((__GET_VAR(data__->A,) * __GET_VAR(data__->A,)) * __GET_VAR(data__->A,)) / ((6.0 * __GET_VAR(data__->J,)) * __GET_VAR(data__->J,)))))) {
          __SET_VAR(data__->,SI,,__GET_VAR(data__->POSO,));
          __SET_VAR(data__->,VI,,__GET_VAR(data__->VO,));
          __SET_VAR(data__->,AI,,__GET_VAR(data__->AR,));
          __SET_VAR(data__->,JI,,0.0);
          __SET_VAR(data__->,PHASE,,55.0);
        } else if (((__GET_VAR(data__->POSO,) - __GET_VAR(data__->LAST_TARGET,)) >= (__GET_VAR(data__->DISTANCE,) - (((__GET_VAR(data__->A,) * __GET_VAR(data__->A,)) * __GET_VAR(data__->A,)) / ((6.0 * __GET_VAR(data__->J,)) * __GET_VAR(data__->J,)))))) {
          __SET_VAR(data__->,SI,,((__GET_VAR(data__->LAST_TARGET,) + __GET_VAR(data__->DISTANCE,)) - (((__GET_VAR(data__->A,) * __GET_VAR(data__->A,)) * __GET_VAR(data__->A,)) / ((6.0 * __GET_VAR(data__->J,)) * __GET_VAR(data__->J,)))));
          __SET_VAR(data__->,VI,,((__GET_VAR(data__->A,) * __GET_VAR(data__->A,)) / (2.0 * __GET_VAR(data__->J,))));
          __SET_VAR(data__->,AI,, -(__GET_VAR(data__->A,)));
          __SET_VAR(data__->,JI,,0.0);
          __SET_VAR(data__->,PHASE,,55.1);
        };
      } else if ((((__GET_VAR(data__->POSO,) - __GET_VAR(data__->LAST_TARGET,)) >= (__GET_VAR(data__->DISTANCE,) - (((__GET_VAR(data__->A,) * __GET_VAR(data__->A,)) * __GET_VAR(data__->A,)) / ((6.0 * __GET_VAR(data__->J,)) * __GET_VAR(data__->J,))))) && ((__GET_VAR(data__->POSO,) - __GET_VAR(data__->LAST_TARGET,)) < __GET_VAR(data__->DISTANCE,)))) {
        __SET_VAR(data__->,AR,,(__GET_VAR(data__->AI,) + (__GET_VAR(data__->J,) * __GET_VAR(data__->TS,))));
        __SET_VAR(data__->,VO,,((__GET_VAR(data__->VC,) + (__GET_VAR(data__->AI,) * __GET_VAR(data__->TS,))) + (((__GET_VAR(data__->J,) * __GET_VAR(data__->TS,)) * __GET_VAR(data__->TS,)) / 2.0)));
        __SET_VAR(data__->,POSO,,(((__GET_VAR(data__->POSI,) + (__GET_VAR(data__->VC,) * __GET_VAR(data__->TS,))) + (((__GET_VAR(data__->AI,) * __GET_VAR(data__->TS,)) * __GET_VAR(data__->TS,)) / 2.0)) + ((((__GET_VAR(data__->J,) * __GET_VAR(data__->TS,)) * __GET_VAR(data__->TS,)) * __GET_VAR(data__->TS,)) / 6.0)));
        if (((__GET_VAR(data__->POSO,) - __GET_VAR(data__->LAST_TARGET,)) < __GET_VAR(data__->DISTANCE,))) {
          __SET_VAR(data__->,SI,,__GET_VAR(data__->POSO,));
          __SET_VAR(data__->,VI,,__GET_VAR(data__->VO,));
          __SET_VAR(data__->,AI,,__GET_VAR(data__->AR,));
          __SET_VAR(data__->,JI,,__GET_VAR(data__->J,));
          __SET_VAR(data__->,PHASE,,66.0);
        } else if (((__GET_VAR(data__->POSO,) - __GET_VAR(data__->LAST_TARGET,)) >= __GET_VAR(data__->DISTANCE,))) {
          __SET_VAR(data__->,SI,,__GET_VAR(data__->TARGET,));
          __SET_VAR(data__->,POSO,,__GET_VAR(data__->TARGET,));
          __SET_VAR(data__->,LAST_TARGET,,__GET_VAR(data__->TARGET,));
          __SET_VAR(data__->,VI,,0.0);
          __SET_VAR(data__->,VO,,0.0);
          __SET_VAR(data__->,AI,,0.0);
          __SET_VAR(data__->,JI,,0.0);
          __SET_VAR(data__->,PHASE,,66.1);
        };
      };
    };
    if (((__GET_VAR(data__->V,) > ((__GET_VAR(data__->A,) * __GET_VAR(data__->A,)) / __GET_VAR(data__->J,))) && (__GET_VAR(data__->DISTANCE,) >= (__GET_VAR(data__->V,) * ((__GET_VAR(data__->V,) / __GET_VAR(data__->A,)) + (__GET_VAR(data__->A,) / __GET_VAR(data__->J,))))))) {
      if (((__GET_VAR(data__->POSO,) - __GET_VAR(data__->LAST_TARGET,)) < (((__GET_VAR(data__->A,) * __GET_VAR(data__->A,)) * __GET_VAR(data__->A,)) / ((6.0 * __GET_VAR(data__->J,)) * __GET_VAR(data__->J,))))) {
        __SET_VAR(data__->,AR,,(__GET_VAR(data__->AI,) + (__GET_VAR(data__->J,) * __GET_VAR(data__->TS,))));
        __SET_VAR(data__->,VO,,((__GET_VAR(data__->VC,) + (__GET_VAR(data__->AI,) * __GET_VAR(data__->TS,))) + (((__GET_VAR(data__->J,) * __GET_VAR(data__->TS,)) * __GET_VAR(data__->TS,)) / 2.0)));
        __SET_VAR(data__->,POSO,,(((__GET_VAR(data__->POSI,) + (__GET_VAR(data__->VC,) * __GET_VAR(data__->TS,))) + (((__GET_VAR(data__->AI,) * __GET_VAR(data__->TS,)) * __GET_VAR(data__->TS,)) / 2.0)) + ((((__GET_VAR(data__->J,) * __GET_VAR(data__->TS,)) * __GET_VAR(data__->TS,)) * __GET_VAR(data__->TS,)) / 6.0)));
        if (((__GET_VAR(data__->POSO,) - __GET_VAR(data__->LAST_TARGET,)) < (((__GET_VAR(data__->A,) * __GET_VAR(data__->A,)) * __GET_VAR(data__->A,)) / ((6.0 * __GET_VAR(data__->J,)) * __GET_VAR(data__->J,))))) {
          __SET_VAR(data__->,SI,,__GET_VAR(data__->POSO,));
          __SET_VAR(data__->,VI,,__GET_VAR(data__->VO,));
          __SET_VAR(data__->,AI,,__GET_VAR(data__->AR,));
          __SET_VAR(data__->,JI,,__GET_VAR(data__->J,));
          __SET_VAR(data__->,PHASE,,1.0);
        } else if (((__GET_VAR(data__->POSO,) - __GET_VAR(data__->LAST_TARGET,)) >= (((__GET_VAR(data__->A,) * __GET_VAR(data__->A,)) * __GET_VAR(data__->A,)) / ((6.0 * __GET_VAR(data__->J,)) * __GET_VAR(data__->J,))))) {
          __SET_VAR(data__->,SI,,(__GET_VAR(data__->LAST_TARGET,) + (((__GET_VAR(data__->A,) * __GET_VAR(data__->A,)) * __GET_VAR(data__->A,)) / ((6.0 * __GET_VAR(data__->J,)) * __GET_VAR(data__->J,)))));
          __SET_VAR(data__->,VI,,__GET_VAR(data__->VO,));
          __SET_VAR(data__->,AI,,__GET_VAR(data__->A,));
          __SET_VAR(data__->,JI,,0.0);
          __SET_VAR(data__->,PHASE,,1.1);
        };
      } else if ((((__GET_VAR(data__->POSO,) - __GET_VAR(data__->LAST_TARGET,)) >= (((__GET_VAR(data__->A,) * __GET_VAR(data__->A,)) * __GET_VAR(data__->A,)) / ((6.0 * __GET_VAR(data__->J,)) * __GET_VAR(data__->J,)))) && ((__GET_VAR(data__->POSO,) - __GET_VAR(data__->LAST_TARGET,)) < ((((__GET_VAR(data__->V,) * __GET_VAR(data__->V,)) / (2.0 * __GET_VAR(data__->A,))) - ((__GET_VAR(data__->A,) * __GET_VAR(data__->V,)) / (2.0 * __GET_VAR(data__->J,)))) + (((__GET_VAR(data__->A,) * __GET_VAR(data__->A,)) * __GET_VAR(data__->A,)) / ((6.0 * __GET_VAR(data__->J,)) * __GET_VAR(data__->J,))))))) {
        __SET_VAR(data__->,AR,,__GET_VAR(data__->AI,));
        __SET_VAR(data__->,VO,,(__GET_VAR(data__->VC,) + (__GET_VAR(data__->AI,) * __GET_VAR(data__->TS,))));
        __SET_VAR(data__->,POSO,,((__GET_VAR(data__->POSI,) + (__GET_VAR(data__->VC,) * __GET_VAR(data__->TS,))) + (((__GET_VAR(data__->AI,) * __GET_VAR(data__->TS,)) * __GET_VAR(data__->TS,)) / 2.0)));
        if (((__GET_VAR(data__->POSO,) - __GET_VAR(data__->LAST_TARGET,)) < ((((__GET_VAR(data__->V,) * __GET_VAR(data__->V,)) / (2.0 * __GET_VAR(data__->A,))) - ((__GET_VAR(data__->A,) * __GET_VAR(data__->V,)) / (2.0 * __GET_VAR(data__->J,)))) + (((__GET_VAR(data__->A,) * __GET_VAR(data__->A,)) * __GET_VAR(data__->A,)) / ((6.0 * __GET_VAR(data__->J,)) * __GET_VAR(data__->J,)))))) {
          __SET_VAR(data__->,SI,,__GET_VAR(data__->POSO,));
          __SET_VAR(data__->,VI,,__GET_VAR(data__->VO,));
          __SET_VAR(data__->,AI,,__GET_VAR(data__->AR,));
          __SET_VAR(data__->,JI,,0.0);
          __SET_VAR(data__->,PHASE,,2.0);
        } else if (((__GET_VAR(data__->POSO,) - __GET_VAR(data__->LAST_TARGET,)) >= ((((__GET_VAR(data__->V,) * __GET_VAR(data__->V,)) / (2.0 * __GET_VAR(data__->A,))) - ((__GET_VAR(data__->A,) * __GET_VAR(data__->V,)) / (2.0 * __GET_VAR(data__->J,)))) + (((__GET_VAR(data__->A,) * __GET_VAR(data__->A,)) * __GET_VAR(data__->A,)) / ((6.0 * __GET_VAR(data__->J,)) * __GET_VAR(data__->J,)))))) {
          __SET_VAR(data__->,SI,,(((__GET_VAR(data__->LAST_TARGET,) + ((__GET_VAR(data__->V,) * __GET_VAR(data__->V,)) / (2.0 * __GET_VAR(data__->A,)))) - ((__GET_VAR(data__->A,) * __GET_VAR(data__->V,)) / (2.0 * __GET_VAR(data__->J,)))) + (((__GET_VAR(data__->A,) * __GET_VAR(data__->A,)) * __GET_VAR(data__->A,)) / ((6.0 * __GET_VAR(data__->J,)) * __GET_VAR(data__->J,)))));
          __SET_VAR(data__->,VI,,(__GET_VAR(data__->V,) - ((__GET_VAR(data__->A,) * __GET_VAR(data__->A,)) / (2.0 * __GET_VAR(data__->J,)))));
          __SET_VAR(data__->,AI,,__GET_VAR(data__->A,));
          __SET_VAR(data__->,JI,,0.0);
          __SET_VAR(data__->,PHASE,,2.1);
        };
      } else if ((((__GET_VAR(data__->POSO,) - __GET_VAR(data__->LAST_TARGET,)) >= ((((__GET_VAR(data__->V,) * __GET_VAR(data__->V,)) / (2.0 * __GET_VAR(data__->A,))) - ((__GET_VAR(data__->A,) * __GET_VAR(data__->V,)) / (2.0 * __GET_VAR(data__->J,)))) + (((__GET_VAR(data__->A,) * __GET_VAR(data__->A,)) * __GET_VAR(data__->A,)) / ((6.0 * __GET_VAR(data__->J,)) * __GET_VAR(data__->J,))))) && ((__GET_VAR(data__->POSO,) - __GET_VAR(data__->LAST_TARGET,)) < ((__GET_VAR(data__->V,) * ((__GET_VAR(data__->V,) / __GET_VAR(data__->A,)) + (__GET_VAR(data__->A,) / __GET_VAR(data__->J,)))) / 2.0)))) {
        __SET_VAR(data__->,AR,,(__GET_VAR(data__->AI,) - (__GET_VAR(data__->J,) * __GET_VAR(data__->TS,))));
        __SET_VAR(data__->,VO,,((__GET_VAR(data__->VC,) + (__GET_VAR(data__->AI,) * __GET_VAR(data__->TS,))) - (((__GET_VAR(data__->J,) * __GET_VAR(data__->TS,)) * __GET_VAR(data__->TS,)) / 2.0)));
        __SET_VAR(data__->,POSO,,(((__GET_VAR(data__->POSI,) + (__GET_VAR(data__->VC,) * __GET_VAR(data__->TS,))) + (((__GET_VAR(data__->AI,) * __GET_VAR(data__->TS,)) * __GET_VAR(data__->TS,)) / 2.0)) - ((((__GET_VAR(data__->J,) * __GET_VAR(data__->TS,)) * __GET_VAR(data__->TS,)) * __GET_VAR(data__->TS,)) / 6.0)));
        if (((__GET_VAR(data__->POSO,) - __GET_VAR(data__->LAST_TARGET,)) < ((__GET_VAR(data__->V,) * ((__GET_VAR(data__->V,) / __GET_VAR(data__->A,)) + (__GET_VAR(data__->A,) / __GET_VAR(data__->J,)))) / 2.0))) {
          __SET_VAR(data__->,SI,,__GET_VAR(data__->POSO,));
          __SET_VAR(data__->,VI,,__GET_VAR(data__->VO,));
          __SET_VAR(data__->,AI,,__GET_VAR(data__->AR,));
          __SET_VAR(data__->,JI,, -(__GET_VAR(data__->J,)));
          __SET_VAR(data__->,PHASE,,3.0);
        } else if (((__GET_VAR(data__->POSO,) - __GET_VAR(data__->LAST_TARGET,)) >= ((__GET_VAR(data__->V,) * ((__GET_VAR(data__->V,) / __GET_VAR(data__->A,)) + (__GET_VAR(data__->A,) / __GET_VAR(data__->J,)))) / 2.0))) {
          __SET_VAR(data__->,SI,,(__GET_VAR(data__->LAST_TARGET,) + ((__GET_VAR(data__->V,) * ((__GET_VAR(data__->V,) / __GET_VAR(data__->A,)) + (__GET_VAR(data__->A,) / __GET_VAR(data__->J,)))) / 2.0)));
          __SET_VAR(data__->,VI,,__GET_VAR(data__->V,));
          __SET_VAR(data__->,AI,,0.0);
          __SET_VAR(data__->,JI,,0.0);
          __SET_VAR(data__->,PHASE,,3.1);
        };
      } else if ((((__GET_VAR(data__->POSO,) - __GET_VAR(data__->LAST_TARGET,)) >= ((__GET_VAR(data__->V,) * ((__GET_VAR(data__->V,) / __GET_VAR(data__->A,)) + (__GET_VAR(data__->A,) / __GET_VAR(data__->J,)))) / 2.0)) && ((__GET_VAR(data__->POSO,) - __GET_VAR(data__->LAST_TARGET,)) < (__GET_VAR(data__->DISTANCE,) - ((__GET_VAR(data__->V,) * ((__GET_VAR(data__->V,) / __GET_VAR(data__->A,)) + (__GET_VAR(data__->A,) / __GET_VAR(data__->J,)))) / 2.0))))) {
        __SET_VAR(data__->,AR,,__GET_VAR(data__->AI,));
        __SET_VAR(data__->,VO,,(__GET_VAR(data__->VC,) + (__GET_VAR(data__->AI,) * __GET_VAR(data__->TS,))));
        __SET_VAR(data__->,POSO,,((__GET_VAR(data__->POSI,) + (__GET_VAR(data__->VC,) * __GET_VAR(data__->TS,))) + (((__GET_VAR(data__->J,) * __GET_VAR(data__->TS,)) * __GET_VAR(data__->TS,)) / 2.0)));
        if (((__GET_VAR(data__->POSO,) - __GET_VAR(data__->LAST_TARGET,)) < (__GET_VAR(data__->DISTANCE,) - ((__GET_VAR(data__->V,) * ((__GET_VAR(data__->V,) / __GET_VAR(data__->A,)) + (__GET_VAR(data__->A,) / __GET_VAR(data__->J,)))) / 2.0)))) {
          __SET_VAR(data__->,SI,,__GET_VAR(data__->POSO,));
          __SET_VAR(data__->,VI,,__GET_VAR(data__->V,));
          __SET_VAR(data__->,AI,,__GET_VAR(data__->AR,));
          __SET_VAR(data__->,JI,,0.0);
          __SET_VAR(data__->,PHASE,,4.0);
        } else if (((__GET_VAR(data__->POSO,) - __GET_VAR(data__->LAST_TARGET,)) >= (__GET_VAR(data__->DISTANCE,) - ((__GET_VAR(data__->V,) * ((__GET_VAR(data__->V,) / __GET_VAR(data__->A,)) + (__GET_VAR(data__->A,) / __GET_VAR(data__->J,)))) / 2.0)))) {
          __SET_VAR(data__->,SI,,((__GET_VAR(data__->LAST_TARGET,) + __GET_VAR(data__->DISTANCE,)) - ((__GET_VAR(data__->V,) * ((__GET_VAR(data__->V,) / __GET_VAR(data__->A,)) + (__GET_VAR(data__->A,) / __GET_VAR(data__->J,)))) / 2.0)));
          __SET_VAR(data__->,VI,,__GET_VAR(data__->V,));
          __SET_VAR(data__->,AI,,0.0);
          __SET_VAR(data__->,JI,,0.0);
          __SET_VAR(data__->,PHASE,,4.1);
        };
      } else if ((((__GET_VAR(data__->POSO,) - __GET_VAR(data__->LAST_TARGET,)) >= (__GET_VAR(data__->DISTANCE,) - ((__GET_VAR(data__->V,) * ((__GET_VAR(data__->V,) / __GET_VAR(data__->A,)) + (__GET_VAR(data__->A,) / __GET_VAR(data__->J,)))) / 2.0))) && ((__GET_VAR(data__->POSO,) - __GET_VAR(data__->LAST_TARGET,)) < (__GET_VAR(data__->DISTANCE,) - ((((__GET_VAR(data__->V,) * __GET_VAR(data__->V,)) / (2.0 * __GET_VAR(data__->A,))) - ((__GET_VAR(data__->A,) * __GET_VAR(data__->V,)) / (2.0 * __GET_VAR(data__->J,)))) + (((__GET_VAR(data__->A,) * __GET_VAR(data__->A,)) * __GET_VAR(data__->A,)) / ((6.0 * __GET_VAR(data__->J,)) * __GET_VAR(data__->J,)))))))) {
        __SET_VAR(data__->,AR,,(__GET_VAR(data__->AI,) - (__GET_VAR(data__->J,) * __GET_VAR(data__->TS,))));
        __SET_VAR(data__->,VO,,((__GET_VAR(data__->VC,) + (__GET_VAR(data__->AI,) * __GET_VAR(data__->TS,))) - (((__GET_VAR(data__->J,) * __GET_VAR(data__->TS,)) * __GET_VAR(data__->TS,)) / 2.0)));
        __SET_VAR(data__->,POSO,,(((__GET_VAR(data__->POSI,) + (__GET_VAR(data__->VC,) * __GET_VAR(data__->TS,))) + (((__GET_VAR(data__->AR,) * __GET_VAR(data__->TS,)) * __GET_VAR(data__->TS,)) / 2.0)) - ((((__GET_VAR(data__->J,) * __GET_VAR(data__->TS,)) * __GET_VAR(data__->TS,)) * __GET_VAR(data__->TS,)) / 6.0)));
        if (((__GET_VAR(data__->POSO,) - __GET_VAR(data__->LAST_TARGET,)) < (__GET_VAR(data__->DISTANCE,) - ((((__GET_VAR(data__->V,) * __GET_VAR(data__->V,)) / (2.0 * __GET_VAR(data__->A,))) - ((__GET_VAR(data__->A,) * __GET_VAR(data__->V,)) / (2.0 * __GET_VAR(data__->J,)))) + (((__GET_VAR(data__->A,) * __GET_VAR(data__->A,)) * __GET_VAR(data__->A,)) / ((6.0 * __GET_VAR(data__->J,)) * __GET_VAR(data__->J,))))))) {
          __SET_VAR(data__->,SI,,__GET_VAR(data__->POSO,));
          __SET_VAR(data__->,VI,,__GET_VAR(data__->VO,));
          __SET_VAR(data__->,AI,,__GET_VAR(data__->AR,));
          __SET_VAR(data__->,JI,, -(__GET_VAR(data__->J,)));
          __SET_VAR(data__->,PHASE,,5.0);
        } else if (((__GET_VAR(data__->POSO,) - __GET_VAR(data__->LAST_TARGET,)) >= (__GET_VAR(data__->DISTANCE,) - ((((__GET_VAR(data__->V,) * __GET_VAR(data__->V,)) / (2.0 * __GET_VAR(data__->A,))) - ((__GET_VAR(data__->A,) * __GET_VAR(data__->V,)) / (2.0 * __GET_VAR(data__->J,)))) + (((__GET_VAR(data__->A,) * __GET_VAR(data__->A,)) * __GET_VAR(data__->A,)) / ((6.0 * __GET_VAR(data__->J,)) * __GET_VAR(data__->J,))))))) {
          __SET_VAR(data__->,SI,,((__GET_VAR(data__->LAST_TARGET,) + __GET_VAR(data__->DISTANCE,)) - ((((__GET_VAR(data__->V,) * __GET_VAR(data__->V,)) / (2.0 * __GET_VAR(data__->A,))) - ((__GET_VAR(data__->A,) * __GET_VAR(data__->V,)) / (2.0 * __GET_VAR(data__->J,)))) + (((__GET_VAR(data__->A,) * __GET_VAR(data__->A,)) * __GET_VAR(data__->A,)) / ((6.0 * __GET_VAR(data__->J,)) * __GET_VAR(data__->J,))))));
          __SET_VAR(data__->,VI,,(__GET_VAR(data__->V,) - ((__GET_VAR(data__->A,) * __GET_VAR(data__->A,)) / (2.0 * __GET_VAR(data__->J,)))));
          __SET_VAR(data__->,AI,, -(__GET_VAR(data__->A,)));
          __SET_VAR(data__->,JI,,0.0);
          __SET_VAR(data__->,PHASE,,5.1);
        };
      } else if ((((__GET_VAR(data__->POSO,) - __GET_VAR(data__->LAST_TARGET,)) >= (__GET_VAR(data__->DISTANCE,) - ((((__GET_VAR(data__->V,) * __GET_VAR(data__->V,)) / (2.0 * __GET_VAR(data__->A,))) - ((__GET_VAR(data__->A,) * __GET_VAR(data__->V,)) / (2.0 * __GET_VAR(data__->J,)))) + (((__GET_VAR(data__->A,) * __GET_VAR(data__->A,)) * __GET_VAR(data__->A,)) / ((6.0 * __GET_VAR(data__->J,)) * __GET_VAR(data__->J,)))))) && ((__GET_VAR(data__->POSO,) - __GET_VAR(data__->LAST_TARGET,)) < (__GET_VAR(data__->DISTANCE,) - (((__GET_VAR(data__->A,) * __GET_VAR(data__->A,)) * __GET_VAR(data__->A,)) / ((6.0 * __GET_VAR(data__->J,)) * __GET_VAR(data__->J,))))))) {
        __SET_VAR(data__->,AR,,__GET_VAR(data__->AI,));
        __SET_VAR(data__->,VO,,(__GET_VAR(data__->VC,) + (__GET_VAR(data__->AI,) * __GET_VAR(data__->TS,))));
        __SET_VAR(data__->,POSO,,((__GET_VAR(data__->POSI,) + (__GET_VAR(data__->VC,) * __GET_VAR(data__->TS,))) + (((__GET_VAR(data__->J,) * __GET_VAR(data__->TS,)) * __GET_VAR(data__->TS,)) / 2.0)));
        if (((__GET_VAR(data__->POSO,) - __GET_VAR(data__->LAST_TARGET,)) < (__GET_VAR(data__->DISTANCE,) - (((__GET_VAR(data__->A,) * __GET_VAR(data__->A,)) * __GET_VAR(data__->A,)) / ((6.0 * __GET_VAR(data__->J,)) * __GET_VAR(data__->J,)))))) {
          __SET_VAR(data__->,SI,,__GET_VAR(data__->POSO,));
          __SET_VAR(data__->,VI,,__GET_VAR(data__->VO,));
          __SET_VAR(data__->,AI,,__GET_VAR(data__->AR,));
          __SET_VAR(data__->,JI,,0.0);
          __SET_VAR(data__->,PHASE,,6.0);
        } else if (((__GET_VAR(data__->POSO,) - __GET_VAR(data__->LAST_TARGET,)) >= (__GET_VAR(data__->DISTANCE,) - (((__GET_VAR(data__->A,) * __GET_VAR(data__->A,)) * __GET_VAR(data__->A,)) / ((6.0 * __GET_VAR(data__->J,)) * __GET_VAR(data__->J,)))))) {
          __SET_VAR(data__->,SI,,((__GET_VAR(data__->LAST_TARGET,) + __GET_VAR(data__->DISTANCE,)) - (((__GET_VAR(data__->A,) * __GET_VAR(data__->A,)) * __GET_VAR(data__->A,)) / ((6.0 * __GET_VAR(data__->J,)) * __GET_VAR(data__->J,)))));
          __SET_VAR(data__->,VI,,((__GET_VAR(data__->A,) * __GET_VAR(data__->A,)) / (2.0 * __GET_VAR(data__->J,))));
          __SET_VAR(data__->,AI,, -(__GET_VAR(data__->A,)));
          __SET_VAR(data__->,JI,,0.0);
          __SET_VAR(data__->,PHASE,,6.1);
        };
      } else if ((((__GET_VAR(data__->POSO,) - __GET_VAR(data__->LAST_TARGET,)) >= (__GET_VAR(data__->DISTANCE,) - (((__GET_VAR(data__->A,) * __GET_VAR(data__->A,)) * __GET_VAR(data__->A,)) / ((6.0 * __GET_VAR(data__->J,)) * __GET_VAR(data__->J,))))) && ((__GET_VAR(data__->POSO,) - __GET_VAR(data__->LAST_TARGET,)) < __GET_VAR(data__->DISTANCE,)))) {
        __SET_VAR(data__->,AR,,(__GET_VAR(data__->AI,) + (__GET_VAR(data__->J,) * __GET_VAR(data__->TS,))));
        __SET_VAR(data__->,VO,,((__GET_VAR(data__->VC,) + (__GET_VAR(data__->AI,) * __GET_VAR(data__->TS,))) + (((__GET_VAR(data__->J,) * __GET_VAR(data__->TS,)) * __GET_VAR(data__->TS,)) / 2.0)));
        __SET_VAR(data__->,POSO,,(((__GET_VAR(data__->POSI,) + (__GET_VAR(data__->VC,) * __GET_VAR(data__->TS,))) + (((__GET_VAR(data__->AI,) * __GET_VAR(data__->TS,)) * __GET_VAR(data__->TS,)) / 2.0)) + ((((__GET_VAR(data__->J,) * __GET_VAR(data__->TS,)) * __GET_VAR(data__->TS,)) * __GET_VAR(data__->TS,)) / 6.0)));
        if (((__GET_VAR(data__->POSO,) - __GET_VAR(data__->LAST_TARGET,)) < __GET_VAR(data__->DISTANCE,))) {
          __SET_VAR(data__->,SI,,__GET_VAR(data__->POSO,));
          __SET_VAR(data__->,VI,,__GET_VAR(data__->VO,));
          __SET_VAR(data__->,AI,,__GET_VAR(data__->AR,));
          __SET_VAR(data__->,JI,,__GET_VAR(data__->J,));
          __SET_VAR(data__->,PHASE,,7.0);
        } else if (((__GET_VAR(data__->POSO,) - __GET_VAR(data__->LAST_TARGET,)) >= __GET_VAR(data__->DISTANCE,))) {
          __SET_VAR(data__->,SI,,__GET_VAR(data__->TARGET,));
          __SET_VAR(data__->,POSO,,__GET_VAR(data__->TARGET,));
          __SET_VAR(data__->,LAST_TARGET,,__GET_VAR(data__->TARGET,));
          __SET_VAR(data__->,VO,,0.0);
          __SET_VAR(data__->,VI,,0.0);
          __SET_VAR(data__->,AI,,0.0);
          __SET_VAR(data__->,JI,,0.0);
          __SET_VAR(data__->,PHASE,,7.1);
        };
      };
    };
  };
  if ((__GET_VAR(data__->DISTANCE,) < 0.0)) {
    if ((((ABS__LREAL__LREAL(
      (BOOL)__BOOL_LITERAL(TRUE),
      NULL,
      (LREAL)__GET_VAR(data__->V,)) < ABS__LREAL__LREAL(
      (BOOL)__BOOL_LITERAL(TRUE),
      NULL,
      (LREAL)((__GET_VAR(data__->A,) * __GET_VAR(data__->A,)) / __GET_VAR(data__->J,)))) && (ABS__LREAL__LREAL(
      (BOOL)__BOOL_LITERAL(TRUE),
      NULL,
      (LREAL)__GET_VAR(data__->DISTANCE,)) < ABS__LREAL__LREAL(
      (BOOL)__BOOL_LITERAL(TRUE),
      NULL,
      (LREAL)((2.0 * __GET_VAR(data__->V,)) * SQRT__LREAL__LREAL(
        (BOOL)__BOOL_LITERAL(TRUE),
        NULL,
        (LREAL)(__GET_VAR(data__->V,) / __GET_VAR(data__->J,))))))) || ((ABS__LREAL__LREAL(
      (BOOL)__BOOL_LITERAL(TRUE),
      NULL,
      (LREAL)__GET_VAR(data__->V,)) > ABS__LREAL__LREAL(
      (BOOL)__BOOL_LITERAL(TRUE),
      NULL,
      (LREAL)((__GET_VAR(data__->A,) * __GET_VAR(data__->A,)) / __GET_VAR(data__->J,)))) && (ABS__LREAL__LREAL(
      (BOOL)__BOOL_LITERAL(TRUE),
      NULL,
      (LREAL)__GET_VAR(data__->DISTANCE,)) < ABS__LREAL__LREAL(
      (BOOL)__BOOL_LITERAL(TRUE),
      NULL,
      (LREAL)((((2.0 * __GET_VAR(data__->A,)) * __GET_VAR(data__->A,)) * __GET_VAR(data__->A,)) / (__GET_VAR(data__->J,) * __GET_VAR(data__->J,)))))))) {
      if ((ABS__LREAL__LREAL(
        (BOOL)__BOOL_LITERAL(TRUE),
        NULL,
        (LREAL)(__GET_VAR(data__->POSO,) - __GET_VAR(data__->LAST_TARGET,))) < ABS__LREAL__LREAL(
        (BOOL)__BOOL_LITERAL(TRUE),
        NULL,
        (LREAL)(__GET_VAR(data__->DISTANCE,) / 12.0)))) {
        __SET_VAR(data__->,AR,,(__GET_VAR(data__->AI,) - (__GET_VAR(data__->J,) * __GET_VAR(data__->TS,))));
        __SET_VAR(data__->,VO,,((__GET_VAR(data__->VC,) + (__GET_VAR(data__->AI,) * __GET_VAR(data__->TS,))) - (((__GET_VAR(data__->J,) * __GET_VAR(data__->TS,)) * __GET_VAR(data__->TS,)) / 2.0)));
        __SET_VAR(data__->,POSO,,(((__GET_VAR(data__->POSI,) + (__GET_VAR(data__->VC,) * __GET_VAR(data__->TS,))) + (((__GET_VAR(data__->AI,) * __GET_VAR(data__->TS,)) * __GET_VAR(data__->TS,)) / 2.0)) - ((((__GET_VAR(data__->J,) * __GET_VAR(data__->TS,)) * __GET_VAR(data__->TS,)) * __GET_VAR(data__->TS,)) / 6.0)));
        if ((ABS__LREAL__LREAL(
          (BOOL)__BOOL_LITERAL(TRUE),
          NULL,
          (LREAL)(__GET_VAR(data__->POSO,) - __GET_VAR(data__->LAST_TARGET,))) < ABS__LREAL__LREAL(
          (BOOL)__BOOL_LITERAL(TRUE),
          NULL,
          (LREAL)(__GET_VAR(data__->DISTANCE,) / 12.0)))) {
          __SET_VAR(data__->,SI,,__GET_VAR(data__->POSO,));
          __SET_VAR(data__->,VI,,__GET_VAR(data__->VO,));
          __SET_VAR(data__->,AI,,__GET_VAR(data__->AR,));
          __SET_VAR(data__->,JI,, -(__GET_VAR(data__->J,)));
          __SET_VAR(data__->,PHASE,,1111.0);
        } else if ((ABS__LREAL__LREAL(
          (BOOL)__BOOL_LITERAL(TRUE),
          NULL,
          (LREAL)(__GET_VAR(data__->POSO,) - __GET_VAR(data__->LAST_TARGET,))) >= ABS__LREAL__LREAL(
          (BOOL)__BOOL_LITERAL(TRUE),
          NULL,
          (LREAL)(__GET_VAR(data__->DISTANCE,) / 12.0)))) {
          __SET_VAR(data__->,SI,,(__GET_VAR(data__->LAST_TARGET,) + (__GET_VAR(data__->DISTANCE,) / 12.0)));
          __SET_VAR(data__->,VI,, -(ABS__LREAL__LREAL(
            (BOOL)__BOOL_LITERAL(TRUE),
            NULL,
            (LREAL)(__GET_VAR(data__->DISTANCE,) / (4.0 * __GET_VAR(data__->X,))))));
          __SET_VAR(data__->,AI,,__GET_VAR(data__->AR,));
          __SET_VAR(data__->,JI,,0.0);
          __SET_VAR(data__->,PHASE,,1111.1);
        };
      } else if (((ABS__LREAL__LREAL(
        (BOOL)__BOOL_LITERAL(TRUE),
        NULL,
        (LREAL)(__GET_VAR(data__->POSO,) - __GET_VAR(data__->LAST_TARGET,))) >= ABS__LREAL__LREAL(
        (BOOL)__BOOL_LITERAL(TRUE),
        NULL,
        (LREAL)(__GET_VAR(data__->DISTANCE,) / 12.0))) && (ABS__LREAL__LREAL(
        (BOOL)__BOOL_LITERAL(TRUE),
        NULL,
        (LREAL)(__GET_VAR(data__->POSO,) - __GET_VAR(data__->LAST_TARGET,))) < ABS__LREAL__LREAL(
        (BOOL)__BOOL_LITERAL(TRUE),
        NULL,
        (LREAL)(__GET_VAR(data__->DISTANCE,) / 2.0))))) {
        __SET_VAR(data__->,AR,,(__GET_VAR(data__->AI,) + (__GET_VAR(data__->J,) * __GET_VAR(data__->TS,))));
        __SET_VAR(data__->,VO,,((__GET_VAR(data__->VC,) + (__GET_VAR(data__->AI,) * __GET_VAR(data__->TS,))) + (((__GET_VAR(data__->J,) * __GET_VAR(data__->TS,)) * __GET_VAR(data__->TS,)) / 2.0)));
        __SET_VAR(data__->,POSO,,(((__GET_VAR(data__->POSI,) + (__GET_VAR(data__->VC,) * __GET_VAR(data__->TS,))) + (((__GET_VAR(data__->AI,) * __GET_VAR(data__->TS,)) * __GET_VAR(data__->TS,)) / 2.0)) + ((((__GET_VAR(data__->J,) * __GET_VAR(data__->TS,)) * __GET_VAR(data__->TS,)) * __GET_VAR(data__->TS,)) / 6.0)));
        if ((ABS__LREAL__LREAL(
          (BOOL)__BOOL_LITERAL(TRUE),
          NULL,
          (LREAL)(__GET_VAR(data__->POSO,) - __GET_VAR(data__->LAST_TARGET,))) < ABS__LREAL__LREAL(
          (BOOL)__BOOL_LITERAL(TRUE),
          NULL,
          (LREAL)(__GET_VAR(data__->DISTANCE,) / 2.0)))) {
          __SET_VAR(data__->,SI,,__GET_VAR(data__->POSO,));
          __SET_VAR(data__->,VI,,__GET_VAR(data__->VO,));
          __SET_VAR(data__->,AI,,__GET_VAR(data__->AR,));
          __SET_VAR(data__->,JI,,__GET_VAR(data__->J,));
          __SET_VAR(data__->,PHASE,,2222.0);
        } else if ((ABS__LREAL__LREAL(
          (BOOL)__BOOL_LITERAL(TRUE),
          NULL,
          (LREAL)(__GET_VAR(data__->POSO,) - __GET_VAR(data__->LAST_TARGET,))) >= ABS__LREAL__LREAL(
          (BOOL)__BOOL_LITERAL(TRUE),
          NULL,
          (LREAL)(__GET_VAR(data__->DISTANCE,) / 2.0)))) {
          __SET_VAR(data__->,SI,,(__GET_VAR(data__->LAST_TARGET,) + (__GET_VAR(data__->DISTANCE,) / 2.0)));
          __SET_VAR(data__->,VI,, -(ABS__LREAL__LREAL(
            (BOOL)__BOOL_LITERAL(TRUE),
            NULL,
            (LREAL)(__GET_VAR(data__->DISTANCE,) / (2.0 * __GET_VAR(data__->X,))))));
          __SET_VAR(data__->,AI,,0.0);
          __SET_VAR(data__->,PHASE,,2222.1);
        };
      } else if (((ABS__LREAL__LREAL(
        (BOOL)__BOOL_LITERAL(TRUE),
        NULL,
        (LREAL)(__GET_VAR(data__->POSO,) - __GET_VAR(data__->LAST_TARGET,))) >= ABS__LREAL__LREAL(
        (BOOL)__BOOL_LITERAL(TRUE),
        NULL,
        (LREAL)(__GET_VAR(data__->DISTANCE,) / 2.0))) && (ABS__LREAL__LREAL(
        (BOOL)__BOOL_LITERAL(TRUE),
        NULL,
        (LREAL)(__GET_VAR(data__->POSO,) - __GET_VAR(data__->LAST_TARGET,))) < ABS__LREAL__LREAL(
        (BOOL)__BOOL_LITERAL(TRUE),
        NULL,
        (LREAL)((11.0 * __GET_VAR(data__->DISTANCE,)) / 12.0))))) {
        __SET_VAR(data__->,AR,,(__GET_VAR(data__->AI,) + (__GET_VAR(data__->J,) * __GET_VAR(data__->TS,))));
        __SET_VAR(data__->,VO,,((__GET_VAR(data__->VC,) + (__GET_VAR(data__->AI,) * __GET_VAR(data__->TS,))) + (((__GET_VAR(data__->J,) * __GET_VAR(data__->TS,)) * __GET_VAR(data__->TS,)) / 2.0)));
        __SET_VAR(data__->,POSO,,(((__GET_VAR(data__->POSI,) + (__GET_VAR(data__->VC,) * __GET_VAR(data__->TS,))) + (((__GET_VAR(data__->AI,) * __GET_VAR(data__->TS,)) * __GET_VAR(data__->TS,)) / 2.0)) + ((((__GET_VAR(data__->J,) * __GET_VAR(data__->TS,)) * __GET_VAR(data__->TS,)) * __GET_VAR(data__->TS,)) / 6.0)));
        if ((ABS__LREAL__LREAL(
          (BOOL)__BOOL_LITERAL(TRUE),
          NULL,
          (LREAL)(__GET_VAR(data__->POSO,) - __GET_VAR(data__->LAST_TARGET,))) < ABS__LREAL__LREAL(
          (BOOL)__BOOL_LITERAL(TRUE),
          NULL,
          (LREAL)((11.0 * __GET_VAR(data__->DISTANCE,)) / 12.0)))) {
          __SET_VAR(data__->,SI,,__GET_VAR(data__->POSO,));
          __SET_VAR(data__->,VI,,__GET_VAR(data__->VO,));
          __SET_VAR(data__->,AI,,__GET_VAR(data__->AR,));
          __SET_VAR(data__->,JI,,__GET_VAR(data__->J,));
          __SET_VAR(data__->,PHASE,,3333.0);
        } else if ((ABS__LREAL__LREAL(
          (BOOL)__BOOL_LITERAL(TRUE),
          NULL,
          (LREAL)(__GET_VAR(data__->POSO,) - __GET_VAR(data__->LAST_TARGET,))) >= ABS__LREAL__LREAL(
          (BOOL)__BOOL_LITERAL(TRUE),
          NULL,
          (LREAL)((11.0 * __GET_VAR(data__->DISTANCE,)) / 12.0)))) {
          __SET_VAR(data__->,SI,,(__GET_VAR(data__->LAST_TARGET,) + ((11.0 * __GET_VAR(data__->DISTANCE,)) / 12.0)));
          __SET_VAR(data__->,VI,, -(ABS__LREAL__LREAL(
            (BOOL)__BOOL_LITERAL(TRUE),
            NULL,
            (LREAL)(__GET_VAR(data__->DISTANCE,) / (4.0 * __GET_VAR(data__->X,))))));
          __SET_VAR(data__->,AI,,ABS__LREAL__LREAL(
            (BOOL)__BOOL_LITERAL(TRUE),
            NULL,
            (LREAL)(__GET_VAR(data__->J,) * __GET_VAR(data__->X,))));
          __SET_VAR(data__->,JI,,0.0);
          __SET_VAR(data__->,PHASE,,3333.1);
        };
      } else if (((ABS__LREAL__LREAL(
        (BOOL)__BOOL_LITERAL(TRUE),
        NULL,
        (LREAL)(__GET_VAR(data__->POSO,) - __GET_VAR(data__->LAST_TARGET,))) >= ABS__LREAL__LREAL(
        (BOOL)__BOOL_LITERAL(TRUE),
        NULL,
        (LREAL)((11.0 * __GET_VAR(data__->DISTANCE,)) / 12.0))) && (ABS__LREAL__LREAL(
        (BOOL)__BOOL_LITERAL(TRUE),
        NULL,
        (LREAL)(__GET_VAR(data__->POSO,) - __GET_VAR(data__->LAST_TARGET,))) < ABS__LREAL__LREAL(
        (BOOL)__BOOL_LITERAL(TRUE),
        NULL,
        (LREAL)__GET_VAR(data__->DISTANCE,))))) {
        __SET_VAR(data__->,AR,,(__GET_VAR(data__->AI,) - (__GET_VAR(data__->J,) * __GET_VAR(data__->TS,))));
        __SET_VAR(data__->,VO,,((__GET_VAR(data__->VC,) + (__GET_VAR(data__->AI,) * __GET_VAR(data__->TS,))) - (((__GET_VAR(data__->J,) * __GET_VAR(data__->TS,)) * __GET_VAR(data__->TS,)) / 2.0)));
        __SET_VAR(data__->,POSO,,(((__GET_VAR(data__->POSI,) + (__GET_VAR(data__->VC,) * __GET_VAR(data__->TS,))) + (((__GET_VAR(data__->AI,) * __GET_VAR(data__->TS,)) * __GET_VAR(data__->TS,)) / 2.0)) - ((((__GET_VAR(data__->J,) * __GET_VAR(data__->TS,)) * __GET_VAR(data__->TS,)) * __GET_VAR(data__->TS,)) / 6.0)));
        if ((ABS__LREAL__LREAL(
          (BOOL)__BOOL_LITERAL(TRUE),
          NULL,
          (LREAL)(__GET_VAR(data__->POSO,) - __GET_VAR(data__->LAST_TARGET,))) < ABS__LREAL__LREAL(
          (BOOL)__BOOL_LITERAL(TRUE),
          NULL,
          (LREAL)__GET_VAR(data__->DISTANCE,)))) {
          __SET_VAR(data__->,SI,,__GET_VAR(data__->POSO,));
          __SET_VAR(data__->,VI,,__GET_VAR(data__->VO,));
          __SET_VAR(data__->,AI,,__GET_VAR(data__->AR,));
          __SET_VAR(data__->,JI,, -(__GET_VAR(data__->J,)));
          __SET_VAR(data__->,PHASE,,4444.0);
        } else if ((ABS__LREAL__LREAL(
          (BOOL)__BOOL_LITERAL(TRUE),
          NULL,
          (LREAL)(__GET_VAR(data__->POSO,) - __GET_VAR(data__->LAST_TARGET,))) >= ABS__LREAL__LREAL(
          (BOOL)__BOOL_LITERAL(TRUE),
          NULL,
          (LREAL)__GET_VAR(data__->DISTANCE,)))) {
          __SET_VAR(data__->,SI,,__GET_VAR(data__->TARGET,));
          __SET_VAR(data__->,POSO,,__GET_VAR(data__->TARGET,));
          __SET_VAR(data__->,LAST_TARGET,,__GET_VAR(data__->TARGET,));
          __SET_VAR(data__->,VI,,0.0);
          __SET_VAR(data__->,VO,,0.0);
          __SET_VAR(data__->,AI,,0.0);
          __SET_VAR(data__->,JI,,0.0);
          __SET_VAR(data__->,PHASE,,4444.1);
        };
      };
    };
    if (((ABS__LREAL__LREAL(
      (BOOL)__BOOL_LITERAL(TRUE),
      NULL,
      (LREAL)__GET_VAR(data__->V,)) <= ABS__LREAL__LREAL(
      (BOOL)__BOOL_LITERAL(TRUE),
      NULL,
      (LREAL)((__GET_VAR(data__->A,) * __GET_VAR(data__->A,)) / __GET_VAR(data__->J,)))) && (ABS__LREAL__LREAL(
      (BOOL)__BOOL_LITERAL(TRUE),
      NULL,
      (LREAL)__GET_VAR(data__->DISTANCE,)) >= ABS__LREAL__LREAL(
      (BOOL)__BOOL_LITERAL(TRUE),
      NULL,
      (LREAL)((2.0 * __GET_VAR(data__->V,)) * SQRT__LREAL__LREAL(
        (BOOL)__BOOL_LITERAL(TRUE),
        NULL,
        (LREAL)(__GET_VAR(data__->V,) / __GET_VAR(data__->J,)))))))) {
      if (((ABS__LREAL__LREAL(
        (BOOL)__BOOL_LITERAL(TRUE),
        NULL,
        (LREAL)(__GET_VAR(data__->POSO,) - __GET_VAR(data__->LAST_TARGET,))) < ABS__LREAL__LREAL(
        (BOOL)__BOOL_LITERAL(TRUE),
        NULL,
        (LREAL)(((( -(__GET_VAR(data__->J,)) * SQRT__LREAL__LREAL(
          (BOOL)__BOOL_LITERAL(TRUE),
          NULL,
          (LREAL)(__GET_VAR(data__->V,) / __GET_VAR(data__->J,)))) * SQRT__LREAL__LREAL(
          (BOOL)__BOOL_LITERAL(TRUE),
          NULL,
          (LREAL)(__GET_VAR(data__->V,) / __GET_VAR(data__->J,)))) * SQRT__LREAL__LREAL(
          (BOOL)__BOOL_LITERAL(TRUE),
          NULL,
          (LREAL)(__GET_VAR(data__->V,) / __GET_VAR(data__->J,)))) / 6.0))) && (ABS__LREAL__LREAL(
        (BOOL)__BOOL_LITERAL(TRUE),
        NULL,
        (LREAL)(__GET_VAR(data__->POSO,) - __GET_VAR(data__->LAST_TARGET,))) >= 0.0))) {
        __SET_VAR(data__->,AR,,(__GET_VAR(data__->AI,) - (__GET_VAR(data__->J,) * __GET_VAR(data__->TS,))));
        __SET_VAR(data__->,VO,,((__GET_VAR(data__->VC,) + (__GET_VAR(data__->AI,) * __GET_VAR(data__->TS,))) - (((__GET_VAR(data__->J,) * __GET_VAR(data__->TS,)) * __GET_VAR(data__->TS,)) / 2.0)));
        __SET_VAR(data__->,POSO,,(((__GET_VAR(data__->POSI,) + (__GET_VAR(data__->VC,) * __GET_VAR(data__->TS,))) + (((__GET_VAR(data__->AI,) * __GET_VAR(data__->TS,)) * __GET_VAR(data__->TS,)) / 2.0)) - ((((__GET_VAR(data__->J,) * __GET_VAR(data__->TS,)) * __GET_VAR(data__->TS,)) * __GET_VAR(data__->TS,)) / 6.0)));
        if ((ABS__LREAL__LREAL(
          (BOOL)__BOOL_LITERAL(TRUE),
          NULL,
          (LREAL)(__GET_VAR(data__->POSO,) - __GET_VAR(data__->LAST_TARGET,))) < ABS__LREAL__LREAL(
          (BOOL)__BOOL_LITERAL(TRUE),
          NULL,
          (LREAL)(((( -(__GET_VAR(data__->J,)) * SQRT__LREAL__LREAL(
            (BOOL)__BOOL_LITERAL(TRUE),
            NULL,
            (LREAL)(__GET_VAR(data__->V,) / __GET_VAR(data__->J,)))) * SQRT__LREAL__LREAL(
            (BOOL)__BOOL_LITERAL(TRUE),
            NULL,
            (LREAL)(__GET_VAR(data__->V,) / __GET_VAR(data__->J,)))) * SQRT__LREAL__LREAL(
            (BOOL)__BOOL_LITERAL(TRUE),
            NULL,
            (LREAL)(__GET_VAR(data__->V,) / __GET_VAR(data__->J,)))) / 6.0)))) {
          __SET_VAR(data__->,SI,,__GET_VAR(data__->POSO,));
          __SET_VAR(data__->,VI,,__GET_VAR(data__->VO,));
          __SET_VAR(data__->,AI,,__GET_VAR(data__->AR,));
          __SET_VAR(data__->,JI,, -(__GET_VAR(data__->J,)));
          __SET_VAR(data__->,PHASE,,111.0);
        } else if ((ABS__LREAL__LREAL(
          (BOOL)__BOOL_LITERAL(TRUE),
          NULL,
          (LREAL)(__GET_VAR(data__->POSO,) - __GET_VAR(data__->LAST_TARGET,))) >= ABS__LREAL__LREAL(
          (BOOL)__BOOL_LITERAL(TRUE),
          NULL,
          (LREAL)(((( -(__GET_VAR(data__->J,)) * SQRT__LREAL__LREAL(
            (BOOL)__BOOL_LITERAL(TRUE),
            NULL,
            (LREAL)(__GET_VAR(data__->V,) / __GET_VAR(data__->J,)))) * SQRT__LREAL__LREAL(
            (BOOL)__BOOL_LITERAL(TRUE),
            NULL,
            (LREAL)(__GET_VAR(data__->V,) / __GET_VAR(data__->J,)))) * SQRT__LREAL__LREAL(
            (BOOL)__BOOL_LITERAL(TRUE),
            NULL,
            (LREAL)(__GET_VAR(data__->V,) / __GET_VAR(data__->J,)))) / 6.0)))) {
          __SET_VAR(data__->,SI,,(__GET_VAR(data__->LAST_TARGET,) - ABS__LREAL__LREAL(
            (BOOL)__BOOL_LITERAL(TRUE),
            NULL,
            (LREAL)((((__GET_VAR(data__->J,) * SQRT__LREAL__LREAL(
              (BOOL)__BOOL_LITERAL(TRUE),
              NULL,
              (LREAL)(__GET_VAR(data__->V,) / __GET_VAR(data__->J,)))) * SQRT__LREAL__LREAL(
              (BOOL)__BOOL_LITERAL(TRUE),
              NULL,
              (LREAL)(__GET_VAR(data__->V,) / __GET_VAR(data__->J,)))) * SQRT__LREAL__LREAL(
              (BOOL)__BOOL_LITERAL(TRUE),
              NULL,
              (LREAL)(__GET_VAR(data__->V,) / __GET_VAR(data__->J,)))) / 6.0))));
          __SET_VAR(data__->,VI,, -(ABS__LREAL__LREAL(
            (BOOL)__BOOL_LITERAL(TRUE),
            NULL,
            (LREAL)(__GET_VAR(data__->V,) / 2.0))));
          __SET_VAR(data__->,AI,, -(ABS__LREAL__LREAL(
            (BOOL)__BOOL_LITERAL(TRUE),
            NULL,
            (LREAL)(__GET_VAR(data__->J,) * SQRT__LREAL__LREAL(
              (BOOL)__BOOL_LITERAL(TRUE),
              NULL,
              (LREAL)(__GET_VAR(data__->V,) / __GET_VAR(data__->J,)))))));
          __SET_VAR(data__->,JI,,0.0);
          __SET_VAR(data__->,PHASE,,111.1);
        };
      } else if (((ABS__LREAL__LREAL(
        (BOOL)__BOOL_LITERAL(TRUE),
        NULL,
        (LREAL)(__GET_VAR(data__->POSO,) - __GET_VAR(data__->LAST_TARGET,))) >= ABS__LREAL__LREAL(
        (BOOL)__BOOL_LITERAL(TRUE),
        NULL,
        (LREAL)(((( -(__GET_VAR(data__->J,)) * SQRT__LREAL__LREAL(
          (BOOL)__BOOL_LITERAL(TRUE),
          NULL,
          (LREAL)(__GET_VAR(data__->V,) / __GET_VAR(data__->J,)))) * SQRT__LREAL__LREAL(
          (BOOL)__BOOL_LITERAL(TRUE),
          NULL,
          (LREAL)(__GET_VAR(data__->V,) / __GET_VAR(data__->J,)))) * SQRT__LREAL__LREAL(
          (BOOL)__BOOL_LITERAL(TRUE),
          NULL,
          (LREAL)(__GET_VAR(data__->V,) / __GET_VAR(data__->J,)))) / 6.0))) && (ABS__LREAL__LREAL(
        (BOOL)__BOOL_LITERAL(TRUE),
        NULL,
        (LREAL)(__GET_VAR(data__->POSO,) - __GET_VAR(data__->LAST_TARGET,))) < ABS__LREAL__LREAL(
        (BOOL)__BOOL_LITERAL(TRUE),
        NULL,
        (LREAL)( -(__GET_VAR(data__->V,)) * SQRT__LREAL__LREAL(
          (BOOL)__BOOL_LITERAL(TRUE),
          NULL,
          (LREAL)(__GET_VAR(data__->V,) / __GET_VAR(data__->J,)))))))) {
        __SET_VAR(data__->,AR,,(__GET_VAR(data__->AI,) + (__GET_VAR(data__->J,) * __GET_VAR(data__->TS,))));
        __SET_VAR(data__->,VO,,((__GET_VAR(data__->VC,) + (__GET_VAR(data__->AI,) * __GET_VAR(data__->TS,))) + (((__GET_VAR(data__->J,) * __GET_VAR(data__->TS,)) * __GET_VAR(data__->TS,)) / 2.0)));
        __SET_VAR(data__->,POSO,,(((__GET_VAR(data__->POSI,) + (__GET_VAR(data__->VC,) * __GET_VAR(data__->TS,))) + (((__GET_VAR(data__->AI,) * __GET_VAR(data__->TS,)) * __GET_VAR(data__->TS,)) / 2.0)) + ((((__GET_VAR(data__->J,) * __GET_VAR(data__->TS,)) * __GET_VAR(data__->TS,)) * __GET_VAR(data__->TS,)) / 6.0)));
        if ((ABS__LREAL__LREAL(
          (BOOL)__BOOL_LITERAL(TRUE),
          NULL,
          (LREAL)(__GET_VAR(data__->POSO,) - __GET_VAR(data__->LAST_TARGET,))) < ABS__LREAL__LREAL(
          (BOOL)__BOOL_LITERAL(TRUE),
          NULL,
          (LREAL)( -(__GET_VAR(data__->V,)) * SQRT__LREAL__LREAL(
            (BOOL)__BOOL_LITERAL(TRUE),
            NULL,
            (LREAL)(__GET_VAR(data__->V,) / __GET_VAR(data__->J,))))))) {
          __SET_VAR(data__->,SI,,__GET_VAR(data__->POSO,));
          __SET_VAR(data__->,VI,,__GET_VAR(data__->VO,));
          __SET_VAR(data__->,AI,,__GET_VAR(data__->AR,));
          __SET_VAR(data__->,JI,,__GET_VAR(data__->J,));
          __SET_VAR(data__->,PHASE,,222.0);
        } else if ((ABS__LREAL__LREAL(
          (BOOL)__BOOL_LITERAL(TRUE),
          NULL,
          (LREAL)(__GET_VAR(data__->POSO,) - __GET_VAR(data__->LAST_TARGET,))) >= ABS__LREAL__LREAL(
          (BOOL)__BOOL_LITERAL(TRUE),
          NULL,
          (LREAL)( -(__GET_VAR(data__->V,)) * SQRT__LREAL__LREAL(
            (BOOL)__BOOL_LITERAL(TRUE),
            NULL,
            (LREAL)(__GET_VAR(data__->V,) / __GET_VAR(data__->J,))))))) {
          __SET_VAR(data__->,SI,,(__GET_VAR(data__->LAST_TARGET,) - (__GET_VAR(data__->V,) * SQRT__LREAL__LREAL(
            (BOOL)__BOOL_LITERAL(TRUE),
            NULL,
            (LREAL)(__GET_VAR(data__->V,) / __GET_VAR(data__->J,))))));
          __SET_VAR(data__->,VI,, -(__GET_VAR(data__->V,)));
          __SET_VAR(data__->,AI,,0.0);
          __SET_VAR(data__->,JI,,0.0);
          __SET_VAR(data__->,PHASE,,222.1);
        };
      } else if (((ABS__LREAL__LREAL(
        (BOOL)__BOOL_LITERAL(TRUE),
        NULL,
        (LREAL)(__GET_VAR(data__->POSO,) - __GET_VAR(data__->LAST_TARGET,))) >= ABS__LREAL__LREAL(
        (BOOL)__BOOL_LITERAL(TRUE),
        NULL,
        (LREAL)( -(__GET_VAR(data__->V,)) * SQRT__LREAL__LREAL(
          (BOOL)__BOOL_LITERAL(TRUE),
          NULL,
          (LREAL)(__GET_VAR(data__->V,) / __GET_VAR(data__->J,)))))) && (ABS__LREAL__LREAL(
        (BOOL)__BOOL_LITERAL(TRUE),
        NULL,
        (LREAL)(__GET_VAR(data__->POSO,) - __GET_VAR(data__->LAST_TARGET,))) < ABS__LREAL__LREAL(
        (BOOL)__BOOL_LITERAL(TRUE),
        NULL,
        (LREAL) -(ABS__LREAL__LREAL(
          (BOOL)__BOOL_LITERAL(TRUE),
          NULL,
          (LREAL)(__GET_VAR(data__->DISTANCE,) + (__GET_VAR(data__->V,) * SQRT__LREAL__LREAL(
            (BOOL)__BOOL_LITERAL(TRUE),
            NULL,
            (LREAL)(__GET_VAR(data__->V,) / __GET_VAR(data__->J,))))))))))) {
        __SET_VAR(data__->,AR,,__GET_VAR(data__->AI,));
        __SET_VAR(data__->,VO,,(__GET_VAR(data__->VC,) + (__GET_VAR(data__->AR,) * __GET_VAR(data__->TS,))));
        __SET_VAR(data__->,POSO,,((__GET_VAR(data__->POSI,) + (__GET_VAR(data__->VC,) * __GET_VAR(data__->TS,))) + (((__GET_VAR(data__->J,) * __GET_VAR(data__->TS,)) * __GET_VAR(data__->TS,)) / 2.0)));
        if ((ABS__LREAL__LREAL(
          (BOOL)__BOOL_LITERAL(TRUE),
          NULL,
          (LREAL)(__GET_VAR(data__->POSO,) - __GET_VAR(data__->LAST_TARGET,))) < ABS__LREAL__LREAL(
          (BOOL)__BOOL_LITERAL(TRUE),
          NULL,
          (LREAL) -(ABS__LREAL__LREAL(
            (BOOL)__BOOL_LITERAL(TRUE),
            NULL,
            (LREAL)(__GET_VAR(data__->DISTANCE,) + (__GET_VAR(data__->V,) * SQRT__LREAL__LREAL(
              (BOOL)__BOOL_LITERAL(TRUE),
              NULL,
              (LREAL)(__GET_VAR(data__->V,) / __GET_VAR(data__->J,)))))))))) {
          __SET_VAR(data__->,SI,,__GET_VAR(data__->POSO,));
          __SET_VAR(data__->,VI,,__GET_VAR(data__->VO,));
          __SET_VAR(data__->,AI,,__GET_VAR(data__->AR,));
          __SET_VAR(data__->,JI,,0.0);
          __SET_VAR(data__->,PHASE,,333.0);
        } else if ((ABS__LREAL__LREAL(
          (BOOL)__BOOL_LITERAL(TRUE),
          NULL,
          (LREAL)(__GET_VAR(data__->POSO,) - __GET_VAR(data__->LAST_TARGET,))) >= ABS__LREAL__LREAL(
          (BOOL)__BOOL_LITERAL(TRUE),
          NULL,
          (LREAL) -(ABS__LREAL__LREAL(
            (BOOL)__BOOL_LITERAL(TRUE),
            NULL,
            (LREAL)(__GET_VAR(data__->DISTANCE,) + (__GET_VAR(data__->V,) * SQRT__LREAL__LREAL(
              (BOOL)__BOOL_LITERAL(TRUE),
              NULL,
              (LREAL)(__GET_VAR(data__->V,) / __GET_VAR(data__->J,)))))))))) {
          __SET_VAR(data__->,SI,,((__GET_VAR(data__->LAST_TARGET,) + __GET_VAR(data__->DISTANCE,)) + (__GET_VAR(data__->V,) * SQRT__LREAL__LREAL(
            (BOOL)__BOOL_LITERAL(TRUE),
            NULL,
            (LREAL)(__GET_VAR(data__->V,) / __GET_VAR(data__->J,))))));
          __SET_VAR(data__->,VI,, -(__GET_VAR(data__->V,)));
          __SET_VAR(data__->,AI,,0.0);
          __SET_VAR(data__->,JI,,0.0);
          __SET_VAR(data__->,PHASE,,333.1);
        };
      } else if (((ABS__LREAL__LREAL(
        (BOOL)__BOOL_LITERAL(TRUE),
        NULL,
        (LREAL)(__GET_VAR(data__->POSO,) - __GET_VAR(data__->LAST_TARGET,))) >= ABS__LREAL__LREAL(
        (BOOL)__BOOL_LITERAL(TRUE),
        NULL,
        (LREAL) -(ABS__LREAL__LREAL(
          (BOOL)__BOOL_LITERAL(TRUE),
          NULL,
          (LREAL)(__GET_VAR(data__->DISTANCE,) + (__GET_VAR(data__->V,) * SQRT__LREAL__LREAL(
            (BOOL)__BOOL_LITERAL(TRUE),
            NULL,
            (LREAL)(__GET_VAR(data__->V,) / __GET_VAR(data__->J,))))))))) && (ABS__LREAL__LREAL(
        (BOOL)__BOOL_LITERAL(TRUE),
        NULL,
        (LREAL)(__GET_VAR(data__->POSO,) - __GET_VAR(data__->LAST_TARGET,))) < ABS__LREAL__LREAL(
        (BOOL)__BOOL_LITERAL(TRUE),
        NULL,
        (LREAL) -(ABS__LREAL__LREAL(
          (BOOL)__BOOL_LITERAL(TRUE),
          NULL,
          (LREAL)(__GET_VAR(data__->DISTANCE,) + ((((__GET_VAR(data__->J,) * SQRT__LREAL__LREAL(
            (BOOL)__BOOL_LITERAL(TRUE),
            NULL,
            (LREAL)(__GET_VAR(data__->V,) / __GET_VAR(data__->J,)))) * SQRT__LREAL__LREAL(
            (BOOL)__BOOL_LITERAL(TRUE),
            NULL,
            (LREAL)(__GET_VAR(data__->V,) / __GET_VAR(data__->J,)))) * SQRT__LREAL__LREAL(
            (BOOL)__BOOL_LITERAL(TRUE),
            NULL,
            (LREAL)(__GET_VAR(data__->V,) / __GET_VAR(data__->J,)))) / 6.0)))))))) {
        __SET_VAR(data__->,AR,,(__GET_VAR(data__->AI,) + (__GET_VAR(data__->J,) * __GET_VAR(data__->TS,))));
        __SET_VAR(data__->,VO,,((__GET_VAR(data__->VC,) + (__GET_VAR(data__->AI,) * __GET_VAR(data__->TS,))) + (((__GET_VAR(data__->J,) * __GET_VAR(data__->TS,)) * __GET_VAR(data__->TS,)) / 2.0)));
        __SET_VAR(data__->,POSO,,(((__GET_VAR(data__->POSI,) + (__GET_VAR(data__->VC,) * __GET_VAR(data__->TS,))) + (((__GET_VAR(data__->AI,) * __GET_VAR(data__->TS,)) * __GET_VAR(data__->TS,)) / 2.0)) + ((((__GET_VAR(data__->J,) * __GET_VAR(data__->TS,)) * __GET_VAR(data__->TS,)) * __GET_VAR(data__->TS,)) / 6.0)));
        if ((ABS__LREAL__LREAL(
          (BOOL)__BOOL_LITERAL(TRUE),
          NULL,
          (LREAL)(__GET_VAR(data__->POSO,) - __GET_VAR(data__->LAST_TARGET,))) < ABS__LREAL__LREAL(
          (BOOL)__BOOL_LITERAL(TRUE),
          NULL,
          (LREAL) -(ABS__LREAL__LREAL(
            (BOOL)__BOOL_LITERAL(TRUE),
            NULL,
            (LREAL)(__GET_VAR(data__->DISTANCE,) + ((((__GET_VAR(data__->J,) * SQRT__LREAL__LREAL(
              (BOOL)__BOOL_LITERAL(TRUE),
              NULL,
              (LREAL)(__GET_VAR(data__->V,) / __GET_VAR(data__->J,)))) * SQRT__LREAL__LREAL(
              (BOOL)__BOOL_LITERAL(TRUE),
              NULL,
              (LREAL)(__GET_VAR(data__->V,) / __GET_VAR(data__->J,)))) * SQRT__LREAL__LREAL(
              (BOOL)__BOOL_LITERAL(TRUE),
              NULL,
              (LREAL)(__GET_VAR(data__->V,) / __GET_VAR(data__->J,)))) / 6.0))))))) {
          __SET_VAR(data__->,SI,,__GET_VAR(data__->POSO,));
          __SET_VAR(data__->,VI,,__GET_VAR(data__->VO,));
          __SET_VAR(data__->,AI,,__GET_VAR(data__->AR,));
          __SET_VAR(data__->,JI,,__GET_VAR(data__->J,));
          __SET_VAR(data__->,PHASE,,444.0);
        } else if ((ABS__LREAL__LREAL(
          (BOOL)__BOOL_LITERAL(TRUE),
          NULL,
          (LREAL)(__GET_VAR(data__->POSO,) - __GET_VAR(data__->LAST_TARGET,))) >= ABS__LREAL__LREAL(
          (BOOL)__BOOL_LITERAL(TRUE),
          NULL,
          (LREAL) -(ABS__LREAL__LREAL(
            (BOOL)__BOOL_LITERAL(TRUE),
            NULL,
            (LREAL)(__GET_VAR(data__->DISTANCE,) + ((((__GET_VAR(data__->J,) * SQRT__LREAL__LREAL(
              (BOOL)__BOOL_LITERAL(TRUE),
              NULL,
              (LREAL)(__GET_VAR(data__->V,) / __GET_VAR(data__->J,)))) * SQRT__LREAL__LREAL(
              (BOOL)__BOOL_LITERAL(TRUE),
              NULL,
              (LREAL)(__GET_VAR(data__->V,) / __GET_VAR(data__->J,)))) * SQRT__LREAL__LREAL(
              (BOOL)__BOOL_LITERAL(TRUE),
              NULL,
              (LREAL)(__GET_VAR(data__->V,) / __GET_VAR(data__->J,)))) / 6.0))))))) {
          __SET_VAR(data__->,SI,,((__GET_VAR(data__->LAST_TARGET,) + __GET_VAR(data__->DISTANCE,)) + ((((__GET_VAR(data__->J,) * SQRT__LREAL__LREAL(
            (BOOL)__BOOL_LITERAL(TRUE),
            NULL,
            (LREAL)(__GET_VAR(data__->V,) / __GET_VAR(data__->J,)))) * SQRT__LREAL__LREAL(
            (BOOL)__BOOL_LITERAL(TRUE),
            NULL,
            (LREAL)(__GET_VAR(data__->V,) / __GET_VAR(data__->J,)))) * SQRT__LREAL__LREAL(
            (BOOL)__BOOL_LITERAL(TRUE),
            NULL,
            (LREAL)(__GET_VAR(data__->V,) / __GET_VAR(data__->J,)))) / 6.0)));
          __SET_VAR(data__->,VI,,( -(__GET_VAR(data__->V,)) / 2.0));
          __SET_VAR(data__->,AI,,(__GET_VAR(data__->J,) * SQRT__LREAL__LREAL(
            (BOOL)__BOOL_LITERAL(TRUE),
            NULL,
            (LREAL)(__GET_VAR(data__->V,) / __GET_VAR(data__->J,)))));
          __SET_VAR(data__->,JI,,0.0);
          __SET_VAR(data__->,PHASE,,444.1);
        };
      } else if (((ABS__LREAL__LREAL(
        (BOOL)__BOOL_LITERAL(TRUE),
        NULL,
        (LREAL)(__GET_VAR(data__->POSO,) - __GET_VAR(data__->LAST_TARGET,))) >= ABS__LREAL__LREAL(
        (BOOL)__BOOL_LITERAL(TRUE),
        NULL,
        (LREAL) -(ABS__LREAL__LREAL(
          (BOOL)__BOOL_LITERAL(TRUE),
          NULL,
          (LREAL)(__GET_VAR(data__->DISTANCE,) + ((((__GET_VAR(data__->J,) * SQRT__LREAL__LREAL(
            (BOOL)__BOOL_LITERAL(TRUE),
            NULL,
            (LREAL)(__GET_VAR(data__->V,) / __GET_VAR(data__->J,)))) * SQRT__LREAL__LREAL(
            (BOOL)__BOOL_LITERAL(TRUE),
            NULL,
            (LREAL)(__GET_VAR(data__->V,) / __GET_VAR(data__->J,)))) * SQRT__LREAL__LREAL(
            (BOOL)__BOOL_LITERAL(TRUE),
            NULL,
            (LREAL)(__GET_VAR(data__->V,) / __GET_VAR(data__->J,)))) / 6.0)))))) && (ABS__LREAL__LREAL(
        (BOOL)__BOOL_LITERAL(TRUE),
        NULL,
        (LREAL)(__GET_VAR(data__->POSO,) - __GET_VAR(data__->LAST_TARGET,))) < ABS__LREAL__LREAL(
        (BOOL)__BOOL_LITERAL(TRUE),
        NULL,
        (LREAL)__GET_VAR(data__->DISTANCE,))))) {
        __SET_VAR(data__->,AR,,(__GET_VAR(data__->AI,) - (__GET_VAR(data__->J,) * __GET_VAR(data__->TS,))));
        __SET_VAR(data__->,VO,,((__GET_VAR(data__->VC,) + (__GET_VAR(data__->AI,) * __GET_VAR(data__->TS,))) - (((__GET_VAR(data__->J,) * __GET_VAR(data__->TS,)) * __GET_VAR(data__->TS,)) / 2.0)));
        __SET_VAR(data__->,POSO,,(((__GET_VAR(data__->POSI,) + (__GET_VAR(data__->VC,) * __GET_VAR(data__->TS,))) + (((__GET_VAR(data__->AI,) * __GET_VAR(data__->TS,)) * __GET_VAR(data__->TS,)) / 2.0)) - ((((__GET_VAR(data__->J,) * __GET_VAR(data__->TS,)) * __GET_VAR(data__->TS,)) * __GET_VAR(data__->TS,)) / 6.0)));
        if ((ABS__LREAL__LREAL(
          (BOOL)__BOOL_LITERAL(TRUE),
          NULL,
          (LREAL)(__GET_VAR(data__->POSO,) - __GET_VAR(data__->LAST_TARGET,))) < ABS__LREAL__LREAL(
          (BOOL)__BOOL_LITERAL(TRUE),
          NULL,
          (LREAL)__GET_VAR(data__->DISTANCE,)))) {
          __SET_VAR(data__->,SI,,__GET_VAR(data__->POSO,));
          __SET_VAR(data__->,VI,,__GET_VAR(data__->VO,));
          __SET_VAR(data__->,AI,,__GET_VAR(data__->AR,));
          __SET_VAR(data__->,JI,, -(__GET_VAR(data__->J,)));
          __SET_VAR(data__->,PHASE,,555.0);
        } else if ((ABS__LREAL__LREAL(
          (BOOL)__BOOL_LITERAL(TRUE),
          NULL,
          (LREAL)(__GET_VAR(data__->POSO,) - __GET_VAR(data__->LAST_TARGET,))) >= ABS__LREAL__LREAL(
          (BOOL)__BOOL_LITERAL(TRUE),
          NULL,
          (LREAL)__GET_VAR(data__->DISTANCE,)))) {
          __SET_VAR(data__->,SI,,__GET_VAR(data__->TARGET,));
          __SET_VAR(data__->,POSO,,__GET_VAR(data__->TARGET,));
          __SET_VAR(data__->,LAST_TARGET,,__GET_VAR(data__->TARGET,));
          __SET_VAR(data__->,VI,,0.0);
          __SET_VAR(data__->,VO,,0.0);
          __SET_VAR(data__->,AI,,__GET_VAR(data__->AR,));
          __SET_VAR(data__->,JI,,0.0);
          __SET_VAR(data__->,PHASE,,555.1);
        };
      };
    };
    if ((((ABS__LREAL__LREAL(
      (BOOL)__BOOL_LITERAL(TRUE),
      NULL,
      (LREAL)__GET_VAR(data__->V,)) > ABS__LREAL__LREAL(
      (BOOL)__BOOL_LITERAL(TRUE),
      NULL,
      (LREAL)((__GET_VAR(data__->A,) * __GET_VAR(data__->A,)) / __GET_VAR(data__->J,)))) && (ABS__LREAL__LREAL(
      (BOOL)__BOOL_LITERAL(TRUE),
      NULL,
      (LREAL)__GET_VAR(data__->DISTANCE,)) < ABS__LREAL__LREAL(
      (BOOL)__BOOL_LITERAL(TRUE),
      NULL,
      (LREAL)(__GET_VAR(data__->V,) * ((__GET_VAR(data__->V,) / __GET_VAR(data__->A,)) + (__GET_VAR(data__->A,) / __GET_VAR(data__->J,))))))) && (ABS__LREAL__LREAL(
      (BOOL)__BOOL_LITERAL(TRUE),
      NULL,
      (LREAL)__GET_VAR(data__->DISTANCE,)) >= ABS__LREAL__LREAL(
      (BOOL)__BOOL_LITERAL(TRUE),
      NULL,
      (LREAL)((((2.0 * __GET_VAR(data__->A,)) * __GET_VAR(data__->A,)) * __GET_VAR(data__->A,)) / (__GET_VAR(data__->J,) * __GET_VAR(data__->J,))))))) {
      if ((ABS__LREAL__LREAL(
        (BOOL)__BOOL_LITERAL(TRUE),
        NULL,
        (LREAL)(__GET_VAR(data__->POSO,) - __GET_VAR(data__->LAST_TARGET,))) < (((__GET_VAR(data__->A,) * __GET_VAR(data__->A,)) * __GET_VAR(data__->A,)) / ((6.0 * __GET_VAR(data__->J,)) * __GET_VAR(data__->J,))))) {
        __SET_VAR(data__->,AR,,(__GET_VAR(data__->AI,) - (__GET_VAR(data__->J,) * __GET_VAR(data__->TS,))));
        __SET_VAR(data__->,VO,,((__GET_VAR(data__->VC,) + (__GET_VAR(data__->AI,) * __GET_VAR(data__->TS,))) - (((__GET_VAR(data__->J,) * __GET_VAR(data__->TS,)) * __GET_VAR(data__->TS,)) / 2.0)));
        __SET_VAR(data__->,POSO,,(((__GET_VAR(data__->POSI,) + (__GET_VAR(data__->VC,) * __GET_VAR(data__->TS,))) + (((__GET_VAR(data__->AI,) * __GET_VAR(data__->TS,)) * __GET_VAR(data__->TS,)) / 2.0)) - ((((__GET_VAR(data__->J,) * __GET_VAR(data__->TS,)) * __GET_VAR(data__->TS,)) * __GET_VAR(data__->TS,)) / 6.0)));
        if ((ABS__LREAL__LREAL(
          (BOOL)__BOOL_LITERAL(TRUE),
          NULL,
          (LREAL)(__GET_VAR(data__->POSO,) - __GET_VAR(data__->LAST_TARGET,))) < (((__GET_VAR(data__->A,) * __GET_VAR(data__->A,)) * __GET_VAR(data__->A,)) / ((6.0 * __GET_VAR(data__->J,)) * __GET_VAR(data__->J,))))) {
          __SET_VAR(data__->,SI,,__GET_VAR(data__->POSO,));
          __SET_VAR(data__->,VI,,__GET_VAR(data__->VO,));
          __SET_VAR(data__->,AI,,__GET_VAR(data__->AR,));
          __SET_VAR(data__->,JI,, -(__GET_VAR(data__->J,)));
          __SET_VAR(data__->,PHASE,,11.0);
        } else if ((ABS__LREAL__LREAL(
          (BOOL)__BOOL_LITERAL(TRUE),
          NULL,
          (LREAL)(__GET_VAR(data__->POSO,) - __GET_VAR(data__->LAST_TARGET,))) >= (((__GET_VAR(data__->A,) * __GET_VAR(data__->A,)) * __GET_VAR(data__->A,)) / ((6.0 * __GET_VAR(data__->J,)) * __GET_VAR(data__->J,))))) {
          __SET_VAR(data__->,SI,,(__GET_VAR(data__->LAST_TARGET,) - (((__GET_VAR(data__->A,) * __GET_VAR(data__->A,)) * __GET_VAR(data__->A,)) / ((6.0 * __GET_VAR(data__->J,)) * __GET_VAR(data__->J,)))));
          __SET_VAR(data__->,VI,,__GET_VAR(data__->VO,));
          __SET_VAR(data__->,AI,, -(__GET_VAR(data__->A,)));
          __SET_VAR(data__->,JI,,0.0);
          __SET_VAR(data__->,PHASE,,11.1);
        };
      } else if (((ABS__LREAL__LREAL(
        (BOOL)__BOOL_LITERAL(TRUE),
        NULL,
        (LREAL)(__GET_VAR(data__->POSO,) - __GET_VAR(data__->LAST_TARGET,))) >= (((__GET_VAR(data__->A,) * __GET_VAR(data__->A,)) * __GET_VAR(data__->A,)) / ((6.0 * __GET_VAR(data__->J,)) * __GET_VAR(data__->J,)))) && (ABS__LREAL__LREAL(
        (BOOL)__BOOL_LITERAL(TRUE),
        NULL,
        (LREAL)(__GET_VAR(data__->POSO,) - __GET_VAR(data__->LAST_TARGET,))) < ABS__LREAL__LREAL(
        (BOOL)__BOOL_LITERAL(TRUE),
        NULL,
        (LREAL)(((((((__GET_VAR(data__->A,) * __GET_VAR(data__->A,)) * __GET_VAR(data__->A,)) / (__GET_VAR(data__->J,) * __GET_VAR(data__->J,))) - __GET_VAR(data__->DISTANCE,)) - (((__GET_VAR(data__->A,) * __GET_VAR(data__->A,)) * SQRT__LREAL__LREAL(
          (BOOL)__BOOL_LITERAL(TRUE),
          NULL,
          (LREAL)(((__GET_VAR(data__->A,) * __GET_VAR(data__->A,)) / (__GET_VAR(data__->J,) * __GET_VAR(data__->J,))) - ((4.0 * __GET_VAR(data__->DISTANCE,)) / __GET_VAR(data__->A,))))) / __GET_VAR(data__->J,))) / 2.0) + (((__GET_VAR(data__->A,) * __GET_VAR(data__->A,)) * __GET_VAR(data__->A,)) / ((6.0 * __GET_VAR(data__->J,)) * __GET_VAR(data__->J,)))))))) {
        __SET_VAR(data__->,AR,,__GET_VAR(data__->AI,));
        __SET_VAR(data__->,VO,,(__GET_VAR(data__->VC,) + (__GET_VAR(data__->AI,) * __GET_VAR(data__->TS,))));
        __SET_VAR(data__->,POSO,,((__GET_VAR(data__->POSI,) + (__GET_VAR(data__->VC,) * __GET_VAR(data__->TS,))) + (((__GET_VAR(data__->J,) * __GET_VAR(data__->TS,)) * __GET_VAR(data__->TS,)) / 2.0)));
        if ((ABS__LREAL__LREAL(
          (BOOL)__BOOL_LITERAL(TRUE),
          NULL,
          (LREAL)(__GET_VAR(data__->POSO,) - __GET_VAR(data__->LAST_TARGET,))) < (((((((__GET_VAR(data__->A,) * __GET_VAR(data__->A,)) * __GET_VAR(data__->A,)) / (__GET_VAR(data__->J,) * __GET_VAR(data__->J,))) - __GET_VAR(data__->DISTANCE,)) - (((__GET_VAR(data__->A,) * __GET_VAR(data__->A,)) * SQRT__LREAL__LREAL(
          (BOOL)__BOOL_LITERAL(TRUE),
          NULL,
          (LREAL)(((__GET_VAR(data__->A,) * __GET_VAR(data__->A,)) / (__GET_VAR(data__->J,) * __GET_VAR(data__->J,))) - ((4.0 * __GET_VAR(data__->DISTANCE,)) / __GET_VAR(data__->A,))))) / __GET_VAR(data__->J,))) / 2.0) + (((__GET_VAR(data__->A,) * __GET_VAR(data__->A,)) * __GET_VAR(data__->A,)) / ((6.0 * __GET_VAR(data__->J,)) * __GET_VAR(data__->J,)))))) {
          __SET_VAR(data__->,SI,,__GET_VAR(data__->POSO,));
          __SET_VAR(data__->,VI,,__GET_VAR(data__->VO,));
          __SET_VAR(data__->,AI,,__GET_VAR(data__->AR,));
          __SET_VAR(data__->,JI,,0.0);
          __SET_VAR(data__->,PHASE,,22.0);
        } else if ((ABS__LREAL__LREAL(
          (BOOL)__BOOL_LITERAL(TRUE),
          NULL,
          (LREAL)(__GET_VAR(data__->POSO,) - __GET_VAR(data__->LAST_TARGET,))) >= (((((((__GET_VAR(data__->A,) * __GET_VAR(data__->A,)) * __GET_VAR(data__->A,)) / (__GET_VAR(data__->J,) * __GET_VAR(data__->J,))) - __GET_VAR(data__->DISTANCE,)) - (((__GET_VAR(data__->A,) * __GET_VAR(data__->A,)) * SQRT__LREAL__LREAL(
          (BOOL)__BOOL_LITERAL(TRUE),
          NULL,
          (LREAL)(((__GET_VAR(data__->A,) * __GET_VAR(data__->A,)) / (__GET_VAR(data__->J,) * __GET_VAR(data__->J,))) - ((4.0 * __GET_VAR(data__->DISTANCE,)) / __GET_VAR(data__->A,))))) / __GET_VAR(data__->J,))) / 2.0) + (((__GET_VAR(data__->A,) * __GET_VAR(data__->A,)) * __GET_VAR(data__->A,)) / ((6.0 * __GET_VAR(data__->J,)) * __GET_VAR(data__->J,)))))) {
          __SET_VAR(data__->,SI,,(__GET_VAR(data__->LAST_TARGET,) - (((((((__GET_VAR(data__->A,) * __GET_VAR(data__->A,)) * __GET_VAR(data__->A,)) / (__GET_VAR(data__->J,) * __GET_VAR(data__->J,))) - __GET_VAR(data__->DISTANCE,)) - (((__GET_VAR(data__->A,) * __GET_VAR(data__->A,)) * SQRT__LREAL__LREAL(
            (BOOL)__BOOL_LITERAL(TRUE),
            NULL,
            (LREAL)(((__GET_VAR(data__->A,) * __GET_VAR(data__->A,)) / (__GET_VAR(data__->J,) * __GET_VAR(data__->J,))) - ((4.0 * __GET_VAR(data__->DISTANCE,)) / __GET_VAR(data__->A,))))) / __GET_VAR(data__->J,))) / 2.0) + (((__GET_VAR(data__->A,) * __GET_VAR(data__->A,)) * __GET_VAR(data__->A,)) / ((6.0 * __GET_VAR(data__->J,)) * __GET_VAR(data__->J,))))));
          __SET_VAR(data__->,VI,,(((__GET_VAR(data__->A,) * __GET_VAR(data__->A,)) / __GET_VAR(data__->J,)) - ((__GET_VAR(data__->A,) * SQRT__LREAL__LREAL(
            (BOOL)__BOOL_LITERAL(TRUE),
            NULL,
            (LREAL)(((__GET_VAR(data__->A,) * __GET_VAR(data__->A,)) / (__GET_VAR(data__->J,) * __GET_VAR(data__->J,))) - ((4.0 * __GET_VAR(data__->DISTANCE,)) / __GET_VAR(data__->A,))))) / 2.0)));
          __SET_VAR(data__->,AI,, -(__GET_VAR(data__->A,)));
          __SET_VAR(data__->,PHASE,,22.1);
        };
      } else if (((ABS__LREAL__LREAL(
        (BOOL)__BOOL_LITERAL(TRUE),
        NULL,
        (LREAL)(__GET_VAR(data__->POSO,) - __GET_VAR(data__->LAST_TARGET,))) >= (((((((__GET_VAR(data__->A,) * __GET_VAR(data__->A,)) * __GET_VAR(data__->A,)) / (__GET_VAR(data__->J,) * __GET_VAR(data__->J,))) - __GET_VAR(data__->DISTANCE,)) - (((__GET_VAR(data__->A,) * __GET_VAR(data__->A,)) * SQRT__LREAL__LREAL(
        (BOOL)__BOOL_LITERAL(TRUE),
        NULL,
        (LREAL)(((__GET_VAR(data__->A,) * __GET_VAR(data__->A,)) / (__GET_VAR(data__->J,) * __GET_VAR(data__->J,))) - ((4.0 * __GET_VAR(data__->DISTANCE,)) / __GET_VAR(data__->A,))))) / __GET_VAR(data__->J,))) / 2.0) + (((__GET_VAR(data__->A,) * __GET_VAR(data__->A,)) * __GET_VAR(data__->A,)) / ((6.0 * __GET_VAR(data__->J,)) * __GET_VAR(data__->J,))))) && (ABS__LREAL__LREAL(
        (BOOL)__BOOL_LITERAL(TRUE),
        NULL,
        (LREAL)(__GET_VAR(data__->POSO,) - __GET_VAR(data__->LAST_TARGET,))) < ABS__LREAL__LREAL(
        (BOOL)__BOOL_LITERAL(TRUE),
        NULL,
        (LREAL)(__GET_VAR(data__->DISTANCE,) / 2.0))))) {
        __SET_VAR(data__->,AR,,(__GET_VAR(data__->AI,) + (__GET_VAR(data__->J,) * __GET_VAR(data__->TS,))));
        __SET_VAR(data__->,VO,,((__GET_VAR(data__->VC,) + (__GET_VAR(data__->AI,) * __GET_VAR(data__->TS,))) + (((__GET_VAR(data__->J,) * __GET_VAR(data__->TS,)) * __GET_VAR(data__->TS,)) / 2.0)));
        __SET_VAR(data__->,POSO,,(((__GET_VAR(data__->POSI,) + (__GET_VAR(data__->VC,) * __GET_VAR(data__->TS,))) + (((__GET_VAR(data__->AR,) * __GET_VAR(data__->TS,)) * __GET_VAR(data__->TS,)) / 2.0)) + ((((__GET_VAR(data__->J,) * __GET_VAR(data__->TS,)) * __GET_VAR(data__->TS,)) * __GET_VAR(data__->TS,)) / 6.0)));
        if ((ABS__LREAL__LREAL(
          (BOOL)__BOOL_LITERAL(TRUE),
          NULL,
          (LREAL)(__GET_VAR(data__->POSO,) - __GET_VAR(data__->LAST_TARGET,))) < ABS__LREAL__LREAL(
          (BOOL)__BOOL_LITERAL(TRUE),
          NULL,
          (LREAL)(__GET_VAR(data__->DISTANCE,) / 2.0)))) {
          __SET_VAR(data__->,SI,,__GET_VAR(data__->POSO,));
          __SET_VAR(data__->,VI,,__GET_VAR(data__->VO,));
          __SET_VAR(data__->,AI,,__GET_VAR(data__->AR,));
          __SET_VAR(data__->,JI,,__GET_VAR(data__->J,));
          __SET_VAR(data__->,PHASE,,33.0);
        } else if ((ABS__LREAL__LREAL(
          (BOOL)__BOOL_LITERAL(TRUE),
          NULL,
          (LREAL)(__GET_VAR(data__->POSO,) - __GET_VAR(data__->LAST_TARGET,))) >= ABS__LREAL__LREAL(
          (BOOL)__BOOL_LITERAL(TRUE),
          NULL,
          (LREAL)(__GET_VAR(data__->DISTANCE,) / 2.0)))) {
          __SET_VAR(data__->,SI,,(__GET_VAR(data__->LAST_TARGET,) + (__GET_VAR(data__->DISTANCE,) / 2.0)));
          __SET_VAR(data__->,VI,,(((__GET_VAR(data__->A,) * __GET_VAR(data__->A,)) / (2.0 * __GET_VAR(data__->J,))) - ((__GET_VAR(data__->A,) * SQRT__LREAL__LREAL(
            (BOOL)__BOOL_LITERAL(TRUE),
            NULL,
            (LREAL)(((__GET_VAR(data__->A,) * __GET_VAR(data__->A,)) / (__GET_VAR(data__->J,) * __GET_VAR(data__->J,))) - ((4.0 * __GET_VAR(data__->DISTANCE,)) / __GET_VAR(data__->A,))))) / 2.0)));
          __SET_VAR(data__->,AI,,0.0);
          __SET_VAR(data__->,PHASE,,33.1);
        };
      } else if (((ABS__LREAL__LREAL(
        (BOOL)__BOOL_LITERAL(TRUE),
        NULL,
        (LREAL)(__GET_VAR(data__->POSO,) - __GET_VAR(data__->LAST_TARGET,))) >= ABS__LREAL__LREAL(
        (BOOL)__BOOL_LITERAL(TRUE),
        NULL,
        (LREAL)(__GET_VAR(data__->DISTANCE,) / 2.0))) && (ABS__LREAL__LREAL(
        (BOOL)__BOOL_LITERAL(TRUE),
        NULL,
        (LREAL)(__GET_VAR(data__->POSO,) - __GET_VAR(data__->LAST_TARGET,))) < (ABS__LREAL__LREAL(
        (BOOL)__BOOL_LITERAL(TRUE),
        NULL,
        (LREAL)__GET_VAR(data__->DISTANCE,)) - (((((((__GET_VAR(data__->A,) * __GET_VAR(data__->A,)) * __GET_VAR(data__->A,)) / (__GET_VAR(data__->J,) * __GET_VAR(data__->J,))) + ABS__LREAL__LREAL(
        (BOOL)__BOOL_LITERAL(TRUE),
        NULL,
        (LREAL)__GET_VAR(data__->DISTANCE,))) - (((__GET_VAR(data__->A,) * __GET_VAR(data__->A,)) * SQRT__LREAL__LREAL(
        (BOOL)__BOOL_LITERAL(TRUE),
        NULL,
        (LREAL)(((__GET_VAR(data__->A,) * __GET_VAR(data__->A,)) / (__GET_VAR(data__->J,) * __GET_VAR(data__->J,))) + ((4.0 * ABS__LREAL__LREAL(
          (BOOL)__BOOL_LITERAL(TRUE),
          NULL,
          (LREAL)__GET_VAR(data__->DISTANCE,))) / __GET_VAR(data__->A,))))) / __GET_VAR(data__->J,))) / 2.0) + (((__GET_VAR(data__->A,) * __GET_VAR(data__->A,)) * __GET_VAR(data__->A,)) / ((6.0 * __GET_VAR(data__->J,)) * __GET_VAR(data__->J,)))))))) {
        __SET_VAR(data__->,AR,,(__GET_VAR(data__->AI,) + (__GET_VAR(data__->J,) * __GET_VAR(data__->TS,))));
        __SET_VAR(data__->,VO,,((__GET_VAR(data__->VC,) + (__GET_VAR(data__->AI,) * __GET_VAR(data__->TS,))) + (((__GET_VAR(data__->J,) * __GET_VAR(data__->TS,)) * __GET_VAR(data__->TS,)) / 2.0)));
        __SET_VAR(data__->,POSO,,(((__GET_VAR(data__->POSI,) + (__GET_VAR(data__->VC,) * __GET_VAR(data__->TS,))) + (((__GET_VAR(data__->AR,) * __GET_VAR(data__->TS,)) * __GET_VAR(data__->TS,)) / 2.0)) + ((((__GET_VAR(data__->J,) * __GET_VAR(data__->TS,)) * __GET_VAR(data__->TS,)) * __GET_VAR(data__->TS,)) / 6.0)));
        if ((ABS__LREAL__LREAL(
          (BOOL)__BOOL_LITERAL(TRUE),
          NULL,
          (LREAL)(__GET_VAR(data__->POSO,) - __GET_VAR(data__->LAST_TARGET,))) < (ABS__LREAL__LREAL(
          (BOOL)__BOOL_LITERAL(TRUE),
          NULL,
          (LREAL)__GET_VAR(data__->DISTANCE,)) - (((((((__GET_VAR(data__->A,) * __GET_VAR(data__->A,)) * __GET_VAR(data__->A,)) / (__GET_VAR(data__->J,) * __GET_VAR(data__->J,))) + ABS__LREAL__LREAL(
          (BOOL)__BOOL_LITERAL(TRUE),
          NULL,
          (LREAL)__GET_VAR(data__->DISTANCE,))) - (((__GET_VAR(data__->A,) * __GET_VAR(data__->A,)) * SQRT__LREAL__LREAL(
          (BOOL)__BOOL_LITERAL(TRUE),
          NULL,
          (LREAL)(((__GET_VAR(data__->A,) * __GET_VAR(data__->A,)) / (__GET_VAR(data__->J,) * __GET_VAR(data__->J,))) + ((4.0 * ABS__LREAL__LREAL(
            (BOOL)__BOOL_LITERAL(TRUE),
            NULL,
            (LREAL)__GET_VAR(data__->DISTANCE,))) / __GET_VAR(data__->A,))))) / __GET_VAR(data__->J,))) / 2.0) + (((__GET_VAR(data__->A,) * __GET_VAR(data__->A,)) * __GET_VAR(data__->A,)) / ((6.0 * __GET_VAR(data__->J,)) * __GET_VAR(data__->J,))))))) {
          __SET_VAR(data__->,SI,,__GET_VAR(data__->POSO,));
          __SET_VAR(data__->,VI,,__GET_VAR(data__->VO,));
          __SET_VAR(data__->,AI,,__GET_VAR(data__->AR,));
          __SET_VAR(data__->,JI,,__GET_VAR(data__->J,));
          __SET_VAR(data__->,PHASE,,44.0);
        } else if ((ABS__LREAL__LREAL(
          (BOOL)__BOOL_LITERAL(TRUE),
          NULL,
          (LREAL)(__GET_VAR(data__->POSO,) - __GET_VAR(data__->LAST_TARGET,))) >= (ABS__LREAL__LREAL(
          (BOOL)__BOOL_LITERAL(TRUE),
          NULL,
          (LREAL)__GET_VAR(data__->DISTANCE,)) - (((((((__GET_VAR(data__->A,) * __GET_VAR(data__->A,)) * __GET_VAR(data__->A,)) / (__GET_VAR(data__->J,) * __GET_VAR(data__->J,))) + ABS__LREAL__LREAL(
          (BOOL)__BOOL_LITERAL(TRUE),
          NULL,
          (LREAL)__GET_VAR(data__->DISTANCE,))) - (((__GET_VAR(data__->A,) * __GET_VAR(data__->A,)) * SQRT__LREAL__LREAL(
          (BOOL)__BOOL_LITERAL(TRUE),
          NULL,
          (LREAL)(((__GET_VAR(data__->A,) * __GET_VAR(data__->A,)) / (__GET_VAR(data__->J,) * __GET_VAR(data__->J,))) + ((4.0 * ABS__LREAL__LREAL(
            (BOOL)__BOOL_LITERAL(TRUE),
            NULL,
            (LREAL)__GET_VAR(data__->DISTANCE,))) / __GET_VAR(data__->A,))))) / __GET_VAR(data__->J,))) / 2.0) + (((__GET_VAR(data__->A,) * __GET_VAR(data__->A,)) * __GET_VAR(data__->A,)) / ((6.0 * __GET_VAR(data__->J,)) * __GET_VAR(data__->J,))))))) {
          __SET_VAR(data__->,SI,,(__GET_VAR(data__->LAST_TARGET,) - ABS__LREAL__LREAL(
            (BOOL)__BOOL_LITERAL(TRUE),
            NULL,
            (LREAL)(ABS__LREAL__LREAL(
              (BOOL)__BOOL_LITERAL(TRUE),
              NULL,
              (LREAL)__GET_VAR(data__->DISTANCE,)) - (((((((__GET_VAR(data__->A,) * __GET_VAR(data__->A,)) * __GET_VAR(data__->A,)) / (__GET_VAR(data__->J,) * __GET_VAR(data__->J,))) + ABS__LREAL__LREAL(
              (BOOL)__BOOL_LITERAL(TRUE),
              NULL,
              (LREAL)__GET_VAR(data__->DISTANCE,))) - (((__GET_VAR(data__->A,) * __GET_VAR(data__->A,)) * SQRT__LREAL__LREAL(
              (BOOL)__BOOL_LITERAL(TRUE),
              NULL,
              (LREAL)(((__GET_VAR(data__->A,) * __GET_VAR(data__->A,)) / (__GET_VAR(data__->J,) * __GET_VAR(data__->J,))) + ((4.0 * ABS__LREAL__LREAL(
                (BOOL)__BOOL_LITERAL(TRUE),
                NULL,
                (LREAL)__GET_VAR(data__->DISTANCE,))) / __GET_VAR(data__->A,))))) / __GET_VAR(data__->J,))) / 2.0) + (((__GET_VAR(data__->A,) * __GET_VAR(data__->A,)) * __GET_VAR(data__->A,)) / ((6.0 * __GET_VAR(data__->J,)) * __GET_VAR(data__->J,))))))));
          __SET_VAR(data__->,VI,,(((__GET_VAR(data__->A,) * __GET_VAR(data__->A,)) / __GET_VAR(data__->J,)) - ((__GET_VAR(data__->A,) * SQRT__LREAL__LREAL(
            (BOOL)__BOOL_LITERAL(TRUE),
            NULL,
            (LREAL)(((__GET_VAR(data__->A,) * __GET_VAR(data__->A,)) / (__GET_VAR(data__->J,) * __GET_VAR(data__->J,))) - ((4.0 * __GET_VAR(data__->DISTANCE,)) / __GET_VAR(data__->A,))))) / 2.0)));
          __SET_VAR(data__->,AI,,__GET_VAR(data__->A,));
          __SET_VAR(data__->,JI,,0.0);
          __SET_VAR(data__->,PHASE,,44.1);
        };
      } else if (((ABS__LREAL__LREAL(
        (BOOL)__BOOL_LITERAL(TRUE),
        NULL,
        (LREAL)(__GET_VAR(data__->POSO,) - __GET_VAR(data__->LAST_TARGET,))) >= (ABS__LREAL__LREAL(
        (BOOL)__BOOL_LITERAL(TRUE),
        NULL,
        (LREAL)__GET_VAR(data__->DISTANCE,)) - (((((((__GET_VAR(data__->A,) * __GET_VAR(data__->A,)) * __GET_VAR(data__->A,)) / (__GET_VAR(data__->J,) * __GET_VAR(data__->J,))) + ABS__LREAL__LREAL(
        (BOOL)__BOOL_LITERAL(TRUE),
        NULL,
        (LREAL)__GET_VAR(data__->DISTANCE,))) - (((__GET_VAR(data__->A,) * __GET_VAR(data__->A,)) * SQRT__LREAL__LREAL(
        (BOOL)__BOOL_LITERAL(TRUE),
        NULL,
        (LREAL)(((__GET_VAR(data__->A,) * __GET_VAR(data__->A,)) / (__GET_VAR(data__->J,) * __GET_VAR(data__->J,))) + ((4.0 * ABS__LREAL__LREAL(
          (BOOL)__BOOL_LITERAL(TRUE),
          NULL,
          (LREAL)__GET_VAR(data__->DISTANCE,))) / __GET_VAR(data__->A,))))) / __GET_VAR(data__->J,))) / 2.0) + (((__GET_VAR(data__->A,) * __GET_VAR(data__->A,)) * __GET_VAR(data__->A,)) / ((6.0 * __GET_VAR(data__->J,)) * __GET_VAR(data__->J,)))))) && (ABS__LREAL__LREAL(
        (BOOL)__BOOL_LITERAL(TRUE),
        NULL,
        (LREAL)(__GET_VAR(data__->POSO,) - __GET_VAR(data__->LAST_TARGET,))) < (ABS__LREAL__LREAL(
        (BOOL)__BOOL_LITERAL(TRUE),
        NULL,
        (LREAL)__GET_VAR(data__->DISTANCE,)) - (((__GET_VAR(data__->A,) * __GET_VAR(data__->A,)) * __GET_VAR(data__->A,)) / ((6.0 * __GET_VAR(data__->J,)) * __GET_VAR(data__->J,))))))) {
        __SET_VAR(data__->,AR,,__GET_VAR(data__->AI,));
        __SET_VAR(data__->,VO,,(__GET_VAR(data__->VC,) + (__GET_VAR(data__->AI,) * __GET_VAR(data__->TS,))));
        __SET_VAR(data__->,POSO,,((__GET_VAR(data__->POSI,) + (__GET_VAR(data__->VC,) * __GET_VAR(data__->TS,))) + (((__GET_VAR(data__->J,) * __GET_VAR(data__->TS,)) * __GET_VAR(data__->TS,)) / 2.0)));
        if ((ABS__LREAL__LREAL(
          (BOOL)__BOOL_LITERAL(TRUE),
          NULL,
          (LREAL)(__GET_VAR(data__->POSO,) - __GET_VAR(data__->LAST_TARGET,))) < (ABS__LREAL__LREAL(
          (BOOL)__BOOL_LITERAL(TRUE),
          NULL,
          (LREAL)__GET_VAR(data__->DISTANCE,)) - (((__GET_VAR(data__->A,) * __GET_VAR(data__->A,)) * __GET_VAR(data__->A,)) / ((6.0 * __GET_VAR(data__->J,)) * __GET_VAR(data__->J,)))))) {
          __SET_VAR(data__->,SI,,__GET_VAR(data__->POSO,));
          __SET_VAR(data__->,VI,,__GET_VAR(data__->VO,));
          __SET_VAR(data__->,AI,,__GET_VAR(data__->AR,));
          __SET_VAR(data__->,JI,,0.0);
          __SET_VAR(data__->,PHASE,,55.0);
        } else if ((ABS__LREAL__LREAL(
          (BOOL)__BOOL_LITERAL(TRUE),
          NULL,
          (LREAL)(__GET_VAR(data__->POSO,) - __GET_VAR(data__->LAST_TARGET,))) >= (ABS__LREAL__LREAL(
          (BOOL)__BOOL_LITERAL(TRUE),
          NULL,
          (LREAL)__GET_VAR(data__->DISTANCE,)) - (((__GET_VAR(data__->A,) * __GET_VAR(data__->A,)) * __GET_VAR(data__->A,)) / ((6.0 * __GET_VAR(data__->J,)) * __GET_VAR(data__->J,)))))) {
          __SET_VAR(data__->,SI,,((__GET_VAR(data__->LAST_TARGET,) + __GET_VAR(data__->DISTANCE,)) + (((__GET_VAR(data__->A,) * __GET_VAR(data__->A,)) * __GET_VAR(data__->A,)) / ((6.0 * __GET_VAR(data__->J,)) * __GET_VAR(data__->J,)))));
          __SET_VAR(data__->,VI,,(( -(__GET_VAR(data__->A,)) * __GET_VAR(data__->A,)) / (2.0 * __GET_VAR(data__->J,))));
          __SET_VAR(data__->,AI,,__GET_VAR(data__->A,));
          __SET_VAR(data__->,PHASE,,55.1);
        };
      } else if (((ABS__LREAL__LREAL(
        (BOOL)__BOOL_LITERAL(TRUE),
        NULL,
        (LREAL)(__GET_VAR(data__->POSO,) - __GET_VAR(data__->LAST_TARGET,))) >= (ABS__LREAL__LREAL(
        (BOOL)__BOOL_LITERAL(TRUE),
        NULL,
        (LREAL)__GET_VAR(data__->DISTANCE,)) - (((__GET_VAR(data__->A,) * __GET_VAR(data__->A,)) * __GET_VAR(data__->A,)) / ((6.0 * __GET_VAR(data__->J,)) * __GET_VAR(data__->J,))))) && (ABS__LREAL__LREAL(
        (BOOL)__BOOL_LITERAL(TRUE),
        NULL,
        (LREAL)(__GET_VAR(data__->POSO,) - __GET_VAR(data__->LAST_TARGET,))) < ABS__LREAL__LREAL(
        (BOOL)__BOOL_LITERAL(TRUE),
        NULL,
        (LREAL)__GET_VAR(data__->DISTANCE,))))) {
        __SET_VAR(data__->,AR,,(__GET_VAR(data__->AI,) - (__GET_VAR(data__->J,) * __GET_VAR(data__->TS,))));
        __SET_VAR(data__->,VO,,((__GET_VAR(data__->VC,) + (__GET_VAR(data__->AI,) * __GET_VAR(data__->TS,))) - (((__GET_VAR(data__->J,) * __GET_VAR(data__->TS,)) * __GET_VAR(data__->TS,)) / 2.0)));
        __SET_VAR(data__->,POSO,,(((__GET_VAR(data__->POSI,) + (__GET_VAR(data__->VC,) * __GET_VAR(data__->TS,))) + (((__GET_VAR(data__->AI,) * __GET_VAR(data__->TS,)) * __GET_VAR(data__->TS,)) / 2.0)) - ((((__GET_VAR(data__->J,) * __GET_VAR(data__->TS,)) * __GET_VAR(data__->TS,)) * __GET_VAR(data__->TS,)) / 6.0)));
        if ((ABS__LREAL__LREAL(
          (BOOL)__BOOL_LITERAL(TRUE),
          NULL,
          (LREAL)(__GET_VAR(data__->POSO,) - __GET_VAR(data__->LAST_TARGET,))) < ABS__LREAL__LREAL(
          (BOOL)__BOOL_LITERAL(TRUE),
          NULL,
          (LREAL)__GET_VAR(data__->DISTANCE,)))) {
          __SET_VAR(data__->,SI,,__GET_VAR(data__->POSO,));
          __SET_VAR(data__->,VI,,__GET_VAR(data__->VO,));
          __SET_VAR(data__->,AI,,__GET_VAR(data__->AR,));
          __SET_VAR(data__->,JI,, -(__GET_VAR(data__->J,)));
          __SET_VAR(data__->,PHASE,,66.0);
        } else if ((ABS__LREAL__LREAL(
          (BOOL)__BOOL_LITERAL(TRUE),
          NULL,
          (LREAL)(__GET_VAR(data__->POSO,) - __GET_VAR(data__->LAST_TARGET,))) >= ABS__LREAL__LREAL(
          (BOOL)__BOOL_LITERAL(TRUE),
          NULL,
          (LREAL)__GET_VAR(data__->DISTANCE,)))) {
          __SET_VAR(data__->,SI,,__GET_VAR(data__->TARGET,));
          __SET_VAR(data__->,POSO,,__GET_VAR(data__->TARGET,));
          __SET_VAR(data__->,LAST_TARGET,,__GET_VAR(data__->TARGET,));
          __SET_VAR(data__->,VI,,0.0);
          __SET_VAR(data__->,VO,,0.0);
          __SET_VAR(data__->,AI,,__GET_VAR(data__->AR,));
          __SET_VAR(data__->,JI,,0.0);
          __SET_VAR(data__->,PHASE,,66.1);
        };
      };
    };
    if (((__GET_VAR(data__->V,) > ((__GET_VAR(data__->A,) * __GET_VAR(data__->A,)) / __GET_VAR(data__->J,))) && (ABS__LREAL__LREAL(
      (BOOL)__BOOL_LITERAL(TRUE),
      NULL,
      (LREAL)__GET_VAR(data__->DISTANCE,)) >= (__GET_VAR(data__->V,) * ((__GET_VAR(data__->V,) / __GET_VAR(data__->A,)) + (__GET_VAR(data__->A,) / __GET_VAR(data__->J,))))))) {
      if ((ABS__LREAL__LREAL(
        (BOOL)__BOOL_LITERAL(TRUE),
        NULL,
        (LREAL)(__GET_VAR(data__->POSO,) - __GET_VAR(data__->LAST_TARGET,))) < ABS__LREAL__LREAL(
        (BOOL)__BOOL_LITERAL(TRUE),
        NULL,
        (LREAL)(((__GET_VAR(data__->A,) * __GET_VAR(data__->A,)) * __GET_VAR(data__->A,)) / ((6.0 * __GET_VAR(data__->J,)) * __GET_VAR(data__->J,)))))) {
        __SET_VAR(data__->,AR,,(__GET_VAR(data__->AI,) - (__GET_VAR(data__->J,) * __GET_VAR(data__->TS,))));
        __SET_VAR(data__->,VO,,((__GET_VAR(data__->VC,) + (__GET_VAR(data__->AI,) * __GET_VAR(data__->TS,))) - (((__GET_VAR(data__->J,) * __GET_VAR(data__->TS,)) * __GET_VAR(data__->TS,)) / 2.0)));
        __SET_VAR(data__->,POSO,,(((__GET_VAR(data__->POSI,) + (__GET_VAR(data__->VC,) * __GET_VAR(data__->TS,))) + (((__GET_VAR(data__->AI,) * __GET_VAR(data__->TS,)) * __GET_VAR(data__->TS,)) / 2.0)) - ((((__GET_VAR(data__->J,) * __GET_VAR(data__->TS,)) * __GET_VAR(data__->TS,)) * __GET_VAR(data__->TS,)) / 6.0)));
        if ((ABS__LREAL__LREAL(
          (BOOL)__BOOL_LITERAL(TRUE),
          NULL,
          (LREAL)(__GET_VAR(data__->POSO,) - __GET_VAR(data__->LAST_TARGET,))) < ABS__LREAL__LREAL(
          (BOOL)__BOOL_LITERAL(TRUE),
          NULL,
          (LREAL)(((__GET_VAR(data__->A,) * __GET_VAR(data__->A,)) * __GET_VAR(data__->A,)) / ((6.0 * __GET_VAR(data__->J,)) * __GET_VAR(data__->J,)))))) {
          __SET_VAR(data__->,SI,,__GET_VAR(data__->POSO,));
          __SET_VAR(data__->,VI,,__GET_VAR(data__->VO,));
          __SET_VAR(data__->,AI,,__GET_VAR(data__->AR,));
          __SET_VAR(data__->,JI,, -(__GET_VAR(data__->J,)));
          __SET_VAR(data__->,PHASE,,1.0);
        } else if ((ABS__LREAL__LREAL(
          (BOOL)__BOOL_LITERAL(TRUE),
          NULL,
          (LREAL)(__GET_VAR(data__->POSO,) - __GET_VAR(data__->LAST_TARGET,))) >= ABS__LREAL__LREAL(
          (BOOL)__BOOL_LITERAL(TRUE),
          NULL,
          (LREAL)(((__GET_VAR(data__->A,) * __GET_VAR(data__->A,)) * __GET_VAR(data__->A,)) / ((6.0 * __GET_VAR(data__->J,)) * __GET_VAR(data__->J,)))))) {
          __SET_VAR(data__->,SI,,(__GET_VAR(data__->LAST_TARGET,) - (((__GET_VAR(data__->A,) * __GET_VAR(data__->A,)) * __GET_VAR(data__->A,)) / ((6.0 * __GET_VAR(data__->J,)) * __GET_VAR(data__->J,)))));
          __SET_VAR(data__->,VI,,__GET_VAR(data__->VO,));
          __SET_VAR(data__->,AI,, -(__GET_VAR(data__->A,)));
          __SET_VAR(data__->,JI,,0.0);
          __SET_VAR(data__->,PHASE,,1.1);
        };
      } else if (((ABS__LREAL__LREAL(
        (BOOL)__BOOL_LITERAL(TRUE),
        NULL,
        (LREAL)(__GET_VAR(data__->POSO,) - __GET_VAR(data__->LAST_TARGET,))) >= ABS__LREAL__LREAL(
        (BOOL)__BOOL_LITERAL(TRUE),
        NULL,
        (LREAL)(((__GET_VAR(data__->A,) * __GET_VAR(data__->A,)) * __GET_VAR(data__->A,)) / ((6.0 * __GET_VAR(data__->J,)) * __GET_VAR(data__->J,))))) && (ABS__LREAL__LREAL(
        (BOOL)__BOOL_LITERAL(TRUE),
        NULL,
        (LREAL)(__GET_VAR(data__->POSO,) - __GET_VAR(data__->LAST_TARGET,))) < ABS__LREAL__LREAL(
        (BOOL)__BOOL_LITERAL(TRUE),
        NULL,
        (LREAL)((((__GET_VAR(data__->V,) * __GET_VAR(data__->V,)) / (2.0 * __GET_VAR(data__->A,))) - ((__GET_VAR(data__->A,) * __GET_VAR(data__->V,)) / (2.0 * __GET_VAR(data__->J,)))) + (((__GET_VAR(data__->A,) * __GET_VAR(data__->A,)) * __GET_VAR(data__->A,)) / ((6.0 * __GET_VAR(data__->J,)) * __GET_VAR(data__->J,)))))))) {
        __SET_VAR(data__->,AR,,__GET_VAR(data__->AI,));
        __SET_VAR(data__->,VO,,(__GET_VAR(data__->VC,) + (__GET_VAR(data__->AI,) * __GET_VAR(data__->TS,))));
        __SET_VAR(data__->,POSO,,((__GET_VAR(data__->POSI,) + (__GET_VAR(data__->VC,) * __GET_VAR(data__->TS,))) + (((__GET_VAR(data__->AI,) * __GET_VAR(data__->TS,)) * __GET_VAR(data__->TS,)) / 2.0)));
        if ((ABS__LREAL__LREAL(
          (BOOL)__BOOL_LITERAL(TRUE),
          NULL,
          (LREAL)(__GET_VAR(data__->POSO,) - __GET_VAR(data__->LAST_TARGET,))) < ABS__LREAL__LREAL(
          (BOOL)__BOOL_LITERAL(TRUE),
          NULL,
          (LREAL)((((__GET_VAR(data__->V,) * __GET_VAR(data__->V,)) / (2.0 * __GET_VAR(data__->A,))) - ((__GET_VAR(data__->A,) * __GET_VAR(data__->V,)) / (2.0 * __GET_VAR(data__->J,)))) + (((__GET_VAR(data__->A,) * __GET_VAR(data__->A,)) * __GET_VAR(data__->A,)) / ((6.0 * __GET_VAR(data__->J,)) * __GET_VAR(data__->J,))))))) {
          __SET_VAR(data__->,SI,,__GET_VAR(data__->POSO,));
          __SET_VAR(data__->,VI,,__GET_VAR(data__->VO,));
          __SET_VAR(data__->,AI,,__GET_VAR(data__->AR,));
          __SET_VAR(data__->,JI,,__GET_VAR(data__->J,));
          __SET_VAR(data__->,PHASE,,2.0);
        } else if ((ABS__LREAL__LREAL(
          (BOOL)__BOOL_LITERAL(TRUE),
          NULL,
          (LREAL)(__GET_VAR(data__->POSO,) - __GET_VAR(data__->LAST_TARGET,))) >= ABS__LREAL__LREAL(
          (BOOL)__BOOL_LITERAL(TRUE),
          NULL,
          (LREAL)((((__GET_VAR(data__->V,) * __GET_VAR(data__->V,)) / (2.0 * __GET_VAR(data__->A,))) - ((__GET_VAR(data__->A,) * __GET_VAR(data__->V,)) / (2.0 * __GET_VAR(data__->J,)))) + (((__GET_VAR(data__->A,) * __GET_VAR(data__->A,)) * __GET_VAR(data__->A,)) / ((6.0 * __GET_VAR(data__->J,)) * __GET_VAR(data__->J,))))))) {
          __SET_VAR(data__->,SI,,(((__GET_VAR(data__->LAST_TARGET,) - ((__GET_VAR(data__->V,) * __GET_VAR(data__->V,)) / (2.0 * __GET_VAR(data__->A,)))) + ((__GET_VAR(data__->A,) * __GET_VAR(data__->V,)) / (2.0 * __GET_VAR(data__->J,)))) - (((__GET_VAR(data__->A,) * __GET_VAR(data__->A,)) * __GET_VAR(data__->A,)) / ((6.0 * __GET_VAR(data__->J,)) * __GET_VAR(data__->J,)))));
          __SET_VAR(data__->,VI,,(((__GET_VAR(data__->A,) * __GET_VAR(data__->A,)) / (2.0 * __GET_VAR(data__->J,))) - __GET_VAR(data__->V,)));
          __SET_VAR(data__->,AI,, -(__GET_VAR(data__->A,)));
          __SET_VAR(data__->,PHASE,,2.1);
        };
      } else if (((ABS__LREAL__LREAL(
        (BOOL)__BOOL_LITERAL(TRUE),
        NULL,
        (LREAL)(__GET_VAR(data__->POSO,) - __GET_VAR(data__->LAST_TARGET,))) >= (((( -(__GET_VAR(data__->V,)) * __GET_VAR(data__->V,)) / (2.0 * __GET_VAR(data__->A,))) + ((__GET_VAR(data__->A,) * __GET_VAR(data__->V,)) / (2.0 * __GET_VAR(data__->J,)))) - (((__GET_VAR(data__->A,) * __GET_VAR(data__->A,)) * __GET_VAR(data__->A,)) / ((6.0 * __GET_VAR(data__->J,)) * __GET_VAR(data__->J,))))) && (ABS__LREAL__LREAL(
        (BOOL)__BOOL_LITERAL(TRUE),
        NULL,
        (LREAL)(__GET_VAR(data__->POSO,) - __GET_VAR(data__->LAST_TARGET,))) < ((__GET_VAR(data__->V,) * ((__GET_VAR(data__->V,) / __GET_VAR(data__->A,)) + (__GET_VAR(data__->A,) / __GET_VAR(data__->J,)))) / 2.0)))) {
        __SET_VAR(data__->,AR,,(__GET_VAR(data__->AI,) + (__GET_VAR(data__->J,) * __GET_VAR(data__->TS,))));
        __SET_VAR(data__->,VO,,((__GET_VAR(data__->VC,) + (__GET_VAR(data__->AI,) * __GET_VAR(data__->TS,))) + (((__GET_VAR(data__->J,) * __GET_VAR(data__->TS,)) * __GET_VAR(data__->TS,)) / 2.0)));
        __SET_VAR(data__->,POSO,,(((__GET_VAR(data__->POSI,) + (__GET_VAR(data__->VC,) * __GET_VAR(data__->TS,))) + (((__GET_VAR(data__->AI,) * __GET_VAR(data__->TS,)) * __GET_VAR(data__->TS,)) / 2.0)) + ((((__GET_VAR(data__->J,) * __GET_VAR(data__->TS,)) * __GET_VAR(data__->TS,)) * __GET_VAR(data__->TS,)) / 6.0)));
        if ((ABS__LREAL__LREAL(
          (BOOL)__BOOL_LITERAL(TRUE),
          NULL,
          (LREAL)(__GET_VAR(data__->POSO,) - __GET_VAR(data__->LAST_TARGET,))) < ((__GET_VAR(data__->V,) * ((__GET_VAR(data__->V,) / __GET_VAR(data__->A,)) + (__GET_VAR(data__->A,) / __GET_VAR(data__->J,)))) / 2.0))) {
          __SET_VAR(data__->,SI,,__GET_VAR(data__->POSO,));
          __SET_VAR(data__->,VI,,__GET_VAR(data__->VO,));
          __SET_VAR(data__->,AI,,__GET_VAR(data__->AR,));
          __SET_VAR(data__->,JI,,__GET_VAR(data__->J,));
          __SET_VAR(data__->,PHASE,,3.0);
        } else if ((ABS__LREAL__LREAL(
          (BOOL)__BOOL_LITERAL(TRUE),
          NULL,
          (LREAL)(__GET_VAR(data__->POSO,) - __GET_VAR(data__->LAST_TARGET,))) >= ((__GET_VAR(data__->V,) * ((__GET_VAR(data__->V,) / __GET_VAR(data__->A,)) + (__GET_VAR(data__->A,) / __GET_VAR(data__->J,)))) / 2.0))) {
          __SET_VAR(data__->,SI,,(__GET_VAR(data__->LAST_TARGET,) - ((__GET_VAR(data__->V,) * ((__GET_VAR(data__->V,) / __GET_VAR(data__->A,)) + (__GET_VAR(data__->A,) / __GET_VAR(data__->J,)))) / 2.0)));
          __SET_VAR(data__->,VI,, -(__GET_VAR(data__->V,)));
          __SET_VAR(data__->,AI,,0.0);
          __SET_VAR(data__->,JI,,0.0);
          __SET_VAR(data__->,PHASE,,3.1);
        };
      } else if (((ABS__LREAL__LREAL(
        (BOOL)__BOOL_LITERAL(TRUE),
        NULL,
        (LREAL)(__GET_VAR(data__->POSO,) - __GET_VAR(data__->LAST_TARGET,))) >= ((__GET_VAR(data__->V,) * ((__GET_VAR(data__->V,) / __GET_VAR(data__->A,)) + (__GET_VAR(data__->A,) / __GET_VAR(data__->J,)))) / 2.0)) && (ABS__LREAL__LREAL(
        (BOOL)__BOOL_LITERAL(TRUE),
        NULL,
        (LREAL)(__GET_VAR(data__->POSO,) - __GET_VAR(data__->LAST_TARGET,))) < (ABS__LREAL__LREAL(
        (BOOL)__BOOL_LITERAL(TRUE),
        NULL,
        (LREAL)__GET_VAR(data__->DISTANCE,)) - ((__GET_VAR(data__->V,) * ((__GET_VAR(data__->V,) / __GET_VAR(data__->A,)) + (__GET_VAR(data__->A,) / __GET_VAR(data__->J,)))) / 2.0))))) {
        __SET_VAR(data__->,AR,,__GET_VAR(data__->AI,));
        __SET_VAR(data__->,VO,,(__GET_VAR(data__->VC,) + (__GET_VAR(data__->AI,) * __GET_VAR(data__->TS,))));
        __SET_VAR(data__->,POSO,,((__GET_VAR(data__->POSI,) + (__GET_VAR(data__->VC,) * __GET_VAR(data__->TS,))) + (((__GET_VAR(data__->J,) * __GET_VAR(data__->TS,)) * __GET_VAR(data__->TS,)) / 2.0)));
        if ((ABS__LREAL__LREAL(
          (BOOL)__BOOL_LITERAL(TRUE),
          NULL,
          (LREAL)(__GET_VAR(data__->POSO,) - __GET_VAR(data__->LAST_TARGET,))) < (ABS__LREAL__LREAL(
          (BOOL)__BOOL_LITERAL(TRUE),
          NULL,
          (LREAL)__GET_VAR(data__->DISTANCE,)) - ((__GET_VAR(data__->V,) * ((__GET_VAR(data__->V,) / __GET_VAR(data__->A,)) + (__GET_VAR(data__->A,) / __GET_VAR(data__->J,)))) / 2.0)))) {
          __SET_VAR(data__->,SI,,__GET_VAR(data__->POSO,));
          __SET_VAR(data__->,VI,, -(__GET_VAR(data__->V,)));
          __SET_VAR(data__->,AI,,__GET_VAR(data__->AR,));
          __SET_VAR(data__->,JI,,0.0);
          __SET_VAR(data__->,PHASE,,4.0);
        } else if ((ABS__LREAL__LREAL(
          (BOOL)__BOOL_LITERAL(TRUE),
          NULL,
          (LREAL)(__GET_VAR(data__->POSO,) - __GET_VAR(data__->LAST_TARGET,))) >= (ABS__LREAL__LREAL(
          (BOOL)__BOOL_LITERAL(TRUE),
          NULL,
          (LREAL)__GET_VAR(data__->DISTANCE,)) - ((__GET_VAR(data__->V,) * ((__GET_VAR(data__->V,) / __GET_VAR(data__->A,)) + (__GET_VAR(data__->A,) / __GET_VAR(data__->J,)))) / 2.0)))) {
          __SET_VAR(data__->,SI,,((__GET_VAR(data__->LAST_TARGET,) + __GET_VAR(data__->DISTANCE,)) + ((__GET_VAR(data__->V,) * ((__GET_VAR(data__->V,) / __GET_VAR(data__->A,)) + (__GET_VAR(data__->A,) / __GET_VAR(data__->J,)))) / 2.0)));
          __SET_VAR(data__->,VI,, -(__GET_VAR(data__->V,)));
          __SET_VAR(data__->,AI,,0.0);
          __SET_VAR(data__->,PHASE,,4.1);
        };
      } else if (((ABS__LREAL__LREAL(
        (BOOL)__BOOL_LITERAL(TRUE),
        NULL,
        (LREAL)(__GET_VAR(data__->POSO,) - __GET_VAR(data__->LAST_TARGET,))) >= (ABS__LREAL__LREAL(
        (BOOL)__BOOL_LITERAL(TRUE),
        NULL,
        (LREAL)__GET_VAR(data__->DISTANCE,)) - ((__GET_VAR(data__->V,) * ((__GET_VAR(data__->V,) / __GET_VAR(data__->A,)) + (__GET_VAR(data__->A,) / __GET_VAR(data__->J,)))) / 2.0))) && (ABS__LREAL__LREAL(
        (BOOL)__BOOL_LITERAL(TRUE),
        NULL,
        (LREAL)(__GET_VAR(data__->POSO,) - __GET_VAR(data__->LAST_TARGET,))) < (ABS__LREAL__LREAL(
        (BOOL)__BOOL_LITERAL(TRUE),
        NULL,
        (LREAL)__GET_VAR(data__->DISTANCE,)) - ((((__GET_VAR(data__->V,) * __GET_VAR(data__->V,)) / (2.0 * __GET_VAR(data__->A,))) - ((__GET_VAR(data__->A,) * __GET_VAR(data__->V,)) / (2.0 * __GET_VAR(data__->J,)))) + (((__GET_VAR(data__->A,) * __GET_VAR(data__->A,)) * __GET_VAR(data__->A,)) / ((6.0 * __GET_VAR(data__->J,)) * __GET_VAR(data__->J,)))))))) {
        __SET_VAR(data__->,AR,,(__GET_VAR(data__->AI,) + (__GET_VAR(data__->J,) * __GET_VAR(data__->TS,))));
        __SET_VAR(data__->,VO,,((__GET_VAR(data__->VC,) + (__GET_VAR(data__->AI,) * __GET_VAR(data__->TS,))) + (((__GET_VAR(data__->J,) * __GET_VAR(data__->TS,)) * __GET_VAR(data__->TS,)) / 2.0)));
        __SET_VAR(data__->,POSO,,(((__GET_VAR(data__->POSI,) + (__GET_VAR(data__->VC,) * __GET_VAR(data__->TS,))) + (((__GET_VAR(data__->AR,) * __GET_VAR(data__->TS,)) * __GET_VAR(data__->TS,)) / 2.0)) + ((((__GET_VAR(data__->J,) * __GET_VAR(data__->TS,)) * __GET_VAR(data__->TS,)) * __GET_VAR(data__->TS,)) / 6.0)));
        if ((ABS__LREAL__LREAL(
          (BOOL)__BOOL_LITERAL(TRUE),
          NULL,
          (LREAL)(__GET_VAR(data__->POSO,) - __GET_VAR(data__->LAST_TARGET,))) < (ABS__LREAL__LREAL(
          (BOOL)__BOOL_LITERAL(TRUE),
          NULL,
          (LREAL)__GET_VAR(data__->DISTANCE,)) - ((((__GET_VAR(data__->V,) * __GET_VAR(data__->V,)) / (2.0 * __GET_VAR(data__->A,))) - ((__GET_VAR(data__->A,) * __GET_VAR(data__->V,)) / (2.0 * __GET_VAR(data__->J,)))) + (((__GET_VAR(data__->A,) * __GET_VAR(data__->A,)) * __GET_VAR(data__->A,)) / ((6.0 * __GET_VAR(data__->J,)) * __GET_VAR(data__->J,))))))) {
          __SET_VAR(data__->,SI,,__GET_VAR(data__->POSO,));
          __SET_VAR(data__->,VI,,__GET_VAR(data__->VO,));
          __SET_VAR(data__->,AI,,__GET_VAR(data__->AR,));
          __SET_VAR(data__->,JI,,__GET_VAR(data__->J,));
          __SET_VAR(data__->,PHASE,,5.0);
        } else if ((ABS__LREAL__LREAL(
          (BOOL)__BOOL_LITERAL(TRUE),
          NULL,
          (LREAL)(__GET_VAR(data__->POSO,) - __GET_VAR(data__->LAST_TARGET,))) >= (ABS__LREAL__LREAL(
          (BOOL)__BOOL_LITERAL(TRUE),
          NULL,
          (LREAL)__GET_VAR(data__->DISTANCE,)) - ((((__GET_VAR(data__->V,) * __GET_VAR(data__->V,)) / (2.0 * __GET_VAR(data__->A,))) - ((__GET_VAR(data__->A,) * __GET_VAR(data__->V,)) / (2.0 * __GET_VAR(data__->J,)))) + (((__GET_VAR(data__->A,) * __GET_VAR(data__->A,)) * __GET_VAR(data__->A,)) / ((6.0 * __GET_VAR(data__->J,)) * __GET_VAR(data__->J,))))))) {
          __SET_VAR(data__->,SI,,((__GET_VAR(data__->LAST_TARGET,) + __GET_VAR(data__->DISTANCE,)) + ((((__GET_VAR(data__->V,) * __GET_VAR(data__->V,)) / (2.0 * __GET_VAR(data__->A,))) - ((__GET_VAR(data__->A,) * __GET_VAR(data__->V,)) / (2.0 * __GET_VAR(data__->J,)))) + (((__GET_VAR(data__->A,) * __GET_VAR(data__->A,)) * __GET_VAR(data__->A,)) / ((6.0 * __GET_VAR(data__->J,)) * __GET_VAR(data__->J,))))));
          __SET_VAR(data__->,VI,,(((__GET_VAR(data__->A,) * __GET_VAR(data__->A,)) / (2.0 * __GET_VAR(data__->J,))) - __GET_VAR(data__->V,)));
          __SET_VAR(data__->,AI,,__GET_VAR(data__->A,));
          __SET_VAR(data__->,JI,,0.0);
          __SET_VAR(data__->,PHASE,,5.1);
        };
      } else if (((ABS__LREAL__LREAL(
        (BOOL)__BOOL_LITERAL(TRUE),
        NULL,
        (LREAL)(__GET_VAR(data__->POSO,) - __GET_VAR(data__->LAST_TARGET,))) >= (ABS__LREAL__LREAL(
        (BOOL)__BOOL_LITERAL(TRUE),
        NULL,
        (LREAL)__GET_VAR(data__->DISTANCE,)) - ((((__GET_VAR(data__->V,) * __GET_VAR(data__->V,)) / (2.0 * __GET_VAR(data__->A,))) - ((__GET_VAR(data__->A,) * __GET_VAR(data__->V,)) / (2.0 * __GET_VAR(data__->J,)))) + (((__GET_VAR(data__->A,) * __GET_VAR(data__->A,)) * __GET_VAR(data__->A,)) / ((6.0 * __GET_VAR(data__->J,)) * __GET_VAR(data__->J,)))))) && (ABS__LREAL__LREAL(
        (BOOL)__BOOL_LITERAL(TRUE),
        NULL,
        (LREAL)(__GET_VAR(data__->POSO,) - __GET_VAR(data__->LAST_TARGET,))) < (ABS__LREAL__LREAL(
        (BOOL)__BOOL_LITERAL(TRUE),
        NULL,
        (LREAL)__GET_VAR(data__->DISTANCE,)) - (((__GET_VAR(data__->A,) * __GET_VAR(data__->A,)) * __GET_VAR(data__->A,)) / ((6.0 * __GET_VAR(data__->J,)) * __GET_VAR(data__->J,))))))) {
        __SET_VAR(data__->,AR,,__GET_VAR(data__->AI,));
        __SET_VAR(data__->,VO,,(__GET_VAR(data__->VC,) + (__GET_VAR(data__->AI,) * __GET_VAR(data__->TS,))));
        __SET_VAR(data__->,POSO,,((__GET_VAR(data__->POSI,) + (__GET_VAR(data__->VC,) * __GET_VAR(data__->TS,))) + (((__GET_VAR(data__->J,) * __GET_VAR(data__->TS,)) * __GET_VAR(data__->TS,)) / 2.0)));
        if ((ABS__LREAL__LREAL(
          (BOOL)__BOOL_LITERAL(TRUE),
          NULL,
          (LREAL)(__GET_VAR(data__->POSO,) - __GET_VAR(data__->LAST_TARGET,))) < (ABS__LREAL__LREAL(
          (BOOL)__BOOL_LITERAL(TRUE),
          NULL,
          (LREAL)__GET_VAR(data__->DISTANCE,)) - (((__GET_VAR(data__->A,) * __GET_VAR(data__->A,)) * __GET_VAR(data__->A,)) / ((6.0 * __GET_VAR(data__->J,)) * __GET_VAR(data__->J,)))))) {
          __SET_VAR(data__->,SI,,__GET_VAR(data__->POSO,));
          __SET_VAR(data__->,VI,,__GET_VAR(data__->VO,));
          __SET_VAR(data__->,AI,,__GET_VAR(data__->AR,));
          __SET_VAR(data__->,JI,,0.0);
          __SET_VAR(data__->,PHASE,,6.0);
        } else if ((ABS__LREAL__LREAL(
          (BOOL)__BOOL_LITERAL(TRUE),
          NULL,
          (LREAL)(__GET_VAR(data__->POSO,) - __GET_VAR(data__->LAST_TARGET,))) >= (ABS__LREAL__LREAL(
          (BOOL)__BOOL_LITERAL(TRUE),
          NULL,
          (LREAL)__GET_VAR(data__->DISTANCE,)) - (((__GET_VAR(data__->A,) * __GET_VAR(data__->A,)) * __GET_VAR(data__->A,)) / ((6.0 * __GET_VAR(data__->J,)) * __GET_VAR(data__->J,)))))) {
          __SET_VAR(data__->,SI,,((__GET_VAR(data__->LAST_TARGET,) + __GET_VAR(data__->DISTANCE,)) + (((__GET_VAR(data__->A,) * __GET_VAR(data__->A,)) * __GET_VAR(data__->A,)) / ((6.0 * __GET_VAR(data__->J,)) * __GET_VAR(data__->J,)))));
          __SET_VAR(data__->,VI,,(( -(__GET_VAR(data__->A,)) * __GET_VAR(data__->A,)) / (2.0 * __GET_VAR(data__->J,))));
          __SET_VAR(data__->,AI,,__GET_VAR(data__->A,));
          __SET_VAR(data__->,PHASE,,6.1);
        };
      } else if (((ABS__LREAL__LREAL(
        (BOOL)__BOOL_LITERAL(TRUE),
        NULL,
        (LREAL)(__GET_VAR(data__->POSO,) - __GET_VAR(data__->LAST_TARGET,))) >= (ABS__LREAL__LREAL(
        (BOOL)__BOOL_LITERAL(TRUE),
        NULL,
        (LREAL)__GET_VAR(data__->DISTANCE,)) - (((__GET_VAR(data__->A,) * __GET_VAR(data__->A,)) * __GET_VAR(data__->A,)) / ((6.0 * __GET_VAR(data__->J,)) * __GET_VAR(data__->J,))))) && (ABS__LREAL__LREAL(
        (BOOL)__BOOL_LITERAL(TRUE),
        NULL,
        (LREAL)(__GET_VAR(data__->POSO,) - __GET_VAR(data__->LAST_TARGET,))) < ABS__LREAL__LREAL(
        (BOOL)__BOOL_LITERAL(TRUE),
        NULL,
        (LREAL)__GET_VAR(data__->DISTANCE,))))) {
        __SET_VAR(data__->,AR,,(__GET_VAR(data__->AI,) - (__GET_VAR(data__->J,) * __GET_VAR(data__->TS,))));
        __SET_VAR(data__->,VO,,((__GET_VAR(data__->VC,) + (__GET_VAR(data__->AI,) * __GET_VAR(data__->TS,))) - (((__GET_VAR(data__->J,) * __GET_VAR(data__->TS,)) * __GET_VAR(data__->TS,)) / 2.0)));
        __SET_VAR(data__->,POSO,,(((__GET_VAR(data__->POSI,) + (__GET_VAR(data__->VC,) * __GET_VAR(data__->TS,))) + (((__GET_VAR(data__->AI,) * __GET_VAR(data__->TS,)) * __GET_VAR(data__->TS,)) / 2.0)) - ((((__GET_VAR(data__->J,) * __GET_VAR(data__->TS,)) * __GET_VAR(data__->TS,)) * __GET_VAR(data__->TS,)) / 6.0)));
        if ((ABS__LREAL__LREAL(
          (BOOL)__BOOL_LITERAL(TRUE),
          NULL,
          (LREAL)(__GET_VAR(data__->POSO,) - __GET_VAR(data__->LAST_TARGET,))) < ABS__LREAL__LREAL(
          (BOOL)__BOOL_LITERAL(TRUE),
          NULL,
          (LREAL)__GET_VAR(data__->DISTANCE,)))) {
          __SET_VAR(data__->,SI,,__GET_VAR(data__->POSO,));
          __SET_VAR(data__->,VI,,__GET_VAR(data__->VO,));
          __SET_VAR(data__->,AI,,__GET_VAR(data__->AR,));
          __SET_VAR(data__->,JI,, -(__GET_VAR(data__->J,)));
          __SET_VAR(data__->,PHASE,,7.0);
        } else if ((ABS__LREAL__LREAL(
          (BOOL)__BOOL_LITERAL(TRUE),
          NULL,
          (LREAL)(__GET_VAR(data__->POSO,) - __GET_VAR(data__->LAST_TARGET,))) >= ABS__LREAL__LREAL(
          (BOOL)__BOOL_LITERAL(TRUE),
          NULL,
          (LREAL)__GET_VAR(data__->DISTANCE,)))) {
          __SET_VAR(data__->,SI,,__GET_VAR(data__->TARGET,));
          __SET_VAR(data__->,POSO,,__GET_VAR(data__->TARGET,));
          __SET_VAR(data__->,LAST_TARGET,,__GET_VAR(data__->TARGET,));
          __SET_VAR(data__->,VO,,0.0);
          __SET_VAR(data__->,VI,,0.0);
          __SET_VAR(data__->,AI,,0.0);
          __SET_VAR(data__->,JI,,0.0);
          __SET_VAR(data__->,PHASE,,7.1);
        };
      };
    };
  };

  goto __end;

__end:
  return;
} 
void _RMOD_body2__(_RMOD *data__) {
    if (!__GET_VAR(data__->EN)) {
    __SET_VAR(data__->,ENO,,__BOOL_LITERAL(FALSE));
    return;
  }
  else {
    __SET_VAR(data__->,ENO,,__BOOL_LITERAL(TRUE));
  }
  
  if ((__GET_VAR(data__->DIR,) == __BOOL_LITERAL(TRUE))) {
    __SET_VAR(data__->,MMM,,ABS__LREAL__LREAL(
      (BOOL)__BOOL_LITERAL(TRUE),
      NULL,
      (LREAL)__GET_VAR(data__->MMM,)));
    if ((__GET_VAR(data__->MMM,) == 0.0)) {
      __SET_VAR(data__->,OPC,,__GET_VAR(data__->PC,));
      __SET_VAR(data__->,CHANGED,,__BOOL_LITERAL(FALSE));
      goto __end;
    };
    if ((__GET_VAR(data__->PC,) < (-1.0 * __GET_VAR(data__->MMM,)))) {
      __SET_VAR(data__->,OPC,,((2.0 * __GET_VAR(data__->MMM,)) + __GET_VAR(data__->PC,)));
      while ((__GET_VAR(data__->OPC,) < (-1.0 * __GET_VAR(data__->MMM,)))) {
        __SET_VAR(data__->,OPC,,(__GET_VAR(data__->OPC,) + (2.0 * __GET_VAR(data__->MMM,))));
      };
    } else {
      if ((__GET_VAR(data__->PC,) > __GET_VAR(data__->MMM,))) {
        __SET_VAR(data__->,OPC,,(__GET_VAR(data__->PC,) - (2.0 * __GET_VAR(data__->MMM,))));
        while ((__GET_VAR(data__->OPC,) > __GET_VAR(data__->MMM,))) {
          __SET_VAR(data__->,OPC,,(__GET_VAR(data__->OPC,) - (__GET_VAR(data__->MMM,) * 2.0)));
        };
      } else {
        __SET_VAR(data__->,OPC,,__GET_VAR(data__->PC,));
      };
    };
    if ((__GET_VAR(data__->PC,) == __GET_VAR(data__->OPC,))) {
      __SET_VAR(data__->,CHANGED,,__BOOL_LITERAL(FALSE));
    } else {
      __SET_VAR(data__->,CHANGED,,__BOOL_LITERAL(TRUE));
    };
  } else {
    __SET_VAR(data__->,MMM,,ABS__LREAL__LREAL(
      (BOOL)__BOOL_LITERAL(TRUE),
      NULL,
      (LREAL)__GET_VAR(data__->MMM,)));
    if ((__GET_VAR(data__->MMM,) == 0.0)) {
      __SET_VAR(data__->,OPC,,__GET_VAR(data__->PC,));
      __SET_VAR(data__->,CHANGED,,__BOOL_LITERAL(FALSE));
      goto __end;
    };
    if ((__GET_VAR(data__->PC,) < 0.0)) {
      __SET_VAR(data__->,OPC,,(__GET_VAR(data__->MMM,) + __GET_VAR(data__->PC,)));
      while ((__GET_VAR(data__->OPC,) < __GET_VAR(data__->MMM,))) {
        __SET_VAR(data__->,OPC,,(__GET_VAR(data__->OPC,) + __GET_VAR(data__->MMM,)));
      };
      __SET_VAR(data__->,OPC,,(__GET_VAR(data__->OPC,) - __GET_VAR(data__->MMM,)));
    } else {
      if ((__GET_VAR(data__->PC,) > __GET_VAR(data__->MMM,))) {
        __SET_VAR(data__->,OPC,,(__GET_VAR(data__->PC,) - __GET_VAR(data__->MMM,)));
        while ((__GET_VAR(data__->OPC,) > __GET_VAR(data__->MMM,))) {
          __SET_VAR(data__->,OPC,,(__GET_VAR(data__->OPC,) - __GET_VAR(data__->MMM,)));
        };
      } else {
        __SET_VAR(data__->,OPC,,__GET_VAR(data__->PC,));
      };
    };
    if ((__GET_VAR(data__->PC,) == __GET_VAR(data__->OPC,))) {
      __SET_VAR(data__->,CHANGED,,__BOOL_LITERAL(FALSE));
    } else {
      __SET_VAR(data__->,CHANGED,,__BOOL_LITERAL(TRUE));
    };
  };

  goto __end;

__end:
  return;
} 
void _IPBYSPOS_body2__(_IPBYSPOS *data__) {
    if (!__GET_VAR(data__->EN)) {
    __SET_VAR(data__->,ENO,,__BOOL_LITERAL(FALSE));
    return;
  }
  else {
    __SET_VAR(data__->,ENO,,__BOOL_LITERAL(TRUE));
  }
  
  __SET_VAR(data__->AI.,ROW,,__BOOL_LITERAL(FALSE));
  __SET_VAR(data__->AI.,NODEID,,__GET_VAR(data__->SLAVEID,));
  __SET_VAR(data__->AI.,PNAME,,__STRING_LITERAL(4,"AMAX"));
  AXIS_INFO_body__(&data__->AI);
  __SET_VAR(data__->,AMX,,__GET_VAR(data__->AI.OUTR,));
  __SET_VAR(data__->AI.,ROW,,__BOOL_LITERAL(FALSE));
  __SET_VAR(data__->AI.,NODEID,,__GET_VAR(data__->SLAVEID,));
  __SET_VAR(data__->AI.,PNAME,,__STRING_LITERAL(2,"PC"));
  AXIS_INFO_body__(&data__->AI);
  __SET_VAR(data__->,CURPOS,,__GET_VAR(data__->AI.OUTR,));
  SYS_CFG_body__(&data__->SC);
  __SET_VAR(data__->,TS,,__GET_VAR(data__->SC.CYCLE_TIME,));
  __SET_VAR(data__->,SPC,,__GET_VAR(data__->SPOS,));
  __SET_VAR(data__->,INVEL,,1);
  if (((ABS__LREAL__LREAL(
    (BOOL)__BOOL_LITERAL(TRUE),
    NULL,
    (LREAL)(__GET_VAR(data__->SPOS,) - __GET_VAR(data__->CURPOS,))) / __GET_VAR(data__->TS,)) > __GET_VAR(data__->AMX,))) {
    __SET_VAR(data__->,INVEL,,0);
    if ((__GET_VAR(data__->SPOS,) < __GET_VAR(data__->CURPOS,))) {
      __SET_VAR(data__->,SPC,,(__GET_VAR(data__->CURPOS,) - (__GET_VAR(data__->TS,) * __GET_VAR(data__->AMX,))));
    } else {
      __SET_VAR(data__->,SPC,,(__GET_VAR(data__->CURPOS,) + (__GET_VAR(data__->TS,) * __GET_VAR(data__->AMX,))));
    };
  };
  __SET_VAR(data__->AI.,ROW,,__BOOL_LITERAL(FALSE));
  __SET_VAR(data__->AI.,NODEID,,__GET_VAR(data__->SLAVEID,));
  __SET_VAR(data__->AI.,PNAME,,__STRING_LITERAL(3,"MPP"));
  AXIS_INFO_body__(&data__->AI);
  __SET_VAR(data__->,MPP,,__GET_VAR(data__->AI.OUTR,));
  __SET_VAR(data__->PULSECALC.,TARGETPOSITION,,__GET_VAR(data__->SPC,));
  __SET_VAR(data__->PULSECALC.,PULSEEQUIVALENT,,__GET_VAR(data__->MPP,));
  _PULSE_CALC_body__(&data__->PULSECALC);
  __SET_VAR(data__->AI.,ROW,,__BOOL_LITERAL(FALSE));
  __SET_VAR(data__->AI.,NODEID,,__GET_VAR(data__->SLAVEID,));
  __SET_VAR(data__->AI.,PNAME,,__STRING_LITERAL(5,"P0POS"));
  AXIS_INFO_body__(&data__->AI);
  __SET_VAR(data__->,POUT,,DINT_TO_UDINT(
    (BOOL)__BOOL_LITERAL(TRUE),
    NULL,
    (DINT)(__GET_VAR(data__->PULSECALC.PULSENUMALL,) + UDINT_TO_DINT(
      (BOOL)__BOOL_LITERAL(TRUE),
      NULL,
      (UDINT)__GET_VAR(data__->AI.OUTU32,)))));
  __SET_VAR(data__->IPWRT.,NODEID,,INT_TO_USINT(
    (BOOL)__BOOL_LITERAL(TRUE),
    NULL,
    (INT)__GET_VAR(data__->SLAVEID,)));
  __SET_VAR(data__->IPWRT.,POS,,__GET_VAR(data__->POUT,));
  IP_WRITE_body__(&data__->IPWRT);
  __SET_VAR(data__->AI.,ROW,,__BOOL_LITERAL(TRUE));
  __SET_VAR(data__->AI.,NODEID,,__GET_VAR(data__->SLAVEID,));
  __SET_VAR(data__->AI.,PNAME,,__STRING_LITERAL(6,"CURPOS"));
  __SET_VAR(data__->AI.,INU32,,__GET_VAR(data__->POUT,));
  AXIS_INFO_body__(&data__->AI);
  __SET_VAR(data__->ITWRT.,AXISID,,__GET_VAR(data__->SLAVEID,));
  __SET_VAR(data__->ITWRT.,INTERPC_IN,,__GET_VAR(data__->SPC,));
  __SET_VAR(data__->ITWRT.,INTERVC_IN,,0.0);
  _INTER_WRITE_body__(&data__->ITWRT);

  goto __end;

__end:
  return;
} 
void _SESSIONID_body2__(_SESSIONID *data__) {
    if (!__GET_VAR(data__->EN)) {
    __SET_VAR(data__->,ENO,,__BOOL_LITERAL(FALSE));
    return;
  }
  else {
    __SET_VAR(data__->,ENO,,__BOOL_LITERAL(TRUE));
  }
  
  if ((__GET_VAR(data__->ROW,) == __BOOL_LITERAL(TRUE))) {
    __SET_VAR(data__->AI.,ROW,,__BOOL_LITERAL(FALSE));
    __SET_VAR(data__->AI.,NODEID,,__GET_VAR(data__->AXISID,));
    __SET_VAR(data__->AI.,PNAME,,__STRING_LITERAL(9,"ABORTFLAG"));
    AXIS_INFO_body__(&data__->AI);
    if ((__GET_VAR(data__->AI.OUTU32,) < 100)) {
      __SET_VAR(data__->,FBD_ABORT_FLAG,,(__GET_VAR(data__->AI.OUTU32,) + 1));
    } else {
      __SET_VAR(data__->,FBD_ABORT_FLAG,,0);
    };
    __SET_VAR(data__->AI.,ROW,,__BOOL_LITERAL(TRUE));
    __SET_VAR(data__->AI.,NODEID,,__GET_VAR(data__->AXISID,));
    __SET_VAR(data__->AI.,PNAME,,__STRING_LITERAL(9,"ABORTFLAG"));
    __SET_VAR(data__->AI.,INU32,,__GET_VAR(data__->FBD_ABORT_FLAG,));
    AXIS_INFO_body__(&data__->AI);
  } else {
    __SET_VAR(data__->AI.,ROW,,__BOOL_LITERAL(FALSE));
    __SET_VAR(data__->AI.,NODEID,,__GET_VAR(data__->AXISID,));
    __SET_VAR(data__->AI.,PNAME,,__STRING_LITERAL(9,"ABORTFLAG"));
    AXIS_INFO_body__(&data__->AI);
    __SET_VAR(data__->,FBD_ABORT_FLAG,,__GET_VAR(data__->AI.OUTU32,));
  };

  goto __end;

__end:
  return;
} 
void _READ_CAM_body2__(_READ_CAM *data__) {
    if (!__GET_VAR(data__->EN)) {
    __SET_VAR(data__->,ENO,,__BOOL_LITERAL(FALSE));
    return;
  }
  else {
    __SET_VAR(data__->,ENO,,__BOOL_LITERAL(TRUE));
  }
  
  __SET_VAR(data__->ODR.,TABLEID,,UINT_TO_INT(
    (BOOL)__BOOL_LITERAL(TRUE),
    NULL,
    (UINT)__GET_VAR(data__->TABLEID,)));
  __SET_VAR(data__->ODR.,IDX,,0);
  GET_CAM_body__(&data__->ODR);
  __SET_VAR(data__->,XS,,__GET_VAR(data__->ODR.VALUE));
  if (__GET_VAR(data__->MP01,)) {
    __SET_VAR(data__->,BGN,,(LREAL_TO_INT(
      (BOOL)__BOOL_LITERAL(TRUE),
      NULL,
      (LREAL)((__GET_VAR(data__->XS,) * __GET_VAR(data__->MPOS,)) - 0.5)) + 1));
    __SET_VAR(data__->,MOFST,,((__GET_VAR(data__->XS,) * __GET_VAR(data__->MPOS,)) - INT_TO_LREAL(
      (BOOL)__BOOL_LITERAL(TRUE),
      NULL,
      (INT)(__GET_VAR(data__->BGN,) - 1))));
    __SET_VAR(data__->,END,,(__GET_VAR(data__->BGN,) + 1));
  } else {
    __SET_VAR(data__->,BGN,,(LREAL_TO_INT(
      (BOOL)__BOOL_LITERAL(TRUE),
      NULL,
      (LREAL)(__GET_VAR(data__->MPOS,) - 0.5)) + 1));
    __SET_VAR(data__->,MOFST,,(__GET_VAR(data__->MPOS,) - INT_TO_LREAL(
      (BOOL)__BOOL_LITERAL(TRUE),
      NULL,
      (INT)(__GET_VAR(data__->BGN,) - 1))));
    __SET_VAR(data__->,END,,(__GET_VAR(data__->BGN,) + 1));
  };
  if ((__GET_VAR(data__->END,) == (LREAL_TO_INT(
    (BOOL)__BOOL_LITERAL(TRUE),
    NULL,
    (LREAL)__GET_VAR(data__->XS,)) + 1))) {
    __SET_VAR(data__->,END,,1);
  };
  SYS_CFG_body__(&data__->SYSCFG);
  __SET_VAR(data__->,CTIME,,__GET_VAR(data__->SYSCFG.CYCLE_TIME));
  __SET_VAR(data__->ODR.,IDX,,__GET_VAR(data__->BGN,));
  GET_CAM_body__(&data__->ODR);
  __SET_VAR(data__->,SBGN,,__GET_VAR(data__->ODR.VALUE));
  __SET_VAR(data__->ODR.,IDX,,__GET_VAR(data__->END,));
  GET_CAM_body__(&data__->ODR);
  __SET_VAR(data__->,SEND,,__GET_VAR(data__->ODR.VALUE));
  __SET_VAR(data__->,SPOS,,(((__GET_VAR(data__->SEND,) - __GET_VAR(data__->SBGN,)) * __GET_VAR(data__->MOFST,)) + __GET_VAR(data__->SBGN,)));

  goto __end;

__end:
  return;
} 
