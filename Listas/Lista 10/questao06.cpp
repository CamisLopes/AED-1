/* BIBLIOTECAS USADAS */
#include <iostream>
#include <string>

using namespace std;

/* CLASSE */
class Condicionador{
    private:
    int potencia;
    float tempExterna;

    public:
    Condicionador(){
        this -> potencia = 0;
        this -> tempExterna = 0.00;
    }
    Condicionador(int potencia, float tempExterna){
            this -> potencia = potencia;
            this -> tempExterna = tempExterna;
    }

    //set
    void setPotencia(int potencia){ this -> potencia = potencia; }
    void setTempExterna(int tempExterna){ this -> tempExterna = tempExterna; } 

    //get
    int getPotencia(){ return this -> potencia; }
    int getTempExterna(){ return this -> tempExterna; }
    
    //variação da temperatira e a temperatura ambiente
    float variacaoTemp(){ return 1.8 * potencia; }
    float tempAmbiente(){  return tempExterna - variacaoTemp(); }

    //impressão da temperatura do condicionador
    void imprimeTemp(){ cout << "Temperatura externa:  " << tempAmbiente() << endl;}
    
};

/* FUNÇÃO PRINCIPAL */
int main(){
    Condicionador condicionadorA;
    Condicionador condicionadorB;

    cout << "Ar condicionador 1" << endl;
    condicionadorA.setPotencia(10);
    condicionadorA.setTempExterna(31);
    condicionadorA.imprimeTemp();

    cout << "Ar condicionador 2" << endl;
    condicionadorB.setPotencia(5);
    condicionadorB.setTempExterna(25);
    condicionadorB.imprimeTemp();

    return 0;
}