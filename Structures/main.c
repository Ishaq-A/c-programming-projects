#include <stdio.h>

struct date {
    int month;
    int day;
    int year;
} tomorrow;

int main() {

    struct date today;

    today.month = 9;
    today.day = 25;
    today.year = 2021;

    printf("\n");
    return 0;
}

