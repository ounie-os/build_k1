FUNCTION_BLOCK GET_INTERVAL
  VAR_OUTPUT
    OUTU32 : ULINT;
  END_VAR

  {extern int get_interval(GET_INTERVAL*); get_interval(data__);}
END_FUNCTION_BLOCK

FUNCTION_BLOCK FPGA_WRITE
  VAR_INPUT
    VARADDR : INT;
    INU16 : UINT;
  END_VAR

  {extern int fpga_write(FPGA_WRITE*); fpga_write(data__);}
END_FUNCTION_BLOCK

FUNCTION_BLOCK IP_READ2
  VAR_INPUT
    NODEID : USINT;
  END_VAR
  VAR_OUTPUT
    POSU32 : UDINT;
    STATUS : UINT;
  END_VAR

  {extern int ip_read2(IP_READ2*); ip_read2(data__);}
END_FUNCTION_BLOCK

FUNCTION_BLOCK QTOUCH_WRITE
  VAR_INPUT
    VARADDR : INT;
    INR : LREAL;
  END_VAR

  {extern int qtouch_write(QTOUCH_WRITE*); qtouch_write(data__);}
END_FUNCTION_BLOCK

FUNCTION_BLOCK COIL_WRITE
  VAR_INPUT
    MBADDR : INT;
    INB : BOOL;
  END_VAR

  {extern int coil_write(COIL_WRITE*); coil_write(data__);}
END_FUNCTION_BLOCK

FUNCTION_BLOCK RDSDO_RESULT
  VAR_INPUT
    EXECUTE : BOOL;
    NODEID : UINT;
  END_VAR
  VAR_OUTPUT
    RDOK : BOOL;
    VAL : DWORD;
    SIZE : USINT;
  END_VAR

  {extern int rdsdo_result(RDSDO_RESULT*); rdsdo_result(data__);}
END_FUNCTION_BLOCK

FUNCTION_BLOCK WRITE_SDO
  VAR_INPUT
    NODEID : UINT;
    INDEX : UINT;
    SUBINDEX : UINT;
    LENV : UINT;
    VAL : DWORD;
  END_VAR
  VAR_OUTPUT
    DONE : BOOL;
    ERR : ULINT;
  END_VAR

  {extern int write_sdo(WRITE_SDO*); write_sdo(data__);}
END_FUNCTION_BLOCK

FUNCTION_BLOCK BUF_WRITE
  VAR_INPUT
    BUFTYPE : INT;
    IDX : INT;
    INU16 : UINT;
  END_VAR

  {extern int buf_write(BUF_WRITE*); buf_write(data__);}
END_FUNCTION_BLOCK

FUNCTION_BLOCK RBUF_READ
  VAR_INPUT
    VARADDR : UDINT;
  END_VAR
  VAR_OUTPUT
    OUTR : LREAL;
  END_VAR

  {extern int rbuf_read(RBUF_READ*); rbuf_read(data__);}
END_FUNCTION_BLOCK

FUNCTION_BLOCK RBUF_READ_U16
  VAR_INPUT
    VARADDR : UDINT;
  END_VAR
  VAR_OUTPUT
    OUTU161 : UINT;
    OUTU162 : UINT;
    OUTU163 : UINT;
    OUTU164 : UINT;
  END_VAR

  {extern int rbuf_read_u16(RBUF_READ_U16*); rbuf_read_u16(data__);}
END_FUNCTION_BLOCK

FUNCTION_BLOCK LRABS
  VAR_INPUT
    INLR : LREAL;
  END_VAR
  VAR_OUTPUT
    OUTLR : LREAL;
  END_VAR

  {extern int lrabs(LRABS*); lrabs(data__);}
END_FUNCTION_BLOCK

FUNCTION_BLOCK PLC_PAUSE
  VAR_INPUT
    PAUSE : BOOL;
  END_VAR
  VAR_OUTPUT
    PAUSED : BOOL;
  END_VAR

  {extern int plc_pause(PLC_PAUSE*); plc_pause(data__);}
END_FUNCTION_BLOCK

FUNCTION_BLOCK SYS_TIM
  VAR_OUTPUT
    SYS_D_T : DT;
    DTUL : ULINT;
  END_VAR

  {extern int sys_tim(SYS_TIM*); sys_tim(data__);}
