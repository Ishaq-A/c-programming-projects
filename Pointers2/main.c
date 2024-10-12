#include <stdio.h>

int main() {

    // long num1 = 0L;
    // long num2 = 0L;
    // long *pointer = NULL;

    // pointer = &num1; // Get address of num1
    // *pointer = 2L; // Set num1 to 2
    // ++num2; // Increment num2
    // num2 += *pointer; // Add num1 to num2

    // printf("num1 = %ld, num2 = %ld\n", num1, num2);
    // printf("*pointer = %ld\n*pointer + num2 = %ld\n", *pointer, *pointer + num2);

    int value = 0;
    int *pointer = &value; // Set pointer to refer to value

    printf("Input an integer: ");
    scanf("%d", pointer); // Read into value via the pointer

    printf("You entered %d\n", value); // Output the value entered

    printf("\n");
    return 0;
}

