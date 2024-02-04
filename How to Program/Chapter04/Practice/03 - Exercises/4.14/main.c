// Factorials

#include <stdio.h>

int main(void) {

    int factorial = 1;

    for (int i = 1; i <= 5; ++i) {
        factorial *= i;
    }

    printf("The factorial of 1 to 5 is %d.", factorial);
}