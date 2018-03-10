#include "Compra.h"

Compra::Compra()
{
	Id = 0;
	codigoProd = "";
	precio = 0.0;
}

Compra::Compra(int Id, string codigoProd, float precio)
{
	this->Id = Id;
	this->codigoProd = codigoProd;
	this->precio = precio;
}

Compra::~Compra() {}

int Compra::getId()
{
	return Id;
}

string Compra::getCodigoProd()
{
	return codigoProd;
}

float Compra::getPrecio()
{
	return precio;
}

ostream & operator<<(ostream & out, const Compra & comPtr)
{
	out << "-----COMPRA DEL DIA------"
	<< "\nId: " << comPtr.Id << "\nCodigo: " << comPtr.codigoProd << "\nPrecio: " << comPtr.precio<<endl;
	return out;
}