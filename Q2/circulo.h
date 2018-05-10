#ifndef CIRCULO_H_
#define CIRCULO_H_

#include "figurasGeometricas.h"

class Circulo : public FigurasGeometricas{
	private:
		double raio;

	public:
		Circulo();
		Circulo(std::string, double);
		virtual ~Circulo();
		void setRaio(double);
		double getRaio();
		double calculaArea(double);
};

#endif