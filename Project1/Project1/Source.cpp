#include <iostream>
#include "Numeros.h"


//zuñiga Ojeda Carlos Andrés 
//22110091 2-O
using namespace std;

int main()
{
    int rep;
    do {
        char rom[100];
        system("cls"); 
        cout << "\n-----------Bienvenido al convertidor de numeros---------------------\n";
        cout << " -> Ingresa el Numero en Romano \n";
        system("pause");
        cin >> rom;
        Numeros* r;
        r = new Numeros(rom[100]);
        r->Cambio(rom);
        delete r;
        cout << "\n¿Desea terminar el programa? \n 1. -> No \n 0. -> Si\n";
        cin >> rep;

    } while (rep != 0);
}
