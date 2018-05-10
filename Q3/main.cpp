#include "Consultor.h"
#include <iostream>
#include <string>

using namespace std;

int main(){
	Funcionario f1("Lygia", "12345", 3000.0);
	Consultor c1("Felipe", "12356", 3000.0);
	Funcionario f2("Luan", "12345", 3000.0);

	cout<< "Salario Lygia: " << f1.getSalario() << endl;
	cout<< "Salario Felipe: " << f2.getSalario() << endl;
	cout<< "Salario Luan: " << c1.getSalario() << endl;
	cout<< "Salario Luan: " << c1.getSalario(0.2) << endl;
}