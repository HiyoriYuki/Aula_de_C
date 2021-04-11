    #include <stdio.h>

int main (){
    //Declaração (12,1 + 18,9)(15,3 -3,8)
    float multiplicacao,  resultado_1, resultado_2, soma_1 = 12.1, soma_2 = 18.9, subtracao_1 =15.3, subtracao_2 = 3.8;

    // Calculo
    
    resultado_1 = soma_1 + soma_2;
    resultado_2 = subtracao_1 - subtracao_2;
    multiplicacao = resultado_1 * resultado_2;

    //Exibe
    printf("O calculo (12,1 + 18,9)(15,3 -3,8) tem como resultado %.1f", multiplicacao );
    return 0;   




}