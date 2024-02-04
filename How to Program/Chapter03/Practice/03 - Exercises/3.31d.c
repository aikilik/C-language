#include <stdio.h>

int main(void) {
    int x = 5;
    int y = 7;

    if (y == 8) {
        if (x == 5) {
            puts("@@@@@");
        }
    }
    else {
        puts("#####");
        puts("$$$$$");
        puts("&&&&&");
    }
}