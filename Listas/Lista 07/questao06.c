/*
Crie um programa que:
    contenha uma função que permita passar por parâmetro dois numeros inteiros A e B. 
A função deverá calcular a soma entre estes dois números e armazenar o resultado na variável A. 
Esta função não deverá possuir retorno, mas deverá modificar o valor do primeiro parâmetro.
Imprima os valores de A e B na função principal.
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

/* FUNÇÃO QUE SOMA OS VALORES DE A E B */
void soma(int *A, int *B){ *A = *A + *B; }

/* FUNÇÃO PRINCIPAL */
int main(){
    int numA = leInteiros(), numB = leInteiros();
    printf("\n A soma de %d e %d e igual a:", numA, numB);
    soma(&numA, &numB);
    printf(" %d\n", numA);
    return 0;
}