/*
Faça um programa que imprima no arquivo de saída os valores de y. Imprima um valor por linha
    a. y1 = e^(1.23*e), onde e = 1.718281828
    b. y2 = mc^2 - raiz de mc + log(mc), onde m = 4.56 e c = 1.1 * 10 ^23
    c. y3 = (k + raiz de k^1.25) / (k^1.25 + k^1.25), onde k - 2.2 * 10^1.25 
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    long double y2, c;
    c = 1.1 * powl(10, 23);
    float y1, y3;

    float e, m, k;
    e = 1.718281828;
    m  = 4.56;
    k = 1.1 * pow(10, 1.15);

    y1 = pow(e, -1.23 * e);
    y2 = (m * powl(c, 2)) - sqrtl(m * c) + log10l(m * c);
    y3 = (k + sqrt(pow(k, 1.25))) / (pow(k, 1.25) + pow(k, 1.25));

    printf("\n Y1 = %f", y1);
    printf("\n Y2 = %Lf", y2);
    printf("\n Y3 = %f", y3);
    
    return 0;
}