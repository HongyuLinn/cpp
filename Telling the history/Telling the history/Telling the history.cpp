// Telling the history.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

// Llibreries
#include <iostream>
using namespace std;

int main()
{
	// variable
	bool continuar;

	// fer
	do
	{
		// variable
		int jugar;

		// Si vols jugar o no
		cout << "Vols jugar? 1 (si) o 0 (no): ";
		cin >> jugar;

		// Si vols jugar 
		if (jugar == 1)
		{
			//variables
			string animal;
			string FM;
			string Estructur;
			string Emotion;
			string V;
			string Color;
			string Item;
			string OD;
			int num;
			int num1;
			string NT;

			// Preguntar les paraules 
			cout << "Tell a animal: ";
			cin >> animal;
			cout << endl;

			cout << "Tell a one member in your family: ";
			cin >> FM;
			cout << endl;

			cout << "Tell a estructur: ";
			cin >> Estructur;
			cout << endl;

			cout << "Tell a emotion: ";
			cin >> Emotion;
			cout << endl;

			cout << "Tell a verb ending in -ing: ";
			cin >> V;
			cout << endl;

			cout << "Tell a color: ";
			cin >> Color;
			cout << endl;

			cout << "Tell a item: ";
			cin >> Item;
			cout << endl;

			cout << "Tell a object to discover: ";
			cin >> OD;
			cout << endl;

			// preguntar 2 numeros i sumar-lo
			cout << "Tell the first number: ";
			cin >> num;
			cout << endl;

			cout << "Tell the second number: ";
			cin >> num1;
			cout << endl;

			num = num + num1;

			cout << num << endl;

			cout << "Tell a new television: ";
			cin >> NT;
			cout << endl;

			cout << endl;

			// La historia d'angles amb les paraules que ha ficat 
			cout << "One day a shocking " << NT << " item came out that affected the whole world.On the front page of the " << NT << " there were photos of many people where it said that they disappeared without a trace.There was a site where it said that the last person who disappeared had something bright " << Color <<
				".Once I went running in the mountains as usual when I found a very rare and strange " << OD << " with a " << Color << " " << Item << " embedded in the center of the " << OD << ", very similar to a ruby. "
				"I ran with the " << OD << " to the " << Estructur << " of a " << FM << " who was an expert in " << Item << " and " << OD << ". I arrived at my " << FM << "'s " << Estructur << " and I told him everything, I showed him the " << OD <<
				" with the " << Item << ", he looked at it and said that he had never seen anything like it. We went into his " << Estructur << " and I saw many machines that were used for things with " << Item << " that I didn't know how they worked. "
				"After examining it for a long time, he told me that he wanted to go to the place where I found the " << OD << ". The next day we went to where I found it and he started " << V << ", he dug for a long time, "
				"while I didn't know what he was looking for. Unbeknownst to us, we were surrounded by" << animal << ". I grabbed my " << FM << " since he didn't notice and we ran away from that place. "
				"When we were safe, my " << FM << " got" << Emotion << ", for some reason I didn't know. After that I didn't hear anything from him. I heard something about him after a " << num << " weeks when a picture of him "
				"appeared in a " << NT << " about missing persons.While I went after my next victim.";
		}

		// Si no vol jugar
		else
		{
			cout << "Perque no vols jugar? Pinche loco que no aprecia mi trabajo.";
			continuar = false;
		}

		// variable
		string respuesta;
		cout << endl;

		// Dir si vol continuar jugant
		cout << "Vols continuar? S/N ";
		cin >> respuesta;

		// Si vol o no continuar
		if (respuesta == "S" || respuesta == "s")
		{
			continuar = true;
		}
		else if (respuesta == "N" || respuesta == "n")
		{
			continuar = false;
		}

	// si no fica un tornara al inici
	} while (continuar == true);

	return 0;

}

