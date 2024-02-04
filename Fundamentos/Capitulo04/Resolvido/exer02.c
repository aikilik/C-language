// Calcula media
#include<stdio.h>
#include<stdlib.h>

// main - begins program
int main(void) {
    // clean screen
    system("cls || clear");

    // variables
    float nota1 = 0;
    float nota2 = 0;
    float nota3 = 0;
    float media = 0;
    float notaExame = 0;

    // input
    printf("%s", "Entre com a nota 1: ");
    scanf("%f", &nota1);

    printf("%s", "Entre com a nota 2: ");
    scanf("%f", &nota2);

    printf("%s", "Entre com a nota 3: ");
    scanf("%f", &nota3);

    // calculo
    media = (nota1 + nota2 + nota3) / 3;

    // if statement
    if (media >= 0 && media < 3)
        printf("Reprovado. A media e %.2f", media);
    else if (media >= 3 && media < 7) {
        printf("Exame. A media e %.2f\n", media);

        // calculo nota exame
        notaExame = 12 - media;

        printf("Deve tirar nota %.2f para ser aprovado.", notaExame);
    }

    else if (media >= 7 && media <= 10)
        printf("Aprovado. A media e %.2f", media);
}