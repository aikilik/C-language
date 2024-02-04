/*
Inicializar a variavel gallons com 0
Inicializar a variavel miles com 0

 exibir "Enter the gallons user: "
atribuir o dado a variavel gallons

colocar os statements abaixo num while com sentinela

    exibir "Enter the miles drive: "
    atribuir o dado a variável miles

    calcular miles / gallons

    exibir "The miles/gallon for this tank was resultado"

    atribuir average += result
    count++

    exibir "Enter the gallons user: "
    atribuir o dado a variavel gallons

fora do while:
    culcular a media da soma de todos os miles/gallon

    exibir "The overall average miles/gallon was %f"
*/

#include <stdio.h>

int main(void) {
    float gallons = 0.0;
    float miles = 0.0;
    int sentinel = 1;
    float average = 0;
    int count = 0;

    printf("%s", "Enter the gallons user (-1 to end): ");
    scanf("%f", &gallons);

    while (gallons != -1) {
        
        printf("%s", "Enter the miles drive: ");
        scanf("%f", &miles);

        float result = miles / gallons;

        printf("The miles/gallon for this tank was %.6f\n", result);

        average += result;
        count++;

        printf("%s", "Enter the gallons user (-1 to end): ");
        scanf("%f", &gallons);

    }
        average /= count;

        printf("The overall average miles/gallon was %.6f.\n", average);

}