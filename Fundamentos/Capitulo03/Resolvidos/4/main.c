// This program will calculate new salary
#include <stdio.h>

// The program begins here
int main() {
    // variables
    float salary = 0;
    float newSalary = 0;
    float increase = 0;

    // prompt
    printf("%s", "Enter the salary's value: ");
    scanf("%f", &salary);

    // calculate
    increase = 0.25;
    newSalary = salary + increase * salary;

    // print
    printf("The new salary value is %.2f.", newSalary);

    return 0;
} // end program
