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
    

    // Calculo  d * b % c * e
     

    resto = B % C;
    multiplica_1 = D * resto;
    multiplica_2 = multiplica_1 * E;  
   

    //Exibe
    printf(" O calculo  6 * 2 %% 4 * 3 tem resto de %d", multiplica_2);
    return 0;   




}