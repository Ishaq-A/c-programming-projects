#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <time.h>

int main() {

    // Creating a time variable
    time_t t;

    // Initialising the random number generator
    srand((unsigned) time(&t));

    // Variable to store the random number (0-20)
    int randomNumber = rand() % 21;

    int number = 0;
    int count = 1;

    do {
        printf("Guess the number betwen 0 and 20: ");
        scanf("%d", &number);

        if(number < randomNumber) {
            printf("\nToo Low!\n");
        } else if(number > randomNumber) {
            printf("\nToo high!\n");
        } else {
            printf("Congratulations!! You guessed the number correctly!!");
            break;
        }

        count++;

        printf("You only have %d attempts reamining\n", 6 - count);

    } while(number != randomNumber && count <= 5);

    printf("\n");
    return 0;
}

