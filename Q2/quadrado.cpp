#include "quadrado.h"
#include <iostream>
#include <string>

using namespace std;
Quadrado::Quadrado():FigurasGeometricas(){
}

Quadrado::Quadrado(string nome, double lado) : FigurasGeometricas(nome){
	this->lado = lado;
}

double Quadrado::getLado(){
	return lado;
}

Quadrado::~Quadrado(){}
