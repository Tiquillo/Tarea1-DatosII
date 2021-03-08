#include <iostream>
#include <cstdio>
#include "Node.h"
#include "List.h"

using namespace std;

int main() {

    List lista = List();

    lista.AddBack(21);
    lista.AddBack(22);
    lista.AddBack(23);
    cout << "Largo " << lista.Length() << "\n";
    lista.AddBack(24);
    lista.AddBack(25);
    cout << "Largo " << lista.Length() << "\n";

    cout << "Elemento 0: " << lista.Get(0) << "\n";
    cout << "Elemento 1: " << lista.Get(1) << "\n";
    cout << "Elemento 2: " << lista.Get(2) << "\n";
    cout << "Elemento 3: " << lista.Get(3) << "\n";
    cout << "Ultimo elemento: " << lista.Get(lista.Length()-1) << "\n";

    lista.Remove(1);
    cout << "Largo: " << lista.Length() << "\n";
    cout << "Elemento 0: " << lista.Get(0) << "\n";
    cout << "Elemento 1: " << lista.Get(1) << "\n";
    cout << "Ultimo elemento: " << lista.Get(lista.Length()-1) << "\n";

    lista.Remove(lista.Length()-1);
    cout << "Largo: " << lista.Length() << "\n";
    cout << "Elemento 0: " << lista.Get(0) << "\n";
    cout << "Elemento 1: " << lista.Get(1) << "\n";
    cout << "Ultimo elemento: " << lista.Get(lista.Length()-1) << "\n";

    cout << "Buscando un 5: " << lista.Get(5, true) << "\n";
    cout << "Buscando el \xa1ndice del \xa3ltimo elemento: " << lista.Get(lista.Get(lista.Length()-1), true) << "\n";
    cout << "Largo: " << lista.Length() << "\n";

    //string nada;
    //cin >> nada;

    return 0;
}
