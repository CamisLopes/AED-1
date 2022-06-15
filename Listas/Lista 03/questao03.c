#include <stdio.h>
#include <stdlib.h>

void intro(){
    printf("\n\t******************");
    printf("\n\t LISTA 03 DE AEDI");
    printf("\n\t QUESTAO 03");
    printf("\n\t Algoritmo que le tres numeros inteiros, verifica se pode ou nao ser lados de um triangulo");
    printf("\n\t******************");
    printf("\n");
}

int leInteiro(){
    int num;
    printf("\n Insira um numero inteiro: ");
    scanf("%i", &num);
    return num;
}

int main(){
    intro();
    
    int num1, num2, num3;
    num1 = leInteiro();
    num2 = leInteiro();
    num3 = leInteiro();

    if(num1 <= 0 || num2 <= 0 || num3 <= 0 || num1 + num2 < num3 || num1 + num3 < num2 || num2 + num3 < num1) printf("\n NAO PODE SER UM TRIANGULO");

    else printf("\n PODE SER UM TRIANGULO");
    return 0;
}