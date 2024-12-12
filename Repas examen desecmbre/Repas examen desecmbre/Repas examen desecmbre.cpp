// Repas examen desecmbre.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>

using namespace std;


///// Jugadors: ["Anna", "Marc", "Joan"]
//
//Puntuacions: [50, 70, 60]
//
//Sortida :
//
//	Guanyador : Marc amb 70 punts.

void guanyador(string jugadors[], int punt[]);
int main()
{
	string jugadors[] = { "Anna", "Marc", "Joan" };
	int punt[] = { 50, 70, 60 };
	guanyador(jugadors, punt);	
	return 0;
}
void guanyador(string jugadors[], int punt[])
{
	int n = 3;
	int puntHistory = 0;
	int hola;
	for (int i = 0; i < n; i++)
	{
		if (punt[i] > puntHistory)
		{
			puntHistory = punt[i];
			hola = i;
		}
	}
	cout << "Guanyador: " << jugadors[hola] << " amb " << punt[hola] << " punts.";
}
