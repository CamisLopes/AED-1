/*
* AQUI TEMOS TODA A PARTE DE FUNCIONÁRIOS:
    *LEITURA DO FUNCIONÁRIO
    *IMPRESSÃO DO FUNCIONÁRIO
    *STRUCT DO FUNCIONÁRIO
*/

#ifndef FUNCIONARIO_H
#define FUNCIONARIO_H

/* GAVETA - ESTRUTURA */
typedef struct funcionario{
    char nome[30],
         mes[10],
         cpf[12],
         cargoOcupante[30],
         sexo;

    short int idade,
              dia,
              ano,
              codigo;

    float salario;
} tipoFuncionario;

/* FUNÇÃO QUE LIMPA O QUE TA NA TELA */
void clrscr(){ system("@cls||clear"); }

/* FUNÇÃO QUE LÊ INTEIROS */
int leinteiro(char frase[]){
    int num;
    printf("\n %s", frase);
    scanf("%hd", &num);
    return num;
}
/* FUNÇÃO QUE LÊ REAIS (salário) */
float leReal(){
    float num;
    printf("\n SALARIO DO FUNCIONARIO: ");
    scanf("%f", &num);
    return num;
}

/* FUNÇÃO DA LEITURA DAS INFORMAÇÕES DO FUNCIONÁRIO */
tipoFuncionario infoNovoFuncionario(tipoFuncionario fun){
    clrscr();
    printf("\n************************************************");
    printf("\n********** INFORMACOES DO FUNCIONARIO **********");
    printf("\n************************************************");
    //leitura do nome do funcionário
    printf("\n NOME: ");                     
    scanf("%s", fun.nome);

    //leitura da idade do funcionário
    fun.idade = leinteiro("IDADE: ");

    //leitura do sexo da pessoa
    fflush(stdin);
    printf("\n SEXO [F/M]: ");              
    scanf("%c", &fun.sexo);

    //leitura do cpf
    printf("\n CPF: ");                       
    scanf("%s", fun.cpf);

    //leitura do cargo que o funcionário ocupa
    fflush(stdin);
    printf("\n CARGO QUE OCUPA: "); 
    scanf("%s", fun.cargoOcupante);

    //leitura do salário
    fun.salario = leReal();

    printf("\n---------- DATA DE NASCIMENTO ----------");
    //leitura do dia do nascimento
    fun.dia = leinteiro("DIA: ");

    //leitura do mês do nascimento
    printf("\n MES ex.: outubro: ");                      
    scanf("%s", fun.mes);

    //leitura do ano do nascimento
    fun.ano = leinteiro("ANO: ");

    //leitura do código do setor do funcionário
    fun.codigo = leinteiro("CODIGO DO SETOR DO FUNCIONARIO: ");
    return fun;
}

/**
 * FUNÇÃO QUE IMPRIME
 * @param fun esse fun é o funcionário escolhido que será impresso
 * @param num o número do funcionário
*/
void imprime(tipoFuncionario fun, int count){
    printf("\n***************************************************");
    printf("\n********** INFORMACOES DO FUNCIONARIO %d **********", count);
    printf("\n***************************************************");
    printf("\n NOME: %s", fun.nome);
    printf("\n IDADE: %hd", fun.idade);
    printf("\n SEXO: %c", fun.sexo);
    printf("\n CPF: %s", fun.cpf);
    printf("\n CARGO QUE OCUPA: %s", fun.cargoOcupante);
    printf("\n DATA DE NASCIMENTO: %hd de %s de %hd", fun.dia, fun.mes, fun.ano);
    printf("\n\n CODIGO DO SETOR: %hd\n\n", fun.codigo);
}

#endif