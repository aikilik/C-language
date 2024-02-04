#include<stdio.h>

// main - begins program
int main(void) {

    int x = 0;

    for (int i = 1; i <= 99; ++i) {
        if (i % 2 == 0) {
            x = x + i;
        }
    }

    printf("The sum is %d", x);
}