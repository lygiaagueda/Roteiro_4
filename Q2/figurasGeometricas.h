#ifndef FIGURASGEOMETRICAS_H_
#define FIGURASGEOMETRICAS_H_

#include <string>

class FigurasGeometricas {
	protected:
		std::string nome;
	public:
		FigurasGeometricas();
		FigurasGeometricas(std::string);
		virtual ~FigurasGeometricas();

		std::string getNome();
		void setNome(std::string);
		double calculaArea(double, double);
};

#endif /* FIGURASGEOMETRICAS_H_ */