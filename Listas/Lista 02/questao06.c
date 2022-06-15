/*
Leia o valor de um ângulo x em graus e imprima no arquivo de saída os valores de y.
Imprima o valor por linha:
    a. y1 = cosseno(x)
    b. y2 = arcoTangente(x)
    c. y3 = seno(x) + seno(x^2) + seno(x^3) + seno(x^4)
    d. y4 = seno(x) + seno(x)^2 + seno(x)^3 + seno(x)^4
*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    float x, a, b, c, d;
    printf("\n Insira um angulo: ");
    scanf("%f", x);
    
    a = cos(x);
    b = atan(x);
    c = sin(x) + sin(pow(x, 2)) + sin(pow(x, 3)) + sin(pow(x, 4));
    d = sin(x) + pow(sin(x), 2) + pow(sin(x), 3) + pow(sin(x), 4);

    printf("\n a. Y1 = %f", a);
    printf("\n b. Y2 = %f", b);
    printf("\n c. Y3 = %f", c);
    printf("\n d. Y4 = %f", d);

    return 0;
}