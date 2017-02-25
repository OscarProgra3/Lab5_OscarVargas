#include <iostream>
#include "funcion.h"
#include <vector>

using namespace std;

int main()
{

	vector <funcion*> f;
	funcion* ff=new funcion();

	int resp=0;
        while (resp!=10)
        {
                cout<< "\n FUNCIONES \n 1.-sumar \n 2.-resta\n 3.-multiplicacion\n 4.-Division\n 5.-factor comun\n 6.- funciones iguales \n 7.- funciones diferentes \n 8.-operador de flujo de salida \n 9.-Ingresar funciones \n 10.-SALIR \n Ingrese su opcion: "<< endl;
                cin>> resp;
        		if(resp==9)
        		{
        			

        			int g;
        			cout<<"\nIngrese el grado del la funcion"<<endl;
        			
        			cin>>g;
        			int* c=new int[g-1];

    
        			for (int i = 0; i<g; i++)
        			{
        				cout<<"Ingrese coeficiente "<< i <<" :"<<endl;
        				cin>>c[i];
          			}
          		
        			ff->setGrado(g);
        		
        			ff->setCoeficiente(c);

        			f.push_back(ff);
        			
        		}
        		
        }			


return 0;
}
