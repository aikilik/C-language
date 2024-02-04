#include<stdio.h>
#include<stdlib.h>

int main(void) {

    int intVal = 0;
    char charVal;

    printf("%s", "Enter the integer 100 and the character A:" );
    scanf("%d", &intVal);
    scanf("%c", &charVal);

    printf("Integer: %d\nCharacter: %c\n", intVal, charVal);
}