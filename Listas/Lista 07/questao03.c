/*
Faça um programa que:
    leia 2 valores inteiros e 
    chame uma função que receba estas 2 variáveis e troque o seu conteúdo, ou seja, 
    esta função é chamada passando duas variáveis A e B por exemplo e, 
    após a execução da função, A conterá o valor de B e B terá o valor de A.
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

void troca(int *A, int *B){
    int troca;
    troca = *A;
    *A = *B;
    *B = troca;
}

/* FUNÇÃO PRINCIPAL */
int main(){
    int num1 = leInteiros(), num2 = leInteiros();
    printf(" Antes da troca, A = %d e B = %d.\n", num1, num2);
    troca(&num1, &num2);
    printf("\n Apos a troca, A = %d e B = %d", num1, num2);
    return 0;
}