#include <stdio.h>

void copyString1(char to[], char from[]) {
    int i;

    for(i = 0; from[i] != '\0'; i++) {
        to[i] = from[i];
    }

    to[i] = '\0';
}

void copyString2(char *to, char *from) {
    for(; *from != '\0'; from++, to++) {
        *to = *from;
        *to = '\0';
    }
}

void copyString3(char *to, char *from) {
    // The null charadcter is equal to 0,
    // so will jump out then
    while(*from) {
        *to++ = *from++;
    }

    *to = '\0';
}

int main() {
    char string1[] = "A string to be copied";
    char string2[50];

    copyString3(string2, string1);
    printf("%s\n", string2);

    printf("\n");
    return 0;
}

