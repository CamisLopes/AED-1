/* BIBLIOTECAS USADAS */
#include <stdio.h>
#include <stdlib.h>

/* FUNÇÃO QUE LÊ NÚMEROS INTEIROS*/
int leInteiro(){
    int num;
    printf("\n Insira um numero inteiro: ");
    scanf("%d", &num);
    return num;
}

/* FUNÇÃO PRINCIPAL */
int main(){
    int soma = 0, num, n = leInteiro(); // definir as variáveis que serão utilizadas
    //uso de repetição para a chamada dos números a serem somados
    for(int i = 0; i < n; i++){
        num = leInteiro();
        soma = soma + num;
    }
    
    printf("\n A soma dos inteiros e = %d\n", soma); //escrita da resposta  
    return 0; //fim do algoritmo
}