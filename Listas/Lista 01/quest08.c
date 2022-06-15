#include <stdio.h>
#include <stdlib.h>

int main(){
    float razao, num, resp;

    printf("\n Insira a razão de uma PA: ");
    scanf("%f", &razao);

    printf("\n Insira o primeiro termo da PA: ");
    scanf("%f", &num);

    resp = num + 9 * razao;

    printf("\n O decimo termo da progressao aritmetica com razao igual a %.2f e o primeiro termo igual a %.2f é: %.2f", razao, num, resp);
    return 0;
}
