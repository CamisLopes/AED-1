#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void intro(){
    printf("\n\t******************");
    printf("\n\t LISTA 03 DE AEDI");
    printf("\n\t QUESTAO 04");
    printf("\n\t Algoritmo que le os coeficiente de uma equacao, calcula e escreve a raiz da equacao");
    printf("\n\t******************");
    printf("\n");
}

int leReal(){
    float num;
    printf("\n Insira um numero inteiro: ");
    scanf("%f", &num);
    return num;
}

float resp(int a, int b, int x){
    int equacao, resposta;
    equacao = (a * x) + b;
    resposta = sqrt(equacao);
    return resposta;
}

int main(){
    intro();
    
    float a, b, x;
    a = leReal();
    b = leReal();
    x = leReal();

    printf("\n Na funcao: %.2f x %.2f + %.2f \n A raiz dessa equacao e = %.2f", a, x, b, resp(a,b,x));

    return 0;
}