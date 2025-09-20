/*

============================================================================

Name :13.c

Author : Prins Mishra

Description : 13. Write a program to wait for a STDIN for 10 seconds using select. Write a proper print statement to
verify whether the data is available within 10 seconds or not (check in $man 2 select).

Date: 28th Aug, 2025.

============================================================================

*/






#include <stdio.h>
#include <unistd.h>
#include <sys/select.h>

int main() {
    fd_set r;
    struct timeval t = {5, 0};   // 5 sec timeout
    char buf[100];

    FD_ZERO(&r);
    FD_SET(0, &r);               // monitor stdin (fd=0)

    if (select(1, &r, NULL, NULL, &t) > 0) {
        int n = read(0, buf, sizeof(buf));
        write(1, buf, n);
    } else {
        write(1, "Timeout\n", 8);
}
return 0;
}
// write any thing in 10 sec
