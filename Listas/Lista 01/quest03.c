#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    int base, altura, perimetro, area, diagonal;

    printf("\n\t Esse programa calcula o perimetro, a area e a diagonal de um retangulo!\n");

    printf("\n Insira o valor da base do retangulo: ");
    scanf("%d", &base);
    printf("\n Agora insira o valor da altura do retangulo: ");
    scanf("%d", &altura);

    perimetro = (base * 2) + (altura * 2);
    area = base * altura;
    diagonal = sqrt((base * base) + (altura * altura));

    printf("\n O retangulo com base igual a %.2d e altura igual a %.2d possui:", base, altura);
    printf("\n\t Perimetro = %.2d", perimetro);
    printf("\n\t Area = %.2d", area);
    printf("\n\t Diagonal = %.2d", diagonal);
    
    return 0;
}