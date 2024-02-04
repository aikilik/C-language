// ordenar três números

#include<stdio.h>
#include<stdlib.h>

int main(void) {
    // clean screen
    system("cls || clear");

    // variables
    int numero1 = 0;
    int numero2 = 0;
    int numero3 = 0;

    // prompt
    printf("%s", "Entre com o numero 1: ");
    scanf("%d", &numero1);
    
    printf("%s", "Entre com o numero 2: ");
    scanf("%d", &numero2);
    
    printf("%s", "Entre com o numero 3: ");
    scanf("%d", &numero3);

    // if statements
    if (numero1 < numero2 && numero2 < numero3)
        printf("%d < %d < %d", numero1, numero2, numero3);
    if (numero1 < numero3 && numero3 < numero2)
        printf("%d < %d < %d", numero1, numero3, numero2);

    if (numero2 < numero1 && numero1 < numero3)
        printf("%d < %d < %d", numero2, numero1, numero3);
    if (numero2 < numero3 && numero3 < numero1)
        printf("%d < %d < %d", numero2, numero3, numero1);

    if (numero3 < numero2 && numero2 < numero1)
        printf("%d < %d < %d", numero3, numero2, numero1);
    if (numero3 < numero1 && numero1 < numero2)
        printf("%d < %d < %d", numero3, numero1, numero2);
}