#include <stdio.h>

void square(int *const num) {
    *num = (*num) * (*num);
}

int main() {

    int a = 2;
    int b = 3;
    int c = 4;
    int d = 5;

    printf("Before square: %d, %d, %d, %d\n",a, b, c, d);

    square(&a);
    square(&b);
    square(&c);
    square(&d);

    printf("After square: %d, %d, %d, %d\n",a, b, c, d);

    printf("\n");
    return 0;
}

