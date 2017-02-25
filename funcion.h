#ifndef FUNCION_H
#define FUNCION_H
#include <vector>
#include <string>
#include <sstream>

using namespace std;

class funcion
{
	friend ostream& operator<<(ostream& out, funcion r);
	private:
		int grado;
		int* coeficiente;

	public:
		funcion();
		funcion(int num, int* coeficiente);
		~funcion();
		int getGrado();
		void setGrado(int n);	
		int* getCoeficiente();
		void setCoeficiente(int*);

		funcion operator+(funcion); 
		funcion operator-(funcion);
		funcion operator==(funcion);
		string toString()const;

};
#endif