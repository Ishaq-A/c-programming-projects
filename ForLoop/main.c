#include <stdio.h>
#include <stdbool.h>

int main() {

    unsigned long long sum = 0LL;
    unsigned int count = 0;

    printf("Enter the number of integers to sum: ");
    scanf("%u", &count);

    for(unsigned int i = 1; i <= count; i++) {
        sum += i;
    }

    printf("\nThe total of the first %u numbers is %llu\n", count, sum);

    printf("\n");
    return 0;
}

