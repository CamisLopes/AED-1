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
    int n = leInteiro("a quantidade de elementos que serao imprimidos"), a = leInteiro("o valor de a"), b = leInteiro("o valor de b"), sequenciaI = 1, i = 0;

    while(sequenciaI <= a){ sequenciaI += 2;}
    while(i < n && sequenciaI < b){
        if((!(sequenciaI % 3) && !(sequenciaI % 5)) || !(sequenciaI % 7)){
            printf("%i\t", sequenciaI);
            i++;
        }
        sequenciaI += 2;
    }
    return 0;
}