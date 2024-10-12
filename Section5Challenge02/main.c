#include <stdio.h>
#include <stdbool.h>

int main() {

    enum Company {
        GOOGLE, FACEBOOK,
        XEROX, YAHOO,
        EBAY, MICROSOFT
    };

    enum Company company1 = GOOGLE;
    enum Company company2 = MICROSOFT;
    enum Company company3 = FACEBOOK;

    printf("Company 1 has value: %d\n", company1);
    printf("Company 2 has value: %d\n", company2);
    printf("Company 3 has value: %d\n", company3);

    printf("\n");
    return 0;
}

