/*

============================================================================

Name : 22.c

Author : Prins Mishra

Description : 22. Write a program, open a file, call fork, and then write to the file by both the child as well as the
parent processes. Check output of the file.
Date: 28th Aug, 2025.

============================================================================

*/ 







#include<stdio.h>
#include<unistd.h>
#include <fcntl.h>
#include<string.h>

int main(){
int fd = open("program_22_file.txt", O_CREAT | O_WRONLY, 0644);

int pid;
pid = fork();

if(pid == 0){
write(fd, "child writing" ,13);
}
else{
//sleep(1);
write(fd, "parent writing",14);
}
return 0;
}

// parent writingchild writing
