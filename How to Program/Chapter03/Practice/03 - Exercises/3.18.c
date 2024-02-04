/*
inicializar sales
inicializar commission = 200 + 0.09 * sales

exibir "Enter sales in dollars (-1 to end): "

utilizar while (sales != -1)
     
    exibir "Salary is: commission"

    exibir "Enter sales in dollars (-1 to end): "
*/
#include <stdio.h>

int main(void) {
    float sales = 0;
    float commission = 0;
    printf("%s", "Enter sales in dollars (-1 to end): ");
    scanf("%f", &sales);

    while (sales != -1) {
        commission = 200 + 0.09 * sales;
        printf("Salary is %.2f\n", commission);

        printf("%s", "Enter sales in dollars (-1 to end): ");
        scanf("%f", &sales);
    }
}