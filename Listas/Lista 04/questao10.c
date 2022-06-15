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
    int n = leInteiro("a quantidade de elementos que serao imprimidos"), sequenciaI = 1; //definição das variáveis
    printf("%i", sequenciaI); //apenas por estético
    for(int i = 0; i < n; i++){
        sequenciaI += 2;
        printf(" ,%i", sequenciaI); // continuação da sequência de nºs impares
    }
    return 0;
}