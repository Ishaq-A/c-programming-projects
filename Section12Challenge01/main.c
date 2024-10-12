#include <stdio.h>

int main() {

    int number = 45;
    int *pointer = &number;

    // To dislpay the address of the pointer we use:
    // (void*) &pointer --> to get the address

    printf("The address of the pointer is: %p\n", (void*) &pointer);
    printf("The value of the pointer is: %p\n", pointer);
    printf("The value it points to is: %d\n", *pointer);

    printf("\n");
    return 0;
}

