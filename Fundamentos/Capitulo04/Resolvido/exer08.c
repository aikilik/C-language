// mostrar informacoes

#include<stdio.h>
#include<stdlib.h>
#include <math.h>

// main - begins program
int main(void) {
    // clean screen
    system("cls || clear");

    // variables
    int numero1 = 0;
    int numero2 = 0;
    int opcao = 0;
    int resultado = 0;

    // menu
    puts("1. Somar dois numeros.\n"
                "2. Raiz quadrada de um numero.");

    // prompt
    printf("%s", "Entre com a opcao 1: ");
    scanf("%d", &opcao);

    if (opcao > 0 && opcao <= 2) {
        switch (opcao)
        {
        case 1:
            printf("%s", "Entre com o numero 1: ");
            scanf("%d", &numero1);
            printf("%s", "Entre com o numero 2: ");
            scanf("%d", &numero2);
            
            resultado = numero1 + numero2;

            printf("O resultado e %d", resultado);
            break;
        case 2:
            printf("%s", "Entre com o numero 1: ");
            scanf("%d", &numero1);
            printf("%s", "Entre com o numero 2: ");
            scanf("%d", &numero2);
            
            resultado = pow(numero1, numero2);

            printf("O resultado e %d", resultado);
            break;
        } // end switch
    } // end if
    else 
        puts("Opcao escolhida errada. Deve-se escolher entre 1 e 2.");
    // end else
} // end main