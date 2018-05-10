#ifndef TRABALHADORASSALARIADO_H
#define TRABALHADORASSALARIADO_H

#include "trabalhador.h"

class TrabalhadorAssalariado: public Trabalhador{
    public:
        TrabalhadorAssalariado();

        TrabalhadorAssalariado(std::string, float);

        float calcularPagamento(int);

        virtual ~TrabalhadorAssalariado();
};

#endif