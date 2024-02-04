// Computing the sum of the elments of an array
#include <stdio.h>
#define SIZE 5

// function main begins program execuiton
int main(void) {
    // user an initializer list ot initialize the array
    int a[SIZE] = {1, 2, 3, 4, 5};
    int total = 0; // sum of array

    // sum contents of array a 
    for (size_t i = 0; i < SIZE; ++i) {
        total += a[i];
    }

    printf("The total of a's values is %d\n", total);
}