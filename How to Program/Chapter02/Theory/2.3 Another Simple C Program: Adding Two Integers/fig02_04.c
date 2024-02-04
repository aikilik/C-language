// fig02_04.c
// Addition program
#include <stdio.h>

// function main begins program execution
int main(void) {
    int integer1 = 0; // will hold first number user enters         // Aqui são definidas as variáveis
    int integer2 = 0; // will hold second number user enters        // O nome das variáveis são chamadas
                                                                    // de identificadores. (1)
    printf("Enter first integer: "); // prompt                      // Esse printf é chamado de prompt
    scanfI("%d", &integer1); // read an integer                     // porque o usuário deve desempenhar
                                                                    // uma ação.
    printf("Enter second integer: "); // prompt                     // Agora falando sobre o scanf. é
    scanf("%d", &integer2); // read an integer                      // uma função que recebe o que o
                                                                    // usuário digita no teclado. (2)
    int sum = 0; // variable in which sum will be stored            // Essa é a parte onde irá ocorrer
    sum = integer1 + integer2; // assign total to sum               // a aritmética. É declarado o variável
                                                                    // que irá armazenar o resultado da soma. (3)
    printf("Sum is %d\n", sum); // print sum                        // Aqui é o print que irá mostrar o resultado
} // end function                                                   // da soma. O conversion specificatilon (%d)
                                                                    // irá ser substituído pela variável que contém
// (1) Há regras na escrita dos identificadores:                    // o valor da soma.
//      Devem começar com letra minúscula                           // O %d também é chamado de placeholder, pois irá
//      Não podem começar com númveros                              // ser substituído pelo valor da variável.
//      Não podem conter caracteres especiais
//      Em nome composto, usa-se underline para separação
//      ou usa-se a regra do camelcase

// (2) O scanf tem dois parâmetros. O primeiro diz respeito
// ao "conversion specification" que controla o tipo de dado 
// aceito pelo scanf. Quando há %d é indicado que o usuário
// deve inserir inteiros. O segundo parâmetro se refere ao 
// endereço de memória onde o dado inserido será armazenado.
// O ampersand (&) indica o endereço de memoria da variáel
// em questão.

// (3) O perador = (assignment) e o + (plus) são do tipo
// operdores unitários. Pois, eles trabalham com "obejetos".
// Um do lado esquerdo e o outro do lado direito.