/* BIBLIOTECAS USADAS */
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

typedef struct resposta{
    char resposta[20], 
         nome[20];
    float nota;
} tipoResposta;

/* FUNÇÃO DE LEITURA DAS INFORMAÇÕES DO ALUNO */
tipoResposta novoAluno(){
    tipoResposta resp;
    printf("\n********** INFORMACOES DO ALUNO **********");
    //leitura do nome do aluno
    printf("\n NOME: ");                     
    scanf("%s", &resp.nome);

    //leitura da resposta do aluno
    printf("\n Insira o seu gabarito\n");
    for(int i = 0; i < 20; i++){
        printf("Questão %d:", i);
        do{
            scanf("%c", resp.resposta[i]);
            if(toupper(resp.resposta[i]) < 65 || toupper(resp.resposta[i]) > 69){
                printf("\n ERRO NÃO EXISTE ESSA OPÇÃO, INSIRA SOMENTE UMA LETRA [A/B/C/D/E]!\n");
            }
        }while(toupper(resp.resposta[i]) < 65 || toupper(resp.resposta[i]) > 69);
    }

    return resp;
}

/* FUNÇÃO QUE IMPRIME  NA TELA */
void imprimeAluno(tipoResposta aluno){
    printf("\n NOME: %s", aluno.nome);
    printf("\n NOTA: %f", aluno.nota);
}

/* FUNÇÃO PRINCIPAL */
int main(){
    int escolha, qntAlunos, qntGabaritos;
    char respostaG[qntGabaritos][20];
    tipoResposta gaba[qntAlunos];

    switch(escolha){
        case 1: //inserir aluno
            break;
        case 2: //ler o gabarito
            break;
        case 3: //mostrar todos os alunos e suas notas
            break;
        default:
            break;
    }
    return 0;
}