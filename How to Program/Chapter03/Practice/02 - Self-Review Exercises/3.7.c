#include <stdio.h>

int main(void) {
    
    int x, y = 0;
    int i, power = 1;
    printf("%S","Enter integers x: ");
    scanf("%d", &x);
    printf("%S","Enter integers y: ");
    scanf("%d", &y);

    while (i <= y) {
        power *= x;
        ++i;
    }

    printf("Power = %d", power);
}