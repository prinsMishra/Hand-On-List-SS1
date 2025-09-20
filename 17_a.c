/*

============================================================================

Name : 17_a.c

Author : Prins Mishra

Description :17. Write a program to simulate online ticket reservation. Implement write lock
Write a program to open a file, store a ticket number and exit. Write a separate program, to
open the file, implement write lock, read the ticket number, increment the number and print
the new ticket number then close the file.

Date: 28th Aug, 2025.

============================================================================

*/







#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *fp;
    fp = fopen("ticket.txt", "w");
    if (fp == NULL) {
        perror("Error opening file");
        exit(1);
    }


    fprintf(fp, "%d", 1);
    fclose(fp);

    printf("Initial ticket number 1 written to ticket.txt\n");

    return 0;
}
//Initial ticket number 1 written to ticket.txt

