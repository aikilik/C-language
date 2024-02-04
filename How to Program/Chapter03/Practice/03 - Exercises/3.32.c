#include <stdio.h>

int main(void) {

    int sideSquare = 0;
    int count_i = 1;
    int count_j = 1;

    printf("%s", "Enter the side square: ");
    scanf("%d", &sideSquare);

    while (count_i <= sideSquare) {
        while (count_j <= sideSquare) {
            printf("%s", "* ");
            ++count_j;
        }
        puts("");
        ++count_i;
        count_j = 1;
    }
}

/*
for (int i = 1; i <= sideSquare; ++i) {
        for (int j = 1; j <= sideSquare; ++j) {
            printf("%s", "* ");
        }
        puts("");
    }
*/