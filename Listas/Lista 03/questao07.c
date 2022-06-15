#include <stdio.h>
#include <stdlib.h>

void intro(){
    printf("\n\t******************");
    printf("\n\t LISTA 03 DE AEDI");
    printf("\n\t QUESTAO 07");
    printf("\n\t Algoritmo que le dois valores reais, determina e escreve: \n\t o maior deles ou se os dois sao iguais");
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
    
    float a, b;
    a = leReal();
    b = leReal();

    if(a > b) printf("\n %.2f e maior que %.2f", a, b);
    else if(a < b) printf("\n %.2f e maior que %.2f", b, a);
    else printf("\n Ambos sao iguais");

    return 0;
}