#include <stdio.h>
#include <stdbool.h>

int main() {

    char str1[] = "To be or not to be";
    char str2[] = ", that is the question";
    unsigned int count = 0; // Stores the string length

    while(str1[count] != '\0') {
        // Increment count until
        // we reach the null character
        ++count;
    }

    printf("The length of the string \"%s\" is %d characters.\n", str1, count);

    count = 0; // Reset the count for the next string.

    while(str2[count] != '\0') {
        // Increment count until
        // we reach the null character
        ++count;
    }

    printf("The length of the string \"%s\" is %d characters.\n", str2, count);

    printf("\n");
    return 0;
}

