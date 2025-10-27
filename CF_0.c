//ver 0.01
#define _GNU_SOURCE

#include <errno.h>
#include <signal.h>
#include <stdio.h>
#include <string.h>
#ifndef WIN32R
#include <sys/resource.h>
#include <sys/time.h>
#include <sys/types.h>
#include <unistd.h>
#include <sys/mman.h>
//#include <rtdm/rtdm.h>
//#include <native/task.h>
//#include <native/sem.h>
//#include <native/mutex.h>
//#include <native/timer.h>
//#include <rtdk.h>
#include <pthread.h>
#include <fcntl.h>
#include "ecrt.h"
#include "OD_0_0.h"
#include <time.h>


extern UNS16 gUIBufs[1000];
extern UNS16 gUOBufs[1000];
UNS8 send_consise_dcf(CO_Data* d, UNS8 nodeId,ec_slave_config_t *sc);
//RT_TASK my_task;
static int run = 1;
/****************************************************************************/
//tl[0] ccode
//0
#define ESLV_ALIAS_POS_0  0, 0//EK1100
#define EK1100_VID_PCODE 0x2,0x44C2C52//EK1100


//tl[0] ccode
//1
#define ESLV_ALIAS_POS_1  0, 1//EL1008
#define EL1008_VID_PCODE 0x00000002, 0x03f03052//EL1008


static unsigned char el1008_6000_1_1 = 0;//8bits used

ec_pdo_entry_info_t slave_1_pdo_entries[] = {
    {0x6000, 0x01, 1}, /* Input */
    {0x6010, 0x01, 1}, /* Input */
    {0x6020, 0x01, 1}, /* Input */
    {0x6030, 0x01, 1}, /* Input */
    {0x6040, 0x01, 1}, /* Input */
    {0x6050, 0x01, 1}, /* Input */
    {0x6060, 0x01, 1}, /* Input */
    {0x6070, 0x01, 1}, /* Input */
};

ec_pdo_info_t slave_1_pdos[] = {
    {0x1a00, 1, slave_1_pdo_entries + 0}, /* Channel 1 */
    {0x1a01, 1, slave_1_pdo_entries + 1}, /* Channel 2 */
    {0x1a02, 1, slave_1_pdo_entries + 2}, /* Channel 3 */
    {0x1a03, 1, slave_1_pdo_entries + 3}, /* Channel 4 */
    {0x1a04, 1, slave_1_pdo_entries + 4}, /* Channel 5 */
    {0x1a05, 1, slave_1_pdo_entries + 5}, /* Channel 6 */
    {0x1a06, 1, slave_1_pdo_entries + 6}, /* Channel 7 */
    {0x1a07, 1, slave_1_pdo_entries + 7}, /* Channel 8 */
};

ec_sync_info_t slave_1_syncs[] = {
    {0, EC_DIR_INPUT, 8, slave_1_pdos + 0, EC_WD_DISABLE},
    {0xff}
};


// process data
#define domain_regs_1 \
{ESLV_ALIAS_POS_1, EL1008_VID_PCODE, 0x6000, 0x01, &el1008_6000_1_1, NULL},


//tl[0] ccode
//2
#define ESLV_ALIAS_POS_2  0, 2//EL2008
#define EL2008_VID_PCODE 0x00000002, 0x07d83052//EL2008


static unsigned char el2008_7000_1_2 = 0;//8bits used

ec_pdo_entry_info_t slave_2_pdo_entries[] = {
    {0x7000, 0x01, 1}, /* Output */
    {0x7010, 0x01, 1}, /* Output */
    {0x7020, 0x01, 1}, /* Output */
    {0x7030, 0x01, 1}, /* Output */
    {0x7040, 0x01, 1}, /* Output */
    {0x7050, 0x01, 1}, /* Output */
    {0x7060, 0x01, 1}, /* Output */
    {0x7070, 0x01, 1}, /* Output */
};

ec_pdo_info_t slave_2_pdos[] = {
    {0x1600, 1, slave_2_pdo_entries + 0}, /* Channel 1 */
    {0x1601, 1, slave_2_pdo_entries + 1}, /* Channel 2 */
    {0x1602, 1, slave_2_pdo_entries + 2}, /* Channel 3 */
    {0x1603, 1, slave_2_pdo_entries + 3}, /* Channel 4 */
    {0x1604, 1, slave_2_pdo_entries + 4}, /* Channel 5 */
    {0x1605, 1, slave_2_pdo_entries + 5}, /* Channel 6 */
    {0x1606, 1, slave_2_pdo_entries + 6}, /* Channel 7 */
    {0x1607, 1, slave_2_pdo_entries + 7}, /* Channel 8 */
};

