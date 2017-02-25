#ifndef FUNCION_H
#define FUNCION_H
#include <vector>
#include <sstream>

using namespace std;

class funcion
{
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
		string toString()const;

};
#endif