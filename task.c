
    
//#define MAXTASK 1
//RT_TASK my_task[MAXTASK ];
extern int TSK2;

int create_tasks()
{
    struct timespec wakeup;
    clock_gettime(CLOCK_MONOTONIC, &wakeup);

    while (1) {
        wakeup.tv_nsec += 4000000;
        if (wakeup.tv_nsec >= 1000000000L) {
            wakeup.tv_nsec -= 1000000000L;
            wakeup.tv_sec++;
        }
        clock_nanosleep(CLOCK_MONOTONIC, TIMER_ABSTIME, &wakeup, NULL);
        TSK2 =1;
        plc_run();
    }
}

#if 0

void task_proc0(void *arg)
{
    uint16_t status_word;
    uint16_t control_word;
    uint32_t counter = 0;
    uint32_t index = 0;
    short dh,dl;
    #ifdef ESCSYNC
    while (run) 
    {
        rt_dev_ioctl(fd, 9, NULL);
    #else
    rt_task_set_periodic(NULL, TM_NOW, 4000000.0); // ns
    while (run) 
    {
        rt_task_wait_period(NULL);
    #endif
        TSK2 =1;
		plc_run();

    }
}

int create_tasks()
{
    int ret;

    ret = rt_task_create(&my_task[0], "my_task0", 0, 98, T_FPU);
    if (ret < 0) {
        fprintf(stderr, "Failed to create task");
        return -1;
    }
    //printf("Starting my_task...");
    ret = rt_task_start(&my_task[0], &task_proc0, NULL);
    if (ret < 0) {
        fprintf(stderr, "Failed to start task:");
        return -1;
    }
    
}
#endif
            
    
