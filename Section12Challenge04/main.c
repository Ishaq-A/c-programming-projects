#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {

    int size;
    char *text = NULL;

    printf("Enter the limit of the text: ");
    scanf("%d", &size);

    text = (char*) malloc(size * sizeof(char));

    if(text != NULL) {
        printf("Enter the string: \n");
        scanf(" ");
        gets(text);
        printf("String is: %s\n", text);
    }

    free(text);

    printf("\n");
    return 0;
}

