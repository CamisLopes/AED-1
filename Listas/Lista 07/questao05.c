/*
Elaborar um programa que leia dois valores inteiros (A e B). 
Em seguida faça uma função que retorne a soma do dobro dos dois numeros lidos.
A função deverá armazenar o dobro de A na propria variável A e o dobro de B na própria variável B.
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

/* FUNÇÃO DOBRO */
void dobro(int *A, int *B){
    *A *= 2;
    *B *= 2;
}

/* FUNÇÃO PRINCIPAL */
int main(){
    int numA = leInteiros(), numB = leInteiros();
    printf("A = %dzn B = %d", numA, numB);
    dobro(&numA, &numB);
    printf("\n O dobro de A e: %d\n O dobro de B e: %d\n", numA, numB);
    return 0;
}