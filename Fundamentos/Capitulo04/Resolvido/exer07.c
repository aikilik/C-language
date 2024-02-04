// Ordenação de três números

#include<stdio.h>
#include<stdlib.h>

// main - begins program
int main(void) {
    // clean screen
    system("cls || clear");

    // variables
    float A = 0;
    float B = 0;
    float C = 0;
    int I = 0;

    // input
    printf("%s", "Entre com o numero A: ");
    scanf("%f", &A);

    printf("%s", "Entre com o numero B: ");
    scanf("%f", &B);

    printf("%s", "Entre com o numero C: ");
    scanf("%f", &C);

    printf("%s", "Entre com o numero I: ");
    scanf("%d", &I);
    // end input

    // if statements
    if (I > 0 && I <= 3) {
        switch (I)
        {
        case 1:
            if (A > B && B > C)
                printf("%.2f < %.2f < %.2f", C, B, A);
            if (A > C && C > B)
                printf("%.2f < %.2f < %.2f", B, C, A);

            if (B > A && A > C)
                printf("%.2f < %.2f < %.2f", C, A, B);
            if (B > C && C > A)
                printf("%.2f < %.2f < %.2f", A, C, B);

            if (C > A && A > B)
                printf("%.2f < %.2f < %.2f", B, A, C);
            if (C > B && B > A)
                printf("%.2f < %.2f < %.2f", A, B, C);
            break;
        case 2:
            if (A > B && B > C)
                printf("%.2f < %.2f < %.2f", A, B, C);
            if (A > C && C > B)
                printf("%.2f < %.2f < %.2f", A, C, B);

            if (B > A && A > C)
                printf("%.2f < %.2f < %.2f", B, A, C);
            if (B > C && C > A)
                printf("%.2f < %.2f < %.2f", B, C, A);

            if (C > A && A > B)
                printf("%.2f < %.2f < %.2f", C, A, B);
            if (C > B && B > A)
                printf("%.2f < %.2f < %.2f", C, B, A);
            break;
        case 3:
            if (A > B && B > C)
                printf("%.2f < %.2f > %.2f", B, A, C);
            if (A > C && C > B)
                printf("%.2f < %.2f > %.2f", C, A, B);

            if (B > A && A > C)
                printf("%.2f < %.2f > %.2f", A, B, C);
            if (B > C && C > A)
                printf("%.2f < %.2f > %.2f", C, B, A);

            if (C > A && A > B)
                printf("%.2f < %.2f > %.2f", A, C, B);
            if (C > B && B > A)
                printf("%.2f < %.2f > %.2f", B, C, A);
            break;
        } // end switch
    } // end if
    else 
        puts("Opcao errada. Deve-se escolher entre 1 e 3.");
    // end else
} // end main