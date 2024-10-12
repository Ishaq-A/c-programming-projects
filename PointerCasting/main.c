#include <stdio.h>

int main() {

    int i = 10;
    float f = 2.34;
    char ch = 'k';

    void *void_ptr;

    void_ptr = &i;
    printf("Value of i = %d\n", *(int*) void_ptr);

    void_ptr = &f;
    printf("Value of i = %.2f\n", *(float*) void_ptr);

    void_ptr = &ch;
    printf("Value of i = %c\n", *(char*) void_ptr);

    printf("\n");
    return 0;
}