END_FUNCTION_BLOCK

FUNCTION_BLOCK SYS_CFG
  VAR_OUTPUT
    CYCLE_TIME : LREAL;
  END_VAR

  {extern int sys_cfg(SYS_CFG*); sys_cfg(data__);}
END_FUNCTION_BLOCK

FUNCTION_BLOCK SVRO_CLEARFAULT
  VAR_INPUT
    AxisID : USINT;
    Enable : BOOL;
  END_VAR
  VAR_OUTPUT
    CONTROLWORD : UINT;
  END_VAR

  {extern int svro_clearfault(SVRO_CLEARFAULT*); svro_clearfault(data__);}
END_FUNCTION_BLOCK

FUNCTION_BLOCK TORQUE_READ
  VAR_INPUT
    AXISID : USINT;
  END_VAR
  VAR_OUTPUT
    ACTUALTORQUE : INT;
    ACTUALCURRENT : INT;
  END_VAR

  {extern int torque_read(TORQUE_READ*); torque_read(data__);}
END_FUNCTION_BLOCK

FUNCTION_BLOCK GET_CAM
  VAR_INPUT
    TABLEID : INT;
    IDX : INT;
  END_VAR
  VAR_OUTPUT
    VALUE : LREAL;
  END_VAR

  {extern int get_cam(GET_CAM*); get_cam(data__);}
END_FUNCTION_BLOCK

FUNCTION_BLOCK SVRO_CONTROL
  VAR_INPUT
    AxisID : USINT;
    Enable : BOOL;
  END_VAR
  VAR_OUTPUT
    CONTROLWORD : UINT;
  END_VAR

  {extern int svro_control(SVRO_CONTROL*); svro_control(data__);}
END_FUNCTION_BLOCK

FUNCTION_BLOCK Axes_Group
  VAR_INPUT
    ROW : BOOL;
    GROUPID : INT;
    PNAME : STRING;
    INB : BOOL;
    INU32 : UDINT;
    INR : LREAL;
    INS : STRING;
  END_VAR
  VAR_OUTPUT
    OUTB : BOOL;
    OUTU32 : UDINT;
    OUTR : LREAL;
    OUTS : STRING;
  END_VAR
  VAR
    DONEFLAG : BOOL;
    EXECUTEFLAG : BOOL;
    COMMANDTYPE : INT;
    ENABLE : BOOL;
    A1ID : INT;
    A2ID : INT;
    A3ID : INT;
    A4ID : INT;
    A5ID : INT;
    A6ID : INT;
    A7ID : INT;
    A8ID : INT;
    PC : LREAL;
    MCSX : REAL;
    MCSY : REAL;
    MCSZ : REAL;
    MCSI : REAL;
    MCSJ : REAL;
    MCSK : REAL;
    COMMANDP : LREAL;
    COMMANDV : LREAL;
    COMMANDA : LREAL;
    ABORTFLAG : INT;
    KINNO : INT;
    STATE : INT;
    FEEDRATE : LREAL;
    VMAX : LREAL;
    AMAX : LREAL;
  END_VAR

  {extern int group_op(AXES_GROUP*); group_op(data__);}
END_FUNCTION_BLOCK

FUNCTION_BLOCK QTOUCH_READ
  VAR_INPUT
    VARADDR : INT;
  END_VAR
  VAR_OUTPUT
    OUTR : LREAL;
  END_VAR

  {extern int qtouch_read(QTOUCH_READ*); qtouch_read(data__);}
END_FUNCTION_BLOCK

FUNCTION_BLOCK SEMAP
  VAR_INPUT
    IDX : INT;
  END_VAR
  VAR_OUTPUT
    POK : BOOL;
  END_VAR

  {extern int semap(SEMAP*); semap(data__);}
END_FUNCTION_BLOCK

FUNCTION_BLOCK SEMAV
  VAR_INPUT
    IDX : INT;
  END_VAR
  VAR_OUTPUT
    VOK : BOOL;
  END_VAR

  {extern int semav(SEMAV*); semav(data__);}
END_FUNCTION_BLOCK

