// Repas examen.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>      
using namespace std; 

int main()
{
    // variables
    int num;
    int numJ;
    int contador=1;  // donem valor 1 a contador 
    srand(time(NULL)); // fem que no fiqui la mateixa variable
    num = rand() % 101;    // fem la variable num random
    do       //fem lo del do fins que no passi lo del while
    {
        cout << "Adivina el numero entre en 1-100: ";  // La terminal diu la frase
        cin >> numJ; // el jugador diu un num i la guardem a numJ
        cout << endl;  // passem a la seguent linia
        if (numJ > num)   // si el numJ es mes gran que num
        {
            cout << "El numero es mes petit" << endl;  // la terminal diu la frase
            ++contador;   // sumem 1 al contador
        }
        else if (numJ < num)  // si numJ es mes petit que num
        {
            cout << "El numero es mes gran" << endl; // la terminal diu la frase
            ++contador; // sumem 1 al contador
        }
        else   // si no passa ninguna de les anteriors 
        {
            cout << "El numero es igual" << endl; // la terminal diu la frase
            cout << "Bien hecho, lo has hecho en " << contador ; // la terminal diu la frase i el numero del contador
        }
    } while (numJ != num);   // si numJ es diferent que num torna al do

    return 0; // acaba el programa
}

