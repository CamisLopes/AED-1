/*
Implemente uma função que:
    receba como parâmetro um array de números reais de tamanho N 
    e retorne quantos numeros negativos há nesse array. 
Essa função deve obedecer ao prototipo:
    int negativos(float *vet, int N);
*/

/* BIBLIOTECAS USADAS */
#include <stdio.h>
#include <stdlib.h>

/* FUNÇÃO QUE LÊ REAIS */
float leReal(){
    int num;
    printf("\n Insira um numero real: ");
    scanf("%f", &num);
    return num;
}

/* FUNÇÃO QUE CALCULA QUANTOS NÚMEROS NEGATIVOS O ARRAY POSSUI */
int negativos(float *vet, int N){
    int contador = 0;
    for(int i = 0; i < N; i++){
        if(vet[i] < 0) contador++;
    }
    return contador;
}

/* FUNÇÃO PRINCIPAL */
int main(){
    int N;
    printf("\n Insira um numero intero: ");
    scanf("%d", &N);
    
    float array[N];
    for(int i = 0; i < N; i++) array[i] = leReal();

    printf("\n O array possui %d numeros negativos!", negativos(array, N));
    return 0;
}
