/*
Faça um programa que lê números informados pelo usuário e armazena em uma matriz4×3.
Mostre a matriz completa na tela.
Em seguida, calcule exiba:
    •a média dos números armazenados
    •maior número armazenado e sua posição (linha e coluna)
    •o menor número armazenado e sua posição (linha e coluna)
*/

/* BIBLIOTECAS USADAS */
#include <stdio.h>
#include <stdlib.h>

#define LIN 4
#define COL 3

/* FUNÇÃO PRINCIPAL */
int main(){
    int matriz[LIN][COL], linMaior, linMenor, colMaior, colMenor, maior, menor;
    float media;

    for(int i = 0; i < LIN; i++){
        for(int j = 0; j < COL; j++){
            printf("\n Insira um numero que sera inserido na linha %d e coluna %d: ", i + 1, j + 1);
            scanf("%d", &matriz[i][j]);
            media += matriz[i][j];
        }
    }

    media = media / (LIN * COL);
    maior = matriz[0][0];
    menor = matriz[0][0];

    for(int i = 0; i < LIN; i++){
        for(int j = 0; j < COL; j++){
            if(matriz[i][j] >= maior){
                maior = matriz[i][j];
                linMaior = i + 1;
                colMaior = j + 1;
            }
            if(matriz[i][j] <= menor){
                menor = matriz[i][j];
                linMenor = i + 1;
                colMenor = j + 1;
            }
        }
    }

    printf("\n--------------------------------------------------------------\n\n");
    printf("-------------------------------------------------\n");
    for(int i = 0; i < LIN; i++){
        printf("|\t");
        for(int j = 0; j < COL; j++) printf("%d\t|\t", matriz[i][j]);
        printf("\n-------------------------------------------------\n");
    }

    printf("\n Calculos feitos: ");
    printf("\n\n Media dos numeros armazenados: %f", media);
    printf("\n\n O menor numero e %d e esta na linha %d e na coluna %d", menor, linMenor, colMenor);
    printf("\n\n O maior numero e %d e esta na linha %d e na coluna %d", maior, linMaior, colMaior);
    printf("\n\n----------------------------------------------------\n\n");
    return 0;
}