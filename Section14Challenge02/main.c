#include <stdio.h>
#include <stdlib.h>

#define FILENAME "text.txt"

int main() {

    FILE *filePtr1 = NULL;
    FILE *filePtr2 = NULL;
    int ch = 0;

    filePtr1 = fopen("file.txt", "r");

    if(filePtr1 == NULL) {
        return -1;
    }

    filePtr2 = fopen("temp.txt", "w");

    if(filePtr2 == NULL) {
        return -1;
    }

    while((ch = fgetc(filePtr1)) != EOF) {
        if(islower(ch)) {
            ch -= 32;
        }

        fputc(ch, filePtr2);
    }

    fclose(filePtr1);
    fclose(filePtr2);
    
    rename("temp.txt", FILENAME);
    remove("temp.txt");

    filePtr1 = fopen(FILENAME, "r");

    while((ch = fgetc(filePtr1)) != EOF) {
        printf("%c", ch);
    }

    printf("\n");

    fclose(filePtr1);
    filePtr1 = NULL;
    filePtr2 = NULL;

    printf("\n");
    return 0;
}

