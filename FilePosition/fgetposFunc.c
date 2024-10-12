#include <stdio.h>
#include <stdlib.h>

int main() {

    FILE *filePtr;
    fpos_t position;

    filePtr = fopen("file.txt", "w+");

    fgetpos(filePtr, &position);
    fputs("Hello, World!", filePtr);

    fsetpos(filePtr, &position);
    fputs("This will override the previous content", filePtr);

    fclose(filePtr);
    filePtr = NULL;

    printf("\n");
    return 0;
}

