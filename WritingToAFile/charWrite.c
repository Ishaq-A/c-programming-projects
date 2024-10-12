#include <stdio.h>

int main() {

    FILE *filePtr;
    int ch;

    filePtr = fopen("file.txt", "w+");

    for(ch = 33; ch <=100; ch++) {
        fputc(ch, filePtr);
    }

    fclose(filePtr);
    filePtr = NULL;

    printf("\n");
    return 0;
}

