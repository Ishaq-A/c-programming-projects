#include <stdio.h>
#include <stdbool.h>

int main() {

    enum Weekday {
        Monday, Tuesday, Wednesday,
        Thursday, Friday, Saturday,
        Sunday
    };

    enum Weekday today = Monday;

    switch(today) {
        case Sunday:
            printf("Today is Sunday\n");
            break;
        case Monday:
            printf("Today is Monday\n");
            break;
        case Tuesday:
            printf("Today is Tuesday\n");
            break;
        default:
            printf("Whatever\n");
    }

    label: int x = 3;

    if(x > 5) {
        goto label;
    }


    printf("\n");
    return 0;
}

