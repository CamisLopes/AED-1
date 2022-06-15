/**
 * @author your name (you@domain.com)
 * @date 2022-06-15 
 */
#include <stdio.h>
#include <stdlib.h>

void desafio_1() {
    int num = 1, i;
    printf("Insira um numero: ");
    scanf("%i", &i);
    printf("a.) 1, ");
    for(i = 1; i < 9; i++){
        if(i % 2) num += 4;
        else num += 7;
        printf("%i, ", num);
    }
    printf("%i\n", num+4);

    int numA = 1, numB = 0;
    printf("b.) ");
    for(int i = 0; i < 9; i++){
        printf("%i, ", numA);
        num = numA + numB;
        numB = numA;
        numA = num;
    }
    printf("%i\n", numA+numB);


    num = 2;
    printf("c.) 1, 1, ");
    
    for(int i = 2; i < 9; i++){
        if(i % 2){
            printf("%.3f, ", (1.0/num));
            num *= 2;
        } else {
            printf("%i, ", num);
        }
    }

    printf("%.4f\n", (1.0/num));
}

void desafio_2() {
       int num = 1, i;
    printf("\n----------------------------------------------------\nInsira um numero: ");
    scanf("%i", &i);
    printf("a.) ");
    for(i = 1; i < 9; i++){
        if(i % 2) num += 4;
        else num += 7;
    }
    printf("%i\n", num+4);

    int numA = 1, numB = 0;
    printf("b.) ");
    for(int i = 0; i < 9; i++){
        num = numA + numB;
        numB = numA;
        numA = num;
    }
    printf("%i\n", numA+numB);


    num = 2;
    printf("c.) ");
    
    for(int i = 2; i < 9; i++){
        if(i % 2) num *= 2;
    }

    printf("%.4f\n", (1.0/num));
}

void desafio_3() {
}

int main () {
    desafio_1();
    desafio_2();
    desafio_3();
    return 0;
}