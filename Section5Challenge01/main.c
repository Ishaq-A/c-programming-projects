#include <stdio.h>
#include <stdbool.h>

int main() {

    double length;
    double width;
    double perimeter;
    double area;

    length = 8;
    width = 5;

    perimeter = 2 * (length + width);
    area = length * width;

    printf("Rectangle of length %.2f and width %.2f\n", length, width);
    printf("Perimeter = %.2f\n", perimeter);
    printf("Area = %.2f\n", area);

    printf("\n");
    return 0;
}

