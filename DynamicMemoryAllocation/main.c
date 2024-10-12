#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {

    char *str;

    // Initial memory allocation
    str = (char*) malloc(15 * sizeof(char));
    strcpy(str, "Geralt");
    printf("String = %s, Address = %u\n", str, str);

    // Reallocating memory
    str = (char*) realloc(str, 25 * sizeof(char));
    strcat(str, " of Rivia");
    printf("String = %s, Address = %u\n", str, str);

    free(str);

    printf("\n");
    return 0;
}

