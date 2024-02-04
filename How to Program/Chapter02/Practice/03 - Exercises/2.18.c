#include <stdio.h>

int main(void) {
    printf("%s", "Enter two integers: ");
    int a, b = 0;
    scanf("%d%d", &a, &b);

    if (a > b) {
        printf("%d is larger.\n", a);
    }

    if (b > a) {
        printf("%d is larger.\n", b);
    }

    if (a == b) {
        printf("These numbers are equal.\n");
    }

}