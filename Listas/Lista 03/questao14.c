#include <stdio.h>
#include <stdlib.h>

void intro(){
    printf("\n\t******************");
    printf("\n\t LISTA 03 DE AEDI");
    printf("\n\t QUESTAO 14");
    printf("\n\t Algoritmo que le dois valores reais, calcular e escrever o quociente do primeiro pelo segundo se este for diferente de zero.");
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
    float num1, num2, quociente;

    num1 = leReal();
    num2 = leReal();

    if(num2 != 0){
        quociente = num1 / num2;
        printf("\n %.2f divido por %.2f e igual a %.2f", num1, num2, quociente);
    }
    else printf("\n Impossivel dividir %.2f por zero", num1);

    return 0;
}