#include <stdio.h>

int main() {

    FILE *filePtr;
    filePtr = fopen("file.txt", "w+");

    fputs("This is a C course. ", filePtr);
    fputs("I love Java instead! XD", filePtr);

    fclose(filePtr);
    filePtr = NULL;

    printf("\n");
    return 0;
}

