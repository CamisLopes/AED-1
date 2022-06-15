#include <stdio.h>
#include <stdlib.h>

#define PI 3.14159265359

int main(){
    float raio, perimetro, area;

    printf("\n\t O programa calcula o perimetro e a area de um circulo!\n");
    
    printf("\n Insira o valor do raio do circulo: ");
    scanf("%f", &raio);

    perimetro = 2 * PI * raio;
    area = PI * raio * raio;

    printf("\n Um circulo de raio %.2f possui o perimetro igual a %.2f e area igual a %.2f \n", raio, perimetro, area);

    return 0;
}