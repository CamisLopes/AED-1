/*
Ler dois valores reais, determinar e escrever o menor e o maior.
*/

#include <stdio.h>
#include <stdlib.h>

void intro(){
    printf("\n\t******************");
    printf("\n\t LISTA 03 DE AEDI");
    printf("\n\t QUESTAO 11");
    printf("\n\t Algoritmo que verifica se o ano e bissexto ou n");
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
    float num1, num2;

    num1 = leReal();
    num2 = leReal();

    if(num1 >= num2){
        if(num1 == num2) printf("\n Ambos os numeros sao iguais a %.2f", num1);
        else printf("\n O maior numero e: %.2f \n O menor numero e: %.2f", num1, num2);
    }
    else printf("\n O maior numero e: %.2f \n O menor numero e: %.2f", num2, num1);

    return 0;
}