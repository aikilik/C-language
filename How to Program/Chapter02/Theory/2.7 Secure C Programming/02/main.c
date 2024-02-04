#include <stdio.h>

int main(void) {
    printf("%s", "Welcome to C!\n");        // Nesse caso, se for optado a utilizar o printf
}                                           // que contenha somente um parâmetro, é necessário
                                            // utilizar o conversion specification como segundo
                                            // parâmetro para não haver vulnerabilidades.


                                            // No fim, a ideia principal é evitar utilizar somente
                                            // um parâmetro com printf.