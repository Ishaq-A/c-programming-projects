#include <stdio.h>

int main() {

    // int number = 15;
    // int *pointer = &number;
    // int result = 0;

    // printf("Variable: %d\nPointer: %p\n", number, pointer);
    // printf("Value stored in pointer is: %d\n", *pointer);

    // result = *pointer + 5;
    // printf("Result = %d\n", result);

    // int count = 10, x;

    // int *int_pointer;
    // int_pointer = &count;

    // x = *int_pointer;

    // printf("\nPointer Address: %p\n", int_pointer);
    // printf("Pointer Value: %d\n", *int_pointer);
    // printf("count = %d, x = %d\n", count, x);

    // int number = 0; // Variable of type in initialised to 0
    // int *pointer = NULL; // A pointer that points to ints

    // number = 10;
    // pointer = &number;

    // printf("pointer = %p\n", pointer); // Output the address

    // printf("\nAddress of number is: %p\n", &number);

    // printf("\nThe size of pointer is: %d bytes\n", (int) sizeof(pointer));

    int number = 0; // Variable of type int initialised to 0
    int *pointer = NULL; // A pointer that points to ints

    number = 10;
    printf("number address: %p\n", &number); // Output the address
    printf("number value: %d\n", number); // Output the value

    pointer = &number; // Store the address of number in pointer

    printf("\nPointer address: %p\n", (void*) &pointer); // Output the address
    printf("pointer size: %zd bytes\n", (int) sizeof(pointer)); // Output the size
    printf("pointer value: %p\n", pointer); // Output the value (an address)
    printf("value pointed to: %d\n", *pointer); // Value at the address

    printf("\n");
    return 0;
}

