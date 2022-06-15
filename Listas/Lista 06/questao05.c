/* BIBLIOTECAS USADAS */
#include <stdlib.h>
#include <stdio.h>

/* FUNÇÃO DE INTEIROS */
int leinteiro(){
    int n;
    printf("\n Insira um numero inteiro: ");
    scanf("%i", &n);
    return n;
}

/* FUNÇÃO RECURSIVA DE SOMATORIO */
int somatorio(int n){
    int t; //variavel de controle
    if(n == 0) return 0; //retorna 0 quando n for 0 -> quando escrever 0
    else if(n == 1) return 1; //retorna 1 quando n for 1
    else{
        t = n + somatorio(n - 1); //chamada recursiva do numero menor que 0
        return t; //retorna a soma
    }
}

/* FUNÇÃO PRINCIPAL */
int main(){
    int num = leinteiro(); //função que le inteiros
    printf("\n O somatorio de %d e: %d", num, somatorio(num)); //escrita da resposta com a chamada da função recursiva
    return 0;
}