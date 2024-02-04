#include <stdio.h>

int main(void) {

    int count = 0;
    int numberValues = 0;
    int values = 0;
    int sum = 0;
    
    printf("%s", "Enter the number of values: ");
    scanf("%d", &numberValues);

    puts("");

    printf("Enter %d values\n", numberValues);
    
    for (int i = 0; i < numberValues; ++i) {
        printf("Enter value %d: ", numberValues - i);
        scanf("%d", &values);

        sum += values;
    }

    printf("The sum is %d", sum);
}