/*
Crie um programa que contenha um array contendo 5 elementos inteiros. 
Leia esse array do teclado e imprima o endereço das posições contendo valores pares.
*/

/* BIBLIOTECAS USADAS */
#include <stdio.h>
#include <stdlib.h>

#define TAM 5

/* LE VALORES INTEIROS POR PARÂMETRO*/
void leInteiros(int *inteiro){
    printf("\n Digite um numero: ");
    scanf("%d", &*inteiro);
}

/* FUNÇÃO PRINCIPAL */
int main(){
    int array[TAM];
    for(int i = 0; i < TAM; i++) leInteiros(&array[i]);
    for(int j = 0; j < TAM; j++) if(!(array[j] % 2)) printf("\n O endereco de %d e: %x", array[j], &array[j]);
    return 0;
}