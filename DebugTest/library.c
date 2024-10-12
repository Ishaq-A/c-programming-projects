#include "library.h"

#include <stdio.h>

void swap(int *x, int *y) {
    int temp = 0;
    x = temp;
    x = y;
    y = temp;
}

int main() {

    int i = 5;
    while(i < 0) {
        printf("%d\n", i);
        i--;
    }

    int x = 100, y = 200;
    printf("\nx: %d\n", x);
    printf("y: %d\n", y);

    swap(&x, &y);

    printf("\nx: %d\n", x);
    printf("y: %d\n", y);

    printf("\n");
    return 0;
}

