#include <stdio.h>

int main(void) {

    int x = 10;

    printf("Without decrement: %d\n", x);
    printf("Postdecrementing decrement: %d\n", x--);
    printf("Postdecrementing decrement: %d\n", x);
    printf("Predecrementing decrement: %d\n", --x);
}