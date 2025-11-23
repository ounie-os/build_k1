// gcc -o ek1100_el2008_rt ek1100_el2008_rt.c -I/opt/ethercat/include \
//     -L/opt/ethercat/lib -lethercat -pthread -lrt
#define _GNU_SOURCE
#include <stdio.h>
#include <time.h>
#include <pthread.h>
#include <sched.h>
#include <sys/mman.h>
#include <stdint.h>
#include <string.h>
#include "ecrt.h"

#define FREQ_HZ        2
#define PERIOD_NS      (1000000000L / FREQ_HZ)

/* 拓扑位置 */
#define EL2008_POS     0, 1
#define VID_PID_EL2008 0x00000002, 0x0b493052//EL2889

static ec_master_t *master;
static ec_domain_t *domain;
static uint8_t     *domain_pd;

/* PDO 输出偏移 */
static unsigned int off_el2008_out;

static void rt_task(void)
{
    struct timespec wakeup;
    uint8_t pattern = 0x01;

    clock_gettime(CLOCK_MONOTONIC, &wakeup);
    while (1) {
        /* 1 kHz 绝对周期 */
        wakeup.tv_nsec += PERIOD_NS;
        if (wakeup.tv_nsec >= 1000000000L) {
            wakeup.tv_nsec -= 1000000000L;
            wakeup.tv_sec++;
        }
        clock_nanosleep(CLOCK_MONOTONIC, TIMER_ABSTIME, &wakeup, NULL);

        /* 2. 接收帧（主站仍需收帧才能发帧） */
        ecrt_master_receive(master);
        ecrt_domain_process(domain);

        /* 3. 生成简单扫灯 pattern：0x01 左移 */
        pattern = (pattern << 1) | (pattern >> 7);
        EC_WRITE_U8(domain_pd + off_el2008_out, pattern);

        /* 4. 发送帧 */
        ecrt_domain_queue(domain);
        ecrt_master_send(master);
    }
}

int main(void)
{
    /* 实时化 */
    mlockall(MCL_CURRENT | MCL_FUTURE);
    struct sched_param sp = { .sched_priority = sched_get_priority_max(SCHED_FIFO) };
    pthread_setschedparam(pthread_self(), SCHED_FIFO, &sp);

    /* 请求主站与域 */
    master = ecrt_request_master(0);
    if (!master) { puts("request master failed"); return 1; }
    domain = ecrt_master_create_domain(master);
    if (!domain) { puts("create domain failed"); return 1; }

    /* 配置 EL2008（EK1100 自动识别，无需显式配置） */
    ec_slave_config_t *sc_out = ecrt_master_slave_config(
                                    master, EL2008_POS, VID_PID_EL2008);
    if (!sc_out) { puts("EL2008 config failed"); return 1; }

    /* 注册 8 位输出 PDO */
    off_el2008_out = ecrt_slave_config_reg_pdo_entry(
                        sc_out, 0x7000, 0x01, domain, NULL);
    if (off_el2008_out < 0) { puts("reg pdo failed"); return 1; }

    /* 激活总线 */
    if (ecrt_master_activate(master)) { puts("activate failed"); return 1; }
    domain_pd = ecrt_domain_data(domain);

    puts("EK1100+EL2008 PREEMPT_RT demo running at 1 kHz ...");
    rt_task();
    return 0;
}
