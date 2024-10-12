#include <stdio.h>
#include <stdbool.h>

int main() {
    unsigned int a = 60; // 0011 1100
    unsigned int b = 13; // 0000 1101
    int result = 0;

    result = a | b;

    /*
    *       0011 1100
    *   OR  0000 1101
    */

   printf("result is: %d\n", result);

    printf("\n");
    return 0;
}

