// fig02_05.c
// Using if statements, relational
// operators, and quality operators.
#include <stdio.h>

// function main begins program execution
int main(void) {
    printf("Enter two integers, and I will tell you\n");
    printf("the relationships they satisfy: ");

    int number1 = 0; // first number to be read form user
    int number2 = 0; // second number to be read form user

    scanf("%d %d", &number1, &number2); // read two integers        // É possível utilizar dois
                                                                    // conversion specification no 
    if (number1 == number2) {                                       // primeiro parâmetro do scanf
        printf("%d is equal to %d\n", number1, number2);            // e, consequentemente, mais dois
    } // end if                                                     // ampersand no segundo parâmetro.

    if (number1 != number2) {                                       // Agora vem a função if. Essa função
        printf("%d is not equal to %d\n", number1, number2);        // tem a característica de decisão. 
    } // end if                                                     // Quando uma condição é declarada no
                                                                    // parâmetro de if, seu valor lógico é
    if (number1 < number2) {                                        // determinado. Se for verdadeiro o corpo
        printf("%d is less than %d\n", number1, number2);           // do if executa. Caso contrário, não.
    } // end if
                                                                    // Os operadores que determinam o valor lógico
    if (number1 > number2) {                                        // da condição são ==, !=, >, <, >=, <= 
        printf("%d is greater than %d\n", number1, number2);        // No quesito precedência, os operadores relacionais
    } // end if                                                     // tem maior precedência do os operadores de    
                                                                    // igualdade.
    if (number1 <= number2) {
        printf("%d is less than or equal to %d\n", number1, number2);
    } // end if

    if (number1 >= number2) {
        printf("%d is greater than or equal to %d\n", number1, number2);
    } // end if
} // end function main