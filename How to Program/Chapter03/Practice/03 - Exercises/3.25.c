#include <stdio.h>

int main(void) {
    
    int A = 3; 
    int count = 1;

    printf("A\tA+2\tA+4\tA+6\n");

    while (count <= 5) {
        printf("%d\t%d\t%d\t%d\n", A, A+2, A+4, A+6);
        A += 3;
        ++count;
    }
}