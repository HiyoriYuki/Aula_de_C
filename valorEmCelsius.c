#include <studio.h>

int main() {
    float tempC, tempF;

    printF("\nDigite valor de Celsius: ");
    sancf("%f", &tempC);

    tempF = tempC*(9.0/5.0)+32.0;

    printf("\nA Temperatura %.2f C = %.2f em Fahrenheit", tempC, tempF);
    return 0;



}