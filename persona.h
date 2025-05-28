#include <sstream>
#include <iostream>
using namespace std;

class persona {
private:
	string cedula;
	string nombre;
	double salarioBase;
	string puesto;
public:
	persona(string="", string="", double=0.0, string="");
	virtual ~persona();
	void setNombre(string="");
	void setCedula(string="");
	void setSalarioBase(double=0.0);
	void setPuesto(string = "");
	string getNombre();
	string getCedula();
	double getSalarioBase();
	string getPuesto();
	string toString();
};
