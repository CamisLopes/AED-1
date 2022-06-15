/* BIBLIOTECAS USADAS */
#include <iostream>
#include <string>

using namespace std;

/* CLASSE PRINCIPAL */
class televisao{
    private:
    int som;
    int canal;
 
    public:
    televisao(){
        this -> som = 0;
        this -> canal = 0;
    }

    televisao(int som, int canal){
        this -> som = som;
        this -> canal = canal;
    }

    //set
    void setCanal(int canal){ this -> canal = canal; }
    void setSom(int som){ this -> som = som; }

    //get
    int getCanal(){ return this -> canal; }
    int getSom(){ return this -> som; }

    //impressão do canal e do som
    void imprimeCanal(){ cout << "Canal " << getCanal() << endl; }
    void imprimeSom(){ cout << "Volume " << getSom() << endl; }
    
    //aumento e diminutir canal
    void aumentarCanal(){
        if(getCanal() <= 11){
            setCanal(getCanal() + 1);
            imprimeCanal();
        }
        else{
            setCanal(0);
            imprimeCanal();
        }   
    }
    void diminuirCanal(){
        if(getCanal() >= 1){
            setCanal(getCanal() - 1);
            imprimeCanal();
        }
        else{
            setCanal(12);
            imprimeCanal();
        }   
    }

    void aumentarSom(){
        if(getSom() <= 99){
            setSom(getSom() + 1);
            imprimeSom();
        }
        else{
            cout << "Seu som esta em 100%" << endl;
            imprimeSom();
        }
    }
    void diminuirSom(){ 
        if(getSom() >= 1){
            setSom(getSom() + 1);
            imprimeSom();
        }
        else{
            cout << "Seu som esta em 0%" << endl;
            imprimeSom();
        }
    }

    //escolher o som/canal
    void escolherCanal(){
        do{
            cout << "Insira o canal: " << endl;
            cin >> this -> canal;
            if(canal > 12 || canal < 0){ cout << "Não existe esse canal! " << endl;}
        }while(canal > 12 || canal < 0);
        imprimeCanal();
    }
    void escolherSom(){
        cout << "Insira o som: " << endl;
        cin >> this -> som;
        if(som > 100 || som < 0){
            if(som > 100){
                cout << "O volume máximo só vai até 100 " << endl;
                setSom(100);
            }
            else{
                cout << "O volume mínimo só vai até 0 " << endl;
                setSom(0);
            }
        }
        imprimeSom();
    }
};

/* FUNÇÃO PRINCIPAL */
int main(){
    int escolha;
    televisao tv;
    
    do{
        cout << "Tabela: " << endl;
        cout << "1. Para aumentar 1 canal;" << endl;
        cout << "2. Para diminuir 1 canal;" << endl;
        cout << "3. Para aumentar 1x o som;" << endl;
        cout << "4. Para abaixar 1x o som;" << endl;
        cout << "5. Escolher o canal;" << endl;
        cout << "6. Escolher o som;" << endl;
        cout << "7. Consultar o canal;" << endl;
        cout << "8. Consultar o som;" << endl;
        cout << "9. Para sair do programa;" << endl;
        cin >> escolha;

        switch(escolha){
            case 1:
                tv.aumentarCanal();
                break;
            case 2:
                tv.diminuirCanal();
                break;
            case 3:
                tv.aumentarSom();
                break;
            case 4:
                tv.diminuirSom();
                break;
            case 5:
                tv.escolherCanal();
                break;
            case 6:
                tv.escolherSom();
                break;
            case 7:
                tv.imprimeCanal();
                break;
            case 8:
                tv.imprimeSom();
                break;
            case 9:
                cout << "Obrigada por usar o programa!" << endl;
                break;
            default:
                cout << "ERRO! NÃO EXISTE ESSA OPÇÃO" << endl;
                break;
            }
    }while(escolha != 9);  

    return 0;
}