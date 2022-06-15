/*
Faça um programa para preencher uma matriz4×4, 
em seguida apresentar na tela a soma dos elementos abaixo da diagonal principal. 
Mostre na tela os elementos da diagonal principaltambém.
*/

/* BIBLIOTECAS USADAS */
#include <stdio.h>
#include <stdlib.h>

/* VARIÁVEIS FIXAS */
#define LIN 4
#define COL 4

/* FUNÇÃO PRINCIPAL */
int main(){
    int matriz[LIN][COL], soma;

    for(int i = 0; i < LIN; i++){
        for(int j = 0; j < COL; j++){
            printf("\n Insira um numero que sera inserido na linha %d e coluna %d: ", i + 1, j + 1);
            scanf("%d", &matriz[i][j]);
        }
    }

    printf("\n\n A MATRIZ\n-----------------------------------------------------------------\n");
    for(int i = 0; i < LIN; i++){
        printf("|\t");
        for(int j = 0; j < COL; j++) printf("%d\t|\t", matriz[i][j]);
        printf("\n-----------------------------------------------------------------\n");
    }
    printf("\n\n Os elementos  da diagonal princial sao: ");
    for(int i = 0; i < LIN; i++){
        printf("%d,  ", matriz[i][i]);
    }
    printf("\n\n Os elementos abaixo da diagonal sao: ");
    for(int i = 0; i < LIN - 1; i++){
        printf("%d,  ", matriz[i + 1][i]);
        soma += matriz[i + 1][i];
    }
    printf("\n\n E a soma deles e: %d", soma);
    printf("\n\n----------------------------------------------------\n\n");    
    return 0;
}
