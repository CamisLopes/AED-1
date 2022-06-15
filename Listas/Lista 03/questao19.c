/*
Ler um caractere e a medida do raio de um círculo.
    •Se o caractere lido for T calcular e escrever a área do triângulo inscrito.
    •Se for Q, calcular e escrever a área do quadrado inscrito.
    •Se for H, calcular e escrever a área do hexágono inscrito.
    •Se for outro caractere que não estes, escrever uma mensagem apropriada.
*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void intro(){
    printf("\n\t******************");
    printf("\n\t LISTA 03 DE AEDI");
    printf("\n\t QUESTAO 19");
    printf("\n\t Algoritmo que le dois valores reais, determina e escreve: \n\t o maior deles ou se os dois sao iguais");
    printf("\n\t******************");
    printf("\n");
}

float leReal(char palavra[]){
    float real;
    printf("\n Insira %s: ", palavra);
    scanf("%i", &real);
    return real;
}
char leCaract(){
    char resp;
    printf("\nDigite o caracter: ");
    scanf("%s", &resp);
    return resp;
}

int main(){
    intro();
    char escolha = leCaract(), raio = leReal("o raio do circulo");
    
    switch (escolha)
    {
    case 'T':
        float area;
        area = (3 * pow(raio, 2) * sqrt(3)) / 4;

        printf("\n Area do triangulo inscrito : %.2f", area);
        break;
    
    case 'Q':
        float ladoQ, area;

        ladoQ = (raio * sqrt(2)) / 2;
        area = pow(ladoQ, 2);

        printf("\n Area do quadrado inscrito= %.2f", area);
        break;

    case 'H':
        float areaT, areaH;

        areaT = (3 * pow(raio, 2) * sqrt(3)) / 4;
        areaH = areaT * 6;
        printf("\n Area do hexagono inscrito : %.2f", areaH);
        break;
    default:
        printf("\n A letra digita não foi reconhecida!");
        break;
    }

    return 0;
}