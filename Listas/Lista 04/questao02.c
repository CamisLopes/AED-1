/* BIBLIOTECAS USADAS */
#include <stdio.h>
#include <stdlib.h>

/* FUNÇÃO QUE LÊ NÚMEROS INTEIROS*/
int leInteiro(){
    int num;
    printf("\n Insira um numero inteiro: ");
    scanf("%d", &num);
    return num;
}

/* ESTRUTURA DE REPETIÇÃO*/
void estruturaR(int L){
    //sua função é apenas calcular e escrever a sequência de Fibonnacci
    int atual, termo1 = 0, termo2 = 1;
    for(int i = 0; i < L; i++){
        atual = termo1 + termo2;
        printf("%d\t", atual);
        termo2 = termo1;
        termo1 = atual;
    }
}

/* FUNÇÃO PRINCIPAL */
int main(){
    //responsável pela chamada das funções
    int L = leInteiro();
    estruturaR(L);
    return 0;
}