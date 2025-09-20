/*

============================================================================

Name : 16.c

Author : Prins Mishra

Description : 16. Write a program to perform mandatory locking.
a. Implement write lock
b. Implement read lock

Date: 28th Aug, 2025.

============================================================================

*/ 





#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>

int main(int argc, char *argv[]) {

int fd = open(argv[1], O_RDWR);
struct flock lock;

    // ---- Write Lock ----
lock.l_type = F_WRLCK;     // exclusive lock
lock.l_whence = SEEK_SET;
lock.l_start = 0;
lock.l_len = 0;            // lock entire file


fcntl(fd, F_SETLKW, &lock);
    
getchar();

    // ---- Unlock ----
lock.l_type = F_UNLCK;
fcntl(fd, F_SETLK, &lock);

printf("Lock released.\n");
return 0;
}
