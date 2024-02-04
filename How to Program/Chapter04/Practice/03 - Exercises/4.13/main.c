// Calculatin the Procuct of Odd Integers

#include <stdio.h>

int main(void) {

    int product = 1;

    for (int i = 0; i <= 15; ++i) {
        if (i % 2 != 0) {
            product *= i;
        }
    }

    printf("The product is %d", product);
}