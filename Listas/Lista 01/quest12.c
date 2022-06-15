//ler um valor de hora e minuto, calcular e mostrar quantos minutos passaram desde o inicio do dia
#include <stdio.h>
#include <stdlib.h>

int main(){
    int hora, minuto, tempoM;

    printf("\n Insira as horas: ");
    scanf("%d", &hora);

    printf("\n Insira os minutos: ");
    scanf("%d", &minuto);

    tempoM = (hora * 60) + minuto;

    printf("\n Ja se passaram %d minutos desde o inicio do dia", tempoM);
    return 0;
}