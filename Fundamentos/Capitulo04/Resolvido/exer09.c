// mostrar data e hora atual

#include<stdio.h>
#include<stdlib.h>
#include<time.h>

// main - begins program
int main(void) {
    // clean screen
    system("cls || clear");

    // variables
    time_t t;
    struct tm *data_hora;
    int dia, mes, ano, hora, min, seg;

    // Pega a data e a hora atual do sistema
    t = time(NULL);
    data_hora = localtime(&t);
    dia = data_hora -> tm_mday;
    mes = data_hora -> tm_mon + 1;
    ano = data_hora -> tm_year + 1900;
    hora = data_hora -> tm_hour;
    min = data_hora -> tm_min;

    switch (mes)
    {
    case 1:
        printf("%d/%s/%d", dia, "janeiro", ano);
        break;
    case 2:
        printf("%d/%s/%d", dia, "fevereiro", ano);
        break;
    case 3:
        printf("%d/%s/%d", dia, "marco", ano);
        break;
    case 4:
        printf("%d/%s/%d", dia, "abril", ano);
        break;
    case 5:
        printf("%d/%s/%d", dia, "maio", ano);
        break;
    case 6:
        printf("%d/%s/%d", dia, "junho", ano);
        break;
    case 7:
        printf("%d/%s/%d", dia, "julho", ano);
        break;
    case 8:
        printf("%d/%s/%d", dia, "agosto", ano);
        break;
    case 9:
        printf("%d/%s/%d", dia, "setembro", ano);
        break;
    case 10:
        printf("%d/%s/%d", dia, "outubro", ano);
        break;
    case 11:
        printf("%d/%s/%d", dia, "novembro", ano);
        break;
    case 12:
        printf("%d/%s/%d", dia, "dezembro", ano);
        break;
    } // end switch

    printf(" - %.2d:%.2d", hora, min);
} // end main