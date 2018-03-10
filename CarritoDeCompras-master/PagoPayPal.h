#pragma once
#include "InterfazDePago.h"

using namespace std;
class PagoPayPal: public InterfazDePago{
private:
	string correoElect;
	string contrasena;
public:
	PagoPayPal();
	PagoPayPal(string, string);
	~PagoPayPal();
	void pagar(Compra *);

};