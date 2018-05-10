#include <iostream>
#include <string>
#include "circulo.h"

Circulo::Circulo(){
}

Circulo::Circulo(std::string nome, double raio) : FigurasGeometricas(nome){
	this->raio = raio;
}

Circulo::~Circulo(){
}

void Circulo::setRaio(double raio){
	this->raio = raio;
}

double Circulo::getRaio(){
	return raio;
}

double Circulo::calculaArea(double raio){
	return 2 * 3.14 * raio;
}