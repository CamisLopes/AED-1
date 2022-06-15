/* BIBLIOTECAS USADAS */
#include <iostream>
#include <string>

#include "questao01.h"

using namespace std;

/* FUNÇÃO PRINCIPAL */
void EXERCICIO1(){
    string nome;
    int idade;
    float altura, peso;
    

    cout << "Entre com o nome: " << endl;
    getline(cin, nome);

    cout << "Entre com a idade:" << endl;
    cin >> idade;

    cout << "Entre com a altura: " << endl;
    cin >> altura;

    cout << "Entre com o peso: " << endl;
    cin >> peso;

    Pessoa p(nome, altura, idade, peso);
    p.imprimir();
}