FUNCTION_BLOCK IP_WRITE
  VAR_INPUT
    NODEID : USINT;
    POS : UDINT;
  END_VAR

  {extern int ip_write(IP_WRITE*); ip_write(data__);}
END_FUNCTION_BLOCK

FUNCTION_BLOCK HOLD_WRITE
  VAR_INPUT
    MBADDR : INT;
    INTPVALUE : INT;
  END_VAR

  {extern int hold_write(HOLD_WRITE*); hold_write(data__);}
END_FUNCTION_BLOCK

FUNCTION_BLOCK HOLD_READ
  VAR_INPUT
    MBADDR : INT;
  END_VAR
  VAR_OUTPUT
    OUTI : INT;
  END_VAR

  {extern int hold_read(HOLD_READ*); hold_read(data__);}
END_FUNCTION_BLOCK

FUNCTION_BLOCK DBGSEMA
  VAR_INPUT
    IDX : INT;
  END_VAR
  VAR_OUTPUT
    VAL : BOOL;
    TICKP : ULINT;
    TICKV : ULINT;
    COUNT : INT;
  END_VAR

  {extern int dbgsema(DBGSEMA*); dbgsema(data__);}
END_FUNCTION_BLOCK

FUNCTION_BLOCK OD_READ
  VAR_INPUT
    INDEX : UINT;
    SUBINDEX : USINT;
  END_VAR
  VAR_OUTPUT
    OUTR : LREAL;
  END_VAR

  {extern int od_read(OD_READ*); od_read(data__);}
END_FUNCTION_BLOCK

FUNCTION_BLOCK RANDI100
  VAR_OUTPUT
    RINT : INT;
  END_VAR

  {extern int randi(RANDI100*); randi(data__);}
END_FUNCTION_BLOCK

FUNCTION_BLOCK FLASH_READ
  VAR_INPUT
    ADDR : INT;
  END_VAR
  VAR_OUTPUT
    OUTU16 : UINT;
  END_VAR

  {extern int flash_read(FLASH_READ*); flash_read(data__);}
END_FUNCTION_BLOCK

FUNCTION_BLOCK U16_B16
  VAR_INPUT
    UI16 : UINT;
  END_VAR
  VAR_OUTPUT
    B0 : BOOL;
    B1 : BOOL;
    B2 : BOOL;
    B3 : BOOL;
    B4 : BOOL;
    B5 : BOOL;
    B6 : BOOL;
    B7 : BOOL;
    B8 : BOOL;
    B9 : BOOL;
    B10 : BOOL;
    B11 : BOOL;
    B12 : BOOL;
    B13 : BOOL;
    B14 : BOOL;
    B15 : BOOL;
  END_VAR

  {extern int u16_b16(U16_B16*); u16_b16(data__);}
END_FUNCTION_BLOCK

FUNCTION_BLOCK READ_SDO2
  VAR_INPUT
    EXECUTE : BOOL;
    NODEID : UINT;
    INDEX : UINT;
    SUBINDEX : UINT;
    RDOK : BOOL;
  END_VAR
  VAR_OUTPUT
    CANQUERY : BOOL;
  END_VAR

  {extern int read_sdo2(READ_SDO2*); read_sdo2(data__);}
END_FUNCTION_BLOCK

FUNCTION_BLOCK B16_U16
  VAR_INPUT
    B0 : BOOL;
    B1 : BOOL;
    B2 : BOOL;
    B3 : BOOL;
    B4 : BOOL;
    B5 : BOOL;
    B6 : BOOL;
    B7 : BOOL;
    B8 : BOOL;
    B9 : BOOL;
    B10 : BOOL;
    B11 : BOOL;
    B12 : BOOL;
    B13 : BOOL;
    B14 : BOOL;
    B15 : BOOL;
  END_VAR
  VAR_OUTPUT
    U16 : UINT;
  END_VAR

  {extern int b16_u16(B16_U16*); b16_u16(data__);}
END_FUNCTION_BLOCK

FUNCTION_BLOCK SLEN
  VAR_INPUT
    INS : STRING;
  END_VAR
  VAR_OUTPUT
    OUTI : INT;
  END_VAR

  {extern int string_len(SLEN*); string_len(data__);}
END_FUNCTION_BLOCK

