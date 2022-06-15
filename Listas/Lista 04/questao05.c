/* BIBLIOTECAS USADAS */
#include <stdio.h>
#include <stdlib.h>

/* FUNÇÃO QUE LÊ NÚMEROS INTEIROS*/
int leInteiro(char palavra[]){
    int num;
    printf("\n Insira %s: ", palavra);
    scanf("%d", &num);
    return num;
}

/* FUNÇÃO PRINCIPAL */
int main(){
    int n = leInteiro("a quantidade de multiplos"), resp = 0; //definir as variáveis que serão utilizadas
    //uso do for pra imprimir a quantidade desejada
    for(int i = 0; i < n; i++){
        resp = resp + 5;
        printf("%d\t", resp);
    }
    //fim do algoritmo
    return 0;
}