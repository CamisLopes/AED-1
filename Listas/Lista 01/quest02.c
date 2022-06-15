#include <stdio.h>
#include <stdlib.h>

int main(){
    //declarando as variáveis
    float salarioM, kW, energiaU, valor;
     
    //leitura das variáveis do salário mínimo e da quantidade de energia em kW gasta na residência do usuário
    printf("\n Insira o valor de um salario minimo: ");
    scanf("%f", &salarioM);
    printf("\n Insira a quantidade de kilowatt gasta: ");
    scanf("%f", &energiaU);

    //valor de 1 kW (100kW = 1/7 de um salário mínimo)
    kW = salarioM / 700;
    //valor a ser pago pelo uso de energia da residência do usuário
    valor = kW * energiaU;

    // resposta para as duas rimeiras perguntas
    printf("\n Cada kilowatt vale: %.2f reais", kW);
    printf("\n O valor da conta de luz a ser pago vale: %.2f reais", valor);

    //valor + desconto e sua resposta
    valor = valor * 0.9;
    printf("\n Com desconto de dez porcento o valor a ser pago vale: %.2f", valor);
    return 0;
}