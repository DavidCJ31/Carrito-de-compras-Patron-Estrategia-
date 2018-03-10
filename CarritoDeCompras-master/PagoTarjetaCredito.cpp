
#include "PagoTarjetaCredito.h"

PagoTarjetaCredito::PagoTarjetaCredito()
{
	nombre = "";
	numeroTarjeta = "";
	cvv = 0;
}

PagoTarjetaCredito::PagoTarjetaCredito(string nombre, string numeroTarjeta, int cvv, Fecha fechaExpiracion)
{
	this->nombre = nombre;
	this->numeroTarjeta = numeroTarjeta;
	this->cvv = cvv;
	this->fechaExpiracion = fechaExpiracion;
}

void PagoTarjetaCredito::pagar(Compra * comPtr)
{
	cout << " Tarjeta de credito" << endl;
}

PagoTarjetaCredito::~PagoTarjetaCredito(){}

