#include <stdio.h>
#include <stdlib.h>

int main() {

    FILE *filePtr;
    filePtr = fopen("file.txt", "w+");

    fputs("This is Aman", filePtr);
    fseek(filePtr, 7, SEEK_SET);
    fputs("Hello how are you?", filePtr);

    fclose(filePtr);
    filePtr = NULL;

    printf("\n");
    return 0;
}

