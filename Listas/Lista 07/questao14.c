/*
Escreva uma função que:
    receba um array de inteiros V e 
    receba os endereços de duas variáveis inteiras, min e max, 
    e armazene nessas variáveis o valor mínimo e máximo do array.
Escreva também uma função main que use essa função.
*/

/* BIBLIOTECAS USADAS */
#include <stdio.h>
#include <stdlib.h>

/* FUNÇÃO QUE LE INTEIROS */
int leInteiros(char string[]){
    int num;
    printf("\n Digite %s: ", string);
    scanf("%d", &num);
    return num;
}

/* FUNÇÃO PEDIDA PELA QUESTÃO */
void minMax(int arrayP[], int *min, int *max, int tamanho){
    for(int i = 0; i < tamanho; i++){
        if(i == 0){
            *min = arrayP[i];
            *max = arrayP[i];
        }
        else if(arrayP[i] > *max) *max = arrayP[i];
        else if(arrayP[i] < *min) *min = arrayP[i];     
    }
}

/* FUNÇÃO PRINCIPAL */
int main(){
    int V = leInteiros("o numero maximo de valores na string"), array[V], min, max;
    for(int i = 0; i < V; i++) array[i] = leInteiros("um numero da string ");
    minMax(array, &min, &max, V);
    printf("\n O valor maximo e: %d \n O valor minimo e: %d", max, min);  
    return 0;
}