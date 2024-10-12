#include <stdio.h>
#include <stdbool.h>

int main() {

    int count = 0;
    
    for(int i = 1; i <= count; i++) {
        int sum = 0;

        for(int j = 1; j <= i; j++) {
            sum += j;
        }
        printf("\n%d\t%d", i, sum);
    }

    for(int i = 1; i <= count; i++) {
        int sum = 1;
        int j = 1;
        printf("\n1");

        while(j < i) {
            sum += ++j;
            printf(" + %d", j);
        }

        printf(" = %d", sum);
    }

    enum Day {
        Monday, Tuesday, Wednesday,
        Thursday, Friday,
        Saturday, Sunday
    };

    for(enum Day day = Monday; day <= Sunday; day++) {
        if(day == Wednesday) {
            continue;
        }

        printf("It's not Wednesday!\n");
    }

    printf("\n");
    return 0;
}

