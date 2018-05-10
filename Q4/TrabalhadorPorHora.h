#ifndef TRABALHADORPORHORA_H
#define TRABALHADORPORHORA_H

#include "trabalhador.h"

class TrabalhadorPorHora: public Trabalhador{
    public:
        TrabalhadorPorHora();

        TrabalhadorPorHora(std::string, float);
        
        float calcularPagamento(int);
        
        virtual ~TrabalhadorPorHora();
};

#endif