#include "Consultor.h"
#include <iostream>
#include <string>

using namespace std;
Consultor::Consultor():Funcionario(){
}

Consultor::Consultor(string n, string m, double s):Funcionario(n,m,s){
}

Consultor::~Consultor(){}

double Consultor::getSalario(){
	return salario*1.1;
}

double Consultor::getSalario(double percentual){
	return (salario + salario*percentual);
}


