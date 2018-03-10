#pragma once
#include "Compra.h"
#include<iostream>
using namespace std;

class InterfazDePago {
public:
	virtual void pagar(Compra *) = 0;
};