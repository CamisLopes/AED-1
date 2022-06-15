/*
Ler uma conta corrente (sempre com 3 digitos)
Mostrar o seu dígito verificador que é calculado da seguinte maneira:
1º soma-se o num da conta com seu inverso (CDU + UDC)
2º mutiplica-se cada digito da soma por sua posicação
    - posição das centenas é 1
    - posição das dezenas é 2
    - posição das unidades é 3
3º soma-se cada uma das multiplicações
4º o digito verificador é o último digito da soma anterior
*/

#include <stdio.h>
#include <stdlib.h>

int main(){
    int contaC, c, d, u, m, 
        somaNumC, soma, digitoV;

    contaC = 999;

    c = contaC / 100;
    d = (contaC / 10) - (c * 10);
    u = contaC - (c * 100) - (d *10);

    somaNumC = (u * 100) + (d * 10) + c;
    soma = contaC + somaNumC;

    if(soma >= 1000){
        m = soma / 1000;
        c = (soma / 100) - (m * 10);
        d = (soma / 10) - (m * 100) - (c * 10);
        u = soma - (m * 1000) -(c * 100) - (d *10);
    }
    else{
        m = 0;
        c = (soma / 100);
        d = (soma / 10) - (m * 100);
        u = soma -(c * 100) - (d *10);
    }

    if(m > 0){
        m = m * 1;
        c = c * 2;
        d = d * 3;
        u = u * 4;
    }
    else{
        c = c * 1;
        d = d * 2;
        u = u * 3;
    }

    soma = m + c + d + u;

    if(soma >= 10){
        d = (soma / 10);
        digitoV = soma - (d *10);
    }
    else digitoV = soma;

    printf("\n Conta corrente: %i", contaC);
    printf("\n Digito verificador: %i", digitoV);
    return 0;
}
