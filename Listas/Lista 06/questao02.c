/* BIBLIOTECAS USADAS*/
#include <stdlib.h>
#include <stdio.h>

/* FUNÇÃO QUE LE INTEIROS */
int leinteiro(){
    int n;
    printf("\n Insira um numero inteiro: ");
    scanf("%i", &n);
    return n;
}

/* FUNÇÃO DE FIBONACCI */
int fibonacci(int n){
    int termo;
    if(n == 1) return 0; //o primeiro termo da sequência de fibonacci é 0 (pré definido)
    else if(n == 2) return 1; //o segundo termo da sequência de fibonacci é 1 (pré definido)
    else{
        termo = fibonacci(n - 1) + fibonacci(n - 2); //o termo n da sequência d fibonacci é a soma de seus 2 anteriores
        return termo; //retorna o ultimo termo
    }
}

/* FUNÇÃO PRINCIPAL */
int main(){
    int num = leinteiro(); //função que le inteiros 
    printf("\n O %do termo na sequencia de Fibonacci e: %d", num, fibonacci(num)); //escreve o numero do termo e escreve a resposta chamando a função
    return 0;
}