#include <stdio.h>
#include <stdbool.h>

int myGlobal = 0; // Global variable

int main() {

    int myLocal = 0; // Local variable

    // Can access myGlobal and myLocal

    printf("\n");
    return 0;
}

void myFunction() {
    int x; // Local variable

    // Can access myGlobal, and x. Cannot access myLocal
}

