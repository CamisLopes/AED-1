/* BIBLIOTECAS USADAS */
#include <iostream>
#include <string>

using namespace std;

/* CLASSE PRINCIPAL */
class Relogio{
    private:
    int hora, 
        minuto, 
        segundo;

    public:
    Relogio(){
        this -> hora = 0;
        this -> minuto = 0;
        this -> segundo = 0;
    }

    Relogio(int hora, int minuto, int segundo){
        this -> hora = hora;
        this -> minuto = minuto;
        this -> segundo = segundo;
    }

    void setHora(int hora){ this -> hora = hora; }
    void setMinuto(int minuto){ this -> minuto = minuto; }
    void setSegundo(int segundo){ this -> segundo = segundo; }

    int getHora(){ return hora; }
    int getMinuto(){ return minuto; }
    int getSegundo(){ return segundo; }

    void avancarHora(){
        if(getSegundo() == 59){
            setSegundo(0);
            if(getMinuto() == 59){
                setMinuto(0);
                if (getHora() == 23){ setHora(0); }
                else{ setHora(getHora() + 1); }
            }
            else{ setMinuto(getMinuto() + 1);}
        }
        else{ setSegundo(getSegundo() + 1); }
    }

    void printHora(){
        cout << "Sao: " << getHora() << " : " << getMinuto() << " : " << getSegundo() << endl;
    }
};

/* FUNÇÃO PRINCIPAL */
int main(){
    int hora, minuto, segundo;

    cout << "Digite a hora, os minutos e segundos" << endl;
    cin >> hora >> minuto >> segundo;

    Relogio r(hora, minuto, segundo);
    
    r.printHora();
    r.avancarHora();
    r.printHora();

    return 0;   
}