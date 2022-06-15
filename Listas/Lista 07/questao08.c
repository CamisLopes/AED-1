/*
Crie um programa que contenha um array de inteiros contendo 5 elementos. 
Utilizando apenas aritmetica de ponteiros, leia esse array do teclado e imprima o dobro de cada valor lido.
*/

/* BIBLIOTECAS USADAS */
#include <stdio.h>
#include <stdlib.h>

#define TAM 5

/* FUNÇÃO QUE LE INTEIROS POR PARâMETRO */
void leInteiros(int *inteiro){
    printf("\n Digite um numero: ");
    scanf("%d", &*inteiro);
}


/* FUNÇÃO PRINCIPAL */
int main(){
    int array[TAM];
    for(int i = 0; i < TAM; i++) leInteiros(&array[i]);
    for(int j = 0; j < TAM; j++) printf("\n O dobro de %d e: %d", array[j], array[j] * 2);
    return 0;
}