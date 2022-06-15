/* BIBLIOTECAS UTILIZADAS */
#include <stdio.h>
#include <stdlib.h>

/* FUNÇÃO DE INTRODUÇÃO */
void intro(){
    printf("**********************************");
    printf("\nEsse programa calcula a media de cada aluno, a media da turma e o %% dos alunos que tiveram a media maior ou igual a 80%%");
    printf("\n**********************************\n");
}

/* FUNÇÃO QUE LÊ NÚMEROS INTEIROS*/
int leInteiro(char palavra[]){
    int num;
    printf("\n Insira %s: ", palavra);
    scanf("%d", &num);
    return num;
}

/* FUNÇÃO QUE LÊ NÚMEROS INTEIROS*/
float leReal(char palavra[]){
    float num;
    printf("\n Insira %s: ", palavra);
    scanf("%f", &num);
    return num;
}

/* FUNÇÃO QUE ESCREVE NA TELA*/
void escreve(char palavra[], double num){ printf(" %s: %.2lf \n", palavra, num);}

/* MÉDIA DO ALUNO */
float mediaAluno(int numProvas){
    float notaMedia = 0;
    //repetição que irá somar todas as notas, em seguida do mesmo irá dividir pelo num de provas e retornar a média da nota do aluno;
    for(int i = 0; i < numProvas; i++) notaMedia +=  leReal("o valor da prova");
    notaMedia = notaMedia / (float)numProvas;
    escreve("A media do aluno e", notaMedia);
    return notaMedia;
}

/* FUNÇÃO PRINCIPAL */
int main(){
    intro();
    //definição das variáveis
    int numAlunos = leInteiro("o numero de alunos"), numProvas = leInteiro("o numero de provas");
    float medias, somaMedia = 0, prcAlunos = 0;

    // para recolher a soma de todas as médias e somar a quantidade de pessoas com a média maior ou igual a 80
    for(int j = 0; j < numAlunos; j++){
        //chamda da função responsável por recolher as notas de aluno por aluno e responder com a média dessas provas
        medias = mediaAluno(numProvas);
        if(medias >= 80) prcAlunos++;
        somaMedia += medias;
    }
    //divisão de 2 respostas
    printf("\n************************");
    //calculo das médias e da porcentagem de alunos acima/igual a 80
    somaMedia = somaMedia / numAlunos;
    prcAlunos = (prcAlunos / (float) numAlunos) * 100;
    //escrita das respostas
    printf("\nA media da turma e: %.2f", somaMedia);
    printf("\nA porcentagem de alunos acima ou igual a 80%% e: %.2f%%", prcAlunos);

    return 0;
}