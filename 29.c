/*

============================================================================

Name : 29.c

Author : Prins Mishra

Description : 29. Write a program to get scheduling policy and modify the scheduling policy (SCHED_FIFO,
SCHED_RR).

Date: 28th Aug, 2025.

============================================================================

*/ 




#include <stdio.h>
#include <stdlib.h>
#include <sched.h>
#include <unistd.h>
#include <errno.h>

int main() {
pid_t pid = getpid();
int policy;
struct sched_param param;

 
policy = sched_getscheduler(pid);
if (policy == -1) {
        perror("sched_getscheduler");
        exit(EXIT_FAILURE);
    }

printf("Current scheduling policy: ");
switch(policy) {
        case SCHED_OTHER: printf("SCHED_OTHER\n"); break;
        case SCHED_FIFO:  printf("SCHED_FIFO\n"); break;
        case SCHED_RR:    printf("SCHED_RR\n"); break;
        default:          printf("UNKNOWN\n"); break;
    }

param.sched_priority = 10;
    if(sched_setscheduler(pid, SCHED_FIFO, &param) == -1) {
        perror("sched_setscheduler");
        exit(EXIT_FAILURE);
    }

    printf("Scheduling policy changed to SCHED_FIFO with priority %d\n", param.sched_priority);\
    policy = sched_getscheduler(pid);
    printf("New scheduling policy: ");
    switch(policy) {
        case SCHED_OTHER: printf("SCHED_OTHER\n"); break;
        case SCHED_FIFO:  printf("SCHED_FIFO\n"); break;
        case SCHED_RR:    printf("SCHED_RR\n"); break;
        default:          printf("UNKNOWN\n"); break;
    }

    return 0;
}
/*
[sudo] password for prins: 
Current scheduling policy: SCHED_OTHER
Scheduling policy changed to SCHED_FIFO with priority 10
New scheduling policy: SCHED_FIFO
*/
