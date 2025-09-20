 /*

============================================================================

Name : 19.c

Author : Prins Mishra

Description : 19. Write a program to find out time taken to execute getpid system call. Use time stamp counter.

Date: 28th Aug, 2025.

============================================================================

*/ 






#include<stdio.h>
#include<unistd.h>
#include<sys/time.h>

int main(){

struct timeval start, end;
gettimeofday(&start, NULL);
int pid = getpid();
gettimeofday(&end, NULL);

long us = (end.tv_sec - start.tv_sec) * 1000000L + (end.tv_usec - start.tv_usec);


printf("pid of the getpid: %d\n", pid);
printf("time taken for getpid(): %ld microsec\n", us);
return 0;

}
/*
pid of the getpid: 9195
time taken for getpid(): 24 microsec
*/
