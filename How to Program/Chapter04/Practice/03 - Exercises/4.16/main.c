// triangle-printing program

#include <stdio.h>

int main(void) {

    int count = 0;

// a
    puts("a)");
    for (int i = 1; i <= 10; ++i) {
        for (int j = 1; j <= i; ++j) {
            printf("%s", "*");
        }
        printf("%s", "\n");
    }

    puts("b)");

// b
    for (int i = 10; i >= 1; --i) {
        for (int j = 1; j <= i; ++j) {
            printf("%s", "*");
        }
        puts("");
    }

    puts("c)");

// c
    for (int i = 10; i >= 1; --i) {
        for (int j = 1; j <= i; ++j) {
            printf("%s", "*");
        }
        
        puts("");
        
        ++count;

        for (int k = 1; k <= count; ++k) {
                printf("%s", " ");
        }
    }
    
    puts("d)");

// d
    count = 9;
    for (int i = 1; i <= 10; ++i) {

        for (int k = 1; k <= count; ++k) {
            printf("%s", " ");
        }
        --count;

        for (int j = 1; j <= i; ++j) {
            printf("%s", "*");
        }
        puts("");
    }
}