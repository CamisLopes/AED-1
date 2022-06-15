/*
Suponha que temos dois arquivos cujo as linhas são ordenadas lexigraficamente. 
Por exemplo,estes arquivos podem conter nomes de pessoas, linha a linha, em ordem alfabética. 
Escreva umprograma que receba, por linha de comando, os nomes destes dois arquivos e de um terceiro. 
Crie este terceiro arquivo contendo todas as linhas destes dois arquivos ordenadas lexicograficamente.
*/

/* BIBLIOTECAS USADAS */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>


/* FUNÇÃO PRINCIPAL */
int main(){
    char linha[46];
    FILE *arquivo;
    arquivo = fopen("a1.txt", "r+");
    fclose(arquivo);


    arquivo = fopen("a2.txt", "r+");
    fclose(arquivo);
    return 0;
}