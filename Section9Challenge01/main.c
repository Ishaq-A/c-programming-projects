#include <stdio.h>
#include <stdbool.h>

// Function Protoypes

int gcd(int u, int v);
float absoluteValue(float x);
float squareRoot(float x);

int main() {

    int result = 0;

    result = gcd(150, 35);
    printf("The GCD of 150 and 35 is %d\n", result);

    result = gcd(1026, 405);
    printf("The GCD of 1026 and 405 is %d\n", result);

    printf("The GCD of 83 and 35 is %d\n", gcd(83, 35));

    printf("\n========================================\n");

    float f1 = -15.5, f2 = 20.0, f3 = -5.0;
    int i1 = -716;
    float absValueResult = 0.0;

    absValueResult = absoluteValue(f1);
    printf("absValueResult = %.2f\n", absValueResult);

    absValueResult = absoluteValue(f2);
    printf("absValueResult = %.2f\n", absValueResult);

    absValueResult = absoluteValue(f3);
    printf("absValueResult = %.2f\n", absValueResult);

    absValueResult = absoluteValue(i1);
    printf("absValueResult = %.2f\n", absValueResult);

    printf("\n========================================\n");

    printf("%.2f\n", squareRoot(-3.0));
    printf("%.2f\n", squareRoot(16));
    printf("%.2f\n", squareRoot(25.0));
    printf("%.2f\n", squareRoot(9.0));
    printf("%.2f\n", squareRoot(165.0));

    printf("\n");
    return 0;
}

// Function Implementations

int gcd(int u, int v) {
    int temp;

    while(v != 0) {
        temp = u % v;
        u = v;
        v = temp;
    }

    return u;
}

float absoluteValue(float x) {
    if(x < 0) {
        x = -x;
    }

    return x;
}

float squareRoot(float x) {
    const float epsilon = 0.00001;
    float guess = 1.0;
    
    if(x < 0) {
        printf("Negative argument not alloweed\n");
        return -1.0;
    }

    while(absoluteValue(guess * guess - x) >= epsilon) {
        guess = (x / guess + guess) / 2.0;
    }

    return guess;
}

