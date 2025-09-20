/*

============================================================================

Name : 26.c

Author : Prins Mishra

Description 26. Write a program to execute an executable program.
a. use some executable program
b. pass some input to an executable program. (for example execute an executable of $./a.out name;

Date: 28th Aug, 2025.

============================================================================

*/ 








#include<stdio.h>

int main(int argc, char *argv[]){
if(argc>1){
printf("hello  %s\n", argv[1]);
}

else{
printf("hello world\n");
}

return 0;
}
//hello world
