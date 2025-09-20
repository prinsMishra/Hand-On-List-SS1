/*

============================================================================

Name : 21.c

Author : Prins Mishra

Description : 21. Write a program, call fork and print the parent and child process id.

Date: 28th Aug, 2025.

============================================================================

*/







#include<stdio.h>
#include<unistd.h>

int main(){

int pid;

pid = fork();

if(pid == 0){
printf("I am a chlid process ,my pid = %d, parant pid =%d\n",getpid() , getppid());
}
else {

printf("i am parent my pid = %d, my child pid=%d\n", getpid(), pid);

}
return 0;
}

//i am parent my pid = 4376, my child pid=4377
//I am a chlid process ,my pid = 4377, parant pid =4376

