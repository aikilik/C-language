// Calculatin the Sum of Even Integers

#include <stdio.h>

int main(void) {

    int sum = 0;

    for (int i = 2; i <= 30; ++i) {
        if (i % 2 == 0) {
            sum += i;
        }
    }

    printf("The sum is %d", sum);

}