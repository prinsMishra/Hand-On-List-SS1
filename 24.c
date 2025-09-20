/*

============================================================================

Name : 24.c

Author : Prins Mishra

Description : 24. Write a program to create an orphan process.
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
printf("child processid= %d parent pid= %d\n", getpid(), getppid());
sleep(20);
printf("par id after 20 sec = %d\n", getppid());
}

else{
printf("parent pid =%d, child pid =%d\n", getpid(), pid);
sleep(2);
exit(0);
}
return 0;
}
/*
 parent pid =3746, child pid =3747
child processid= 3747 parent pid= 3746
parid after 20 sec =  1802
*/

