#ifndef QUADRADO_H_
#define QUADRADO_H_

#include "figurasGeometricas.h"

class Quadrado: public FigurasGeometricas{
	private:
		double lado;
	public:
		Quadrado();
		Quadrado(std::string, double);
		virtual ~Quadrado();
		double getLado();
};

#endif /* QUADRADO_H_ */