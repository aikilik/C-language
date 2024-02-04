// Find the Smallest
#include <stdio.h>

int main(void) {

    int numbersTyped = 0;
    int numbers = 0;
    int aux = 99999999;

    printf("%s", "Enter how many numbers will be typed: ");
    scanf("%d", &numbersTyped);

    for (int i = 1; i <= numbersTyped; ++i) {
        
        printf("Enter number %d: ", i);
        scanf("%d", &numbers);
        
        if (numbers <= aux) {
            aux = numbers;
        }
    }

    printf("The smallest number is %d.", aux);
}