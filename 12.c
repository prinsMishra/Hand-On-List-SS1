/*

============================================================================

Name : 12.c

Author : Prins Mishra

Description : 12. Write a program to find out the opening mode of a file. Use fcntl.

Date: 28th Aug, 2025.

============================================================================

*/






#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>

int main(){

int fd, flags;

fd = open("file1.txt", O_RDONLY );
flags = fcntl(fd, F_GETFL);

switch(flags & O_ACCMODE){
case O_RDONLY : printf("file is readonlt\n"); break;
case O_WRONLY : printf("file is wronly\n");  break;
}
return  0;
}
// file is readonlt
