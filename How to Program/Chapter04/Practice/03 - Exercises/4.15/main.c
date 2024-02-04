// modified compund-interest program

#include <stdio.h>
#include <math.h>

int main(void) {
    double principal = 1000.0;
    int year = 1;

    printf("%4s%21s\n", "rate", "Amount on deposit");

    for (double rate = 5; rate <= 10; ++rate) {

        double amount = principal * pow(1.0 + rate / 100, year);

        printf("%.2f%21.2f\n", rate, amount);
    }

}