#include <stdio.h>
#include <stdbool.h>

int main(int argc, char *argv[]) {

    int numberOfArguments = argc;

    // Assigning the argument1 variable to the program name
    char *argument1 = argv[0];
    
    // Assigning the argument2 variable to the command line argument
    char *argument2 = argv[1];

    printf("Number of Arguments: %d\n", numberOfArguments);
    printf("Argument 1: %s\n");
    printf("Argument 2: %s\n", argument2);

    printf("\n");
    return 0;
}

