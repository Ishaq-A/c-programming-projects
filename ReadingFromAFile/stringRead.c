#include <stdio.h>

int main() {

    FILE *filePtr;
    char str[60];

    // Open file for reading
    filePtr = fopen("file.txt", "r");

    if(filePtr == NULL) {
        printf("Error opening file\n");
        return -1;
    }

    if(fgets(str, 60, filePtr) != NULL) {
        // Writing contents to standard output
        printf("%s\n", str);
    }

    // Close file
    fclose(filePtr);
    filePtr = NULL;

    printf("\n");
    return 0;
}

