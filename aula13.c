#include <stdio.h>

int main () {
    int a, b;
    float x, y;
    char l1, l2; 
    char palavra[12];

    printf ("Digite um numero inteiro: ");
    scanf ("%d", &a);
    printf ("\no numero digitado foi %d", a);

    printf("\n Digite um inteiro e um float\n");
    scanf("%d%f", &b, &x);

    printf("\n digite  uma letrinha: ");
    scanf(' %c', &l1); //falta meche ai 42:12



    scanf("\ndigite seu nome: ");
    printf ("\npalavra: %s\n", palavra);
    return 0;
}   