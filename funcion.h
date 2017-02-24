#pragma once
#include <iostream>
#include <vector>
#include <sstream>

using namespace std;

class funcion
{
	private:
		int grado;
		int[grado+1] coeficiente;

	public:
		funcion();
		funcion(int num, int[] coeficiente);
		//~funcion();
		int getGrado();
		void setGrado(int n);	
		int getCoeficiente();
		void setCoeficiente(int,int);

		funcion operator+(funcion); 
		funcion operator-()



}