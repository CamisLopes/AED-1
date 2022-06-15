#include <stdio.h>
#include <stdlib.h>

void intro(){
    printf("\n\t******************");
    printf("\n\t LISTA 03 DE AEDI");
    printf("\n\t QUESTAO 08");
    printf("\n\t Algoritmo que le as medidas dos lados de u mtriangulo e verefica que tipo de triangulo e");
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
    
    float a, b, c;
    a = leReal();
    b = leReal();
    c = leReal();
    
    if(a == b && b == c) printf("\n O triangulo com lados igual a: %.2f, %.2f, %.2f e: EQUILATERO ", a, b, c);
    else if(a == b || a == c || b ==c) printf("\n O triangulo com lados igual a: %.2f, %.2f, %.2f e: ISOSCELES ", a, b, c);
    else printf("\n O triangulo com lados igual a: %.2f, %.2f, %.2f e: ESCALENO ", a, b, c);
    
    return 0;
}