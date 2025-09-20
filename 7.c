/*

============================================================================

Name : 7.c

Author : Prins Mishra

Description :7. Write a program to copy file1 into file2 ($cp file1 file2).

Date: 28th Aug, 2025.

============================================================================

*/




#include<stdio.h>
#include<fcntl.h>
#include<unistd.h>

int main(int arg, char*args[]){
int fd1,fd2,n;
fd1  =open(args[1], O_RDONLY);
if(fd1<0){
perror("file not open");
return 1;
}

fd2 = open(args[2], O_WRONLY | O_CREAT);
if(fd2 <0){
perror("open error");
return 1;
}
printf("fd2 : %d\n",fd2);
char buffer[1024];
while(1){
n = read(fd1,buffer,1024);

if(n==0)
break;
n = write(fd2,buffer,n);
printf("%d\n",n);
}

return 0;
}
