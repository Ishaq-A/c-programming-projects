#include <stdio.h>
#include <stdbool.h>

int main() {

    int minutes;
    double years = 0.0;
    double days = 0.0;
    double minutesInYear;

    printf("Enter the number of minutes: ");
    scanf("%d", &minutes);

    minutesInYear = (60 * 24 * 365);
    years = minutes / minutesInYear;
    days = (minutes / 60) / 24;

    printf("\n%d minutes is approximately: %f years and %f days\n", minutes, years, days);

    printf("\n");
    return 0;
}

