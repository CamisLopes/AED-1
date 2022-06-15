/*
Ler um número inteiro.
    •Se ele for 1 ou 2, 
        ler as medidas dos lados de um retângulo, 
        calcular e 
        escrever a área do círculo circunscrito a este retângulo.
    •Se for 3 ou 4 ou 5, 
        ler a medida do raio de um círculo. 
        Calcular e escrever a área do quadradoinscrito no mesmo.
    •Se for outro número inteiro que não estes, 
        ler a medida do lado de um quadrado, 
        calcular eescrever a área da coroa circular formada pelo círculo inscrito e circunscrito a este quadrado.
*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void intro(){
    printf("\n\t******************");
    printf("\n\t LISTA 03 DE AEDI");
    printf("\n\t QUESTAO 18");
    printf("\n\t Algoritmo que le o nome de uma pessoa e e verificar se é igual ou não ao seu nome, escrevendo mensagem adequada.");
    printf("\n\t******************");
    printf("\n");
}

int leInteiro(){
    int inteiro;
    printf("\n Insira um inteiro: ");
    scanf("%i", &inteiro);
    return inteiro;
}
float leReal(char palavra[]){
    float real;
    printf("\n Insira %s: ", palavra);
    scanf("%i", &real);
    return real;
}

void casoUm(){
    float altura = leReal("a altura do retangulo"), largura = leReal("a largura do retangulo");
    float diametro, raio, area;

    diametro = sqrt((pow(altura,2) + pow(largura,2)));
    raio = diametro / 2;
    area = M_PI * pow(raio,2);

    printf("\n Altura do retangulo: %.2f \n Largura do retangulo: %.2f", altura, largura);
    printf("\n Diametro do circulo: %.2f \n Raio do circulo: %.2f \n Area do circulo: %.2f", diametro, raio, area);
}

void casoDois(){
    float raio = leReal("o raio do circulo");
    float ladoQ, area;

    ladoQ = (raio * sqrt(2)) / 2;
    area = pow(ladoQ, 2);

    printf("\n Raio do circulo: %.2f", raio);
    printf("\n Lado do quadrado circunscrito: %.2f \n Area do quadrado: %.2f", ladoQ, area);
}

void casoTres(){
    float ladoQ = leReal("o lado do quadrado");
    float areaT, areaI, areaC;

    areaI = M_PI * pow((ladoQ/2),2);
    areaC = M_PI * (sqrt(pow(ladoQ,2) + pow(ladoQ,2)) / 2);

    areaT = areaC - areaI;

    printf("\n Lado do quadrado: %.2f", ladoQ);
    printf("\n Area da coroa circular: %.2f", areaT);
}

int main(){
    intro();
    int escolha = leInteiro();

    if(escolha == 1 || escolha == 2) casoUm();
    else if(escolha >= 3 && escolha <= 5) casoDois();
    else casoTres();
    return 0;
}