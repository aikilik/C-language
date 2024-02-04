#include <stdio.h>

int main(void) {
    int count = 1;
    int number = 0;
    int largest1 = 0;
    int largest2 = 0;

    while (count <= 5) {
        printf("%s", "Enter a number: ");
        scanf("%d", &number);

        if (number > largest1) {
            largest1 = number;
            if (number > largest2 && largest2 != largest1) {
                largest2 = number;
            }
        }
        ++count;
    }

    printf("The largest 1 is %d and largest 2 is %d\n", largest1, largest2);
}