#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void intro(){
    printf("\n\t******************");
    printf("\n\t LISTA 03 DE AEDI");
    printf("\n\t QUESTAO 09");
    printf("\n\t Algoritmo que le as medidas dos lados de um triangulo e verifica que ");
    printf("\n\t******************");
    printf("\n");
}

int leLado(){
    float num;
    printf("\n Insira um numero inteiro: ");
    scanf("%f", &num);
    return num;
}

int main(){
    intro();
    
    float a, b, c;
    a = leLado();
    b = leLado();
    c = leLado();
    
    float x, y;
    
    if(a > b && a > c){
        x = pow(a, 2);
        y = pow(b,2) + pow(c,2);  
    }
    else if(b > a && b > c){
        x = pow(b, 2);
        y = pow(a,2) + pow(c,2); 
    }
    else if(c > a && c > b){
        x = pow(c, 2);
        y = pow(b,2) + pow(a,2); 
    }

    if(x == y) printf("\n O TRIANGULO E RETANGULO!");
    else if(x > y) printf("\n O TRIANGULO E OBTUSANGULO!");
    else printf("\n O TRIANGULO E ACUTANGULO!");
       
    return 0;
}
