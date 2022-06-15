/* BIBLIOTECAS USADAS */
#include <stdio.h>
#include <stdlib.h>

/* FUNÇÃO QUE LÊ NÚMEROS INTEIROS*/
int leInteiro(char palavra[]){
    int num;
    printf("\n Insira %s: ", palavra);
    scanf("%d", &num);
    return num;
}

/* FUNÇÃO QUE LÊ NÚMEROS INTEIROS*/
float leReal(char palavra[]){
    float num;
    printf("\n Insira %s: ", palavra);
    scanf("%f", &num);
    return num;
}

/* FUNÇÃO PRINCIPAL */
int main(){
    int I = leInteiro("o valor inteiro de I");
    float R = leReal("o valor real de R");

    if(I < 10){
        printf("\n O valor de I e igual a: %d", I);
        I -= 2;
        printf("\n O valor de I menos duas unidades e igual a: %d \n", I);
        I += 2;
    }
    if(R < 10){
        printf("\n O valor de R e igual a: %.2f", R);
        printf("\n O valor de I e igual a: %d", I);
        R --;
        printf("\n O valor de R menos uma unidade e igual a: %.2f \n", R);
    }
    return 0;
}