// This program will calculate de average with weight
#include <stdio.h>

// main function - begin of the program
int main() {
    // variables
    float grade1 = 0;
    float grade2 = 0;
    float grade3 = 0;

    float weight1 = 0;
    float weight2 = 0;
    float weight3 = 0;

    float averageResult = 0;

    // prompt
    puts("Enter tree test grade and weights: ");

    printf("%s", "First grade: ");
    scanf("%f", &grade1);
    printf("%s", "First weight: ");
    scanf("%f", &weight1);

    printf("%s", "Second grade: ");
    scanf("%f", &grade2);
    printf("%s", "Second weight: ");
    scanf("%f", &weight2);

    printf("%s", "Third grade: ");
    scanf("%f", &grade3);
    printf("%s", "Third weight: ");
    scanf("%f", &weight3);

    // calculo
    averageResult = (grade1 * weight1 + grade2 * weight2 + grade3 * weight3) / (weight1 + weight2 + weight3);

    printf("The average is %.2f.", averageResult);

    return 0;
}
