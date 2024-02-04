#include <stdio.h>

int main(void) {

    float average = 0;
    int count = 0;
    float integers = 0;
    float sum = 0;

    printf("%s", "Enter several integers and after type 9999 for stop program: ");
    
    do {
         
        scanf("%f", &integers);

        if (integers == 9999)
            break; // leave loop

        sum += integers;

        ++count;

    } while (integers != 9999);

    average = sum / count;

    printf("The average is %.2f", average);
}