#include <stdio.h>
#define A  5
#define B  2 
#define C  4   
#define D  6 
#define E  3 

int main (){
    //Declaração a = 5, b = 2, c = 4, d = 6, e = 3  a * c + d * b
    
    int multiplica_1, multiplica_2, soma;

  

    // Calculo
     
    multiplica_1 = A * C;
    multiplica_2 = D * B ;  
    soma = multiplica_1 + multiplica_2;
   

    //Exibe
    printf(" O calculo  5*4 + 6*2 de resultado de %d", soma);
    return 0;   




}