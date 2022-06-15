#include <stdio.h>
#include <stdlib.h>

void intro(){
    printf("\n\t******************");
    printf("\n\t LISTA 03 DE AEDI");
    printf("\n\t QUESTAO 02");
    printf("\n\t Algoritmo que le um numero inteiros, verifica e escreve se ele e divisivel ou nao por 7");
    printf("\n\t******************");
    printf("\n");
}

int leInteiro(){
    int num;
    printf("\n Insira um numero  inteiro: ");
    scanf("%i", &num);
    return num;
}

int main(){
    intro();
    int num = leInteiro();

    if(num%7){ printf("\n %i NAO E DIVISIVEL POR 7", num);}
    else printf("\n %i E DIVISIVEL POR 7", num);

    return 0;
}