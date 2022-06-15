/* BIBLIOTECAS USADAS */
#include <iostream>
#include <string>
#include <cmath>

#define PI 3.14

using namespace std;

class Circulo{
    private:
    int raio;
    int x;
    int y;
    float aumento;

    int area(){ return PI * pow(raio,2); }
    int diametro(){ return raio + raio; }
    int circunferencia(){ return 2 * PI * raio; }

    public:
    Circulo(){
        this -> raio = 0;
        this -> x = 0;
        this -> y = 0;
        this -> aumento = 0.0;
    }
    
    Circulo(int raio, int x, int y, float aumento){
        this -> raio = raio;
        this -> x = x;
        this -> y = y;
        this -> aumento = aumento;
    }

    //set
    void setRaio(int raio){  this -> raio = raio; }
    void setAumento(float aumento){ this -> aumento = aumento; }
    void setX(int x){ this -> x = x; }
    void setY(int y){ this -> y = y; }

    //getS
    int getRaio(){ return this -> raio; }
    float getAumento(){ return this -> aumento; }
    int getX(){ return this -> x; }
    int getY(){ return this -> y; }


    int aumentarRaio(){ return raio += raio * (aumento / 100); }

    //imprimir
    void imprimirRaio(){ cout << "raio = " << aumentarRaio() << endl; }
    void imprimirCentro(){ cout << "Centro = (" << getX() << ", " << getY() << " )" << endl; }
    void imprimirArea(){ cout << "Area = " << area() << "cm" << endl; }
};

int main(){
    int raio, x, y;
    float aumento;

    cout << "Digite o valor do raio: " << endl;
    cin >> raio;

    cout << "Digite a porcentagem de aumento: " << endl;
    cin >> aumento;

    cout << "Digite o valor do centro do circulo (x, y): " << endl;
    cin >> x >> y;

    Circulo circulo(raio, x, y, aumento);

    circulo.imprimirArea(); 
    circulo.imprimirCentro();
    circulo.imprimirRaio();

    return 0;
}