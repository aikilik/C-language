#include<stdio.h>

int main(void) {
    
    int x = 1;

    for (; x <= 20; ++x) {
        printf("%d", x);

        if (x % 5 == 0) {
            printf("\n");
        } else {
            printf("%s", "\t");
        }
    }
}