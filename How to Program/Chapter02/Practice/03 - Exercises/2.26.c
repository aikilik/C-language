#include <stdio.h>

int main(void) {
    int a = 0; 
    
    printf("%s", "Enter a five-digit integer number: ");
    
    scanf("%d", &a);

    printf("%d ", a / 10000);
    printf("%d ", a % 10000 / 1000);
    printf("%d ", a % 10000 % 1000 / 100);
    printf("%d ", a % 10000 % 1000 % 100 / 10);
    printf("%d ", a % 10000 % 1000 % 100 % 10);

    puts("");
}