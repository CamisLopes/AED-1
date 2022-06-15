/* BIBLIOTECAS USADAS */
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

/* FUNÇÃO QUE LE INTEIROS */
int leinteiro(){
    int n;
    printf("\n Insira um numero inteiro: ");
    scanf("%i", &n);
    return n;
}

/* FUNÇÃO RECURSIVA */
int equacao(int n){
    int t; //variável de controle
    if(n == 1) return 2; //quando for 1 ele retorna 2
    else if(n == 2) return 3; //quando for 2 ele retorna 3
    else{
        t = 5 * n + pow(equacao(n - 1), n); //sendo uma sequencia de equações ele n espera receber < 1 logo, qualquer número maior que 2 cai nessa função
        return t; //retorna t
    }
}

/* FUNÇÃO PRINCIPAL */
int main(){
    int num = leinteiro(); //chamada da função que le inteiros
    printf("\n O %do termo na sequencia de equacoes de recorrencia e: %d", num, equacao(num)); //a chamada da função retorna o termo desejado
    return 0;
}