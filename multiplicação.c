#include <stdio.h>

int main (){
    //Declaração
    float parcela=4.6, soma_1=3.0,
    soma_2=14.9, soma_numeros, multiplica_numeros;

    // Calculo
    soma_numeros = soma_1 + soma_2;
    multiplica_numeros = parcela * soma_numeros;

    //Exibe
    printf("O numero %.1f somado a %.1f e multiplicado por %.1f tem como resultado: %.1f    ", soma_1, soma_2, parcela, multiplica_numeros);
    return 0;   




}