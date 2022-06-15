#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void intro(){
    printf("\n\t******************");
    printf("\n\t LISTA 03 DE AEDI");
    printf("\n\t QUESTAO 13");
    printf("\n\t Algoritmo que le duas palavras e escreve-las em ordem alfabética.");
    printf("\n\t******************");
    printf("\n");
}

int main() {
  intro();
  char palavra1[46], palavra2[46];

  printf("Insira uma palavra com no máximo 10 caracteres: ");
  scanf("%s", palavra1);
  printf("Insira outra palavra com no máximo 10 caracteres: ");
  scanf("%s", palavra2);

  if(strcmp(palavra1, palavra2) > 0){ printf("\n %s, %s", palavra2, palavra1); }
  else printf("\n %s, %s", palavra1, palavra2);

  return 0;
}