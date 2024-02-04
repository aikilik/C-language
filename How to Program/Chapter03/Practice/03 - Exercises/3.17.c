/*
inicializar variavel beginningBalance
inicializar variavel charges
inicializar variavel credits
inicializar variavel limitCredit
inicializar variavel accountNumber
inicializar variavel newBalance

solicitar "Enter account number (-1 to end): "

utilizar while (accountNumber != -1)
    solicitar "Enter beginning balace: "
    solicitar "Enter total charges: "
    solicitar "total credits: "
    solicitar "credit limit: "

    calulcar o balanço
        newBalance = beginning balace + charges - credits

    determinar ser o novo balanço excede o limite de credito
        newBalace - limitCredit

    exibir "Account: "
    exibir "Credit Limit: "
    exibir "Balance: "
    exibir "Credit Limit Exceeded"
*/

#include <stdio.h>

int main(void) {
    int accountNumber = 0;
    float beginningBalance = 0;
    float totalCharges = 0;
    float totalCredits = 0;
    float creditLimit = 0;
    float newBalance = 0;

    printf("%s", "Enter account number (-1 to end): ");
    scanf("%d", &accountNumber);

    while (accountNumber != -1) {
        printf("%s", "Enter beginning balance: ");
        scanf("%f", &beginningBalance);
        printf("%s", "Enter total charges: ");
        scanf("%f", &totalCharges);
        printf("%s", "Enter total credits: ");
        scanf("%f", &totalCredits);
        printf("%s", "Enter credit limit: ");
        scanf("%f", &creditLimit);

        newBalance = beginningBalance + totalCharges - totalCredits;

        printf("Account: %d\n", accountNumber);
        printf("Credit limit: %.2f\n", creditLimit);
        printf("Balance: %.2f\n", newBalance);
        puts((newBalance > creditLimit) ? "Credit Limit Exceed" : "Credit Limit do not Exceed");
    
        printf("%s", "Enter account number (-1 to end): ");
        scanf("%d", &accountNumber);
    }
}