#include <stdio.h>
#include <stdlib.h>
#include "menu.h"
#include "questao01.h"

int main()
{
    int verificador;
    // Adicionei as opções do menu
    // e as respectivas funções a serem executadas
    // cada item um uma opção (nome) e uma função que é o que vai ser executado
    menuAddItem("Exercicio 1", EXERCICIO1);
    // mostra o menu
    // e executa a opção escolhida pelo usuario
    do
    {
        menu();
        printf("deseja verificar mais um exercicio?\n");
        printf("sim (1)\nnao (2)\t");
        scanf("%i", &verificador);
    } while (verificador == 1);
    return 0;    
}
