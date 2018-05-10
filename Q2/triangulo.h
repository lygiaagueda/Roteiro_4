#ifndef TRIANGULO_H_
#define TRIANGULO_H_

#include "figurasGeometricas.h"

class Triangulo: public FigurasGeometricas{
	private:
		double base;
		double altura;
	public:
		Triangulo();
		Triangulo(std::string, double, double);
		virtual ~Triangulo();
		double getBase();
		double getAltura();

		double calculaArea(double, double);
};

#endif /* TRIANGULO_H_ */