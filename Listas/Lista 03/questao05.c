/*
Ler os coeficientes e os termos indepedentes de um sistema de equações lineares 2x2.
Verificar e escrever se ele tem 
    solução única, 
    infinitas soluções 
    ou não tem solução.
Usar determinantes
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void intro(){
    printf("\n\t******************");
    printf("\n\t LISTA 03 DE AEDI");
    printf("\n\t QUESTAO 04");
    printf("\n\t Algoritmo que le os coeficiente e os termos indepedentes de um sistema de quacao linear \n Verificade e escre \n\t solucao unica \n\t infinitas solucoes \n\t ou nao tem solucoes ");
    printf("\n\t******************");
    printf("\n");
}

int leFlutuante(){
    float num;
    printf("\n Insira um numero real: ");
    scanf("%f", &num);
    return num;
}

float determinante(int a, int b, int x, int y){
    int resposta;
    resposta = a*y - b*x;
    return resposta;
}

int main(){
    intro();
    
    float a1, b1, a2, b2, x;
    a1 = leFlutuante();
    b1 = leFlutuante();
    a2 = leFlutuante();
    b2 = leFlutuante();
    
    x = determinante(a1,b1,a2,b2);
    return 0;
}