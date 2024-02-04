/*
inicializar variavel hoursWorked
inicializar variavel hourlyRate
inicializar variavel salary

exibir "Enter # of hours worked (-1 to end): "

utilizar while (hoursWorked != -1)
    exibir "Enter hourly rate of the worker ($00.00): "

    calcular
        salary = hoursWorke * hourlyRate
        
        utilizar if (hoursWorked > 40)
            extra = hoursWorke - 40 * 1.5 

    exibir "Salari is ..."

    exibir "Enter # of hours worked (-1 to end): "
*/
#include <stdio.h>

int main(void) {
    float hoursWorked = 0;
    float hourslyRate = 0;
    float salary = 0;
    float extra = 0;

    printf("%s", "Enter # of hours worked (-1 to end): ");
    scanf("%f", &hoursWorked);

    while (hoursWorked != -1) {
        printf("%s", "Enter hourly rate of the worker ($00.00): ");
        scanf("%f", &hourslyRate);

        if (hoursWorked <= 40) {
            salary = hoursWorked * hourslyRate;
            printf("Salary is %.2f\n", salary);
        }
        else if (hoursWorked > 40) {
            salary = 40 * hourslyRate;
            extra = (hoursWorked - 40) * 15;
            printf("Salary is %.2f\n", salary + extra);
        }

        printf("%s", "Enter # of hours worked (-1 to end): ");
        scanf("%f", &hoursWorked);
    }
}