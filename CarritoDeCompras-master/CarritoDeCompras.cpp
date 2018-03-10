#include "CarritoDeCompras.h"

CarritoDeCompras::CarritoDeCompras(){
	can = 0;
	tam = 5;
	vec = new Compra*[tam];
	for (int i = 0; i < tam; i++) {
		vec[i] = NULL;
	}
}

CarritoDeCompras::CarritoDeCompras(int tam,Compra& comptr)
{
	vec = new Compra*[this->tam];
	for (int i = 0; i < this->tam; i++) {
		vec[can++] = new Compra(comptr.getId(),comptr.getCodigoProd(),comptr.getPrecio());
	}
}

CarritoDeCompras::CarritoDeCompras(CarritoDeCompras & carritoPtr)
{
	delete[] vec;
	tam = carritoPtr.tam;
	vec = new Compra*[tam];
	for (int i = 0; i < tam; i++) {
		vec[i] = carritoPtr.vec[i];
	}
}

CarritoDeCompras::~CarritoDeCompras()
{
	for (int i = 0; i < can; i++) {
		delete[] vec[i];
	}
	delete[] vec;
}

bool CarritoDeCompras::agregar(Compra &compra)
{
	if (can < tam) {
		vec[can++] = (Compra*)&compra;
	}
	return false;
}


bool CarritoDeCompras::eliminarCompra(){
	if (vec == NULL) {
		return false;
	}
	else {
		for (int i = 0; i < tam; i++) {
			delete[] vec[i];
		}
		delete[] vec;
		return true;
	}
}

Compra * CarritoDeCompras::getCompra(int id){
	
	for (int i = 0; i < can; i++) {
		if (id == vec[i]->getId()) {
			return vec[i];
		}
	}
	return nullptr;
}

float CarritoDeCompras::calculaTotal(){
	float suma = 0;
	for (int i = 0; i < can; i++) {
		suma += vec[i]->getPrecio();
	}
	return suma;
}

Compra* CarritoDeCompras::pago(InterfazDePago *pag){
		pag->pagar(*vec);
	return *vec;
}