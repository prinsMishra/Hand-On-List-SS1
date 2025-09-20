/*

============================================================================

Name : 20.c

Author : Prins Mishra

Description :20. Find out the priority of your running program. Modify the priority with nice command.

Date: 28th Aug, 2025.

============================================================================

*/







#include<stdio.h>
#include<unistd.h>

int main(){
while(1){
}
return 0;
}


/*
F S   UID     PID    PPID  C PRI  NI ADDR SZ WCHAN  TTY          TIME CMD
0 S  1000    3239    3231  0  80   0 -  5112 do_wai pts/0    00:00:00 bash
0 R  1000    4182    3239 99  90  10 -   637 -      pts/0    00:00:29 a.out
4 R  1000    4187    3239 99  80   0 -  5613 -      pts/0    00:00:00 ps
F S   UID     PID    PPID  C PRI  NI ADDR SZ WCHAN  TTY          TIME CMD
0 S  1000    3239    3231  0  80   0 -  5112 do_wai pts/0    00:00:00 bash
0 R  1000    4182    3239 99  91  11 -   637 -      pts/0    00:04:10 a.out
4 R  1000    4238    3239  0  80   0 -  5613 -      pts/0    00:00:00 ps
 */
