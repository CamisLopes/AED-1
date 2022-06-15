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
    int atual = 1, termo1 = 0, termo2 = 1; //determina as variáveis que serão usadas
    while(atual < L){
        /*
        Para que a sequência continue tendo 2 nºs 1s, eu defini que:
            *o controle continuará sendo feito pela variável atual -> quando ele for maior que L a repitição para
            *o print será do termo1 -> assim, não apenas não irá escrever o 1 nº >= a L, mas também permite que o começo da sequência seje 1, 1...
        */
        termo2 = termo1;
        termo1 = atual;
        printf("%d\t", termo1);
        atual = termo1 + termo2;
    }
}

/* FUNÇÃO PRINCIPAL */
int main(){
    //responsável de chamar as funções
    int L = leInteiro();
    estruturaR(L);
    return 0;
}