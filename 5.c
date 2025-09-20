/*

============================================================================

Name : 5.c

Author : Prins Mishra

Description : 5. Write a program to create five new files with infinite loop. Execute the program in the background
and check the file descriptor table at /proc/pid/fd.

Date: 28th Aug, 2025.

============================================================================

*/




#include<stdio.h>
#include<fcntl.h>
#include<unistd.h>

int main(){
int fd[5];
char filename[20];

for(int i =0;i<5;i++){

sprintf(filename, "file%d.text", i+1);
fd[i] = creat(filename,0644);

if(fd[i] == -1){
perror("create");
return 1;
}

printf("creted %s with fd = %d\n" , filename, fd[i]);
}

while(1){
}
return 0;
}
/*creted file1.text with fd = 3
creted file2.text with fd = 4
creted file3.text with fd = 5
creted file4.text with fd = 6
creted file5.text with fd = 7
*/
