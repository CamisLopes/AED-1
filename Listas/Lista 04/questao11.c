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
    int n = leInteiro("a quantidade de elementos que serao imprimidos"), sequenciaI = 1, i = 0; //definição das variáveis
    //para imprimir n elementos com tais definições abaixo foi usado a estrutura de rep do/while
    do{
        if(!(sequenciaI % 3) && !(sequenciaI % 5) || !(sequenciaI % 7)){
            printf("%i\t", sequenciaI); //escreve
            i++; //a flag só é somada quando é escrito algo
        }
        sequenciaI += 2; //soma da sequência
    }while(i < n);
    return 0;
}