#include <stdio.h>



int main () {

    //declaração de variáveis

    float lado_quadrado, area;

    //entrada

    printf ("digite lado: ");

    scanf ("%f", &lado_quadrado);


    //processamento

    area = lado_quadrado * lado_quadrado;

    //saída

    printf("Area do quadrado é: %2.f", area);

    return 0;

}