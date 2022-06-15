/*
Escreva um programa que declare:
    um inteiro, 
    um real e 
    um char, 
e ponteiros para:
    inteiro, 
    real,
    e char. 
Associe as variáveis aos ponteiros (use &). 
Modifique os valores de cada variável usandoos ponteiros. 
Imprima os valores das variáveis antes e após a modificação.
*/

/* BIBLIOTECAS USADAS*/
#include <stdio.h>
#include <stdlib.h>

/*FUNÇÃO PRINCIPAL*/    
int main(){
    /* DEFINIR AS VARIÁVEIS */
    int inteiro = 0, *ponteiroI = &inteiro;
    float real = 0, *ponteiroR = &real; 
    char caractere = '?', *ponteiroC = &caractere;
    
    /* ESCRITA DAS VARIÁVEIS ANTES DE SUA MODIFICAÇÃO */
    printf(" VALORES DAS VARIÁVEIS \n Inteiro: %d;\n Real: %f; \n Caractere: %c\n", inteiro, real, caractere);
    
    /* MODIFICAÇÃO DAS VARIÁVEIS COM O PONTEIRO */
    *ponteiroI = 10;
    *ponteiroR = 10.10;
    *ponteiroC = 'C';

    /* ESCRITA DA VARIÁVEL APÓS SUA MODIFICAÇÃO */
    printf("\n\n VALORES DAS VARIÁVEIS MODIFICADOS COM O PONTEIRO \n Inteiro: %d;\n Real: %f; \n Caractere: %c\n", inteiro, real, caractere);
    return 0;
}