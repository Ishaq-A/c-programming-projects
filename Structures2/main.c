#include <stdio.h>

struct Time {

    struct Date {
        int day;
        int month;
        int year;
    } dob;

    int hour;
    int minutes;
    int seconds;
};

