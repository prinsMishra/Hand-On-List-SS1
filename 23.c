/*

============================================================================

Name : 23.c

Author : Prins Mishra

Description : 23. Write a program to create a Zombie state of the running program.

Date: 28th Aug, 2025.

============================================================================

*/








#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>

int main(){
int pid;
pid = fork();

if(pid == 0){

//printf("child process %d\n", getpid());
exit(0);
}

else{
sleep(30);
printf("parent process %d\n",getpid());

}
return 0;
}
/*F S   UID     PID    PPID  C PRI  NI ADDR SZ WCHAN  TTY          TIME CMD
0 S  1000    5458    5451  0  80   0 -  5145 do_wai pts/0    00:00:00 bash
0 S  1000    5736    5458  0  80   0 -   637 hrtime pts/0    00:00:00 a.out
1 Z  1000    5737    5736  0  80   0 -     0 -      pts/0    00:00:00 a.out
4 R  1000    5738    5458 99  80   0 -  5612 -      pts/0    00:00:00 ps
*/
