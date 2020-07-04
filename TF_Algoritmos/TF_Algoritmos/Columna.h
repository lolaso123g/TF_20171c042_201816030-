#pragma once
#include <vector>
#include <string>
using namespace std;

class Columna {

protected:
	int tipo;
	string nombre;
public:

	Columna() {

	}
	~Columna() {	}
	int getTipo() { return tipo; }
	string getNombre() { return nombre; }
	void setNombre(string name) { nombre = name; }
};
