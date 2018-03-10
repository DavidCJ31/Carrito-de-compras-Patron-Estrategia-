#pragma once
#include <iostream>
#include <sstream>
#include <string>
using namespace std;

class Compra {
private:
	int Id;
	string codigoProd;
	float precio;
public:
	Compra();
	Compra(int, string, float);
	~Compra();
	int getId();
	string getCodigoProd();
	float getPrecio();
	friend ostream &operator<<(ostream & out, const Compra & comPtr);

};