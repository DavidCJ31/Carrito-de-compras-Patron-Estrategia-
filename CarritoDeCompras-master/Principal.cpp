#include <iostream>
#include "CarritoDeCompras.h"
#include "Compra.h"
#include "PagoPayPal.h"
#include "PagoTarjetaCredito.h"
using namespace std;
int main() {
	// Se Crea un carrito de compra
	CarritoDeCompras* Carrito = new CarritoDeCompras();
	
	Compra* ptr1 = new Compra(21,"1234", 1500.0);

	Compra* ptr2 = new Compra(22, "4321", 2200.0);

	Carrito->agregar(*ptr1);
	Carrito->agregar(*ptr2);

	cout << "--------Cliente 1--------" << endl;
	cout << *Carrito->getCompra(21);
	cout << "Pago:";
	Carrito->pago(new PagoPayPal());
	cout << endl;
	cout << "--------Cliente 2--------" << endl;
	cout << *Carrito->getCompra(22);
	cout << "Pago:";
	Carrito->pago(new PagoTarjetaCredito());
	cout << endl;
	system("pause");
	return 0;
}