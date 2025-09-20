/*

============================================================================

Name :28.c

Author : Prins Mishra

Description : 28. Write a program to get maximum and minimum real time priority.

Date: 28th Aug, 2025.

============================================================================

*/







#include <stdio.h>
#include <sched.h>

int main() {


int min_fifo, max_fifo;
int min_rr, max_rr;

min_fifo = sched_get_priority_min(SCHED_FIFO);
max_fifo = sched_get_priority_max(SCHED_FIFO);


min_rr = sched_get_priority_min(SCHED_RR);
max_rr = sched_get_priority_max(SCHED_RR);

printf("SCHED_FIFO -> Min Priority: %d, Max Priority: %d\n", min_fifo, max_fifo);
printf("SCHED_RR   -> Min Priority: %d, Max Priority: %d\n", min_rr, max_rr);

    return 0;
}

/*
SCHED_FIFO -> Min Priority: 1, Max Priority: 99
SCHED_RR   -> Min Priority: 1, Max Priority: 99
*/
