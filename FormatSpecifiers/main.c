#include <stdio.h>
#include <stdbool.h>

int main() {

    float x = 3.9993232323;

    // Formatting display for floating-point
    printf("%f\n", x);
    printf("%.2f\n", x);
    printf("%.5f\n", x);
    printf("%.7f\n", x);

    printf("\n");
    return 0;
}

