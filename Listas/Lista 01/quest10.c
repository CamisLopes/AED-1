#include <stdio.h>
#include <stdlib.h>

int main(){
    float A, B, troca;
    printf("\n Insira um número real: ");
    scanf("%f", &A);
    printf("\n Insira outro número real: ");
    scanf("%f", &B);

    troca = A;
    A = B;
    B = troca;
    
    return 0;
}