#include <stdio.h>
#include <stdlib.h>

void intro(){
    printf("\n\t******************");
    printf("\n\t LISTA 03 DE AEDI");
    printf("\n\t QUESTAO 01");
    printf("\n Algoritmo que le dois numeros inteiros e: \n\t calcula e imprime a diferenca \n\t calcula e imprime a divisao do primeiro numero pelo segundo quando o segundo e diferente de 0");
    printf("\n\t******************");
}

int leInteiro(){
    int num;
    printf("\n Insira um numero  inteiro: ");
    scanf("%i", &num);
    return num;
}

int main(){
    intro();
    int a, b, diferenca; 
    float divisao;

    a = leInteiro();
    b = leInteiro();

    printf("\n\t******************");

    diferenca = a - b;

    if(b != 0){
        divisao = a / (float)b;
        printf("\n\n A diferenca entre %i e %i = %i", a, b, diferenca);
        printf("\n A divisao de %i por %i = %.2f\n", a, b, divisao);
    }
    else printf("\n\n A diferenca entre %i e %i = %i \n", a, b, diferenca);

    return 0;
}