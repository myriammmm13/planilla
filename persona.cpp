#include "persona.h"

persona::persona(string ced, string nom, double sal):cedula(ced), nombre(nom), salarioBase(sal){}
persona::~persona(){}
void persona::setNombre(string a) { nombre = a; }
void persona::setCedula(string ced) { cedula = ced; }
void persona::setSalarioBase(double a) { salarioBase = a; }
void persona::setPuesto(string p) { puesto = p; }
string persona::getNombre() { return nombre; }
string persona::getCedula() { return cedula; }
double persona::getSalarioBase() { return salarioBase; }
string persona::getPuesto() { return puesto; }
string persona::toString() {
	stringstream ss;
	ss << "Nombre: " << nombre << endl;
	ss << "C" << char(130) << "dula: " << cedula << endl;
	ss << "Salario Base: " << salarioBase << endl;
	return ss.str();
}