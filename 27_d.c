#include <stdio.h>
#include <unistd.h>

int main() {
printf("Using execv...\n");

char *args[] = { "ls", "-Rl", NULL };

execv("/bin/ls", args);

return 0;
}
/*
Using execv...
.:
total 228
-rw-rw-r-- 1 prins prins   530 Sep  2 22:34  10.c
-rw-rw-r-- 1 prins prins   464 Sep  2 23:26  11.c
-rw-rw-r-- 1 prins prins   319 Sep  2 23:57  12.c
-rw-rw-r-- 1 prins prins   441 Sep  6 10:46  13.c
-rw-rw-r-- 1 prins prins   655 Sep  5 12:35  14.c
-rw-rw-r-- 1 prins prins  3654 Sep  5 12:52  15.c
-rw-rw-r-- 1 prins prins   395 Sep  5 14:46  16_1.c
-rw-rw-r-- 1 prins prins   473 Sep  5 14:41  16.c
-rw-rw-r-- 1 prins prins   433 Sep  5 23:04  19.c
-rw-rw-r-- 1 prins prins   188 Sep  2 22:14  1.c
-rw-rw-r-- 1 prins prins   679 Sep  6 11:01  20.c
-rw-rw-r-- 1 prins prins   373 Sep  6 11:18  21.c
-rw-rw-r-- 1 prins prins   321 Sep  6 11:39  22.c
-rw-rw-r-- 1 prins prins   613 Sep  6 23:36  23.c
-rw-rw-r-- 1 prins prins   444 Sep  7 17:05  24.c
-rw-rw-r-- 1 prins prins   581 Sep  7 17:59  25.c
-rw-rw-r-- 1 prins prins   146 Sep  7 18:41  26_a.c
-rw-rw-r-- 1 prins prins    70 Sep  7 18:51  26_b.c
-rw-rw-r-- 1 prins prins  3052 Sep  7 19:18  27_a.c
-rw-rw-r-- 1 prins prins  3105 Sep  7 19:19  27_b.c
-rw-rw-r-- 1 prins prins  3225 Sep  7 19:26  27_c.c
-rw-rw-r-- 1 prins prins   158 Sep  7 19:27  27_d.c
-rw-rw-r-- 1 prins prins   427 Aug 17 23:56  7.c
-rw-rw-r-- 1 prins prins   413 Aug 17 23:22  8.c
-rw-rw-r-- 1 prins prins   623 Aug 19 14:51  9.c
---------- 1 prins prins    84 Aug 17 23:54  abc.txt
---------- 1 prins prins    84 Aug 17 23:55  ac.txt
-rwxrwxr-x 1 prins prins 16056 Sep  7 19:27  a.out
---------- 1 prins prins    84 Aug 17 23:56  cb.txt
-rw-r--r-- 1 prins prins    60 Sep  2 23:04 'duplicate file'
-rw-r--r-- 1 prins prins    90 Sep  2 23:24  duplicate.txt
-rw-rw-r-- 2 prins prins     1 Sep  2 22:24  file1.txt
-rw-rw-r-- 2 prins prins     1 Sep  2 22:24  file2.txt
-rw-r--r-- 1 prins prins    84 Aug 17 23:51  file3.txt
-rw-r--r-- 1 prins prins    84 Aug 17 23:51  file5.txt
---------- 1 prins prins    84 Aug 17 23:52  file7.txt
---------- 1 prins prins    84 Aug 17 23:53  file8.txt
---------- 1 prins prins    84 Aug 17 23:54  file9.txt
-rw-rw-r-- 1 prins prins     0 Sep  5 14:42  filelock.txt
-rw-rw-r-- 1 prins prins   161 Aug 15 18:34  hardlink.c
drwxrwxr-x 2 prins prins  4096 Sep  2 15:23  HL2
-rwxrwxr-x 1 prins prins 16000 Aug 15 19:21  loop
-rw-rw-r-- 1 prins prins   202 Aug 15 19:21  loop.c
prw-rw-r-- 1 prins prins     0 Aug 15 18:39  myfifo
prw-rw-r-- 1 prins prins     0 Sep  5 12:25  myfifofile
lrwxrwxrwx 1 prins prins    10 Sep  5 12:18  mylink -> myfile.txt
-rw-r--r-- 1 prins prins    27 Sep  6 11:38  program_22_file.txt
drwxrwxr-x 2 prins prins  4096 Sep  5 12:16  regulardir
-rw-rw-r-- 1 prins prins     0 Sep  5 12:15  regularfile.txt
lrwxrwxrwx 1 prins prins    15 Sep  5 12:16  regularlink -> regularfile.txt
-rw-r--r-- 1 prins prins    30 Sep  2 22:34  seekfile.txt
-rwxrwxr-x 1 prins prins 15776 Sep  5 23:32  test
-rw-rw-r-- 1 prins prins   117 Sep  5 23:32  test.c
-rw-r--r-- 1 prins prins    84 Aug 17 23:57  xcb.txt

./HL2:
total 24
-rw-rw-r-- 1 prins prins   362 Sep  2 15:22 14.c
-rw-rw-r-- 1 prins prins   369 Sep  2 15:23 14.c.save
-rwxrwxr-x 1 prins prins 16176 Sep  2 15:16 a.out

./regulardir:
total 0
*/
