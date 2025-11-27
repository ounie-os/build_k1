//ver 0.01
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
#include <pthread.h>
#include "ecrt.h"
#include "OD_0_0.h"
#include <time.h>
#include <elog.h>

extern UNS16 gUIBufs[1000];
extern UNS16 gUOBufs[1000];
UNS8 send_consise_dcf(CO_Data* d, UNS8 nodeId,ec_slave_config_t *sc);
static int run = 1;
/****************************************************************************/
//tl[0] ccode 
//0 
# define ESLV_ALIAS_POS_0  0, 0//EP3EEC 
# define EP3EEC_VID_PCODE 0x7dd, 0x01//EP3EEC 
static uint32_t ep3eec_0x6040_0_0 = 0; /*Controlword*/
static uint32_t ep3eec_0x607A_0_0 = 0; /*Target Position*/
static uint32_t ep3eec_0x6041_0_0 = 0; /*Statusword*/
static uint32_t ep3eec_0x6064_0_0 = 0; /*Position Actual Value*/
ec_pdo_entry_info_t slave_0_pdo_entries[] = { 
    { 0x6040, 0, 16 }, /*Controlword*/
    { 0x607A, 0, 32 }, /*Target Position*/
    { 0x6041, 0, 16 }, /*Statusword*/
    { 0x6064, 0, 32 }, /*Position Actual Value*/
}; 
ec_pdo_info_t slave_0_pdos[] = { 
    {0x1601, 2, slave_0_pdo_entries + 0}, /*2nd Receive PDO mapping*/
    {0x1A01, 2, slave_0_pdo_entries + 2}, /*2nd Transmit PDO mapping*/
}; 
ec_sync_info_t slave_0_syncs[] = { 
    {0, EC_DIR_OUTPUT, 0, NULL, EC_WD_DISABLE}, 
    {1, EC_DIR_INPUT, 0, NULL, EC_WD_DISABLE}, 
    {2, EC_DIR_OUTPUT, 1, slave_0_pdos+0, EC_WD_DISABLE}, 
    {3, EC_DIR_INPUT, 1, slave_0_pdos+1, EC_WD_DISABLE}, 
    {0xff} 
}; 
// process data 
#define domain_regs_0 \ 
{ESLV_ALIAS_POS_0, EP3EEC_VID_PCODE, 0x6040, 0, &ep3eec_0x6040_0_0, NULL},\ 
{ESLV_ALIAS_POS_0, EP3EEC_VID_PCODE, 0x607A, 0, &ep3eec_0x607A_0_0, NULL},\ 
{ESLV_ALIAS_POS_0, EP3EEC_VID_PCODE, 0x6041, 0, &ep3eec_0x6041_0_0, NULL},\ 
{ESLV_ALIAS_POS_0, EP3EEC_VID_PCODE, 0x6064, 0, &ep3eec_0x6064_0_0, NULL}, 
//tl[0] ccode 
//1 
# define ESLV_ALIAS_POS_1  0, 1//EP3EEC 
# define EP3EEC_VID_PCODE 0x7dd, 0x01//EP3EEC 
static uint32_t ep3eec_0x6040_0_1 = 0; /*Controlword*/
static uint32_t ep3eec_0x607A_0_1 = 0; /*Target Position*/
static uint32_t ep3eec_0x6041_0_1 = 0; /*Statusword*/
static uint32_t ep3eec_0x6064_0_1 = 0; /*Position Actual Value*/
ec_pdo_entry_info_t slave_1_pdo_entries[] = { 
    { 0x6040, 0, 16 }, /*Controlword*/
    { 0x607A, 0, 32 }, /*Target Position*/
    { 0x6041, 0, 16 }, /*Statusword*/
    { 0x6064, 0, 32 }, /*Position Actual Value*/
}; 
ec_pdo_info_t slave_1_pdos[] = { 
    {0x1601, 2, slave_1_pdo_entries + 0}, /*2nd Receive PDO mapping*/
    {0x1A01, 2, slave_1_pdo_entries + 2}, /*2nd Transmit PDO mapping*/
}; 
ec_sync_info_t slave_1_syncs[] = { 
    {0, EC_DIR_OUTPUT, 0, NULL, EC_WD_DISABLE}, 
    {1, EC_DIR_INPUT, 0, NULL, EC_WD_DISABLE}, 
    {2, EC_DIR_OUTPUT, 1, slave_1_pdos+0, EC_WD_DISABLE}, 
    {3, EC_DIR_INPUT, 1, slave_1_pdos+1, EC_WD_DISABLE}, 
    {0xff} 
}; 
// process data 
#define domain_regs_1 \ 
{ESLV_ALIAS_POS_1, EP3EEC_VID_PCODE, 0x6040, 0, &ep3eec_0x6040_0_1, NULL},\ 
{ESLV_ALIAS_POS_1, EP3EEC_VID_PCODE, 0x607A, 0, &ep3eec_0x607A_0_1, NULL},\ 
{ESLV_ALIAS_POS_1, EP3EEC_VID_PCODE, 0x6041, 0, &ep3eec_0x6041_0_1, NULL},\ 
{ESLV_ALIAS_POS_1, EP3EEC_VID_PCODE, 0x6064, 0, &ep3eec_0x6064_0_1, NULL}, 

