// fig02_01.c                                  Por convenção, nome do arquivo na primeira linha
// A first program in C.                       Idem, propósito do programa
#include <stdio.h>                          // Contem headers sobre input/output para o compilador

// function main begins program execution
int main(void) {                            // Essa é a função principal. Todo o programa executará
    printf("Welcome to C!\n");              // dentro dentro do main. As chaves delimitam o corpo 
} // end funciton main                      // da função. Assim, é formador um bloco.
                                            // A função printf dentro do bloco de main é comando que
                                            // que leva o computador a mostrar o parâmetro entre
                                            // aspas duplas. Esse parâmetro é uma string.
                                            // Todo o conjunto, desde o printf, seu parâmetro e, por
                                            // fim, o ponto e vírgula, é chamado de statement.
                                            // O pnto e vírgula é chamado de statement terminator.

                                            // No final do parâmetro do printf há o escape senquence.
                                            // É um comando que faz uma ação não ordinário. No caso,
                                            // \n pula uma linha. Há outro tipos de escape sequences:
                                            // \n (já visto) pula uma linha
                                            // \t            faz tabulação
                                            // \a            produz um som sem mover na seta do mouse
                                            // \\            mostra a barra invertina no printf
                                            // \"            mostra as aspas no printf
                                            // O nome da \ é backslash. Note que o conjunto do
                                            // backslash com um caractere específico é que forma
                                            // o escape sequence.