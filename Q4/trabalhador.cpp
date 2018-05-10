#include <iostream>
#include <string>
#include "trabalhador.h"

Trabalhador::Trabalhador(){
    this->nome = " ";
    this->salario = 0.0;
}

Trabalhador::Trabalhador(std::string nome, float salario){
    this->nome = nome;
    this->salario = salario;
}

float Trabalhador::calcularPagamento(int horas){
    return this->salario;
}

Trabalhador::~Trabalhador(){}
