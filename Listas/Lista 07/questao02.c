/*
Escreva um programa que contenha duas variáveis inteiras. 
Leia essas variáveis do teclado. 
Em seguida, compare seus endereços e exiba o conteúdo do maior endereço.
*/

/* BIBLIOTECAS USADAS */
#include <stdio.h>
#include <stdlib.h>

/* FUNÇÃO QUE LE INTEIROS */
int leInteiros(){
    int num;
    printf("\n Digite um numero: ");
    scanf("%d", &num);
    return num;
}

/* FUNÇÃO PRINCIPAR */
int main(){
    /* DEFINIÇÃO DAS VARIÁVEIS E SEUS PONTEIROS */
    int num1 = leInteiros(), num2 = leInteiros();

    /* TESTE E ESCRITA DA RESPOSTA */
    if(&num1 > &num2) printf("\n O primeiro numero, %d, tem o maior endereco de memoria\n", num1);
    else printf("\n O segundo numero, %d, possui o maior endereco de memoria\n", num2);

    return 0;
}