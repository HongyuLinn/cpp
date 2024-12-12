// PUedeTenerAmigo.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
using namespace std;

int main()
{
	/*
	int listSize = 4;
	int numberProcessed = 0;
	double sum = 0;
	while (numberProcessed < listSize)
	{
		double value;
		cin >> value;
		sum += value;
		++numberProcessed;
	}

	double average = sum / numberProcessed;
	cout << "Average: " << average << endl;



	const int TableSize = 20;

	int i = 0;
	long Entry = 1;

	cout << "i" << "\t\t" << "2**i" << endl;

	while (i < TableSize)
	{
		cout << i << "\t\t" << Entry << endl;
		Entry = 2 * Entry;
		++i;
	}

	*/



	// 1

	int count1;
	count1 = 0;

	cout << "Counting forwrd: " << endl;
	while (count1 < 10)
	{
		cout << count1 << "    ";
		++count1;
		
	}
	



	// 2 


	cout << endl;

	int count2;
	count2 = 9;

	cout << "Counting hackward: " << endl;
	while (count2 > -1)
	{
		cout << count2 << "    ";
		--count2;
	}


	// 3

	cout << endl;

	int count3;
	count3 = 0;

	cout << "Counting by fives: " << endl;
	while (count3 < 55)
	{
		cout << count3 << "    ";
		count3 = count3 + 5;
	}


	



	// 4

	cout << endl;

	int count4;
	count4 = 0;

	cout << "Counting with null stantents: " << endl;
	while (true)
	{
		cout << count4 << "    ";
		++count4;

		if (count4 == 11)
		{
			break;
		}
	}
	



	
	return 0;

}

