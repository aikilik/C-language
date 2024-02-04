// Calculo de média ponderada

#include <stdio.h>

int main(void) {
    // variables
    float notaLaboratorio = 0;
    float notaAvaliacaoSemestral = 0;
    float notaExameFinal = 0;
    float media = 0;

    // input
    printf("%s", "Entre coma a nota do trabalho de laboratorio: ");
    scanf("%f", &notaLaboratorio);

    printf("%s", "Entre com a nota da avaliacao semestral: ");
    scanf("%f", &notaAvaliacaoSemestral);

    printf("%s", "Entre com a nota do exame final: ");
    scanf("%f", &notaExameFinal);

    // Calculo
    media = (notaLaboratorio * 2 + notaAvaliacaoSemestral * 3 + notaExameFinal * 5) / (2 + 3 + 5);
    
    // output
    // if statements
    if (media >= 8 && media <= 10) {
        printf("A media e %.2f\n", media);
        puts("A");
    }
    if (media >= 7 && media < 8) {
        printf("A media e %.2f\n", media);
        puts("B");
    }
    if (media >= 6 && media < 7) {
        printf("A media e %.2f\n", media);
        puts("C");
    }
    if (media >= 5 && media < 6) {
        printf("A media e %.2f\n", media);
        puts("D");
    }
    if (media >= 0 && media < 5) {
        printf("A media e %.2f\n", media);
        puts("E");
    }
}