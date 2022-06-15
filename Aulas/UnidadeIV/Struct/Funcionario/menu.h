#ifndef MENU_H
#define MENU_H

/* BIBLIOTECAS USADAS */
#include <stdio.h>
#include <stdlib.h>

/* FUNÇÃO QUE LIMPA O QUE TA NA TELA */
void clrscr(){ system("@cls||clear"); }

/* FUNÇÃO DO MENU INICIAL */
void menu(){
    clrscr();
    printf("\n************************************");
    printf("\n********** MENU DE OPÇÕES **********");
    printf("\n************************************");
    printf("\n 1.) Inserir um funcionario;");
    printf("\n 2.) Imprimir um funcionario;");
    printf("\n 3.) Imprimir todos os funcionarios;");
    printf("\n 4.) Para pesquisar sobre um funcionario;");
    printf("\n 5.) Sair do programa");
}

void menuPesquisa(){
    clrscr();
    printf("\n************************************");
    printf("\n********** MENU DE PESQUISA **********");
    printf("\n************************************");
    printf("\n 1.) Nome;");
    printf("\n 2.) Idade;");
    printf("\n 3.) Sexo;");
    printf("\n 4.) Cpf;");
    printf("\n 5.) Cargo que ocupa;");
    printf("\n 6.) Data de Nascimento;");
    printf("\n 7.) Codigo do Setor");
}

#endif