FUNCTION_BLOCK FLASH_WRITE
  VAR_INPUT
    ADDR : INT;
    IPTU16 : UINT;
  END_VAR

  {extern int flash_write(FLASH_WRITE*); flash_write(data__);}
END_FUNCTION_BLOCK

FUNCTION_BLOCK ULINT_TO_BCD2
  VAR_INPUT
    INUL : ULINT;
  END_VAR
  VAR_OUTPUT
    OUTLW : LWORD;
  END_VAR

  {extern int ulint_to_bcd(ULINT_TO_BCD2*); ulint_to_bcd(data__);}
END_FUNCTION_BLOCK

FUNCTION_BLOCK IP_READ
  VAR_INPUT
    NODEID : USINT;
  END_VAR
  VAR_OUTPUT
    POSU64 : ULINT;
    STATUS : UINT;
  END_VAR

  {extern int ip_read(IP_READ*); ip_read(data__);}
END_FUNCTION_BLOCK

FUNCTION_BLOCK SVRO_MODE
  VAR_INPUT
    AxisID : USINT;
    TargetMode : USINT;
  END_VAR
  VAR_OUTPUT
    ActualMode : USINT;
  END_VAR

  {extern int svro_mode(SVRO_MODE*); svro_mode(data__);}
END_FUNCTION_BLOCK

FUNCTION_BLOCK FPGA_READ
  VAR_INPUT
    VARADDR : INT;
  END_VAR
  VAR_OUTPUT
    OUTU16 : UINT;
  END_VAR

  {extern int fpga_read(FPGA_READ*); fpga_read(data__);}
END_FUNCTION_BLOCK

FUNCTION_BLOCK BUF_READ
  VAR_INPUT
    BUFTYPE : INT;
    IDX : INT;
  END_VAR
  VAR_OUTPUT
    OUTU16 : UINT;
  END_VAR

  {extern int buf_read(BUF_READ*); buf_read(data__);}
END_FUNCTION_BLOCK

FUNCTION_BLOCK IP_WRITE2
  VAR_INPUT
    NODEID : USINT;
    POS : UDINT;
    CONTROLWORD : UINT;
  END_VAR

  {extern int ip_write2(IP_WRITE2*); ip_write2(data__);}
END_FUNCTION_BLOCK

FUNCTION_BLOCK RBUF_WRITE
  VAR_INPUT
    VARADDR : UDINT;
    INR : LREAL;
  END_VAR

  {extern int rbuf_write(RBUF_WRITE*); rbuf_write(data__);}
END_FUNCTION_BLOCK

FUNCTION_BLOCK GET_TICK
  VAR_OUTPUT
    TICK : ULINT;
  END_VAR

  {extern int get_tick(GET_TICK*); get_tick(data__);}
END_FUNCTION_BLOCK

FUNCTION_BLOCK TORQUE_WRITE
  VAR_INPUT
    AXISID : USINT;
    TARGETTORQUE : INT;
    TORQUEOFFSET : INT;
  END_VAR

  {extern int torque_write(TORQUE_WRITE*); torque_write(data__);}
END_FUNCTION_BLOCK

FUNCTION_BLOCK Axis_Info
  VAR_INPUT
    ROW : BOOL;
    NODEID : INT;
    PNAME : STRING;
    INB : BOOL;
    INU32 : UDINT;
    INR : LREAL;
    INS : STRING;
  END_VAR
  VAR_OUTPUT
    OUTB : BOOL;
    OUTU32 : UDINT;
    OUTR : LREAL;
    OUTS : STRING;
  END_VAR
  VAR
    AEO : UDINT;
    MPP : LREAL;
    ADTYPE : INT;
    VMAX : LREAL;
    AMAX : LREAL;
    DMAX : LREAL;
    JMAX : LREAL;
    LMTL : LREAL;
    LMTH : LREAL;
    AMOD : LREAL;
    FEEDRATE : LREAL;
    VA : BOOL;
    RA : BOOL;
    ABORTFLAG : INT;
    DONEFLAG : BOOL;
    EXECUTEFLAG : BOOL;
    COMMANDTYPE : INT;
    STATE : INT;
    P0POS : UDINT;
    CURPOS : UDINT;
    INTERP : LREAL;
    INTERV : LREAL;
    INTERA : LREAL;
    INTERPC : LREAL;
    INTERVC : LREAL;
    INTERDP : LREAL;
    PC : LREAL;
    VC : LREAL;
    RC : LREAL;
    ERRORID : INT;
  END_VAR

  {extern int dooperate(AXIS_INFO*); dooperate(data__);}
