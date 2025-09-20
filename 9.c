/*

============================================================================

Name : 9.c

Author : Prins Mishra

Description : 9. Write a program to print the following information about a given file.
a. inode
b. number of hard links
c. uid
d. gid
e. size
f. block size
g. number of blocks
h. time of last access
i. time of last modification

Date: 28th Aug, 2025.

============================================================================

*/ 





#include<stdio.h>
#include<sys/stat.h>
#include<unistd.h>

int main(int arg, char  *args[]){

struct stat s;
if(arg<2) {
printf("file not fount error");
return 1;
}

if(stat(args[1],&s)<0){
perror("stat error");
return 1;
}

printf("inode %ld\n" , s.st_ino);
printf("hard links %ld\n" , s.st_nlink);
printf("uid %d\n", s.st_uid);
printf("gid %d\n", s.st_gid);
printf("file size %ld\n", s.st_size);

 printf("Block size: %ld\n", s.st_blksize);
 printf("Blocks: %ld\n", s.st_blocks);
 printf("Last Access: %ld\n", s.st_atime);
 printf("Last Modify: %ld\n", s.st_mtime);
 printf("Last Change: %ld\n", s.st_ctime);
return 0;
}

/*
inode 4588760
hard links 2
uid 1000
gid 1000
file size 1
Block size: 4096
Blocks: 8
Last Access: 1756832049
Last Modify: 1756832081
Last Change: 1756832081
*/
