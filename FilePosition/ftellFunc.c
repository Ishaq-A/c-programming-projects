#include <stdio.h>

int main() {

    FILE *filePtr;
    int len;

    filePtr = fopen("file.txt", "r");

    if(filePtr == NULL) {
        perror("Error opening file\n");
        return - 1;
    }

    fseek(filePtr, 0, SEEK_END);
    len = ftell(filePtr);

    fclose(filePtr);
    filePtr = NULL;

    printf("Total size of file.txt = %d bytes\n", len);

    printf("\n");
    return 0;
}

