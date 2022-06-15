//ler o numerador e o denominador de uma fração e transforma-la em um numero decimal

#include <stdio.h>
#include <stdlib.h>

int main(){
    float numerador, denominador, resp;
    printf("\n Insira o numerador: ");
    scanf("%f", &numerador);

    printf("\n Insira o denominador: ");
    scanf("%f", &denominador);

    resp = numerador / denominador;

    printf("\n %.2f / %.2f = %f", numerador, denominador, resp);
    return 0;
}