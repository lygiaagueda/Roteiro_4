#ifndef TRABALHADOR_H
#define TRABALHADOR_H

#include <string>

class Trabalhador{
    protected:
    std::string nome;
    float salario;

    public:
    Trabalhador();

    virtual float calcularPagamento(int);

    Trabalhador(std::string, float);

    virtual ~Trabalhador();
};

#endif