#include <stdio.h>

int main() {

    int count = 0;
    int ch;
    FILE *filePtr;
    filePtr = fopen("file.txt", "r");

    if(filePtr == NULL) {
        perror("Error opening file\n");
    }

    while((ch = fgetc(filePtr)) != EOF) {
        if(ch == '\n') {
            count++;
        }
    }

    printf("There are %d lines in the file\n", count + 1);

    fclose(filePtr);
    filePtr = NULL;

    printf("\n");
    return 0;
}

