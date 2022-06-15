#include <stdio.h>
#include <stdlib.h>


void intro(){
    printf("\n\t******************");
    printf("\n\t LISTA 03 DE AEDI");
    printf("\n\t QUESTAO 12");
    printf("\n\t Algoritmo que le dois caracteres e escreve-los em ordem alfabética");
    printf("\n\t******************");
    printf("\n");
}


char leChar(){
    char c;
    printf("\n Insira um caracter: ");
    scanf("%c", &c);
    return c;
}

int main() {
    intro();
    char c1, c2;
    c1 = leChar();
    c2 = leChar();

    if(tolower(c1) > tolower(c2)) printf("\n\t Ordem alfabética: %c, %c \n", c2, c1);
    else if(tolower(c1) < tolower(c2)) printf("\n\t Ordem algabética: %c, %c \n", c1, c2); 
    else printf("\n\t %c \n", c1);

    return 0;
}