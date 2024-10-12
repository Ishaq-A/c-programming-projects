#include <stdio.h>
#include <stdlib.h>

#define FILENAME "file.txt"

int main() {

    FILE *filePtr = NULL;
    int count = 0;
    int i = 0;

    filePtr = fopen(FILENAME, "r");

    if(filePtr == NULL) {
        return -1;
    }

    // Moves file pointer to the end of the file
    fseek(filePtr, 0, SEEK_END);

    // Get the position of the file pointer
    count = ftell(filePtr);
    
    while(i < count) {
        i++;
        fseek(filePtr, -i, SEEK_END);
        printf("%c", fgetc(filePtr));
    }

    printf("\n");

    fclose(filePtr);
    filePtr = NULL;

    printf("\n");
    return 0;
}

