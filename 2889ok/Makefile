#K1
CC = /mnt/k1/spacemit-toolchain-linux-glibc-x86_64-v1.0.0/bin/riscv64-unknown-linux-gnu-gcc -std=c99
BASEPATH=$(CURDIR)
INC_PATH=$(BASEPATH)/include

#CFLAGS = -O0 -w -Wall -DECAT -I$(INC_PATH)/ecatlib/inc -I./ -I$(INC_PATH)/ecatlib/matiec/lib -I$(INC_PATH)/ecatlib/eloginc -I$(INC_PATH)/ecatlib/ecat_inc -I/home/usr/i686-buildroot-linux-gnu/sysroot/usr/include/python2.7 -DDC -fPIC

CFLAGS = -O0 -w -Wall -DECAT -I$(INC_PATH)/ecatlib/inc -I./ -I$(INC_PATH)/ecatlib/matiec/lib -I$(INC_PATH)/ecatlib/eloginc -I$(INC_PATH)/ecatlib/ecat_inc -I/home/usr/i686-buildroot-linux-gnu/sysroot/usr/include/python2.7 -DDC

#LDFLAGS = -shared -lpthread -lrt -ldl -L$(BASEPATH) -lmbtcp -leasylogger -lethercat
LDFLAGS = -lpthread -lrt -ldl -L$(BASEPATH) -lethercat 
#-lmbtcp -leasylogger -Wl,-rpath,$$ORIGIN/./

#TARGET = _plc.so
TARGET = _plc

#MASTER_OBJS = plc_common_main.o plc_debugger.o conf.o src.o CF_0.o OD_0_0.o modbus1.o
MASTER_OBJS = ek1100_el2889.o
OBJS =  $(MASTER_OBJS)

all : $(OBJS)
	@ $(CC) $(OBJS) $(CFLAGS) $(LDFLAGS) -o $(TARGET)

%.o : %.c
	@ $(CC) $(CFLAGS) -c $< -o $@
	
.PHONY: clean

clean:
	rm -rf $(MASTER_OBJS) $(TARGET)

