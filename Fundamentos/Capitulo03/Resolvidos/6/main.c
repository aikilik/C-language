// Salary calculation

#include <stdio.h>

// Main -  begins program
int main() {
    // variables
    float salary = 0;
    float netSalary = 0;
    float gratification = 0;
    float impost = 0;

    // prompt
    printf_s("%s", "Enter the salary: ");
    scanf_s("%f", &salary);

    // calculation
    gratification = 0.05 * salary;
    impost = 0.07 * salary;
    netSalary = salary + gratification - impost;

    // output
    printf_s("The new salary is %.2f", netSalary);

    return 0;
}
