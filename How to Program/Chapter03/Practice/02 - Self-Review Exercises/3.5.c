#include <stdio.h>

int main(void) {
    int x = 1;
    int sum = 0;

    while (x <= 10) {
        sum += x;
        x++;
    }

    printf("The sum is %d\n", sum);

}