/*

============================================================================

Name :14.c

Author : Prins Mishra

Description :14 Write a program to find the type of a file.
a. Input should be taken from command line.
b. program should be able to identify any type of a file.

Date: 28th Aug, 2025.

============================================================================

*/







#include <stdio.h>
#include <sys/stat.h>
#include <unistd.h>
#include <string.h>

int main(int argc, char *argv[]) {
struct stat s;
if(argc <2){
printf("error\n");
}

lstat(argv[1], &s);
 if (S_ISREG(s.st_mode))   printf("Regular file\n");
 else if (S_ISDIR(s.st_mode))   printf("Directory\n");
  else if (S_ISLNK(s.st_mode))   printf("Symbolic link\n");
  else if (S_ISCHR(s.st_mode))   printf("Character device\n");
  else if (S_ISBLK(s.st_mode))   printf("Block device\n");
  else if (S_ISFIFO(s.st_mode))  printf("FIFO (named pipe)\n");
   else if (S_ISSOCK(s.st_mode))  printf("Socket\n");
return 0;
}

// Regualar file
// Directory
// Symbolic link
