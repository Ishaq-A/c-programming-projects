#include <stdio.h>

struct date {
    int month;
    int day;
    int year;
};

struct intPtrs {
    int *p1;
    int *p2;
};

struct name {
    char *fname;
    char *lname;
    int letters;
};


int main() {

    struct intPtrs pointers;
    int i1 = 100, i2;

    pointers.p1 = &i1;
    pointers.p2 = &i2;
    *pointers.p2 = -97;

    printf("i1 = %d, *pointers.p1 = %d\n", i1, *pointers.p1);
    printf("i2 = %d, *pointers.p2 = %d\n", i2, *pointers.p2);

    printf("\n");
    return 0;
}

