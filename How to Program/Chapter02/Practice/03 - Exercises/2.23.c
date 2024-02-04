#include <stdio.h>

int main(void) {
    printf("Enter two integers: ");
    int a, b = 0;
    scanf("%d%d", &a, &b);

    if (a % b == 0) {
        printf("É múltiplo\n");
    }

    if (a % b != 0) {
        printf("Não é múltiplo\n");
    }
}