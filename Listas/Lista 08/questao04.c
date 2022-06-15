/*
Elabore um programa que preencha uma matriz10×10 com elementos digitados pelo usuário.
Em seguida realize as seguintes trocas:
    •A linha índice 2 com a linha índice 8
    •A diagonal principal com a diagonal secundária
*/

/* BIBLIOTECAS USADAS */
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/* VARIÁVEIS FIXAS */
#define LIN 10
#define COL 10

/* FUNÇÃO PRINCIPAL */
int maion(){
    int matriz[LIN][COL], vetorTroca[LIN], facil = 0;

    for(int i = 0; i < COL; i++){
        for(int j = 0; j < LIN; j++){
            facil++;
            matriz[j][i] = facil;
        }
    }

    for(int i = 0; i < LIN; i++) vetorTroca[i] = matriz[i][2];
    for(int i = 0; i < LIN; i++) matriz[i][2] = matriz[i][8];
    for(int i = 0; i < LIN; i++) matriz[i][8] = vetorTroca[i];

    for(int i = 0; i < LIN; i++){
        vetorTroca[i] = matriz[i][i];
    }
    return 0;
}

