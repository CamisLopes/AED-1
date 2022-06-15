#ifndef EMPRESA_H
#define EMPRESA_H

/* BIBLIOTECAS USADAS */
#include <iostream>
#include <string>

using namespace std;

/* CLASSE EMPRESA */
class Empresa{
    //informações privadas
    protected:
    string nome,
           endereco,
           cidade,
           estado,
           cep,
           telefone;

    //informações públicas
    public:
    //construtor primário
    Empresa();

    //contrutor secundário
    Empresa(string nome, string endereco, string cidade, string estado, string cep, string telefone);

    //SETTERS
    void setNome(string nome);
    void setEnde(string endereco);
    void setCida(string cidade);
    void setEsta(string estado);
    void setCEP(string cep);
    void setTele(string telefone);

    //GETTERS
    string getNome();
    string getEnde();
    string getCida();
    string getEsta();
    string getCEP();
    string getTele();

    void print();
};

#endif