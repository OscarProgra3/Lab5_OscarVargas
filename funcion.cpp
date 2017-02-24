#include <iostream>
#include <vector>
#include "funcion.h"

using namespace std;

funcion::funcion(int grado,int[] coeficiente)
{
	this->grado=grado;
	this->coeficiente=coeficiente;
}


int funcion::getGrado()
{
	return grado;
}

void funcion::setGrado(int grado)
{
	this->grado=grado;
}

int funcion::getCoeficiente()
{
	return coeficiente;
}

void funcion::setCoeficiente(int)
{

}


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

const funcion funcion:: operator- (const funcion op)const {
	//retorna la resta de los dos valores
	funcion retval(op.value - this -> value);
	return retval;
}

const funcion funcion:: operator* (const funcion op)const {
	//retorna la resta de los dos valores
	funcion retval(op.value * this -> value);
	return retval;
}

const funcion funcion:: operator/ (const funcion op)const {
	//retorna la resta de los dos valores
	funcion retval(op.value / this -> value);
	return retval;
}

string funcion::toString()const {
	stringstream ss;
	ss << value;
	return ss.str();
}