#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    float rendimento, valorA, quantidadeA, p, i, n;

    //a leitura da aplicação mensal
    printf("\n Insira a aplicacao mensal: ");
    scanf("%f", &p);

    //leitura da taxa em porcentagem
    printf("\n Insira a taxa em %%: ");
    scanf("%f", &i);
    //na equação a taxa deve ser colocada em decimal uma vez que porcentagem é x / 100;
    i = i / 100;

    //quantidade de meses que houve a aplicação
    printf("\n Insira o número de meses: ");
    scanf("%f", &n);

    //cálculos
    valorA = p * ((pow((1.0 + i), n) - 1.0) / i);
    //quantidade aplicada durante o período colocado
    quantidadeA = p * n;
    //o rendimento é o valor acumulado menos a quantidade aplicada
    rendimento = valorA - quantidadeA;

    //escrita
    printf("\n Valor acumulado: %.2f", valorA);
    printf("\n Quantidade aplicada: %.2f", quantidadeA);
    printf("\n Rendimento: %.2f", rendimento);

    return 0;
}