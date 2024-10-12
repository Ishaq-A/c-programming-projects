#include <stdio.h>
#include <stdbool.h>

int main() {

    enum Gender {male, female};

    enum Gender myGender;

    myGender = male;

    enum Gender herGender = female;

    bool isMale = (myGender == herGender);

    printf("\n");
    return 0;
}

