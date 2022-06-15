/* BIBLIOTECAS USADAS*/
#include <stdlib.h>
#include <stdio.h>

/* FUNÇÃO QUE LE INTEIROS */
int leinteiro(){
    int n;
    printf("\n Insira um numero inteiro: ");
    scanf("%i", &n);
    return n;
}

/* FUNÇÃO RECURSIVA DOS MULTIPLOS DE 5*/
int multiplo(int n){
    int t; //variavel de controle
    if(n == 1) return 5; //quando for 1 retorna 5
    else{
        t = 5 + multiplo(n - 1); //chamada da função novamente até receber um numero inteiro
        return t; //reposta
    }
}

/* FUNÇÃO PRINCIPAL*/
int main(){
    int num = leinteiro(); //leitura de numero inteiro
    printf("\n Os %d primeiros termos na sequencia de multiplos de 5 e: ", num); //apenas de forma estética foi colocado um printf
    for(int i = 1; i <= num; i++) printf("%d  ", multiplo(i)); //dentro de um for que começa de 1 -> se for 0 a função n funciona é imprimido a resposta
    return 0;
}  