#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    float lado, perimetro, area, diagonal;

    printf("\n\t Esse programa calcula o perimetro, a area e a diagonal de um quadrado!\n");

    printf("\n Insira o valor do lado do quadrado: ");
    scanf("%f", &lado);

    perimetro = lado * 4;
    area = lado * lado;
    diagonal = sqrt(area + area);

    printf("\n Um quadro que possui lado igual a %.2f possui:", lado);
    printf("\n\t Perimetro = %.2f", perimetro);
    printf("\n\t Area = %.2f", area);
    printf("\n\t Diagonal = %.2f", diagonal);
    
    return 0;
}