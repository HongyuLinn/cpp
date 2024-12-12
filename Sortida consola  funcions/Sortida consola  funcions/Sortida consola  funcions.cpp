// Sortida consola  funcions.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include <cmath> // Para usar la función sqrt()

using namespace std;  // per no escriure en cada linea un std

/// <summary>
/// Funcions
/// </summary>
/// <param name="numfact"></param>
void funciofactorial(int numfact); //declarem la funcio per calcular el factorial

bool primer(int numpri);  // declarem la funcio per calcular el numero primer

int main()
{
	int num = 0; //variambre num

	// usuari fica el numero que calcularem
	cout << "Digues un numero per fer-lo factorial: ";
	cin >> num;

	// fem que el numero dit faci les funcions
	funciofactorial(num);

	// mirar si el numero es true o false en la funcio
	if (primer(num)) {
		cout << num << " es primer" << endl; //si es primer
	}
	else {
		cout << num << " no es primer" << endl; // si no es primer
	}

	return 0;
}

// diem que fara la funcio 
void funciofactorial(int numfact)
{
	int resultat = 1; // variable resultat
	for (int i = 1; i<= numfact; ++i) // bucle
	{
		cout << i << "*" << resultat; // diu el numero multiplicant i el resultat
		resultat *= i; // multiplique el resultat 
		cout << " = " << resultat << endl; // resultat multiplicat

	}
	cout << "El factoria de " << numfact << " es " << resultat << endl; //diu el resultat final
}

// funcio si es primer
bool primer(int numpri)
{

	if (numpri <= 1) return false; // si el numero es mes petit o igual a 1 no es primer
	if (numpri == 2 || numpri == 3) return true; // es numeros 2 i 3 es primer
	if (numpri % 2 == 0) return false;  // Si el número es divisible por 2 (es par), no es primer

	for (int i = 3; i <= sqrt(numpri); i += 2) {
		// Si numpri es divisible por i, no es primo
		if (numpri % i == 0)  
		{
			return false;
		}
	}
	// si no es troba divisors el numero es primer
	return true;
}

	





