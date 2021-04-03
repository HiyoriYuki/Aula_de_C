#include <stdio.h>

#define BUFF 0.10

int main () {
    float dano=1000, buff_de_dano;

    buff_de_dano = dano + BUFF*buff_de_dano;

    return 0;
}