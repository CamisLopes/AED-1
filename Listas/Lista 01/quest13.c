//ler o valor do salário mínimo e o valor do salário de uma pessoa, 
//calcular e mostrar quantos salários mínimos essa pessoa ganha
#include <stdio.h>
#include <stdlib.h>

int main(){
    float salarioM, salarioV, valor;

    printf("\n Insira o valor de um salario minimi: ");
    scanf("%f", &salarioM);

    printf("\n Insira o valor de seu salario: ");
    scanf("%f", &salarioV);

    valor = salarioV / salarioM;

    printf("\n Voce recebe %.2f salarios minimos.", valor);
    return 0;
}