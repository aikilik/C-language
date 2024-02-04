#include <stdio.h>

int main(void) {
    printf("Enter two integers: ");
    int a, b = 0;
    scanf("%d%d", &a, &b);

    printf("Sum %d\n", a + b);
    printf("Subtraction %d\n", a - b);
    printf("Division %d\n", a / b);
    printf("Remainder %d\n", a % b);
}