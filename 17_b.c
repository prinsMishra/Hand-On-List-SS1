/*

============================================================================

Name : 17_b.c

Author : Prins Mishra

Description :17. Write a program to simulate online ticket reservation. Implement write lo>
Write a program to open a file, store a ticket number and exit. Write a separate program, >
open the file, implement write lock, read the ticket number, increment the number and print
the new ticket number then close the file.

Date: 28th Aug, 2025.

============================================================================

*/






#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>

int main() {
    struct flock lock;
    int fd;
    int ticket_number;

    fd = open("ticket.txt", O_RDWR);
    if (fd == -1) {
        perror("Error opening file");
        exit(1);
    }

    lock.l_type = F_WRLCK;
    lock.l_whence = SEEK_SET;
    lock.l_start = 0;
    lock.l_len = 0;

    printf("Attempting to acquire write lock...\n");
    fcntl(fd, F_SETLKW, &lock);
    printf("Write lock acquired.\n");
     lseek(fd, 0, SEEK_SET);
    scanf("%d", &ticket_number);

    ticket_number++;

    printf("Ticket reserved: %d\n", ticket_number);

    ftruncate(fd, 0); 
    lseek(fd, 0, SEEK_SET); 

    dprintf(fd, "%d", ticket_number); 

    lock.l_type = F_UNLCK;
    fcntl(fd, F_SETLKW, &lock);
    printf("Lock released.\n");

    close(fd);
    
    return 0;
}
//Attempting to acquire write lock...
//Write lock acquired.

