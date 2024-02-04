// ordenar números

#include<stdio.h>
#include<stdlib.h>

// main - begins program
int main(void) {
    // clean screen
    system("cls || clear");

    // variables
    int numero1 = 0;
    int numero2 = 0;
    int numero3 = 0;
    int numero4 = 0;

    // prompt
    printf("%s", "Entre com o numero 1: ");
    scanf("%d", &numero1);
    
    printf("%s", "Entre com o numero 2: ");
    scanf("%d", &numero2);
    
    printf("%s", "Entre com o numero 3: ");
    scanf("%d", &numero3);
    
    printf("%s", "Entre com o numero 4: ");
    scanf("%d", &numero4);

    // if statements
    if (numero1 < numero2 && numero2 < numero3) {
        if (numero1 < numero2 && numero2 < numero3 && numero3 < numero4)
            printf("%d > %d > %d > %d", numero4, numero3, numero2, numero1);
        if (numero1 < numero2 && numero2 < numero4 && numero4 < numero3)
            printf("%d > %d > %d > %d", numero3, numero4, numero2, numero1);
        if (numero1 < numero4 && numero4 < numero2 && numero2 < numero3)
            printf("%d > %d > %d > %d", numero3, numero2, numero4, numero1);
        if (numero4 < numero1 && numero1 < numero2 && numero2 < numero3)
            printf("%d > %d > %d > %d", numero3, numero2, numero1, numero4);
    } // end if
    else
        puts("Sequencia inicial errada.");
    // end else 
} // end main