na/*
============================================================================
Name : 3.c
Author : Prins Mishra
Description  3. Write a program to create a file and print the file descriptor
 value. Use creat ( ) system call
Date: 28th Aug, 2025.
============================================================================
*/






#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>

int main() {
    int fd;
    fd = creat("my_new_file.txt", 0644);
    if (fd == -1) {
        perror("creat");
        exit(1);
    }
    printf("File 'my_new_file.txt' created successfully.\n");
    printf("File descriptor value: %d\n", fd);
    close(fd);
    return 0;
}
//File 'my_new_file.txt' created successfully.
//File descriptor value: 3

