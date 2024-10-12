#include <stdio.h>
#include <stdlib.h>

struct Employee {
    char name[30];
    char hireDate[15];
    float salary;
};

int main() {

    struct Employee emp1 = {"Bob Bobson", "12/01/2017", 12345.69};
    struct Employee emp2 = {" ", " ", 0.0};

    printf("Enter your name: ");
    scanf("%s", emp2.name);

    printf("Enter your hire date: ");
    scanf("%s", emp2.hireDate);

    printf("Enter your salary: ");
    scanf("%f", &emp2.salary);

    printf("\nEmployee 1: %s, Hire Date: %s, Salary: %.2f\n", emp1.name, emp1.hireDate, emp1.salary);
    printf("Employee 2: %s, Hire Date: %s, Salary: %.2f\n", emp2.name, emp2.hireDate, emp2.salary);

    printf("\n");
    return 0;
}

