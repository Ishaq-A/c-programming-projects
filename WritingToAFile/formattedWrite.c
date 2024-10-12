#include <stdio.h>
#include <stdlib.h>

int main() {

    FILE *filePtr;
    filePtr = fopen("file.txt", "w+");

    fprintf(filePtr, "%s %s %s %s %d", "Hello", "my", "number", "is", 9000);

    fclose(filePtr);
    filePtr = NULL;

    printf("\n");
    return 0;
}

