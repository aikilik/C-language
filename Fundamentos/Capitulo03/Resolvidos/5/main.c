// Salary calculation

#include <stdio.h>

// Main - begins program
int main() {
    // variables
    float salary = 0;
    float newSalary = 0;
    float increase = 0.25;

    // prompt
    printf_s("%s", "Enter the salary value: ");
    scanf_s("%f", &salary);

    // calculation
    newSalary = salary + (salary * increase);

    // output
    printf_s("The new salary is %.2f.", newSalary);

    return 0;
}
