#ifndef RESTAURANTE_H
#define RESTARANTE_H

#include <iostream>
#include "empresa.h"

class Restaurante: public Empresa{
    private:
    int tipoComida;
    float precoMedio;

    public:
    Restaurante();
    Restaurante(string nome, string endereco, string cidade, string estado, string cep, string telefone,
                int tipoComida, float precoMedio);

    void setTipoComida(int tipoComida);
    void setPrecoMedio(float precoMedio);

    int setTipoComida();
    float setPrecoMedio();

    void print();
};

#endif