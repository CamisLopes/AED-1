/* BIBLIOTECAS USADAS */
#include <iostream>
#include <string>

using namespace std;

/* CLASSE */
class Elevador{
    /* PRIVADO */
    private:
    int andarAtual,
        capacidade,
        dentro,
        totalAndares;
    
    /* PÚBLICO */
    public:
    //contrutor padrão
    Elevador(){
        this -> andarAtual = 0;
        this -> dentro = 0;
    }

    //construtor secundário
    Elevador(int totalAndares, int capacidade){
        this -> totalAndares = totalAndares;
        this -> capacidade = capacidade;
    }

    //sets
    void setAndar(int andarAtual){ this -> andarAtual = andarAtual; }
    void setTotal(int totalAndares){ this -> totalAndares = totalAndares; }
    void setCapacidade(int capacidade){ this -> capacidade = capacidade; }
    void setDentro(int dentro){ this -> dentro = dentro; }

    //gets
    int getTotal(){ return totalAndares; }
    int getCapacidade(){ return capacidade; }
    int getAndar(){ return andarAtual; }
    int getDentro(){ return dentro; }

    /* MÉTODO DE ENTRADA DE PESSOA*/
    void entra(){
        if(getDentro() <= capacidade){
            setDentro(getDentro()+ 1);
            cout << "Entrou uma pessoa no elevador, totalizando " << getDentro() << " pessoas dentro do elevador." << endl;
        }
        else{
            cout << "A capacidade do elevador é de " << getCapacidade() << "pessoas, não há espaço para colocar mais!" << endl;
        }
    }

    /* MÉTODO DE SÁIDA DE PESSOA */
    void sai(){
        if(getDentro() - 1 >= 0){
            setDentro(getDentro() - 1);
            cout << "Saiu uma pessoa do elevador, totalizando " << getDentro() << "pessoas dentro do elevador." << endl;
        }
        else{
            cout << "Já não há pessoas dentro do elevador! " << endl;
        }
    }

    /* MÉTODO DE SUBIDA DO ELEVADOR */
    void sobe(){
        if(getAndar() < getTotal()){
            setAndar(getAndar() + 1);
            cout << "Saiu do andar " << getAndar() - 1 << " para o andar " << getAndar() << endl;
        }
        else{
            cout << "Já está no último andar!" << endl;
        }
    }

    /* MÉTODO DE DESCIDA DO ELEVADOR */
    void desce(){
        if(getAndar() > 0){
            setAndar(getAndar() - 1);
            cout << "Saiu do andar " << getAndar() + 1 << " para o andar " << getAndar() << endl;
        }
        else{
            cout << "Já está no térreo andar!" << endl;
        }
    }
};

/* FUNÇÃO PRINCIPAL */
int main(){
    int andarAtual,
        totalAndares,
        capacidade,
        escolha = 0,
        pessoas;

    cout << "Insira o total de andares: " << endl;
    cin >> totalAndares;
    cout << "Insira a capacidade total do elevador: " << endl;
    cin >> capacidade;

    Elevador elevador(totalAndares, capacidade);

    do{
        cout << "Tabela: " << endl;
        cout << "1. Para entrar 1 pessoa;" << endl;
        cout << "2. Para sair 1 pessoa;" << endl;
        cout << "3. Para subir 1 andar;" << endl;
        cout << "4. Para descer 1 andar;" << endl;
        cout << "5. Para sair do programa;" << endl;
        cin >> escolha;

        switch(escolha){
            case 1:
                elevador.entra();
                break;
            case 2:
                elevador.sai();
                break;
            case 3:
                elevador.sobe();
                break;
            case 4:
                elevador.desce();
                break;
            case 5:
                cout << "Obrigada por usar o programa!" << endl;
                break;
            default:
                cout << "ERRO! NÃO EXISTE ESSA OPÇÃO" << endl;
                break;
            }
    }while(escolha != 5);

    return 0;
}