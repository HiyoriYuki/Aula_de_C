#include <stdio.h>

int main (){
    //Declaração
    float numerador=4.5, denominador_1=12.2,
    denominador_2=3.1, subtrai_numeros, divide_numeros;

    // Calculo
    subtrai_numeros = denominador_1 - denominador_2;
    divide_numeros = numerador/subtrai_numeros;

    //Exibe
    printf("O numero %.1f dividido por %.1f - %.1f tem como resultado: %.1f    ", numerador, denominador_1, denominador_2, divide_numeros);
    return 0;   




}