#include <stdio.h>

int main(void) {
    printf("%s", "Enter three integers: ");
    int a, b, c = 0;
    scanf("%d%d%d", &a, &b, &c);

    printf("Sum: %d\n", a + b + c);
    printf("Subtraction: %d\n", (a + b + c) / 3);
    printf("Product: %d\n", a * b * c);

    if (a < b) {
        printf("Smallest is %d\n", a);
    }

    if (a < c) {
        printf("Smallest is %d\n", a);
    }

    if (b < a) {
        printf("Smallest is %d\n", a);
    }

    if (b < c) {
        printf("Smallest is %d\n", a);
    }

    if (c < a) {
        printf("Smallest is %d\n", a);
    }

    if (c < b) {
        printf("Smallest is %d\n", a);
    }

    // ---

    if (a > b) {
        printf("Largest is %d\n", a);
    }

    if (a > c) {
        printf("Largest is %d\n", a);
    }

    if (b > a) {
        printf("Largest is %d\n", a);
    }

    if (b > c) {
        printf("Largest is %d\n", a);
    }

    if (c > a) {
        printf("Largest is %d\n", a);
    }

    if (c > b) {
        printf("Largest is %d\n", a);
    }
}