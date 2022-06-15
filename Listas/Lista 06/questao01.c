/* BIBLIOTECAS USADAS */
#include <stdlib.h>
#include <stdio.h>

/* FUNÇÃO QUE LE INTEIRO */
int leinteiro(){
    int n; 
    printf("\n Insira um numero inteiro: ");
    scanf("%i", &n);
    return n; //retorna um inteiro
}

/* FUNÇÃO RECURSIVA QUE CALCULA FATORIAL */
int fatorial(int n){
    int fat; //variável de controle
    if(n <= 1) return 1; //quando for 1 ou menor que 1 ele vai retornar o valor de 1
    else{
        fat = n * fatorial(n - 1); // o fatorial é o nº entregue * ele mesmo menos - 1 até chegar em 1;
        return fat; //retorna o fatorial
    }
}

/* FUNÇÃO PRINCIPAL */
int main(){
    int num = leinteiro(); //declara e define um nº inteiro 
    printf("\n %d! = %d", num, fatorial(num)); //escreve o seu fatorial chamando a função recursiva
    return 0;
}