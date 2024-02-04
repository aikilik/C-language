// mostrar maior número
#include<stdio.h>
#include<stdlib.h>

// main - begins program
int main(void) {
    // clean screen
    system("cls || clear");

    // variables
    int numero1 = 0;
    int numero2 = 0;

    // prompt
    printf("%s", "Entre com o primeiro numero: ");
    scanf("%d", &numero1);

    printf("%s", "Entre com o segundo numero: ");
    scanf("%d", &numero2);

    // if statemants
    if (numero1 > numero2)
        printf("Numero %d e maior do que numero %d", numero1, numero2);
    else if (numero1 == numero2)
        puts("Numeros iguais");
    else
        printf("Numero %d e maior do que numero %d", numero2, numero1);
}