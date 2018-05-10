#include <iostream>

#include "TrabalhadorPorHora.h"

TrabalhadorPorHora::TrabalhadorPorHora() : Trabalhador(){}

TrabalhadorPorHora::TrabalhadorPorHora(std::string nome, float salario) : Trabalhador(nome, salario){}

float TrabalhadorPorHora::calcularPagamento(int horas){
    float salarioComAumento = 0;
    float salarioPorHora = this->salario/(horas*4); //horas é a quantidade de horas
                                                    //trabaladas semanalmente 
                                                    //*4 seria a representação 
                                                    //da quantidade de horas trabalhadas
                                                    //mensalmente, considerando
                                                    //que um mês tem 4 semanas

    salarioComAumento = this->salario + ((horas-40)*(1.5*salarioPorHora));

    return horas > 40 ? salarioComAumento/4 : this->salario/4;
}

TrabalhadorPorHora::~TrabalhadorPorHora(){}