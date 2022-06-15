/*
Faça um programa que:
    leia dois valores inteiros e 
    chame uma função:
        que receba estes 2 valores de entrada e 
        retorne o maior valor na primeira variável e o menor valor na segunda variável.
Escreva o conteúdo das 2 variáveis na tela.
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

/* FUNÇÃO MAIOR E MENOR VALOR */
void maiorMenor(int *x, int *y){
    if(*y > *x){
        int troca;
        troca = *y;
        *y = *x;
        *x = troca;
    }
}

/* FUNÇÃO PRINCIPAL */
int main(){
    int num1 = leInteiros(), num2 = leInteiros();
    maiorMenor(&num1, &num2);
    printf("\n\n O maior numero e: %d e o menor numero e: %d", num1, num2);
    return 0;
}