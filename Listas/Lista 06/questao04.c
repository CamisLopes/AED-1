/* BIBLIOTECAS USADAS */
#include <stdlib.h>
#include <stdio.h>

/* FUNÇÃO QUE LE INTEIROS */
int leinteiro(){
    int n;
    printf("\n Insira um numero inteiro: ");
    scanf("%i", &n);
    return n;
}

/* FUNÇÃO RECURSIVA */
int equacaoR(int n){
    int t; //variável de controle
    if(n == 0) return 1; //quando n for 0 retorna 1
    else if(n == 1) return 1; //quando n for 1 retorna 1
    else if(n == 2) return 1; //quando n for 2 retorna 1
    else{
        t = equacaoR(n - 1) + equacaoR(n - 2) + equacaoR(n - 3); //calcula a soma das equações de recorrencia
        return t;
    }
}

/* FUNÇÃO PRINCIPAL */
int main(){
    int num = leinteiro(); //chama a função que le inteiros
    printf("\n O %do termo na sequencia de equacoes de recorrencia e: %d", num, equacaoR(num)); //escreve a resposta com a chamada da função recursiva
    return 0;
}