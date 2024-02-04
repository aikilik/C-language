#include <stdio.h>

int main(void) {
    int r = 2;
    int diameter = 0;
    int circumference = 0;
    int area = 0;
    int pi = 3.14159;

    printf("Diameter: %d\n", 2 * r);
    printf("Circumference: %d\n", 2 * pi * r);
    printf("Area: %d\n", pi * r * r);

}