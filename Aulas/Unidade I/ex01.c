/**
 * @author your name (you@domain.com)
 * @date 2022-06-15 
 */
#include <stdio.h>
#include <stdlib.h>

void letraA() {
    int num = 1;
    printf("a.) 1, ");
    for(int i = 1; i < 9; i++){
        if(i % 2) num += 4;
        else num += 7;

        printf("%i, ", num);
    }

    printf("%i\n", num+4);
}

void letraB() {
    int tmp, numA = 1, numB = 0;
    printf("b.) ");
    
    for(int i = 0; i < 9; i++){
        printf("%i, ", numA);
        tmp = numA + numB;
        numB = numA;
        numA = tmp;
    }

    printf("%i\n", numA+numB);
}

void letraC() {
    int pot = 1;
    float num = 2;
    printf("c.) 1, 1, ");
    
    for(int i = 2; i < 9; i++){
        if(i % 2){
            printf("%.3f, ", (1/(num)));
            num *= 2;
        } else {
            printf("%.f, ", num);
        }
    }

    printf("%.4f\n", (1/(num)));

    
}

int main () {
    letraA();
    letraB();
    letraC();
    return 0;
}