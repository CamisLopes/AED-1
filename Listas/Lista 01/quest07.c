#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    float catetoA, catetoO, hipotenusa;

    printf("\n Insira o cateto adjacente: ");
    scanf("%f", &catetoA);
    printf("\n Insira o cateto oposto: ");
    scanf("%f", &catetoO);

    hipotenusa = sqrt((catetoA * catetoA) + (catetoO * catetoO));
    
    printf("\n\t A hipotenusa do triangulo retangulo e = %.2f \n", hipotenusa);
    return 0;
}