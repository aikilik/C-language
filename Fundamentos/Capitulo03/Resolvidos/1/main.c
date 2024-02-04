#include <stdio.h>

int main() {
    int number1 = 0;
    int number2 = 0;
    int number3 = 0;
    int number4 = 0;
    int sumResult = 0;

    puts("Enter four integers: ");

    printf("%s", "First: ");
    scanf("%d", &number1);

    printf("%s", "Second: ");
    scanf("%d", &number2);

    printf("%s", "Third: ");
    scanf("%d", &number3);

    printf("%s", "Fourth: ");
    scanf("%d", &number4);

    sumResult = number1 + number2 + number3 + number4;

    printf("The sum is %d.", sumResult);

    return 0;
}
