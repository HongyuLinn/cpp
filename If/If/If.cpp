// If.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
using namespace std;
int main()
{
    
    if(true)
    {
        cout << "this is always displayed.\n\n";
    }
    if (false)
    {
        cout << "this is never displayed.\n\n";
    }
    int score = 1000;
    if (score)
    {
        cout << "at least you didn't score zero.\n\n";
    }
    if (score >= 250)
    {
        cout << "you scored 250 or more. decent.\n\n";
    }
    if (score >= 500)
    {
        cout << "you scored 500 or more. nice.\n\n";
        if (score >= 1000)
        {
            cout << "you scored 1000 or more.impressive!\n";
        }
    }

    cout << endl << endl;

    



    
    cout << "Enter your score: ";
    cin >> score;
    if (score > 1000)
    {
        cout << "You scored 1000 or more. Impressive!\n";
        cout << endl;
    }
    
    else
    {
        cout << "You scored less than 1000. You are so fucking bad!!!!!\n";
    }

    cout << endl << endl;







    float nota;
    cout << "Deme una nota: " << endl;

    cin >> nota;
    if (nota >= 9)
    {
        cout << "Sobresaliente" << endl;
    }
    else if (nota >= 7)
    {
        cout << "Notabledl" << endl;
    }
    else if (nota >= 5)
    {
        cout << "Aprovado" << endl;
    }

    
    


    return 0;


}


