#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main(){
    FILE *palavra = NULL;
    char palavraEscolhida[100], nomeArquivo[100], linha[100];
    int countlinhas = 0, countpalavra = 0;
    
    printf("\n Insira o nome do arquivo: ");
    scanf("%s", &nomeArquivo);

    palavra = fopen(nomeArquivo, "r");
    if(palavra == NULL){
        printf("\n E R R O !\n Abertura do arquivo apresentou problemas: \n");
        exit(1);
    }

    printf("\n Insira uma palavra que deseja procurar no arquivo: ");
    scanf("%s", &palavraEscolhida);

    printf("\n AS PALAVRAS PRESENTES NO ARQUIVO: \n");
    while(!feof(palavra)){ //enquanto não chegar no final do arquivo, a repetição ira ocorrer
        fgets(linha, 100, palavra); //ele vai pegar 1 linha por vez
        countlinhas++;
        if(strstr(linha, palavraEscolhida) != NULL){
            countpalavra++;
            printf("\n (%d) [%d] %s ", countpalavra, countlinhas, linha); //vai imprimir essa linha
        }
        else printf("\n [%d] %s ", countlinhas, linha); //vai imprimir essa linha
    }

    fclose(palavra);
    
}