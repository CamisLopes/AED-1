#include <stdio.h>
#include <stdlib.h>

void intro(){
    printf("\n\t******************");
    printf("\n\t LISTA 03 DE AEDI");
    printf("\n\t QUESTAO 10");
    printf("\n\t Algoritmo que verifica se o ano e bissexto ou n");
    printf("\n\t******************");
    printf("\n");
}

int leInteiro(char palavra[]){
    int n;
    printf("\n\t Insira o %s: ", palavra);
    scanf("%d", &n);

    return n;
}

int data(){
    int dia, mes, ano;

    dia = leInteiro("dia");
    mes = leInteiro("mes");
    ano = leInteiro("ano");

    printf("\n\t O ano ");
    return ano;
}

int main(){
    intro();
    int ano = data();

    if(!(ano % 4)){
        if(!(ano % 100)){
            if(!(ano % 400)){ printf("e BISSEXTO");}
            else printf("NAO E BISSEXTO");
        }
        else printf("e BISSEXTO");
    }
    else printf("NAO E BISSEXTO");
    return 0;
}