#include <stdio.h>
#define A  5
#define B  2 
#define C  4   
#define D  6 
#define E  3 

int main (){
    //Declaração a = 5, b = 2, c = 4, d = 6, e = 3   d / b -c % b
    
    int subtracao;
    float divisao, resultado;

    // Calculo
     
    divisao = D / B;
    subtracao = divisao - C;
    resultado = subtracao % B;
   

    //Exibe
    printf(" O calculo  6 / 2 -4 dividido por 2 tem resto de %.f", resultado);
    return 0;   




}