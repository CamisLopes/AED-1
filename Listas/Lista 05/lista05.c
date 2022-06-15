/* BIBLIOTECAS USADAS */
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>


/* DECLARAÇÃO DAS FUNÇÕOES ANTES */
void exercicio01();
void exercicio02();
void exercicio03();
void exercicio04();
void exercicio05();
void exercicio06();
void exercicio07();
void exercicio08();
void exercicio09();
void exercicio10();
void exercicio11();
void exercicio12();
void exercicio13();
void exercicio14();


/*FUNÇÕES DE LEITURA*/
/* Função que lê inteiros */
int leInteiro(char frase[]){
    int n; //define a variável
    printf("\n Insira %s: ", frase); //pergunta o usuário para inserir no teclado um número inteiro
    scanf("%d", &n); //lê o número inteiro
    return n; //retorna
}
/* Função que lê real */
float leReal(char frase[]){
    float x;
    printf("\nInsira %s: ", frase);
    scanf("%f", &x);
    return x;
}
/* Função que lê char */
char leChar(char frase[]){
    char carac;
    printf("\n Insira %s: ", frase);
    scanf(" %c", &carac);
    return carac;
}


/* FUNÇÕES PEDIDAS */
/* Função que calcula o n-ésimo número par */
double parImpar(int n, int parI, int repet){
    for(int i = 0; i < n; i++) parI += repet; //repetição até o numero desejado
    return parI; //retorna a resposta
}
/* FUNÇÃO RESPONSÁVEL PELA DIVISÃO */
double divisao(double dividendo, double divisor){ return (dividendo / divisor); }
/* FUNÇÃO RESPONSÁVEL POR MULTIPLICAR X (elevado por n) */
double multiDiv(int n, int x, double divisor){ return divisao(parImpar(n, 0, 2), divisor) * pow(x, n); }
/* FUNÇÃO QUE JUNTA TODAS AS FUNÇÕES QUE MULTIPLICA E FATORA */
double fatorialProduto(int n, int x){
    double resp = 1;
    if(x != 0) for(int i = n; i > 0; i--) resp = resp * multiDiv(i, x, parImpar(i, 1, 2));
    else for(int i = 1; i <= n; i++) resp = resp * i;
    return resp;
}
/* FUNÇÃO SOMATÓRIO */
double somatorio(int n, int controle, int x){
    double resp = 0;
    if(controle == 5) for(int i = 1; i <= n; i++) resp = resp + divisao(parImpar(i, 0, 2), parImpar(i, 1, 2));
    else if(controle == 4) for(int i = 1; i <= n; i++) resp = resp + divisao(1, parImpar(i, 1, 2));
    else if(controle == 10) for(int i = 1; i <= n; i++) resp = resp + multiDiv(i, x, fatorialProduto(parImpar(i, 1, 2), 0));
    else if(controle == 11){
        for(int i = 1; i <= n; i++){
            int excessao = multiDiv(i, x,  fatorialProduto(parImpar(i, 1, 2), 0));
            if(!(excessao % 2)) resp = resp + excessao;
        }
    }
    return resp;
}
/* FUNÇÃO FIBONACCI */
double fibonacci(int L){
    int atual = 1, termo1 = 0, termo2 = 1;
    for(int i = 0; i < L; i++){
        termo2 = termo1;
        termo1 = atual;
        atual = termo1 + termo2;
    }
    return termo1;
}
/* FUNÇÃO QUE ESCREVE A SEQUÊNCIA DE IMPARES EM ORDEM DESCRESCENTE */
void ordemDecrescente(int n){
    int controle = (n - 1.0) / 2.0; //flag de controle 
    for(int i = controle; i > 0; i--) printf(" %.lf\t", parImpar(i, 0, 2));
}


/* FUNÇÃO PRINCIPAL (vai chamar as funções da lista) */ 
int main(){
    char continuar;
    do{
        printf("\n LISTA 05 - 14 questoes no total\n");
        int i = leInteiro("o numero da questao desejada");
        printf("\n ****************************************\n");
        switch (i){
            case 1:
                printf("\n\t QUESTAO %.2d", i);
                exercicio01();
                break;
            case 2:
                printf("\n\t QUESTAO %.2d", i);
                exercicio02();
                break;
            case 3:
                printf("\n\t QUESTAO %.2d", i);
                exercicio03();
                break;
            case 4:
                printf("\n\t QUESTAO %.2d", i);
                exercicio04();
                break;
            case 5:
                printf("\n\t QUESTAO %.2d", i);
                exercicio05();
                break;
            case 6:
                printf("\n\t QUESTAO %.2d", i);
                exercicio06();
                break;
            case 7:
                printf("\n\t QUESTAO %.2d", i);
                exercicio07();
                break;
            case 8:
                printf("\n\t QUESTAO %.2d", i);
                exercicio08();
                break;
            case 9:
                printf("\n\t QUESTAO %.2d", i);
                exercicio09();
                break;
            case 10:
                printf("\n\t QUESTAO %.2d", i);
                exercicio10();
                break;
            case 11:
                printf("\n\t QUESTAO %.2d", i);
                exercicio11();
                break;
            case 12:
                printf("\n\t QUESTAO %.2d", i);
                exercicio12();
                break;
            case 13:
                printf("\n\t QUESTAO %.2d", i);
                exercicio13();
                break;
            case 14:
                printf("\n\t QUESTAO %.2d", i);
                exercicio14();
                break;
            default:
                printf("\n Felizmente nao existe essa questao :)\n");
                break;
        }
        printf("\n ****************************************\n");
        continuar = leChar("'s' se quiser continuar ou 'n' se quiser encerrar");
    }while(continuar == 's' || continuar == 'S');
    return 0;
}


