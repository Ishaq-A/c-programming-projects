#include <stdio.h>
#include <string.h>

int main() {

    char myString[] = "this is my string";

    for(int i = 0; (myString[i] = (char) toupper(myString[i]) != '\0'); i++);

    printf("\n");
    return 0;
}