END_FUNCTION_BLOCK

FUNCTION_BLOCK READ_SDO
  VAR_INPUT
    EXECUTE : BOOL;
    NODEID : UINT;
    INDEX : UINT;
    SUBINDEX : UINT;
  END_VAR
  VAR_OUTPUT
    RDOK : BOOL;
    VAL : DWORD;
    SIZE : USINT;
  END_VAR

  {extern int read_sdo(READ_SDO*); read_sdo(data__);}
END_FUNCTION_BLOCK

FUNCTION_BLOCK Axis_ExInfo
  VAR_INPUT
    ROW : BOOL;
    NODEID : INT;
    PNAME : STRING;
    INR : LREAL;
  END_VAR
  VAR_OUTPUT
    OUTR : LREAL;
  END_VAR

  {extern int axis_exop(AXIS_EXINFO*); axis_exop(data__);}
END_FUNCTION_BLOCK

FUNCTION_BLOCK BCD_TO_ULINT2
  VAR_INPUT
    INLW : LWORD;
  END_VAR
  VAR_OUTPUT
    OUTUL : ULINT;
  END_VAR

  {extern int bcd_to_ulint(BCD_TO_ULINT2*); bcd_to_ulint(data__);}
END_FUNCTION_BLOCK

FUNCTION_BLOCK FLASH_LOADSAVE
  VAR_INPUT
    SAVE : BOOL;
  END_VAR

  {extern int flash_load_save(FLASH_LOADSAVE*); flash_load_save(data__);}
END_FUNCTION_BLOCK

FUNCTION_BLOCK COIL_READ
  VAR_INPUT
    MBADDR : INT;
  END_VAR
  VAR_OUTPUT
    OUTB : BOOL;
  END_VAR

  {extern int coil_read(COIL_READ*); coil_read(data__);}
END_FUNCTION_BLOCK

FUNCTION_BLOCK IPT_SHAPING
  VAR_INPUT
    NODEID : INT;
    INPC : LREAL;
    INVC : LREAL;
  END_VAR
  VAR_OUTPUT
    OUTPC : LREAL;
    OUTVC : LREAL;
  END_VAR

  {extern int ipt_shaping(IPT_SHAPING*); ipt_shaping(data__);}
END_FUNCTION_BLOCK

FUNCTION_BLOCK SFIND
  VAR_INPUT
    INS1 : STRING;
    INS2 : STRING;
  END_VAR
  VAR_OUTPUT
    OUTI : INT;
  END_VAR

  {extern int string_find(SFIND*); string_find(data__);}
END_FUNCTION_BLOCK

FUNCTION_BLOCK AEO_WRITE
  VAR_INPUT
    AXISID : USINT;
    AEO : UDINT;
  END_VAR

  {extern int aeo_write(AEO_WRITE*); aeo_write(data__);}
END_FUNCTION_BLOCK

FUNCTION_BLOCK RBUF_WRITE_U16
  VAR_INPUT
    VARADDR : UDINT;
    INU161 : UINT;
    INU162 : UINT;
    INU163 : UINT;
    INU164 : UINT;
  END_VAR

  {extern int rbuf_write_u16(RBUF_WRITE_U16*); rbuf_write_u16(data__);}
END_FUNCTION_BLOCK

FUNCTION_BLOCK SET_CAM
  VAR_INPUT
    TABLEID : INT;
    IDX : INT;
    VALUE : LREAL;
  END_VAR

  {extern int set_cam(SET_CAM*); set_cam(data__);}
END_FUNCTION_BLOCK

FUNCTION_BLOCK AEO_READ
  VAR_INPUT
    AXISID : USINT;
  END_VAR
  VAR_OUTPUT
    AEO : UDINT;
  END_VAR

  {extern int aeo_read(AEO_READ*); aeo_read(data__);}
END_FUNCTION_BLOCK

