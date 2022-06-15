/* BIBLIOTECAS USADAS */
#include <iostream>
#include <string>

using namespace std;

/* CLASSE PRINCIPAL */
class carro{
    private:
    int tanque;
    int km;

    public:
    carro(){
      this -> tanque = 0;
      this -> km = 0;}
    carro(int tanque, int km){
      this -> tanque = tanque;
      this -> km = km;}

    //set
    void setTanque(int tanque){ this -> tanque = tanque; }
    void setKm(int km){ this -> km = km; }

    //get
    int getTanque(){ return this -> tanque; }
    int getKm(){ return this -> km; }

    //contas
    int moverCarro(){ return 15 * tanque; }
    int distancia(){ return moverCarro() - km; }

    //impressão
    void imprimeDistancia(){
        cout << "Km andados: " << getKm() << endl;
        cout << "Combustivel restante: " << distancia() << endl;
    }
};

/* FUNÇÃO PRINCIPAL */
int main(){
    carro carroA;
    carro carroB;

    //carro 1
    cout << "Carro 1" << endl;
    carroA.setTanque(20);
    carroA.setKm(200);
    carroA.imprimeDistancia();

    //carro 2
    cout << "Carro 2" << endl;
    carroA.setTanque(30);
    carroA.setKm(400);
    carroA.imprimeDistancia();
    
    return 0;
}