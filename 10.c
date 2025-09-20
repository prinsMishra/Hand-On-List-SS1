/*

============================================================================

Name : 10.c

Author : Prins Mishra

Description : 10. Write a program to open a file with read write mode, write 10 bytes, move the file pointer by 10
bytes (use lseek) and write again 10 bytes.
a. check the return value of lseek
b. open the file with od and check the empty spaces in between the data.

Date: 28th Aug, 2025.

============================================================================

*/ 






#include <stdio.h>
#include<fcntl.h>
#include <unistd.h>
int main(){
int fd = open("seekfile.txt",O_CREAT | O_RDWR, 0644);
if(fd<0){
perror("open error");
return 1;
}

    write(fd, "ALKDFNGNBSA", 10);     

    int  pos = lseek(fd, 10, SEEK_CUR);
    printf("lseek returned %d\n", pos);

    write(fd, "SGNOFSBNOFB", 10);   

    close(fd);
    return 0;
}
// lseek returned 20
/*  0000000   A   A   A   A   A   A   A   A   A   A  \0  \0  \0  \0  \0  \0
0000020  \0  \0  \0  \0   B   B   B   B   B   B   B   B   B   B
0000036
*/
