/*

============================================================================

Name : 6.c

Author : Prins Mishra

Description :6. Write a program to take input from STDIN and display on STDOUT.
 Use only read/write system calls

Date: 28th Aug, 2025.

============================================================================

*/




#include <unistd.h>   // read(), write()
#include <string.h>   // strlen()
#include <stdio.h>
int main() {
    char buffer[100];     // store user input
    int n;


    n = read(0, buffer, sizeof(buffer));
    if (n < 0) {
        write(2, "Read error\n", 11);
        return 1;
    }
printf("%d\n",n);
write(1, buffer, n);
    return 0;
}
//write anything
