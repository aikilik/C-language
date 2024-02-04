#include<stdio.h>

int main(void) {

    int total = 0;

    for (int x = 100; x <= 150; ++x) {
        total += x;
    }

    printf("%d", total);
}