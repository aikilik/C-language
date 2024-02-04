#include <stdio.h>

int main(void) {
    puts("Welcome to C!");          // O uso de puts no lugar de printf é devido a segurança.
}                                   // Quando o printf somente tem um parâmetro, está vulnerável
                                    // a ataques. Por isso, o uso de puts deve ser utlizado nesse
                                    // caso.