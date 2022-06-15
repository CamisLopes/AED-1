/*
Ler um número entre 0 e 60 e mostrar o seu sucessor. 
Considere que o sucessor de 60 é 0 e não utilize comandos de repetição nem de seleção.
*/

#include <stdio.h>
#include <stdlib.h>

int main(){
    int num, sucessor;

    printf("\n Insira um número de 0 a 60: ");
    scanf("%i", &num);

    sucessor = (num + 1) %61;

    printf("\n %i \n", num);
    return 0;
}