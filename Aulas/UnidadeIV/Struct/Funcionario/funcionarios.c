/*
* AQUI TEMOS SOMENTE A INTERAÇÃO ENTRE O PROGRAMA E O USUÁRIO
*/

/* BIBLIOTECAS USADAS */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* BIBLIOTECAS QUE EU FIZ */
#include "funcionario.h"
#include "menu.h"
#include "pesquisa.h"

#define TAM 2

/* FUNÇÃO QUE LIMPA O QUE TA NA TELA */
void clrscr(){ system("@cls||clear"); }

/* FUNÇÃO PRINCIPAL */
int main(){
    int escolha, escolhaP = 0, count = 0, numF;
    tipoFuncionario novoF[TAM];
    
    do{
        menu();
        escolha = leinteiro("\n Insira sua opcao: ");

        switch (escolha){
        case 1:
            if(count < TAM ){
                infoNovoFuncionario(novoF[count]);
                count++;
            }
            break;
        
        case 2:
            printf("\n Insira o número do funcionário que deseja imprimir: ");
            scanf("%d", &numF);
            imprime(novoF[numF - 1], numF);
            break;
        
        case 3:
            for(int i = 0; i < count; i++) imprime(novoF[i], i + 1);
            break;
        
        case 4:
            menuPesquisa();
            
            do{
                escolhaP = leinteiro("\n Insira sua opção: ");
                if(escolhaP < 1 || escolhaP > 7) printf("\n E R R O R ! \n");
            }while(escolhaP < 1 || escolhaP > 7);
            
            pesquisa(escolhaP);
            break;
        
        default:
            printf("\n E R R O ! ESCOLHA APENAS NUMEROS DE 1 A 4!\n");
            break;
        }
    }while(escolha != 5);

    printf("\n Obrigada por usar o programa!");
    return 0;
}