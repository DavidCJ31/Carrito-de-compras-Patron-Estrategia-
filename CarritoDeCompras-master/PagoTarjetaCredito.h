#pragma once
#include "InterfazDePago.h"
using namespace std;

#include <ctime>
struct Fecha {
private:
	int Hora;
	int Minuto;

	int Dia;
	int Mes;
	int Year;
public:
	Fecha() {
		Hora = 0;
		Minuto = 0;

		Dia = 0;
		Mes = 0;
		Year = 0;
	}
	void setFecha() {
		Hora = 0;
		Minuto = 0;

		Dia = 0;
		Mes = 0;
		Year = 0;
	}
};


class PagoTarjetaCredito : public InterfazDePago {
private:
	string nombre;
	string numeroTarjeta;
	int cvv;
	Fecha fechaExpiracion;
public:
	PagoTarjetaCredito();
	PagoTarjetaCredito(string, string, int, Fecha);
	~PagoTarjetaCredito();
	void pagar(Compra * comPtr);
};