/* OS PROCEDIMENTOS SERÃO COLOCADOS ABAIXO DO INT MAIN PARA HAVER UMA MELHOR LEITURA DO ALGORITMO */
/* QUESTÃO 01 */
void exercicio01(){
    int n = leInteiro("o numero do termo desejado"); //chama a função que lê inteiros
    printf("\n O %do numero par e: %.lf\n", n, parImpar(n, 0, 2)); //imprime a resposta
}
/* QUESTÃO 02 */
void exercicio02(){
    int n = leInteiro("um valor inteiro maximo");
    ordemDecrescente(n);
}
/* QUESTÃO 03 */
void exercicio03(){
    int n = leInteiro("o numero do termo desejado");
    printf("\n O %do termo na sequencia de fracoes impares e: 1 / %.lf\n", n, parImpar(n, 1, 2));
}
/* QUESTÃO 04 */
void exercicio04(){
    int n = leInteiro("o valor da flag");
    printf("\n O somatorio dos primeiros %d numeros da divisao por impares e: %lf\n", n, somatorio(n, 4, 0));
}
/* QUESTÃO 05 */
void exercicio05(){
    int n = leInteiro("o valor da flag");
    printf("\n O %do termo da sequencia e: %lf", n, divisao(parImpar(n, 0, 2), parImpar(n, 1, 2)));
    printf("\n O valor do somatorio e: %lf\n", somatorio(n, 5, 0)); //o que modifica é o dividendo que se torna o dividendo 
}
/* QUESTÃO 06 */
void exercicio06(){
    int n = leInteiro("um numero inteiro");
    float x = leReal("um numero real");
    printf("\nO %do termo da sequencia e: %lf\n",n , multiDiv(n, x,parImpar(n,1,2)));
}
/* QUESTÃO 07 */
void exercicio07(){
    int n = leInteiro("um numero inteiro");
    float x = leReal("um numero real");
    printf("\nO produto dos %d primeiros termos da sequencia e: %lf\n",n, fatorialProduto(n, x));
}
/* QUESTÃO 08 */
void exercicio08(){
    int n = leInteiro("o numero que sera fatoriado");
    printf("\n O fatorial de %d e: %.lf\n", n, fatorialProduto(n, 0));
}
/* QUESTÃO 09 */
void exercicio09(){
    int n = leInteiro("um numero inteiro");
    float x = leReal("um numero real");
    printf("\n O %do termo da sequencia e: %lf\n", n, multiDiv(n, x, fatorialProduto(parImpar(n, 1, 2), 0)));
}
/* QUESTÃO 10 */
void exercicio10(){
    int n = leInteiro("un numero inteiro");
    float x = leReal("um numero real");
    printf("\n O somatorio dos %d primeiros termos da sequencia e: %lf\n", n, somatorio(n, 10, x));
}
/* QUESTÃO 11 */
void exercicio11(){
    int n = leInteiro("un numero inteiro");
    float x = leReal("um numero real");
    printf("\n O somatorio dos %d primeiros termos da sequencia e: %lf\n", n, somatorio(n, 11, x));
}
/* QUESTÃO 12 */
void exercicio12(){
    int n = leInteiro("un numero inteiro");
    printf("\n Os %d primeiros multiplos de 5 sao: ", n);
    for (int i = 1; i <= n; i++) printf("%.lf  ", parImpar(i, 0, 5));
    printf("\n");
}
/* QUESTÃO 13 */
void exercicio13(){
    int n = leInteiro("um numero inteiro");
    for(int i = 1; i <= n; i++) printf("%.lf  ", fibonacci(i));
    printf("\n");

}
/* QUESTÃO 14 */
void exercicio14(){
    int n = leInteiro("um numero inteiro"), f = 0, i = 0;
    do{
        f = fibonacci(i);
        i++;
    }while(f < n);
    f = fibonacci(i-=2);
    printf("\n O maior numero da sequencia de fibonnaci maior que %d e: %d\n",n, f);
}