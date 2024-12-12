// Game simple.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
using namespace std;

int main()
{
	int num;
	cout << "NUMBER\tSQUARE\tCUBE\n";
	cout << "------\t------\t------\n";

	for (num = 1; num < 11; num++)
	{
		cout << num << "\t";
		cout << num * num << "\t";
		cout << num * num * num << "\n";

	}
}

