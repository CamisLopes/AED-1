/*
Ler os coeficientes de uma equação do 2º grau
determinar e escrever suas raízes rais ou imaginárias
*/
#include <stdio.h>
#include <math.h>

void intro(){
    printf("\n\t******************");
    printf("\n\t LISTA 03 DE AEDI");
    printf("\n\t QUESTAO 06");
    printf("\n\t Algoritmo que le dois valores reais, determina e escreve: \n\t o maior deles ou se os dois sao iguais");
    printf("\n\t******************");
    printf("\n");
}

float leReal(char palavra[]){
    int a;
    printf( " \n Digite o valor %s: ", palavra);
    scanf("%f" , &a);
    return a;
}

int main(void) {
    intro();
    float a, b, c, resultado, delta;
    a = leReal("de a");
    b = leReal("de b");
    c = leReal("de c");
   
    delta = pow(b, 2 ) - 4 * a * c;

    resultado = (-b + sqrt(delta)) / 2 *a;
    printf( " \n Valor de x1 = %.2f" , resultado);

    resultado = (-b - sqrt(delta)) / 2 *a;
    printf( " \n Valor de x2 = %.2f" , resultado);
    return 0 ;
}