// Modul, funcions i parametres.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include <iostream>
#include "EscriureCadena.h"

using namespace std;

/*
int main()
{
	cout << "Executant...\n";
	EscriureCadena(Meva_CADENA);
	cout << "Finalitzat.\n";
	return(0);

}
*/



double avg(double x, double y);

void main()
{
	double a = 1.2;
	double b = 2.7;
	cout << "Avg is " << avg(a, b); 
	cout << endl; 
	cout << endl; system("PAUSE");
}

double avg(double x, double y) { 
	double v = (x + y) / 2;
	return v;
}

