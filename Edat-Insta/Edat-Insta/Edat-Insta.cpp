// Edat-Insta.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>                // biblioteca
using namespace std;           // fiquiem aixo per no possar std a cada linea 

int main()
{
    int edat;                       // variable edat
    int edatmin;                    // variable edatmin
    int edatrestants;                            // variable edatrestants

    edatmin = 16;                           // diem que l'edat minim es 16

    cout << "Digues la teva edat: ";          // fer que la terminal digui "Digues la teva edat: "
    cin >> edat;                                // fem que la persona digui la seva edat
    cout << endl;                                    // passem a la linia seguent


    if (edat >= 16)                                       // diem que si la seva edat es mes gran o igual que 16   passa lo que possa dintre del if
    {
        cout << "Pots entar" << endl;                               // tens 16 o igual fem que la terminal posi    "Pots entar"
    }

    else                                                      // si no compleix lo del if (16 o mes)   passa lo del else
    {
        cout << "No pots entrar, no tens 16 anys" << endl;           // fem que la terminal  digui lo que esta entre cometes
        edatrestants = edatmin - edat;                        // restem edatmin amb edat  
        cout << "Necesites ";                      // fem que la terminal  digui lo que esta entre cometes
        cout << edatrestants;                     // fem que la terminal  digui l'edatrestants
        cout << " anys";                           // fem que la terminal  digui lo que esta entre cometes
    }





    cout << endl;

    cout << endl;




    int anynaixement;                               // variable 
    int anyactual;              // variable 
    int edat1;                        // variable 

    anyactual = 2024;                    // definim anyactual com a 2024
    cout << "Digues el teu any de naixement";         // fem que la terminal  digui lo que esta entre cometes
    cout << endl;                               // anem a la seguent linia

    cin >> anynaixement;                       // fem que la persona digui el seu any de naixement
    edat1 = anyactual - anynaixement;                   //fem que l'edat1 sigui la resta de anyactual-anynaixement
    cout << "La teva edat es: ";                         // fem que la terminal  digui lo que esta entre cometes
    cout << edat1;                                              // fem que la terminal  digui l'edat1



    return 0;                  // acaba el programa

}

