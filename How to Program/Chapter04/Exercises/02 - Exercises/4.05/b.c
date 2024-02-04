#include<stdio.h>

int main(void) {

    int value = 10;

    switch (value % 2) {
        case 0:
            puts("Even integer");
            break;
        case 1:
            puts("Odd integer");
            break;
    }
}