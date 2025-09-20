/*

============================================================================

Name : 18.c

Author : Prins Mishra

Description :18. Write a program to perform Record locking.
a. Implement write lock
b. Implement read lock
Create three records in a file. Whenever you access a particular record, first lock it then modify/access
to avoid race condition.

Date: 28th Aug, 2025.

============================================================================

*/









#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>

int main() {
    int fd = open("records.txt", O_CREAT | O_RDWR, 0644);
    if (fd == -1) {
        perror("open");
        return 1;
    }

    write(fd, "00001\n", 6);
    write(fd, "00002\n", 6);
    write(fd, "00003\n", 6);

    close(fd);
    printf("File 'records.txt' with 3 records created.\n");

    return 0;
}
//File 'records.txt' with 3 records created.

