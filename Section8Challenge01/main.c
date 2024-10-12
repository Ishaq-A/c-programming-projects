#include <stdio.h>
#include <stdbool.h>

int main() {

    bool isPrime;
    int primes[50] = {0}; // Initialise all elements to 0.
    int primeIndex = 2;

    // Hard-code prime numbers
    primes[0] = 2;
    primes[1] = 3;

    for(int i = 5; i <= 100; i += 2) {
        isPrime = true;

        for(int j = 1; isPrime && i / primes[j] >= primes[j]; j++) {
            if(i % primes[j] == 0) {
                isPrime = false;
            }
        }

        if(isPrime == true) {
            primes[primeIndex] = i;
            primeIndex++;
        }
    }

    for(int i = 0; i < primeIndex; i++) {
        printf("%i ", primes[i]);
    }

    printf("\n");
    return 0;
}

