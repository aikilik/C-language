#include <stdio.h>

int main(void) {
    int age = 0;
    printf("%s","Enter your age: ");
    scanf("%d", &age);

    int heart = 220 - age;
    int range = 0.5 * (220 - age);
    printf("Maximum heart rate: %d; and range: %d\n", heart, range);
}