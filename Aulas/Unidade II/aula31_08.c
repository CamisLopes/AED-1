/*
ascii to int
atoi
*/

#include <stdio.h>
#include <stdlib.h>

/* Faz a leitura de um número inteiro*/
int leNumero(){
    int num;
    printf("\n Insira um numero inteiro: ");
    scanf("%i", &num);
    return num;
}

int fatorial(int num){
    int resposta;
    for(int i = 0; i <= num; i++){
        resposta = resposta * i;
    }
    return resposta;
}

int main(){
    int numero, resposta;
    numero = leNumero();
    resposta = fatorial(numero);

    printf("\n %i! = %i", numero, resposta);

    return 0;
}