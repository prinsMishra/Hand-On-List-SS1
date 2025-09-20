/*

============================================================================

Name :8.c

Author : Prins Mishra

Description  8. Write a program to open a file in read only mode, read line by
 line and display each line as it is read.
Close the file when end of file is reached.:

Date: 28th Aug, 2025.

============================================================================

*/
#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *file;
    char *line = NULL;
    size_t len = 0;
    ssize_t read;
    file = fopen("sample.txt", "r");
    if (file == NULL) {
        perror("Error opening file");
        exit(EXIT_FAILURE);
    }
    while ((read = getline(&line, &len, file)) != -1) {
        printf("%s", line);
    }

    return 0;
}

/*
This is the first line.
This is the second line.
This is the third and final line.
*/

