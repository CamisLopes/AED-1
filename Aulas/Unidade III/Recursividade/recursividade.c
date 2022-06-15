#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>

int inteiro(){
    int num;
    printf("\n Insira um inteiro: ");
    scanf("%d", num);
    return num;
}

/*int exemplofatorial(int n){
    int resp;
    printf("\n Entrei no fatorial(%d)\n", n);
    if(n == 1) resp = 1;
    else resp = n * fatorial(n - 1);
    return 0;
}

int exemploFibonacci(){

    return 0;
}
*/

int exemploSomatorio(int n){
    int resp = 0;

    if(n == 1) resp = 1;
    else resp = exemploSomatorio(n - 1) + n;

    return resp;
}

int exemploSoma(int s, int n){
    int resp = 0;
    if(n > 0){
        resp = exemploSoma(s, n - 1) + s;
    }
    return resp;
}

int exemploArray(char array[], int t){
    int resp = 0;
    char c;
    if(t >= 0){
        c = tolower(array[t]);
        if(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u')
            resp++;
        resp = resp + exemploArray(array, t - 1);
    }
    return resp;
}
int main(){
    int a, b;
    char array[100];
    /*printf("\n EXEMPLO 01 - FATORIAL");
    printf("\n EXEMPLO 02 - FIBONACCI");*/

    /*printf("\n EXERCÍCIO 01 - SOMATÓRIO");
    printf("\n Somatório de 4: %d", exemploSomatorio(4));*/
    
   /* printf("\n EXERCICIO 02 - SOMA");
    a = inteiro();
    b = inteiro();
    printf("\n Soma sucessiva de %d x %d: %d",a, b exemploSoma(a, b));*/

    printf("\n EXERCICIO 03 - ARRAY");
    printf("\n Insira sua array de caracteres: ");
    scanf("%s", array);
    a = strlen(array);
    printf("\n A array '%s' possui %d vogais", array, exemploArray(array, a));

    return 0;
}