FUNCTION_BLOCK NMTRESET
  VAR_INPUT
    Execute : BOOL;
  END_VAR

  {extern int nmt_reset(NMTRESET*); nmt_reset(data__);}
END_FUNCTION_BLOCK

FUNCTION_BLOCK SFC_horse
  VAR_INPUT
    Enable : BOOL;
  END_VAR
  VAR_OUTPUT
    Bit0 : BOOL;
    Bit1 : BOOL;
    Bit2 : BOOL;
    Bit3 : BOOL;
    Bit4 : BOOL;
    Bit5 : BOOL;
    Bit6 : BOOL;
    Bit7 : BOOL;
  END_VAR
  VAR
    T1 : TON;
    T2 : TON;
    T3 : TON;
    T4 : TON;
    T5 : TON;
    T6 : TON;
    T7 : TON;
    T8 : TON;
    M0 : BOOL;
    M1 : BOOL;
    M2 : BOOL;
    M3 : BOOL;
    M4 : BOOL;
    M5 : BOOL;
    M6 : BOOL;
    M7 : BOOL;
  END_VAR
  VAR_INPUT
    stop : BOOL;
  END_VAR

  INITIAL_STEP Start:
    START_INLINE25(N);
  END_STEP

  ACTION START_INLINE25:
    Bit0:=0;Bit1:=0;Bit2:=0;Bit3:=0;Bit4:=0;Bit5:=0;Bit6:=0;Bit7:=0;
  END_ACTION

  TRANSITION FROM Start TO loop
    := Enable and (not stop);
  END_TRANSITION

  STEP loop:
    LOOP_INLINE17(N);
    LOOP_INLINE18(N);
    LOOP_INLINE19(N);
    LOOP_INLINE20(N);
    LOOP_INLINE21(N);
    LOOP_INLINE22(N);
    LOOP_INLINE23(N);
    LOOP_INLINE24(N);
  END_STEP

  ACTION LOOP_INLINE17:
    T1(IN:=0,PT:=TIME#0s);
  END_ACTION

  ACTION LOOP_INLINE18:
    T2(IN:=0,PT:=TIME#0s);
  END_ACTION

  ACTION LOOP_INLINE19:
    T3(IN:=0,PT:=TIME#0s);
  END_ACTION

  ACTION LOOP_INLINE20:
    T4(IN:=0,PT:=TIME#0s);
  END_ACTION

  ACTION LOOP_INLINE21:
    T5(IN:=0,PT:=TIME#0s);
  END_ACTION

  ACTION LOOP_INLINE22:
    T6(IN:=0,PT:=TIME#0s);
  END_ACTION

  ACTION LOOP_INLINE23:
    T7(IN:=0,PT:=TIME#0s);
  END_ACTION

  ACTION LOOP_INLINE24:
    T8(IN:=0,PT:=TIME#0s);
  END_ACTION

  TRANSITION FROM loop TO S1
    := Enable or Bit7;
  END_TRANSITION

  STEP S1:
    S1_INLINE3(N);
    S1_INLINE4(N);
  END_STEP

  ACTION S1_INLINE3:
    T1(IN:=Enable or Bit7,PT:=TIME#1s,Q=>Bit0);
  END_ACTION

  ACTION S1_INLINE4:
    IF Bit0=1 THEN Bit7:=0;END_IF;
  END_ACTION

  TRANSITION FROM S1 TO S2
    := Bit0;
  END_TRANSITION

  STEP S2:
    S2_INLINE13(N);
    S2_INLINE14(N);
  END_STEP

  ACTION S2_INLINE13:
    T2(IN:=Bit0,PT:=TIME#1s,Q=>Bit1);
  END_ACTION

  ACTION S2_INLINE14:
    IF Bit1=1 THEN Bit0:=0;END_IF;
  END_ACTION

  TRANSITION FROM S2 TO S3
    := Bit1;
  END_TRANSITION

  STEP S3:
    S3_INLINE1(N);
    S3_INLINE2(N);
  END_STEP

  ACTION S3_INLINE1:
    T3(IN:=Bit1,PT:=TIME#1s,Q=>Bit2);
  END_ACTION

  ACTION S3_INLINE2:
    IF Bit2=1 THEN Bit1:=0;END_IF;
  END_ACTION

  TRANSITION FROM S3 TO S4
    := Bit2;
  END_TRANSITION

  STEP S4:
    S4_INLINE7(N);
    S4_INLINE8(N);
  END_STEP

  ACTION S4_INLINE7:
    T4(IN:=Bit2,PT:=TIME#1s,Q=>Bit3);
  END_ACTION

  ACTION S4_INLINE8:
    IF Bit3=1 THEN Bit2:=0;END_IF;
  END_ACTION

  TRANSITION FROM S4 TO S5
    := Bit3;
  END_TRANSITION

  STEP S5:
    S5_INLINE5(N);
    S5_INLINE6(N);
  END_STEP

  ACTION S5_INLINE5:
    T5(IN:=Bit3,PT:=TIME#1s,Q=>Bit4);
  END_ACTION

  ACTION S5_INLINE6:
    IF Bit4=1 THEN Bit3:=0;END_IF;
  END_ACTION

  TRANSITION FROM S5 TO S6
    := Bit4;
  END_TRANSITION

  STEP S6:
    S6_INLINE11(N);
    S6_INLINE12(N);
  END_STEP

  ACTION S6_INLINE11:
    T6(IN:=Bit4,PT:=TIME#1s,Q=>Bit5);
  END_ACTION

  ACTION S6_INLINE12:
    IF Bit5=1 THEN Bit4:=0;END_IF;
  END_ACTION

  TRANSITION FROM S6 TO S7
    := Bit5;
  END_TRANSITION

  STEP S7:
    S7_INLINE9(N);
    S7_INLINE10(N);
  END_STEP

  ACTION S7_INLINE9:
    T7(IN:=Bit5,PT:=TIME#1s,Q=>Bit6);
  END_ACTION

  ACTION S7_INLINE10:
    IF Bit6=1 THEN Bit5:=0;END_IF;
  END_ACTION

  TRANSITION FROM S7 TO S8
    := Bit6;
  END_TRANSITION

  STEP S8:
    S8_INLINE15(N);
    S8_INLINE16(N);
  END_STEP

  ACTION S8_INLINE15:
    T8(IN:=Bit6,PT:=TIME#1s,Q=>Bit7);
  END_ACTION

  ACTION S8_INLINE16:
    IF Bit7=1 THEN Bit6:=0;END_IF;
  END_ACTION

  TRANSITION FROM S8 TO loop
    := Bit7 or stop;
  END_TRANSITION

  TRANSITION FROM S8 TO Start
    := stop;
  END_TRANSITION

  TRANSITION FROM S7 TO Start
    := stop;
  END_TRANSITION

  TRANSITION FROM S6 TO Start
    := stop;
  END_TRANSITION

  TRANSITION FROM S5 TO Start
    := stop;
  END_TRANSITION

  TRANSITION FROM S4 TO Start
    := stop;
  END_TRANSITION

  TRANSITION FROM S3 TO Start
    := stop;
  END_TRANSITION

  TRANSITION FROM S2 TO Start
    := stop;
  END_TRANSITION

  TRANSITION FROM S1 TO Start
    := stop;
  END_TRANSITION

  TRANSITION FROM loop TO Start
    := stop;
  END_TRANSITION

END_FUNCTION_BLOCK

PROGRAM Idle
  VAR
    ffg : SFC_horse;
    bw : BUF_WRITE;
    bbb : B16_U16;
  END_VAR

  ffg(Enable := 1);
  bbb(B0 := ffg.Bit0, B1 := ffg.Bit1, B2 := ffg.Bit2, B3 := ffg.Bit3, B4 := ffg.Bit4, B5 := ffg.Bit5, B6 := ffg.Bit6, B7 := ffg.Bit7);
  bw(BUFTYPE := 2, IDX := 0, INU16 := bbb.U16);
END_PROGRAM


CONFIGURATION conf

  RESOURCE src ON PLC
    VAR_GLOBAL
      ginit : BOOL;
    END_VAR
    TASK tsk2(INTERVAL := T#4ms,PRIORITY := 0);
    PROGRAM ref3 WITH tsk2 : Idle;
  END_RESOURCE
END_CONFIGURATION
