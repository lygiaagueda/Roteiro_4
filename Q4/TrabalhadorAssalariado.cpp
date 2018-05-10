#include <iostream>

#include "TrabalhadorAssalariado.h"

TrabalhadorAssalariado::TrabalhadorAssalariado() : Trabalhador(){}

TrabalhadorAssalariado::TrabalhadorAssalariado(std::string nome, float salario) : Trabalhador(nome, salario){}

float TrabalhadorAssalariado::calcularPagamento(int horas){
    return this->salario/4;
}

TrabalhadorAssalariado::~TrabalhadorAssalariado(){}