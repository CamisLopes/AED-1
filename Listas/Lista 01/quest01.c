#include <stdio.h>
#include <stdlib.h>

int main(){
    int num, c, d, u, resp;

    printf("\n Escreva um numero de 3 digitos: ");
    scanf("%i", &num);

    c = num / 100;

    d = (num / 10) - (c * 10);

    u = num - (c * 100) - (d * 10);

    resp = (u * 100) + (d * 10) + c;
    printf("\n O numero %i invertido e: %i \n", num, resp);

    return 0;
}