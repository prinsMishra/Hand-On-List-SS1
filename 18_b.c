#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>

int main() {
    struct flock lock;
    int fd, record_num;
    char buffer[6];

    printf("Enter record number to modify (1, 2, or 3): ");
    scanf("%d", &record_num);

    fd = open("records.txt", O_RDWR);
    if (fd == -1) {
        perror("open");
        return 1;
    }

    lock.l_type = F_WRLCK;
    lock.l_whence = SEEK_SET;
    lock.l_start = (record_num - 1) * 6;
    lock.l_len = 6;

    printf("Attempting to acquire write lock on record %d...\n", record_num);
    fcntl(fd, F_SETLKW, &lock);
    printf("Write lock acquired on record %d. Press Enter to continue...\n", record_num);
    getchar();
    getchar();

    lseek(fd, lock.l_start, SEEK_SET);
    read(fd, buffer, 6);
    printf("Current content of record %d: %s\n", record_num, buffer);

    printf("Enter new content for record %d (5 digits): ", record_num);
    scanf("%s", buffer);

    lseek(fd, lock.l_start, SEEK_SET);
    write(fd, buffer, 6);
    lock.l_type = F_UNLCK;
    fcntl(fd, F_SETLKW, &lock);
    printf("Lock released. Record %d updated.\n", record_num);
    close(fd);

    return 0;
}
//Enter record number to modify (1, 2, or 3): 2
//Attempting to acquire write lock on record 2...
//Write lock acquired on record 2. Press Enter to continue...

