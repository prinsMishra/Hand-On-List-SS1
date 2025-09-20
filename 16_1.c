#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>

int main(int argc, char *argv[]) {


int fd = open(argv[1], O_RDONLY);


struct flock lock;

lock.l_type = F_RDLCK;
lock.l_whence = SEEK_SET;
lock.l_start = 0;
lock.l_len = 0;

fcntl(fd, F_SETLKW, &lock);
getchar();

lock.l_type = F_UNLCK;
fcntl(fd, F_SETLK, &lock);

printf("Lock released.\n");
close(fd);
return 0;
}
// lock released