ec_sync_info_t slave_2_syncs[] = {
	{0, EC_DIR_OUTPUT, 8, slave_2_pdos + 0, EC_WD_ENABLE},
    {0xff}
};


// process data
#define domain_regs_2 \
{ESLV_ALIAS_POS_2, EL2008_VID_PCODE, 0x7000, 0x01, &el2008_7000_1_2, NULL},



/****************************************************************************/
ec_master_t *master = NULL;
static ec_master_state_t master_state = {};
static ec_domain_state_t domain0_state = {};
static uint8_t *domain0_pd = NULL;
/****************************************************************************/
// process data
ec_domain_t *domain0 = NULL;
static ec_slave_config_t *ek1100_0_config = NULL;
static ec_slave_config_t *el1008_1_config = NULL;
static ec_slave_config_t *el2008_2_config = NULL;

// process data
uint16_t slave_num = 3;
const static ec_pdo_entry_reg_t domain0_regs[] = {
domain_regs_1
domain_regs_2
{}
};
/****************************************************************************/
#define U16_8(s,dh,dl) dl=s&0xFF; dh=s>>8
#define U32_16(s,dh,dl) dl=s&0xFFFF; dh=s>>16
#define U16_32(dh,dl) dh<<16|dl
/*****************************************************************************
 * Realtime task
 ****************************************************************************/
#endif

void __retrieve_0()
{
#ifdef WIN32R	
return;
#else
#ifdef ESCSYNC
	ecrt_master_receive(master);
#endif
	ecrt_domain_process(domain0);
//rcode for  EK1100
 
//tl[2] rcode


//rcode for  EL1008
 
//tl[2] rcode
/* Retrieve PDO */

HIO_Input_Bools[0] = EC_READ_U8(domain0_pd + el1008_6000_1_1);




//rcode for  EL2008
 
//tl[2] rcode
/* Retrieve PDO */






#endif
}
void __publish_0()
{
#ifdef WIN32R	
return;
#else
//tcode for  EK1100
 
//tl[3] tcode
/* Publish PDO */


//tcode for  EL1008
 
//tl[3] pcode



//tcode for  EL2008
 
//tl[3] pcode
/* Publish PDO */
	EC_WRITE_U8(domain0_pd + el2008_7000_1_2, (uint8_t)HIO_Output_Bools[0]);
	



ecrt_domain_queue(domain0);
#ifdef ESCSYNC
#ifdef DC
		sync_distributed_clocks();
#endif
		ecrt_master_send(master);
#endif
#endif
}

extern unsigned long long common_ticktime__;
#ifndef WIN32R
#include <linux/ioctl.h>
#define EC_IOCTL_TYPE 0xa4
#define EC_IOWR(nr, type) _IOWR(EC_IOCTL_TYPE, nr, type)

typedef struct {
// inputs
    uint16_t slave_position;
    // uint8_t emergency;
    uint16_t address;
    size_t size;
    uint8_t *data;
} ec_ioctl_slave_reg_t;
#define EC_IOCTL_SLAVE_REG_READ EC_IOWR(0x12, ec_ioctl_slave_reg_t)

#ifndef ESCSYNC
void bus_task_proc(void *arg);
//RT_TASK bus_task;
#endif

void bus_task_proc(void *arg);
//RT_TASK bus_task;
#endif

