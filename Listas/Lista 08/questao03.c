/*
Faça um programa que preencha uma matrizA, a quantidade de linhas e colunas será dada pelo usuário. 
Em seguida, armazene os valores da transposta da matrizA na matrizT. 
Mostre natela a matrizA e a matrizT.
*/

/* BIBLIOTECAS USADAS */
#include <stdio.h>
#include <stdlib.h>

int leInteiros(char palavra[]){
    int num;
    printf("\n Insira %s: ", palavra);
    scanf("%d", &num);
    return num;
}

/* FUNÇÃO PRINCIPAL */
int main(){
    int linha = leInteiros("o numero de linhas que deseja"), coluna = leInteiros("o numero de colunas que deseja");
    int matrizA[linha][coluna], matrizT[coluna][linha];

    for(int i = 0; i < coluna; i++){
        for(int j = 0; j < linha; j++){
            matrizA[i][j] = leInteiros("um elemento da matriz");
        }
    }

    for(int i = 0; i < linha; i++){
        for(int j = 0; j < coluna; j++){
            matrizT[i][j] = matrizA[j][i];
        }
    }

    printf("\n\n A MATRIZ A\n");
    for(int x = 0; x < linha; x++) printf("----------------");
    printf("\n");

    for(int i = 0; i < coluna; i++){
        printf("|\t");
        for(int j = 0; j < linha; j++) printf("%d\t|\t", matrizA[i][j]);

        printf("\n");
        for(int x = 0; x < linha; x++) printf("----------------");
        printf("\n");

    }

   printf("\n\n A MATRIZ T\n");
    for(int x = 0; x < coluna; x++) printf("----------------");
    printf("\n");

    for(int i = 0; i < linha; i++){
        printf("|\t");
        for(int j = 0; j < coluna; j++) printf("%d\t|\t", matrizT[i][j]);

        printf("\n");
        for(int x = 0; x < coluna; x++) printf("----------------");
        printf("\n");

    }
    return 0;
}