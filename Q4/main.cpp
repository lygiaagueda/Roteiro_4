#include <iostream>
#include <iomanip>

#include "trabalhador.h"
#include "TrabalhadorAssalariado.h"
#include "TrabalhadorPorHora.h"

using namespace std;

int main(){
    Trabalhador *pedreiro = new TrabalhadorPorHora("Joaquim", 4500.40);
    Trabalhador *operario = new TrabalhadorAssalariado("Reinaldo", 2300.80);

    float salarioSemanalPedreiro = pedreiro->calcularPagamento(45);
    float salarioSemanalOperario = operario->calcularPagamento(45);

    cout << "Pagamento semanal do pedreiro que trabalha 45 horas por semana: R$" << setprecision(2) << fixed << salarioSemanalPedreiro << endl;
    cout << "Pagamento semanal do operario que trabalha 45 horas por semana: R$" << setprecision(2) << fixed << salarioSemanalOperario << endl;


    return 0;
}