int __init_0()
{
#ifdef WIN32R	
return 0;
#else
{
    uint16_t slave_state;
    ec_ioctl_slave_reg_t reg;
    unsigned char all_is_preop = 0;

    reg.address = 0x130;
    reg.size = 2;
    reg.data = &slave_state;

    int fd = open("/dev/EtherCAT0", O_RDWR);
    if ( fd<0 )
        printf("open device error\n");

    system("ethercat rescan");
    usleep(5000000);//wait for 5s

    while(!all_is_preop)
    {
        unsigned char i = 0;
        for(i = 0; i<slave_num; i++)
        {
            reg.slave_position = i;
            if(ioctl(fd, EC_IOCTL_SLAVE_REG_READ, &reg) <0)
                ;//printf("ioctl error:%s\n", strerror(errno));
            else {
                //printf("slave %d state:%d\n", i, slave_state);
                if(slave_state != 0x02)
                    break;
            }
            usleep(1000);
        }
        
        if(i==slave_num) {
            all_is_preop = 1;
         } else {
            ioctl(fd, 0x0a, 0);//ethercat rescan
            system("ethercat rescan");
            usleep(5000000);//wait for 5s
        }
    }
    close(fd);
    //printf("all slave is preop, ok\n");
}//如果从站不是同时启动，resan从站数量会变化，rescan能保证获取到最终的物理从站数量
	
    master = ecrt_request_master(0);

    if (!master) {
        return -1;
    }

    domain0 = ecrt_master_create_domain(master);
    if (!domain0) {        return -1;    }

//icode for EK1100
 
//tl[1] icode
    ek1100_0_config = ecrt_master_slave_config(master, ESLV_ALIAS_POS_0, EK1100_VID_PCODE);
    


//icode for EL1008
 
//tl[1] icode
    el1008_1_config = ecrt_master_slave_config(master, ESLV_ALIAS_POS_1, EL1008_VID_PCODE);
	
    if (!el1008_1_config) 
	{
		fprintf(stderr, "[PAC]Failed to get slave configuration.\n");
		return -1;
	}
    if (ecrt_slave_config_pdos(el1008_1_config, EC_END, slave_1_syncs)) 
	{
		fprintf(stderr, "[PAC]Failed to configure PDOs.\n");
		return -1;
	}	




//icode for EL2008
 
//tl[1] icode
    el2008_2_config = ecrt_master_slave_config(master, ESLV_ALIAS_POS_2, EL2008_VID_PCODE);
	
    if (!el2008_2_config) 
	{
		fprintf(stderr, "[PAC]Failed to get slave configuration.\n");
		return -1;
	}
    if (ecrt_slave_config_pdos(el2008_2_config, EC_END, slave_2_syncs)) {
		fprintf(stderr, "[PAC]Failed to configure PDOs.\n");
		return -1;
	}	




ecrt_domain_reg_pdo_entry_list(domain0, domain0_regs);


    //printf("Activating master...\n");
    if (ecrt_master_activate(master)) {
        return -1;
    }
    if (!(domain0_pd = ecrt_domain_data(domain0))) {
        fprintf(stderr, "Failed to get domain data pointer.\n");
        return -1;
    }
	//add bus task for async/noesc
	#ifndef ESCSYNC
//	{
//		int ret;
//		ret = rt_task_create(&bus_task, "bus_task", 0, 99, T_FPU);
//		if (ret < 0) {
//			fprintf(stderr, "Failed to create task");
//			return -1;
//		}
//		//printf("Starting my_task...");
//		ret = rt_task_start(&bus_task, &bus_task_proc, NULL);
//		if (ret < 0) {
//			fprintf(stderr, "Failed to start task:");
//			return -1;
//		}
//	}	
	#endif
	return 0;
#endif
}

void __cleanup_0()
{
#ifdef WIN32R	
return;
#else
    //printf("End of Program\n");
    ecrt_release_master(master);
#endif
}

#ifndef WIN32R	
void rt_check_domain_state(void)
{
    ec_domain_state_t ds = {};

    ecrt_domain_state(domain0, &ds);

    if (ds.working_counter != domain0_state.working_counter) {
        //rt_printf("domain0: WC error");
    }

    if (ds.wc_state != domain0_state.wc_state) {
        //rt_printf("domain0: State error");
    }

    domain0_state = ds;
}

/****************************************************************************/

void rt_check_master_state(void)
{
    ec_master_state_t ms;

    ecrt_master_state(master, &ms);

    if (ms.slaves_responding != master_state.slaves_responding) {
        //rt_printf("%u slave(s).\n", ms.slaves_responding);
    }

    if (ms.al_states != master_state.al_states) {
        //rt_printf("AL states: 0x%02X.\n", ms.al_states);
    }

    if (ms.link_up != master_state.link_up) {
        //rt_printf("Link is %s.\n", ms.link_up ? "up" : "down");
    }

    master_state = ms;
}

/*****************************************************************************/
/** Synchronise the distributed clocks
 */
void sync_distributed_clocks(void)
{
    struct timespec ts;
    clock_gettime(CLOCK_REALTIME, &ts);
    int64_t ns = (int64_t)ts.tv_sec * 1000000000LL + ts.tv_nsec;

	ecrt_master_application_time(master, ns);
	
	// sync reference clock to master
	ecrt_master_sync_reference_clock(master);

	// call to sync slaves to ref slave
	ecrt_master_sync_slave_clocks(master);
}


void bus_task_proc(void *arg)
{
//	rt_task_set_periodic(NULL, TM_NOW, 1000000); // 1ms
//
//	while (run) {
//		rt_task_wait_period(NULL);
//		// receive EtherCAT frames
//		ecrt_master_receive(master);
//#ifdef DC
//		sync_distributed_clocks();
//#endif
//		ecrt_master_send(master);
//	}
}
#endif
