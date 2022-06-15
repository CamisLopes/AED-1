/* BIBLIOTECAS USADAS */
#include <iostream>
#include <string>

using namespace std;

/* CLASSE PONTO */
class Ponto{
    private:
    float x;
    float y;

    public:
    Ponto(){
        x = 0;
        y = 0;
    }

    Ponto(float x, float y){
        this->x = x;
        this->y = y;
    }   

};


/* FUNÇÃO PRINCIPAL */
int main(){
    Ponto P (10, 20);

    Ponto *p1 = new Ponto(10, 35);
    
    cout << &P << endl;
    cout << p1 << endl;

    return 0;
}