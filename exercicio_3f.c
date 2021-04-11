#include <stdio.h>
#define A  5
#define B  2 
#define C  4   
#define D  6 
#define E  3 

int main (){
    //Declaração 
    
    int multiplica_1, multiplica_2;
    float resto;
    

    // Calculo (d * b) % (c * e)
     
    multiplica_1 = D * B;
    multiplica_2 = C * E;  
    resto = multiplica_1 % multiplica_2;
   

    //Exibe
    printf(" O calculo  6 * 2 %% 4 * 3 tem resto de %d", resto);
    return 0;   




}