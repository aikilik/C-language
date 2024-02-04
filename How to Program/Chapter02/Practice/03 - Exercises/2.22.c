#include <stdio.h>

int main(void) {
    printf("Enter a integer: ");
    int a = 0;
    scanf("%d", &a);

    if (a % 2 == 0) {
        printf("Par\n");
    }

    if (a % 2 != 0) {
        printf("Impar\n");
    }
}