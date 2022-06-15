/* BIBLIOTECAS USADAS */
#include "empresa.h"

Empresa::Empresa(){
    nome = "";
    endereco = "";
    cidade = "";
    estado = "";
    cep = "";
    telefone = "";
}

Empresa::Empresa(string nome, string endereco, string cidade, string estado, string cep, string telefone){
        this->nome = nome;
        this->endereco = endereco;
        this->cidade = cidade;
        this->estado = estado;
        this->cep = cep;
        this->telefone = telefone; 
    }

//SETTERS
void Empresa::setNome(string nome){ this->nome = nome; }
void Empresa::setEnde(string endereco){ this->endereco = endereco; }
void Empresa::setCida(string cidade){ this->cidade = cidade; }
void Empresa::setEsta(string estado){ this->estado = estado; }
void Empresa::setCEP(string cep){ this->cep = cep; }
void Empresa::setTele(string telefone){ this->telefone = telefone; }

//GETTERS
string Empresa::getNome(){ return nome; }
string Empresa::getEnde(){ return endereco; }
string Empresa::getCida(){ return cidade; }
string Empresa::getEsta(){ return estado; }
string Empresa::getCEP(){ return cep; }
string Empresa::getTele(){ return telefone; }


void Empresa::print(){
    cout << "Nome: " << nome << endl;
    cout << "Endereco: " << endereco << endl;
    cout << "Cidade: " << cidade << endl;
    cout << "Estado: " << estado << endl;
    cout << "CEP: " << cep << endl;
    cout << "Telefone: " << telefone << endl;
}