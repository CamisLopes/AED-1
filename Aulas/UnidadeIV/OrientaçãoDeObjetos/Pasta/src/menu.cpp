#include "menu.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// limpa o buffer
// use somente quando o buffer estiver cheio
#define cleanBuffer while(getchar() != '\n')

// limpa a tela
#define cleanScreen system("clear")

char *options[100];
int cont = 0;
void (*functions[100])(void);

void menuAddItem(char *op, void (*func)())
{
    options[cont] = op;
    (functions[cont]) = func;
    cont++;
}

void menu() {
    // opção digiada pelo usuario
    int op;

    // limpa a tela
    // cleanScreen;

    do
    {
        // percorrer e imprimir todas as opções do menu
        for (int i = 0; i < cont; i++)
            printf("%d - %s\n", i+1, options[i]);
        
        // pede que o usuario digite uma opção
        printf("Digite a opção: ");
        scanf("%d", &op);

        cleanBuffer;

        // checa se a opção é valida se não 
        // exibe uma mensagem
        if(op <= 0 || op > cont)
        {
            cleanScreen;
            printf("Digite uma opção valida!!\n\n");
        }

    // não sai ate que seja digitada uma opção valida
    } while (op <= 0 || op > cont);
    
    // executa a função correspondente
    // a opção escolhida pelo usuario
    (functions[op-1])();
}
