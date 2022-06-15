/* BIBLIOTECAS USADAS */
#include <iostream>
#include <string>

using namespace std; //? 

/* CLASSE PRINCIPAL */
class Pessoa{
    private:
    string nome;
    float altura,
          peso;

    //a partir da linha 13 todas as informações são públicas
    public:

    // Foi criado uma função base no qual os valores iniciais sempre serão esses abaixo
    Pessoa(){
        cout << "Contrutor Primário" << endl;
        nome = "";
        altura = 0;
        peso = 0;
    }

    Pessoa(string nome, float altura, float peso){
        //quando eu quero colocar um parâmetro com o mesmo nome que o atributo eu insiro o this
        cout << "Contrutor Secundário" << endl;
        this -> nome = nome;
        this -> altura = altura;
        this -> peso = peso;
    }
    /* Como as variáveis estão privadas, nenhuma função/parâmetro tem acesso para tal
    *  Assim, para ter esse acesso nós criamos funções dentro da classe responsáveis por associar
    *  Perguntar o pq de fazer isso*
    */

    /**
     * recebe
     * NÃO É MAIS NECESSÁRIO
     * void setNome(string nomeFora){ nome = nomeFora; }
     * void setAltura(float alturaFora){
         if(alturaFora > 0){ altura = alturaFora; }
        }
     * void setPeso(float pesoFora){
         if(pesoFora > 0){ peso = pesoFora; }
        }
    */
    // recebe
    

    // envia
    string getNome(){ return nome; }
    float getAltura(){ return altura; }
    float getPeso(){ return peso; }

    // resposta
    float getIMC(){ return peso / (altura*altura); }

};

/* FUNÇÃO PRINCIPAL */
int main(){
    //as variáveis que serão usadas
    string nome;
    float altura, peso;

    //interação com o teclado
    cout << "Entre com o nome: " << endl;
    getline(cin, nome);

    cout << "Entre com a altura: " << endl;
    cin >> altura;

    cout << "Entre com o peso: " << endl;
    cin >> peso;


    Pessoa p(nome, altura, peso); //variação estática

    /**
     * VARIAÇÃO DINÂMICA
     * Pessoa * = new Pessoa(nome, altura peso);
     * cout << "O seu imc e: " << p -> getIMC() << endl;
    */

    /* Não é mais necessário pois os atributos estão encapsulados
    *  p.setNome(nome);
    *  p.setAltura(altura);
    *  p.setPeso(peso);
    */

    //resposta
    cout << "O seu imc e: " << p.getIMC() << endl; //perguntar sobre o "->"

    return 0;
}