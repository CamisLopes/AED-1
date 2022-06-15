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
    int atual, termo1 = 0, termo2 = 1; //define as variáveis
    for(int i = 0; i < L; i++){
        atual = termo1 + termo2;
        termo2 = termo1;
        termo1 = atual;
    }
    printf("\n O %do termo da sequencia de Fibonacci e: %d", L, termo1); //termo1 = atual
}


/* FUNÇÃO PRINCIPAL */
int main(){
    //chamada das funções
    int L = leInteiro();
    estruturaR(L);
    return 0;
}