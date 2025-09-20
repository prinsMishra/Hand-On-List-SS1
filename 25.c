/*

============================================================================

Name : 25.c

Author : Prins Mishra

Description : 25. Write a program to create three child processes. The parent should wait for a particular child (use
waitpid system call).

Date: 28th Aug, 2025.

============================================================================

*/ 





#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>
#include<sys/wait.h>

int main(){
pid_t cpid1, cpid2, cpid3;
cpid1 = fork();
if(cpid1 == 0){
printf("child 1 pid = %d, parent pid = %d\n",  getpid(), getppid());
sleep(2);
exit(0);
}

cpid2 = fork();
if(cpid2 == 0){
printf("child 2 pid = %d, parent pid = %d\n",  getpid(), getppid());
sleep(4);
exit(0);
}

cpid3 = fork();
if(cpid3 == 0){
printf("child 3 pid = %d, parent pid = %d\n",  getpid(), getppid());
sleep(6);
exit(0);
}


pid_t wpid = waitpid(cpid3,NULL, 0);
printf("parent wait for pid: %d\n", wpid);
return 0;

}

/*
child 1 pid = 8249, parent pid = 8248
child 2 pid = 8250, parent pid = 8248
child 3 pid = 8251, parent pid = 8248
parent wait for pid: 8251
*/

