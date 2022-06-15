/*
Crie um programa que contenha um array de float contendo 10 elementos.
Imprima o endereçode cada posição desse array.
*/

/* BIBLIOTECAS USADAS */
#include <stdio.h>
#include <stdlib.h>

#define TAM 10

/* FUNÇÃO QUE LE REAL*/
float leReal(){
    float num;
    printf("\n Insira um numero real: ");
    scanf("%f", &num);
    return num;
}

/* FUNÇÃO PRINCIPAL */
int main(){
    float array[TAM];
    for(int i = 0; i < TAM; i++) array[i] = leReal();
    printf("\n Os enderecos de cada posicao do array e: ");
    for(int j = 0; j < TAM; j++) printf("\n Posicao %d = %x", j, &array[j]);
    return 0;
}
