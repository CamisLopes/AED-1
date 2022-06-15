/* BIBLIOTECAS USADAS */
#include <stdlib.h>
#include <stdio.h>

/* FUNÇÃO QUE LE INTEIRO */
int leinteiro(){
    int n;
    printf("\n Insira um numero inteiro: ");
    scanf("%i", &n);
    return n;
}

/* FUNÇÃO RECURSIVA DE POTENCIAÇÃO*/
int potencia(int x, int n){
    int t; //variavel de controle
    if(n == 1) return x; //retorna o numero para representar n^1 = n
    else{
        t = x * potencia(x, n - 1); //a chamada da função para toda vez que n não for = 1 (ele vai retornar)
        return t; //retorna a resposta
    }
}

/* FUNÇÃO PRINCIPAL */
int main(){
    int nx = leinteiro(), nn = leinteiro(); //numero base e o numero da potencia
    printf("\n O numero %d elevado a %d e igual a: %d", nx, nn, potencia(nx, nn)); //chamada da resposta com a função
    return 0;
}  