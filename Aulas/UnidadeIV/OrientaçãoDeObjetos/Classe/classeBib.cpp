/* BIBLIOTECAS DO C++ */

#include <iostream>
/* ^ a biblioteca acima é analoga à bliblioteca STDIO.H da linguagem C
*  a diferença de ambos é q, em c++ as chamadas das bibliotecas .io é melhor do que em c */

#include <stdlib.h> //biblioteca mais importante
#include <cmath> //digivolução de math.h
#include <cctype> //digievolução do ctype.h

/* PARTE ESSENCIAL */
using namespace std;

int main(void){
    int a = 1; //definição de uma variável
    scanf("%i", &a); // ler o valor de uma variável
    printf("Hello World"); // escrever na tela 

    cin >> a; //ler o valor de uma variável em c++
    cout << "\n Hello World in C++" << "variável: " << a; //escrever na tela em c++
}