#include <stdio.h>
#include <stdbool.h>

int main() {
    
    printf("The sizeof int is: %zd Bytes\n", sizeof(int));
    printf("The sizeof char is: %zd Bytes\n", sizeof(char));
    printf("The sizeof long is: %zd Bytes\n", sizeof(long));
    printf("The sizeof long long is: %zd Bytes\n", sizeof(long long));
    printf("The sizeof double is: %zd Bytes\n", sizeof(double));
    printf("The sizeof long double is: %zd Bytes\n", sizeof(long double));

    printf("\n");
    return 0;
}

