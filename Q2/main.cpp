#include "quadrado.h"
#include "triangulo.h"
#include "circulo.h"
#include <iostream>
#include <string>

using namespace std;

int main(){
	Quadrado quadrado1("Quadrado", 12);
	Triangulo triangulo1("Triangulo", 12, 12);
	Circulo circulo1("Circulo", 1);

	cout << "Area quadrado" << quadrado1.calculaArea(quadrado1.getLado(), quadrado1.getLado()) << endl;
	cout << "Area triangulo'" << triangulo1.calculaArea(triangulo1.getBase(), triangulo1.getAltura()) << endl;
	cout << "Area circulo" << circulo1.calculaArea(circulo1.getRaio()) << endl;
}
