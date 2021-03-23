#include <stdio.h>

int main () {

    //declaração de variáveis

    int numero_inicio, numero_fim, resultado_da_soma, denominador;

    //entrada
    
    numero_inicio = 6;
    numero_fim = 18;
    denominador = 2;
    resultado_da_soma = numero_inicio + numero_fim/denominador;
      

    //processamento

    resultado_da_soma = numero_inicio + numero_fim;

    //saída
    
    printf("A soma de %d + %d e =  %d",numero_inicio, numero_fim, resultado_da_soma);

    return 0; 
}