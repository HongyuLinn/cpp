// Escriu i depura codi.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
using namespace std;

int main()

{

	// Realitza un programa que demana l'edat i l'indiqui si es major de d'edat amb un booleà (true o false) 
	int edat;
	int edatMax;
	int esmajor;

	// Demanem l'edat
	cout << "Introdueix la teva edat: ";
	cin >> edat;

	// Determinem edat maxim com a 18
	edatMax = 18;

	// Calcular si es major o no
	if (edat >= 18)
	{
		esmajor = true;
	}
	else
	{
		esmajor = false;
	}

	// La terminal surt la resposta
	cout << esmajor;
	cout << endl;

	//Realitza un programa que adivina si un numero donat per l'usuari es par o no 
	int numero;
	int esimpar;
	// Demanar un número a l'usuari
	cout << "Introdueix un numero: ";
	cin >> numero;

	// Comprovar si el número és parell o senar
	if (numero % 2 == 0) {
		esimpar = false;
	}
	else {
		esimpar = true;
	}
	cout << esimpar;


	cout << endl;


	//Realitza un programa que donat un numero indiqui la quantitat que falta per se un múltiple de 7 
	int numero1;
	int restant;

	// Demanar un número a l'usuari
	cout << "Introdueix un numero: ";
	cin >> numero1;

	// Calcular el que falta per ser múltiple de 7
	restant = 7 - (numero1 % 7);
	if (restant == 7)
	{
		restant = 0; // Si el número ja és múltiple de 7
	}

	// Mostrar el resultat
	cout << "Falten " << restant << " per ser un multiple de 7." << endl;






	// Realitza un programa que indica quan ha durant una partida(en hores, minuts i segons) com a dada origen indicara el numero total de segons jugats

	int hores, min, seg;

	// Diem les unitats
	cout << "Digues segons jugats: ";
	cin >> seg;
	cout << endl;

	// calculs
	min = seg / 60;
	seg = seg % 60;
	hores = min / 60;
	min = min % 60;

	// Et diu els calculs
	cout << "Has jugat: ";
	cout << hores << "h," << min << "min," << seg << "seg";

	cout << endl;



	// Realitza un programa que al indicar dues puntuacions indiqui si és: més gran, mes petit o iguals

	int punt1, punt2;

	// Diem les unitats
	cout << "Digues la primera puntuacio: ";
	cin >> punt1;
	cout << "Digues la segona puntuacio: ";
	cin >> punt2;

	// El program et diu si son iguals, mes gran o mes petit
	if (punt1 == punt2)
	{
		cout << "Son iguals";
	}
	else if (punt1 > punt2)
	{
		cout << "Es mes gran la primera puntuacio";
	}
	else
	{
		cout << "Es mes gran la segona puntuacio\n";
	}

	cout << endl;

	// Realitza un programa que indiqui el rang en que ha quedat un jugador entre els 10 primer, els 100 primers, els 1000 primers, etc. 

	int rang;

	cout << "Digues el teu rang: ";

	// Diem les unitats
	cin >> rang;

	// El programa et diu si estas en el top 10,100 o 1000
	if (rang <= 10)
	{
		cout << "Estas entre el TOP 10";
	}
	else if (rang <= 100)
	{
		cout << "Estas entre el TOP 100";
	}
	else if (rang <= 1000)
	{
		cout << "Estas entre el TOP 1000";
	}
	else
	{
		cout << "Ets tant malo que ni estas en el TOP 1000";
	}

	cout << endl;

	// Realitza un programa que al introduir un DNI validi si la lletra es correcte


	int DNI;
	string Lletra;
	int Resultat;
	string LletraCorrect;

	// Diem les unitats o lletra
	cout << "DNI: ";
	cin >> DNI;
	cout << endl << "Digues la lletra: ";
	cin >> Lletra;

	// calcul
	Resultat = DNI % 23;

	// si el calcul dona el numero posat sera la lletra posat
	if (Resultat == 0)
	{
		LletraCorrect = "T";
	}
	else if (Resultat == 1)
	{
		LletraCorrect = "R";
	}
	else if (Resultat == 2)
	{
		LletraCorrect = "W";
	}
	else if (Resultat == 3)
	{
		LletraCorrect = "A";
	}
	else if (Resultat == 4)
	{
		LletraCorrect = "G";
	}
	else if (Resultat == 5)
	{
		LletraCorrect = "M";
	}
	else if (Resultat == 6)
	{
		LletraCorrect = "Y";
	}
	else if (Resultat == 7)
	{
		LletraCorrect = "F";
	}
	else if (Resultat == 8)
	{
		LletraCorrect = "P";
	}
	else if (Resultat == 9)
	{
		LletraCorrect = "D";
	}
	else if (Resultat == 10)
	{
		LletraCorrect = "X";
	}
	else if (Resultat == 11)
	{
		LletraCorrect = "B";
	}
	else if (Resultat == 12)
	{
		LletraCorrect = "N";
	}
	else if (Resultat == 13)
	{
		LletraCorrect = "J";
	}
	else if (Resultat == 14)
	{
		LletraCorrect = "Z";
	}
	else if (Resultat == 15)
	{
		LletraCorrect = "S";
	}
	else if (Resultat == 16)
	{
		LletraCorrect = "Q";
	}
	else if (Resultat == 17)
	{
		LletraCorrect = "V";
	}
	else if (Resultat == 18)
	{
		LletraCorrect = "H";
	}
	else if (Resultat == 19)
	{
		LletraCorrect = "L";
	}
	else if (Resultat == 20)
	{
		LletraCorrect = "C";
	}
	else if (Resultat == 21)
	{
		LletraCorrect = "K";
	}
	else if (Resultat == 22)
	{
		LletraCorrect = "E";
	}

	// dir si el DNI es correcte o invalid
	else
	{
		cout << "Incorrecte DNI";
	}

	if (Lletra == LletraCorrect)
	{
		cout << "Correcte";
	}
	else
	{
		cout << "Incorrecte";
	}



	cout << endl;

	// The Menu Chooser program presents the user with a menu that lists three difficulty levels and asks him to make a choice. If the user enters a number that corresponds to a listed choice, then he is shown a message confirming the choice. 
	// If the user makes some other choice, he is told that the choice is invalid. Then the program asks the user if he wants to play again.


	int level;
	string repetir;

	// bucle
	while (true)
	{
		// Dir el nivell
		cout << "1 = dificil" << endl << "2 = normal" << endl << "3 = facil" << endl;
		cout << "Tria una dificultat: ";
		cin >> level;

		// Dir si fer un altre nivell 
		if (level == 1)
		{
			cout << "Entres a dificultat dificil" << endl << "Per continuar fica s";

			cin >> repetir;
			if (repetir != "s")
			{
				// tancar el programa
				cout << "Tancar programa";
				break;
			}
		}
		else if (level == 2)
		{
			cout << "Entres a dificultat normal" << endl << "Per continuar fica s";
			cin >> repetir;
			if (repetir != "s")
			{
				cout << "Tancar programa";
				break;
			}
		}
		else if (level == 3)
		{
			cout << "Entres a dificultat facil" << endl << "Per continuar fica s";
			cin >> repetir;
			if (repetir != "s")
			{
				cout << "Tancar programa";
				break;
			}
		}
		else
			cout << "Invalid";

	}



	return 0;


}
