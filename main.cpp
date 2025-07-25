#include <iostream>
#include "pessoa.hpp"

using namespace std;

int main()
{

    cout << "\n\n\n Digite o nome da pessoa: ";
    string nome = "";
    getline(std::cin,nome);

    cout << "\n Digite a idade da pessoa: ";
    int idade = 0;
    cin >> idade;

    pessoa p1 = {nome, idade}; //inicialização da estrutura pessoa

    cout << endl;

    //p1.imprimir ("olá, os dados que você informou são: "); chamada do método  imprimir com mensagem

    cout << endl;

    return 0;
}
