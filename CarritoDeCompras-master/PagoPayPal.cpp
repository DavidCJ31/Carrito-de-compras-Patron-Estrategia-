#include "PagoPayPal.h"

PagoPayPal::PagoPayPal(){
	this->correoElect = " ";
	this->contrasena = " ";
}

PagoPayPal::PagoPayPal(string correoElect, string contrasena){
	this->correoElect = correoElect;
	this->contrasena = contrasena;
}

PagoPayPal::~PagoPayPal(){}

void PagoPayPal::pagar(Compra * comPtr){
	cout << " PayPal" << endl;
}
