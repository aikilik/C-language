#include <stdio.h>

int main() {

    float grade1 = 0;
    float grade2 = 0;
    float grade3 = 0;
    float averageResult = 0;

    puts("Enter three test grade: ");
    printf("%s", "First: ");
    scanf("%f", &grade1);

    printf("%s", "Second: ");
    scanf("%f", &grade2);

    printf("%s", "Three: ");
    scanf("%f", &grade3);

    averageResult = (grade1 + grade2 + grade3) / 3;

    printf("The average result is %.2f.", averageResult);

    return 0;
}
