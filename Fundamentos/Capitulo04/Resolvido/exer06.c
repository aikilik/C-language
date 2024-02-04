// verificar se é par ou ímpar

#include<stdio.h>
#include<stdlib.h>

// main - begins program
int main(void) {
    // clean screen
    system("cls || clear");

    // variables
    int numero = 0;

    // input
    printf("%s", "Entre com um numero: ");
    scanf("%d", &numero);

    // if statements
    if (numero % 2 == 0)
        puts("Numero par.");
    // end if
    else
        puts("Numero impar.");
    // end else
} // end main