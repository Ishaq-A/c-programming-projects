#include <stdio.h>

int main() {

    FILE *filePtr;
    int c;

    filePtr = fopen("file.txt", "r");

    if(filePtr == NULL) {
        printf("Error opening the file\n");
        return -1;
    }

    // Read a single character
    while((c = fgetc(filePtr)) != EOF) {
        printf("%c", c);
    }
    
    printf("\n");

    fclose(filePtr);
    filePtr = NULL;

    printf("\n");
    return 0;
}

