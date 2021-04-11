#include <stdio.h>
#define A  5
#define B  2 
#define C  4   
#define D  6 
#define E  3 

int main (){
    //Declaração 
    
    int multiplica_1, multiplica_2;
    float divide;
    

    // Calculo (a * b + 2) / (c * e)
     
    multiplica_1 = A * B + 2;
    multiplica_2 = C * E;  
    divide = multiplica_1 / multiplica_2;
   

    //Exibe
    printf(" O calculo  (5*2+2)/(4*3) tem resultado de %.1f", divide);
    return 0;   




}