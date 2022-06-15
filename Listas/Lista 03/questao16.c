/*
Ler um número inteiro.
 Se ele for par calcular e escrever o seu quadrado e se for ímpar calculare escrever seu cubo.
*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void intro(){
    printf("\t******************");
    printf("\n\t LISTA 03 DE AEDI");
    printf("\n\t QUESTAO 16");
    printf("\n\t Algoritmo que le um numero inteiro se ele for par calcular e escrever o seu quadrado e se for impar calculare escrever seu cubo.");
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
    int a, resp;

    a = leInteiro();

    if(a%2){
        resp = pow(a, 3);
        printf("\n %i e impar e seu cubo e %i\n", a, resp);
    }
    else{
        resp = pow(a, 2);
        printf("\n %i e par e seu quadrado e %i\n", a, resp);
    }

    return 0;
}