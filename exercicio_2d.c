#include <stdio.h>

int main (){
    //Declaração 4,6.(3,0 + 14,9)
    float multiplicador = 4.6,
    soma_1 = 3.0,
    soma_2 = 14.9,
    resultado;

    // Calculo
    
    resultado = soma_1 + soma_2;
    resultado = resultado * multiplicador;

    //Exibe
    printf("O Calcula de (3,0 + 14,9) * 4,6 é %.1f", resultado);
    return 0;   




}