/* BIBLIOTECAS USADAS */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* FUNÇÃO QUE LÊ NÚMEROS INTEIROS*/
int leInteiro(char palavra[]){
    int num;
    printf("\n Insira %s: ", palavra);
    scanf("%d", &num);
    return num;
}

/* O ALGORITMO PEDIDO */
void respostaA(int a1, int q, int n){
    int resp = a1 * pow(q, n - 1);
    printf("\n O %do termo da PG e igual a %d", n, resp);
}

/* ALGORITMO SEM OPERAÇÃO DE EXPONENCIAÇÃO */
void respostaB(int a1, int q, int n){
    int resp = 1; // variável a ser usada
    for(int i = 0; i < n - 1; i++) resp = resp * q; //multiplicação da potência
    resp = a1 * resp; //fórmula
    printf("\n O %do termo da PG e igual a %d", n, resp); //escrita da resposta
}

/* ALGORITMO SEM OPERAÇÃO DE EXPONENCIAÇÃO E MULTIPLICAÇÃO */
void respostaC(int a1, int q, int n){
    int somaE = 0, soma = 1, resp = 0; //define as variáveis que serão usadas
    //se for 1 a resposta será o 1o elemento pq qualquer no elevado a 0 é 1;
    if(n > 1){
        //termo escolhiodo (a potência)
        for(int i = 0; i < n - 1; i++){
            /*aqui nós temos a soma que irá definir q^x;
                devemos lembrar que a multiplicação é feita dessa forma:
                    ex: 3 * 3 * 3 = ?
                        (3 * 3) * 3 <- importante
                        (3 + 3 + 3) * 3 = 9 * 3
                        9 + 9 + 9 = 27
                    ATENÇÃO ERRADA: se eu n considerar o anterior como a nova variável que ira somar:
                        9 + 3 + 3 + 3 = 18 <- isso ocorre*/
            for(int j = 0; j < q; j++) somaE = somaE + soma;
            soma = somaE;
            somaE = 0;  //é necessário definir somaE como 0 para não somar + 1x (ao invés de somar 3x, iria somar 4x)
        } 
    }
    for(int k = 0; k < soma; k++) resp = resp + a1; //somando quantas vezes o primeiro termo é multiplicado e depois imprimindo a resposta
    printf("\n O %do termo da PG e igual a %d", n, resp);
}

/* FUNÇÃO PRINCIPAL */
int main(){
    int a1, q, n; //criação das variáveis
    a1 = leInteiro("o primeiro termo da PG");
    q = leInteiro("a razao da PG");
    printf("\n TERMO GERAL : an = %d * %d ^ n-1\n", a1, q); //demonstração da fórmula da PG contruída
    n  = leInteiro("o numero de elementos desejados");
    //chamada de cada função que representa as 3 perguntas da questão
    respostaA(a1, q, n);
    respostaB(a1, q, n);
    respostaC(a1, q, n);
    return 0;
}