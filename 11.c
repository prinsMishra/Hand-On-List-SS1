/*

============================================================================

Name : 11.c

Author : Prins Mishra

Description :11. Write a program to open a file, duplicate the file descriptor and append the file with both the
descriptors and check whether the file is updated properly or not.
a. use dup
b. use dup2
c. use fcntl

Date: 28th Aug, 2025.

============================================================================

*/ 







#include<stdio.h>
#include<unistd.h>
#include<fcntl.h>

int main(){

int fd1 ,fd2;
fd1 = open("duplicate.txt", O_CREAT | O_WRONLY | O_APPEND, 0644);

fd2 = dup(fd1);
dup2(fd1, 12);
int fd4 = fcntl(fd1, F_DUPFD); 
write(fd1, "hello from fd1\n",15);
write(fd2, "hello from fd2\n",15);
write(12, "hello from dup2\n",15);
write(fd4, "hello from fd4\n",15);

return 0;
}

/* hello from fd1
hello from fd2
hello from fd1
hello from fd2
hello from dup2hello from fd4

*/
