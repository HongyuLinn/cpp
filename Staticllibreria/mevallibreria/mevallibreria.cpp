// MathLibrary.cpp
// compile with: cl /c /EHsc MathLibrary.cpp
// post-build command: lib MathLibrary.obj


// adivinanza.cpp
#include <iostream>
#include <cstdlib>
#include <ctime>
#include "mevallibreria.h"
using namespace std;
// Función para generar un número aleatorio entre 1 y 100
int num_aleatori() {
    srand(static_cast<unsigned int>(time(0)));  // Inicializamos el generador con el tiempo actual
    return rand() % 100 + 1;  // Genera un número entre 1 y 100
}

// Función principal del juego de adivinanza
void play() {
    int numero_aleatorio = num_aleatori();
    int intento, intentos = 0;

    cout << "Bienvenido al juego de adivinanza de numeros!" << endl;
    cout << "Estoy pensando en un número entre 1 y 100." << endl;

    // Bucle para que el jugador siga intentando adivinar
    while (true) {
        cout << "Introduce tu adivinanza: ";
        cin >> intento;
        intentos++;

        // Comprobamos si el intento es correcto, mayor o menor
        if (intento < numero_aleatorio) {
            cout << "El numero es mayor. Intenta de nuevo." << endl;
        }
        else if (intento > numero_aleatorio) {
            cout << "El numero es menor. Intenta de nuevo." << endl;
        }
        else {
            cout << "Felicidades! Has adivinado el numero." << endl;
            cout << "Lo lograste en " << intentos << " intentos." << endl;
            break;
        }
    }
}