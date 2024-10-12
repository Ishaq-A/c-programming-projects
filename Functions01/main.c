#include <stdio.h>
#include <stdbool.h>

// Function Prototype

int multiplyTwoNumbers(int x, int y);


int main() {

    int result = 0;

    result = multiplyTwoNumbers(10, 20);

    printf("Result is: %d\n", result);

    printf("\n");
    return 0;
}

// Function implementation

int multiplyTwoNumbers(int x, int y) {
    int result = x * y;
    
    return result;
}

