#include <stdio.h>
#include <stdbool.h>

int main() {

    // int a = 33;
    // int b = 15;
    // int result = 0;

    // result = a + b;

    // printf("The result of %d + %d = %d\n", a, b, result);

    // // Postfix increment by 1
    // result++;
    // printf("Result is now: %d\n", result);

    // // Prefix increment by 1
    // ++result;
    // printf("Result is now: %d\n", result);

    // // Postfix statement executes after any underlying statement is executed
    // // Prefix statement executes before any underlying statement is executed

    // printf("Result prefix increment: %d\n", result++);
    // result = 50;
    // printf("Result postfix increment: %d\n", ++result);

    printf("\n===============================================================\n");

    bool a = false;
    bool b = false;
    bool result;

    result = !a;
    printf("Result: %d\n", result);

    a = true;
    b = true;
    result = !a;
    
    printf("Result: %d\n", result);

    printf("\n");
    return 0;
}

