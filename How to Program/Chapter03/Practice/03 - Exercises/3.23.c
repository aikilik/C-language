/*
inicializar variavel counter
inicializar variavel number
inicializar variavel largest


enquanto (number < 10)
exibir "Enter a number: "
    inicializar largest = number
    se number > largest
        largest = number

    exibir "The largest is ..."
    ++count
*/
#include <stdio.h>

int main(void) {
    int count = 1;
    int number = 0;
    int largest = 0;

    while (count <= 10) {
        printf("%s", "Enter a number: ");
        scanf("%d", &number);
        largest = number;
        if (number > largest) {
            largest = number;
        }
        ++count;
    }

    printf("The largest is %d\n", largest);
}