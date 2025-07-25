#include <string>
#ifndef PESSOA_HPP //include guard para evitar inclusões múltiplas 
#define PESSOA_HPP

struct pessoa // declaração da estruturaq pessoa
{
    std::string nome; //atributo para armazenar o nome da pessoa 
    int idade; //atributo para armazenar a idade da pessoa 

    //declaração de método imprimir q
    void imprimir (std::string msg) const;
    void imprimir() const;

    private:
    void imprimirNATela() const;

};

#endif // PESSOA_HPP
