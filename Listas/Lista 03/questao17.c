#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void intro(){
    printf("\n\t******************");
    printf("\n\t LISTA 03 DE AEDI");
    printf("\n\t QUESTAO 17");
    printf("\n\t Algoritmo que le o nome de uma pessoa e e verificar se é igual ou não ao seu nome, escrevendo mensagem adequada.");
    printf("\n\t******************");
    printf("\n");
}

int main(){
    intro();
    char nome[100], meuNome[] = "Camila";

    printf("\n Insira seu primeiro nome: ");
    scanf("%s", nome);

    if(strcmpi(nome, meuNome) == 0){ printf("\n TEMOS NOMES IGUAIS\n"); }
    else printf("\n TEMOS NOMES DIFERENTES\n");
    
    return 0;
}