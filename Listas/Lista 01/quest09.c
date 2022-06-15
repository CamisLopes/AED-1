#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    float razao, num, resp;

    printf("\n Insira a razão de uma PG: ");
    scanf("%f", &razao);

    printf("\n Insira o primeiro termo da PG: ");
    scanf("%f", &num);

    resp = num + pow(razao, 4);

    printf("\n O decimo termo da progressao geometrica com razao igual a %.2f e o primeiro termo igual a %.2f é: %.2f", razao, num, resp);
    return 0;
}