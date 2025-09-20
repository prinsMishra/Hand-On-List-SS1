/*
============================================================================
Name : 1.c
Author : Prins Mishra
Description :1. Create the following types of a files using (i) shell command (ii) system call
a. soft link (symlink system call)
b. hard link (link system call)
c. FIFO (mkfifo Library Function or mknod system call)
Date: 28th Aug, 2025.
============================================================================
*/




// a. Soft link using symlink()
#include <stdio.h>
#include <unistd.h>

int main() {
    if (symlink("file1.txt", "softlink.txt") == -1)
        perror("symlink error");
    return 0;
}
 