/****************************************************************************/
ec_master_t *master = NULL;
static ec_master_state_t master_state = {};
static ec_domain_state_t domain0_state = {};
static uint8_t *domain0_pd = NULL;
/****************************************************************************/
// process data
ec_domain_t *domain0 = NULL;
static ec_slave_config_t *ep3eec_0_config = NULL;
static ec_slave_config_t *ep3eec_1_config = NULL;

// process data
uint16_t slave_num = 2;
const static ec_pdo_entry_reg_t domain0_regs[] = {
domain_regs_0
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
#include "iec_types.h"
extern IEC_TIME __CURRENT_TIME;
void __retrieve_0()
{
#ifdef WIN32R	
return;
#else
	uint64_t app_time = __CURRENT_TIME.tv_sec*1000000000L+__CURRENT_TIME.tv_nsec;
	ecrt_master_application_time(master, app_time);
	ecrt_master_receive(master);
	ecrt_domain_process(domain0);
//rcode for EP3EEC
 
//tl[2] rcode
StatusWords[0+0] = EC_READ_U16(domain0_pd + ep3eec_0x6041_0_0+0);
U32_16(EC_READ_U32(domain0_pd + ep3eec_0x6064_0_0), Position_Actual_High[0+0], Position_Actual_Low[0+0]);

//rcode for EP3EEC
 
//tl[2] rcode
StatusWords[1+0] = EC_READ_U16(domain0_pd + ep3eec_0x6041_0_1+0);
U32_16(EC_READ_U32(domain0_pd + ep3eec_0x6064_0_1), Position_Actual_High[1+0], Position_Actual_Low[1+0]);


#endif
}
void __publish_0()
{
#ifdef WIN32R	
return;
#else
//tcode for EP3EEC
 
//tl[3] pcode
#if 1
if ((StatusWords[0+0] & 0x0008) == 0x0008)
	EC_WRITE_U16(domain0_pd + ep3eec_0x6040_0_0, 128);
else
	EC_WRITE_U16(domain0_pd + ep3eec_0x6040_0_0, ControlWords[0+0]);
#endif
EC_WRITE_U32(domain0_pd + ep3eec_0x607A_0_0, U16_32(Interpolation_data_records_high[0+0], Interpolation_data_records_low[0+0]));

//tcode for EP3EEC
 
//tl[3] pcode
#if 1
if ((StatusWords[1+0] & 0x0008) == 0x0008)
	EC_WRITE_U16(domain0_pd + ep3eec_0x6040_0_1, 128);
else
	EC_WRITE_U16(domain0_pd + ep3eec_0x6040_0_1, ControlWords[1+0]);
#endif
EC_WRITE_U32(domain0_pd + ep3eec_0x607A_0_1, U16_32(Interpolation_data_records_high[1+0], Interpolation_data_records_low[1+0]));


ecrt_domain_queue(domain0);
ecrt_master_send(master);
#endif
}
extern unsigned long long common_ticktime__;
int __init_0()
{
#ifdef WIN32R	
return 0;
#else
    master = ecrt_request_master(0);
	if (!master) {
        return -1;
    }
    domain0 = ecrt_master_create_domain(master);
    if (!domain0) {        return -1;    }

//icode for EP3EEC
  
//tl[1] icode 
ep3eec_0_config = ecrt_master_slave_config(master, ESLV_ALIAS_POS_0, EP3EEC_VID_PCODE); 
if (!ep3eec_0_config) { 
	fprintf(stderr, '[HPAC]Failed to get slave configuration.\n'); 
	return -1;
}
if (ecrt_slave_config_pdos(ep3eec_0_config, EC_END, slave_0_syncs)) { 
	fprintf(stderr, '[HPAC]Failed to configure PDOs.\n'); 
	return -1; 
} 
#ifdef DC 
	ecrt_slave_config_dc(ep3eec_0_config, 0x300, common_ticktime__, common_ticktime__/2, 0, 0); 
#endif 

//icode for EP3EEC
  
//tl[1] icode 
ep3eec_1_config = ecrt_master_slave_config(master, ESLV_ALIAS_POS_1, EP3EEC_VID_PCODE); 
if (!ep3eec_1_config) { 
	fprintf(stderr, '[HPAC]Failed to get slave configuration.\n'); 
	return -1;
}
if (ecrt_slave_config_pdos(ep3eec_1_config, EC_END, slave_1_syncs)) { 
	fprintf(stderr, '[HPAC]Failed to configure PDOs.\n'); 
	return -1; 
} 
#ifdef DC 
	ecrt_slave_config_dc(ep3eec_1_config, 0x300, common_ticktime__, common_ticktime__/2, 0, 0); 
#endif 

ecrt_domain_reg_pdo_entry_list(domain0, domain0_regs);


    //printf("Activating master...\n");
    if (ecrt_master_activate(master)) {
        return -1;
    }
    if (!(domain0_pd = ecrt_domain_data(domain0))) {
        fprintf(stderr, "Failed to get domain data pointer.\n");
        return -1;
    }
	return 0;
#endif
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
