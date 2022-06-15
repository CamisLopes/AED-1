/* BIBLIOTECAS USADAS */
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

/* FUNÇÃO QUE LÊ NÚMEROS INTEIROS*/
int leInteiro(char palavra[]){
    int num;
    printf("\n Insira %s: ", palavra);
    scanf("%d", &num);
    return num;
}

/* FUNÇÃO PRINCIPAL */
int main(){
    int K = leInteiro("uma constante"), tamanho; //definição das variáveis (e definir a constante com a chama de uma função)
    char mensagem[100];
    //recebe a mensagem
    printf("\n Insira sua mensagem: ");
    fflush(stdin);
    gets(mensagem);
    //imprime a mensagem antes de ser criptografa
    printf("\n Sua mensagem: %s", mensagem);
    tamanho = strlen(mensagem);
    //troca das letras
    for(int i = 0; i < tamanho; i++){
        if((mensagem[i] + K) >= 127) mensagem[i] = '!';
        else  mensagem[i] = (char)((int) mensagem[i] + K);
    }
    //envio da mensagem criptografada
    printf("\n Sua mensagem criptografada: %s", mensagem);
    return 0;
}