#include <iostream>
#include <vector>
#include "funcion.h"
#include <string>

using namespace std;
funcion::funcion(){

}

funcion::funcion(int grado,int* coeficiente2)
{
	this->grado=grado;
	this->coeficiente=coeficiente2;

	coeficiente = new int[grado + 1];

	for (int i = 0; i < grado + 1; i++)
	{
		coeficiente[i] = coeficiente2[i];
	}
}


int funcion::getGrado()
{
	return grado;
}

void funcion::setGrado(int grado)
{
	this->grado=grado;
}

int* funcion::getCoeficiente()
{
	return coeficiente;
}

void funcion::setCoeficiente(int* c)
{
	coeficiente=c;
}

string funcion::toString()const {
	stringstream ss;
	//ss << ;
	for (int i = grado+1; i < 0; ++i)
	{
		if (i=0)
				{
					ss<<coeficiente[i];
				}else
				{
					ss<<coeficiente[i]<<"x^"<<i<<"+";
				}
	}

	return ss.str();
	}

	ostream& operator<<(ostream& out, const funcion r){
    out << r.toString();
    return out;
}





/*
funcion funcion:: operator+ (funcion op) {
	funcion retval;
	int tam;
	if (funcion.getGrado() > grado)
	{
		tam=funcion.getGrado;
	}else
	{
		tam=grado;
	}




	for (int i = 0; i < tam; i++)
	{
		funcion retval(op.+ this -> );
	}
	
	return retval;
}


*/

