#include <stdio.h>
#include <stdlib.h>

int main(){
    int quantidade, alugado, atrasado, quantidadeF;
    float valorC, faturamentoA, multas, pago;

    printf("\n Insira a quantidade de DVDs a locadora possui: ");
    scanf("%i", &quantidade);
    printf("\n Insira o valor que é cobrado por cada aluguel: ");
    scanf("%f", &valorC);
    
    /*QUANTIDADE DE DVDS*/
    // 1/3 dos DVS são alugados
    alugado = quantidade / 3.0;
    // 1/10 dos DVDs alugados são entregues atrasados
    atrasado = alugado / 10.0;
    // a quantidade final de DVDS é a soma de 1/10 menos 2% que estragou
    quantidadeF = quantidade - ((float)quantidade * 0.02) + (quantidade / 10.0);

    /*VALORES DE COBRANÇA*/
    //10% sobre o valor do aluguel
    multas = atrasado * (valorC / 10.0);
    //pago por mês sem aqueles que atrasaram
    pago = alugado * valorC;
    //faturamento do ano
    faturamentoA = (multas + pago) * 12;

    printf("\n TABELA DE QUANTIDADE:");
    printf("\n Quantidade inicial: %i", quantidade);
    printf("\n Quantidade alugado: %i", alugado);
    printf("\n Quantidade atrasado: %i", atrasado);
    printf("\n Quantidade final do ano: %i", quantidadeF);

    printf("\n\n TABELA DE VALORES:");
    printf("\n Valor cobrado por aluguel: %.2f", valorC);
    printf("\n Valor cobrado em multas por mes: %.2f", multas);
    printf("\n Valor pago sem multa por mes: %.2f", pago);
    printf("\n Valor faturado no ano: %.2f \n", faturamentoA);

    return 0;
}