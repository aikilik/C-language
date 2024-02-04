/*
inicializar variavel loanPrincipal
inicializar variavel interesRate
inicializar variavel termLoanDays

exibir "Enter loan principal (-1 to end):"

utilizar while (loanPrincipal != -1)
    exibir "Enter interest reate: "
    exibir "Enter of the loan in days: "
    calcular
        interest = principal * rate * days / 365

    exibir "The interest charge is "

    exibir "Enter loan principal (-1 to end):"
*/
#include <stdio.h>

int main(void) {
    float loanPrincipal = 0;
    float interesRate = 0;
    float termLoanDays = 0;
    float interest = 0;

    printf("%s", "Enter loan principal (-1 to end): ");
    scanf("%f", &loanPrincipal);

    while (loanPrincipal != -1) {
        printf("%s", "Enter interest rate: " );
        scanf("%f", &interesRate);
        printf("%s", "Enter of the loan in days: ");
        scanf("%f", &termLoanDays);

        interest = loanPrincipal * interesRate * termLoanDays / 365;
    
        printf("The interest charge is %.2f\n", interest);
        
        printf("%s", "Enter loan principal (-1 to end): ");
        scanf("%f", &loanPrincipal);
    }
}