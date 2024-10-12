#include <stdio.h>
#include <stdbool.h>

int main() {

    int number, sign;

    printf("Please enter a number: ");
    scanf("%i", &number);

    if(number < 0) {
        sign = -1;
    } else if(number == 0) {
        sign = 0;
    } else {
        sign = 1;
    }

    printf("Sign = %i\n", sign);

    bool boolean_expression1 = true;
    bool boolean_expression2 = false;

    if(boolean_expression1) {
        // Executes when boolean expression 1 is true
        if(boolean_expression2) {
            // Exeecutes when boolean expression 2 is true
        } else {
            // Statement(s);
        }
    } else {
        // Statements(s);
    }

    int x = 0;
    int y = 5;

    x = y > 7 ? 25 : 20;

    // Same as:
    if(y > 7) {
        x = 25;
    } else {
        x = 50;
    }

    printf("\n");
    return 0;
}

