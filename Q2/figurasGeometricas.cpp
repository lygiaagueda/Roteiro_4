#include "figurasGeometricas.h"

using namespace std;

FigurasGeometricas::FigurasGeometricas(){
	this->nome = "";
}

FigurasGeometricas::FigurasGeometricas(string nome){
	this->nome = nome;
}

FigurasGeometricas::~FigurasGeometricas(){}

string FigurasGeometricas::getNome(){
	return nome;
}

void FigurasGeometricas::setNome(string nome){
	this->nome = nome;
}
double FigurasGeometricas::calculaArea(double base, double altura){
	return base * altura;
}
