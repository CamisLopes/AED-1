/* BIBLIOTECAS USADAS */
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/* FUNÇÃO QUE LÊ CHAR */
char leCaractere(){
    char c;
    printf("\n Insira um caractere: ");
    scanf("%c", &c);
    return c;
}

/* FUNÇÃO PRINCIPAL */
int main(){
    char carac = leCaractere(); //declaração de uma variável e chama a função para ler caracteres
    //testes pra definir o tipo
    if(isalnum(carac)){
        if(isalpha(carac)){
            if(isupper(carac)) printf("\n MAIUSCULA");
            else printf("\n MINUSCULA");
        }
        else printf("\n %c", carac);
    }
    else printf("\n OUTRO CACTERE");
    return 0;
}