/*
============================================================================
Name : 4.c
Author : Prins Mishra
Description : 4. Write a program to open an existing file with read
 write mode. Try O_EXCL flag also.
Date: 28th Aug, 2025.
============================================================================
*/





#include <stdio.h>
#include<fcntl.h>
#include<unistd.h>
int main(){
int fd;
fd = open("myfile.txt", O_RDWR);
if(fd == -1){
perror("open");
return 1;
}
printf("file opened succesfully. fD = %d\n", fd);
close(fd);
fd = open("newfile.txt", O_CREAT | O_EXCL | O_RDWR, 0644);
if(fd == -1){
perror("open with O_EXCL");
return 1;
}
printf("file created succesfully with O_EXCL . FD =  %d\n" ,fd);
close(fd);
return 0;
}
//file opened succesfully. fD = 3
//file created succesfully with O_EXCL . FD =  3

