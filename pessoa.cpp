#include "pessoa.hpp"
#include <iostream>

std::string msg(std::string str)
{
    return str;
}

void Pessoa::imprimir (std::string msg) const //implementação do método imprimir 
{
    std::cout<< msg << std::endl; //imprime a mensagem passada como argumento
    imprimirNaTela();
}

void pessoa::imprimir() const // implementação do método imprimir sem argumento
{
    imprimirNaTela();
}

void pessoa::imprimirNaTela() const
{
    std::cout << "Nome: " << nome << "\nIdade: " << idade << std::endl; //imprime os atributos nome e idade
}
