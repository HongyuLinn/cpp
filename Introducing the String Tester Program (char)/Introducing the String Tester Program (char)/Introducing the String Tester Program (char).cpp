// Introducing the String Tester Program (char).cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include <string>





using namespace std;

int main()
{
	
	string line0;
	string line;
	string line1;
	string line2;
	char algo;

	int posicio = 0;
	string buscar;

	cout << "Entra una frase amb 3 paraules: ";

	cin >> line >> line1 >> line2;

	line0 = line + " " + line1 + " " + line2;

	
	
	cout << "Tu frase tiene " << line0.length() <<" letras" << endl;

	algo = line0[0];

	cout << "La letra en la posicion 0 es: " << algo << endl;

	cout << "Cambia la primera letra por: "; 
	cin >> algo;
	line0[0] = algo;
	cout << "Tu frase ahrora es: ";
	cout << line0 << endl;


	while (line0.length() > posicio)

	{
	//	x = line0[posicio]; 

		//cout << "En la posicio " << posicio << "es:" << x <<endl;

		posicio++;

	}

	cout << "Buscar una paraula: ";
	cin >> buscar;
	

	/*int main() 

{ 

	string text; 

	string text1, text2, text3; 

	char posisioChar; 

	int contador = 0; 

	string borrar; 

  

	cout << "Digues una frase de tres paraules: "; 

	cin >> text1; cin >> text2; cin >> text3; 

	text = text1 + " " + text2 + " " + text3; 

	 

	cout << "La frase te " << text.length() << " characters en ella.\n"; 

	 

	posisioChar = text[0]; 

	cout << "El primer character es: " << posisioChar; 

  

	text[0] = 'M'; 

	cout << "\nCanviant el primer cararcter.\n"; 

	cout << "La frase ara es: " << text; 

  

	 

	while (text.length() > contador) 

	{ 

		posisioChar = text[contador]; 

		cout << "\nEl caracter a la posisio " << contador << " es: " << posisioChar; 

		contador++; 

	} 

  

  

	cout << "\nLa sequencia " << text2 << " comenca al caracter " << text1.length() + 1; 

	 

	while (!text.empty()) 

	{ 

		cout << "\nDigues una paraula per esborrar: "; 

		cin >> borrar; 

		cout << text; 

	} 

  

  

	return 0; 

} */

	



	return 0;
}


// Ejecutar programa: Ctrl + F5 o menú Depurar > Iniciar sin depurar
// Depurar programa: F5 o menú Depurar > Iniciar depuración

// Sugerencias para primeros pasos: 1. Use la ventana del Explorador de soluciones para agregar y administrar archivos
//   2. Use la ventana de Team Explorer para conectar con el control de código fuente
//   3. Use la ventana de salida para ver la salida de compilación y otros mensajes
//   4. Use la ventana Lista de errores para ver los errores
//   5. Vaya a Proyecto > Agregar nuevo elemento para crear nuevos archivos de código, o a Proyecto > Agregar elemento existente para agregar archivos de código existentes al proyecto
//   6. En el futuro, para volver a abrir este proyecto, vaya a Archivo > Abrir > Proyecto y seleccione el archivo .sln
