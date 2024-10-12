#include <stdio.h>

void swap(int *x, int *y) {
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}

int main() {

    int a = 100;
    int b = 200;

    printf("Before swap, a = %d\n", a);
    printf("Before swap, b = %d\n", b);

    swap(&a, &b);

    printf("\nAfter swap, a = %d\n", a);
    printf("After swap, b = %d\n", b);

    printf("\n");
    return 0;
}

