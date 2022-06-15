/*
Faça um programa que:
    leia três valores inteiros e 
    chame uma função que receba estes 3 valores deentrada e 
    retorne eles ordenados
ou seja:
    o menor valor na primeira variável
    o segundo menor valor na variável do meio
    e o maior valor na última variável. 
A função deve retornar o valor 1se os três valores forem iguais e 0 se existirem valores diferentes. 
Exibir os valores ordenados na tela.
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

void troca(int *x, int *y){
    int troca;
    troca = *x;
    *x = *y;
    *y = troca;
}

void ordem(int *A, int *B, int *C){
    if(*A > *B){
        if(*B > *C){
            troca(&*B, &*C);
            troca(&*A, &*B);
        }
        else troca(&*A, &*B);
    }
    else  if(*B > *C) troca(&*B, &*C);
}

/* FUNÇÃO PRINCIPAL */
int main(){
    int numA = leInteiros(), numB = leInteiros(), numC = leInteiros();
    printf("\n Fora de ordem: %d, %d, %d", numA, numB, numC);
    ordem(&numA, &numB, &numC);
    printf("\n Em ordem: %d, %d, %d", numA, numB, numC);
    return 0;
}