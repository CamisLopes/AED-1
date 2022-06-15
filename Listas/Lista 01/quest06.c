#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    float a, b, c, y;

    printf("\n Insira numero real: ");
    scanf("%f", &a);
    printf("\n Insira outro numero real: ");
    scanf("%f", &b);
    printf("\n Insira outro numero real: ");
    scanf("%f", &c);

    y = a + b / (c + a) + 2 * (a - b) + 6;

    printf("\n\t y = a + (b / (c + a)) + (2 * (a - b)) + 6");
    printf("\n\t y - %.2f \n", y);

    return 0;
}