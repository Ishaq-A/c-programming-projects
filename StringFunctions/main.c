#include <stdio.h>
#include <string.h>

int main() {

    char myString[] = "My name is Geralt";
    char input[80];

    printf("Enter a string to be concatenated: ");
    scanf("%s", input);

    strcat(myString, input);

    printf(myString);

    if(strncmp("astronomy", "astro", 5) == 0) {
        printf("Found: astronomy");
    }

    if(strncmp("astounding", "astro", 5) == 0) {
        printf("Found: astounding");
    }

    printf("\n");
    return 0;
}

