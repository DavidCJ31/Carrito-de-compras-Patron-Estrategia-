#pragma once
#include <iostream>
#include <string>
#include "Compra.h"
#include "InterfazDePago.h"
using namespace std;
class CarritoDeCompras {
private:
	Compra ** vec;
	int tam;
	int can;
public:
	CarritoDeCompras();
	CarritoDeCompras(int,Compra&);
	CarritoDeCompras(CarritoDeCompras &);
	~CarritoDeCompras();
	bool agregar(Compra&);
	bool eliminarCompra();
	Compra * getCompra(int);
	float calculaTotal();
	Compra* pago(InterfazDePago *);
};