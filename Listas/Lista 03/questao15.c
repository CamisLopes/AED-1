#include <stdio.h>
#include <stdlib.h>

void intro(){
    printf("\n\t******************");
    printf("\n\t LISTA 03 DE AEDI");
    printf("\n\t QUESTAO 14");
    printf("\n\t Algoritmo que le um valor real, determinar e escrever se ele é maior, menor ou igual a zero.");
    printf("\n\t******************");
    printf("\n");
}

int leReal(){
    float num;
    printf("\n Insira um numero inteiro: ");
    scanf("%f", &num);
    return num;
}

int main(){
    intro();
    float numero;

    numero = leReal();

    if(numero >= 0){
        if(numero == 0) printf("\n IGUAL A ZERO");
        else printf("\n %.2f MAIOR QUE ZERO", numero);
    }
    else printf("\n %.2f MENOR QUE ZERO", numero);

    return 0;
}