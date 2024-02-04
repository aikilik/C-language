
// Cube a variabel using pass-by-reference with a pointer argument.

#include<stdio.h>

void cubByReference(int *nPtr);

int main(void) {
    int number = 5; // initialize number

    printf("The original value of number is %d", number);
    cubeByReference(&number); // pass address of number to cubeByReference
    printf("\nThe new value of number is %d\n", number);
}

// calculate cube of *nPtr; actually modifies number is main
void cubeByReference(int *nPtr) {
    *nPtr = *nPtr * *nPtr * *nPtr; // cube *nPtr
}