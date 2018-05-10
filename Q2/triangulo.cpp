#include "triangulo.h"
#include <iostream>
#include <string>

using namespace std;
Triangulo::Triangulo():FigurasGeometricas(){
}

Triangulo::Triangulo(string nome, double base, double altura) : FigurasGeometricas(nome){
	this->base = base;
	this->altura = altura;
}

Triangulo::~Triangulo(){}


double Triangulo::getBase(){
	return base;
}

double Triangulo::getAltura(){
	return altura;
}

double Triangulo::calculaArea(double base, double altura){
	return (base*altura)/2;
}
