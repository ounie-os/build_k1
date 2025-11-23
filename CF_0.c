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
#include <elog.h>

extern UNS16 gUIBufs[1000];
extern UNS16 gUOBufs[1000];
UNS8 send_consise_dcf(CO_Data* d, UNS8 nodeId,ec_slave_config_t *sc);
//RT_TASK my_task;
static int run = 1;
////////////////////////////////////
//tl[0] ccode
//0
#define ESLV_ALIAS_POS_0  0, 0//EK1100
#define EK1100_VID_PCODE 0x2,0x44C2C52//EK1100
//tl[0] ccode
//1
#define ESLV_ALIAS_POS_1  0, 1//EL2889
#define EL2889_VID_PCODE 0x00000002, 0x0b493052//EL2889


static unsigned char el2889_7000_1_1 = 0;//8bits used
static unsigned char el2889_7080_1_1 = 0;//8bits used

ec_pdo_entry_info_t slave_1_pdo_entries[] = {
    {0x7000, 0x01, 1}, /* Output */
    {0x7010, 0x01, 1}, /* Output */
    {0x7020, 0x01, 1}, /* Output */
    {0x7030, 0x01, 1}, /* Output */
    {0x7040, 0x01, 1}, /* Output */
    {0x7050, 0x01, 1}, /* Output */
    {0x7060, 0x01, 1}, /* Output */
    {0x7070, 0x01, 1}, /* Output */
    {0x7080, 0x01, 1}, /* Output */
    {0x7090, 0x01, 1}, /* Output */
    {0x70a0, 0x01, 1}, /* Output */
    {0x70b0, 0x01, 1}, /* Output */
    {0x70c0, 0x01, 1}, /* Output */
    {0x70d0, 0x01, 1}, /* Output */
    {0x70e0, 0x01, 1}, /* Output */
    {0x70f0, 0x01, 1}, /* Output */
};

ec_pdo_info_t slave_1_pdos[] = {
    {0x1600, 1, slave_1_pdo_entries + 0}, /* Channel 1 */
    {0x1601, 1, slave_1_pdo_entries + 1}, /* Channel 2 */
    {0x1602, 1, slave_1_pdo_entries + 2}, /* Channel 3 */
    {0x1603, 1, slave_1_pdo_entries + 3}, /* Channel 4 */
    {0x1604, 1, slave_1_pdo_entries + 4}, /* Channel 5 */
    {0x1605, 1, slave_1_pdo_entries + 5}, /* Channel 6 */
    {0x1606, 1, slave_1_pdo_entries + 6}, /* Channel 7 */
    {0x1607, 1, slave_1_pdo_entries + 7}, /* Channel 8 */
    {0x1608, 1, slave_1_pdo_entries + 8}, /* Channel 9 */
    {0x1609, 1, slave_1_pdo_entries + 9}, /* Channel 10 */
    {0x160a, 1, slave_1_pdo_entries + 10}, /* Channel 11 */
    {0x160b, 1, slave_1_pdo_entries + 11}, /* Channel 12 */
    {0x160c, 1, slave_1_pdo_entries + 12}, /* Channel 13 */
    {0x160d, 1, slave_1_pdo_entries + 13}, /* Channel 14 */
    {0x160e, 1, slave_1_pdo_entries + 14}, /* Channel 15 */
    {0x160f, 1, slave_1_pdo_entries + 15}, /* Channel 16 */
};

ec_sync_info_t slave_1_syncs[] = {
    {0, EC_DIR_OUTPUT, 8, slave_1_pdos + 0, EC_WD_ENABLE},
    {1, EC_DIR_OUTPUT, 8, slave_1_pdos + 8, EC_WD_ENABLE},
    {0xff}
};


// process data
#define domain_regs_1 \
{ESLV_ALIAS_POS_1, EL2889_VID_PCODE, 0x7000, 0x01, &el2889_7000_1_1, NULL},\
{ESLV_ALIAS_POS_1, EL2889_VID_PCODE, 0x7080, 0x01, &el2889_7080_1_1, NULL},

/****************************************************************************/
ec_master_t *master = NULL;
static ec_master_state_t master_state = {};
static ec_domain_state_t domain0_state = {};
static uint8_t *domain0_pd = NULL;
/****************************************************************************/
// process data
ec_domain_t *domain0 = NULL;
static ec_slave_config_t *ek1100_0_config = NULL;
static ec_slave_config_t *el2889_1_config = NULL;

// process data
uint16_t slave_num = 2;
const static ec_pdo_entry_reg_t domain0_regs[] = {
domain_regs_1
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
uint64_t get_time_ns()
{
    struct timespec ts;
    clock_gettime(CLOCK_MONOTONIC, &ts);
    return (uint64_t)ts.tv_sec * 1000000000ULL + ts.tv_nsec;
}
void __retrieve_0()
{
#ifdef WIN32R	
return;
#else
	uint64_t app_time = get_time_ns();
	ecrt_master_application_time(master, app_time);
	ecrt_master_receive(master);
	ecrt_domain_process(domain0);
#endif
}
void __publish_0()
{
#ifdef WIN32R	
return;
#else
    EC_WRITE_U8(domain0_pd + el2889_7000_1_1, HIO_Output_Bools[0]&0xFF);
ecrt_domain_queue(domain0);
ecrt_master_send(master);
#endif
}
extern unsigned long long common_ticktime__;
int __init_0()
{
	master = ecrt_request_master(0);
    if (!master) { puts("request master failed"); return -1; }
    domain0 = ecrt_master_create_domain(master);
    if (!domain0) { puts("create domain failed"); return -1; }
    ek1100_0_config = ecrt_master_slave_config(master, ESLV_ALIAS_POS_0, EK1100_VID_PCODE);
	el2889_1_config = ecrt_master_slave_config(master, ESLV_ALIAS_POS_1, EL2889_VID_PCODE);
	if (ecrt_slave_config_pdos(el2889_1_config, EC_END, slave_1_syncs)) {
		fprintf(stderr, "[PAC]Failed to configure PDOs.\n");
		return -1;
	}
	ecrt_domain_reg_pdo_entry_list(domain0, domain0_regs);
    // 激活总线 
    if (ecrt_master_activate(master)) { puts("activate failed"); return 1; }
    domain0_pd = ecrt_domain_data(domain0);
	log_i("initok");
	return 0;
}

void __cleanup_0()
{
#ifdef WIN32R	
return;
#else
    printf("End of Program\n");
    ecrt_release_master(master);
#endif
}
void plcrun()
{
	    static uint8_t pattern = 0x01;
		//puts("|");
		log_i("plcrun");
		uint64_t app_time = get_time_ns();
		ecrt_master_application_time(master, app_time);
        // 2. 接收帧（主站仍需收帧才能发帧） 
        ecrt_master_receive(master);
        ecrt_domain_process(domain0);
		
        // 3. 生成简单扫灯 pattern：0x01 左移 
        //pattern = (pattern << 1) | (pattern >> 7);
EC_WRITE_U8(domain0_pd + el2889_7000_1_1,pattern++/100);
		//printf("pattern:%d",pattern);
        // 4. 发送帧 
        ecrt_domain_queue(domain0);
        ecrt_master_send(master);
}
