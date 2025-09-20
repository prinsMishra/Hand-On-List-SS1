/*

============================================================================

Name : .c

Author : Prins Mishra

Description : 30. Write a program to run a script at a specific time using a Daemon process.
Date: 28th Aug, 2025.

============================================================================

*/ 



#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <time.h>
#include <sys/stat.h>
#include <sys/types.h>
#define SCRIPT_PATH "/home/prins/linux/my_script.sh"
#define RUN_HOUR 21
#define RUN_MINUTE 33

int main() {
pid_t pid, sid;


pid = fork();
if (pid < 0) {
exit(EXIT_FAILURE);
}

if (pid > 0) {
exit(EXIT_SUCCESS);
}

sid = setsid();
if (sid < 0) {
exit(EXIT_FAILURE);
}

if ((chdir("/")) < 0) {
exit(EXIT_FAILURE);
}

 close(STDIN_FILENO);
 close(STDOUT_FILENO);
 close(STDERR_FILENO);

while (1) {
time_t rawtime;
struct tm *info;


time(&rawtime);
 info = localtime(&rawtime);
if (info->tm_hour == RUN_HOUR && info->tm_min == RUN_MINUTE) {
system(SCRIPT_PATH);
sleep(60); 
}

sleep(10);
}

return 0;
}
//Script executed at Sun Sep  7 09:33:02 PM IST 2025
//Script executed at Sun Sep  7 09:33:07 PM IST 2025

