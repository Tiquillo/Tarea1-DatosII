#include <iostream>
#include <cstdio>
#include "Node.h"
#include "LinkedList.h"

using namespace std;

int main() {

    LinkedList lista = LinkedList();

    lista.Add(21);
    lista.Add(22);
    lista.Add(23);
    cout << "Largo " << lista.Length() << "\n";
    lista.Add(24);
    lista.Add(25);
    cout << "Largo " << lista.Length() << "\n";

    cout << "Elemento 0: " << lista.Get(0) << "\n";
    cout << "Elemento 1: " << lista.Get(1) << "\n";
    cout << "Elemento 2: " << lista.Get(2) << "\n";
    cout << "Elemento 3: " << lista.Get(3) << "\n";
    cout << "Último elemento: " << lista.Get(lista.Length()-1) << "\n";

    lista.Remove(1);
    cout << "Largo: " << lista.Length() << "\n";
    cout << "Elemento 0: " << lista.Get(0) << "\n";
    cout << "Elemento 1: " << lista.Get(1) << "\n";
    cout << "Último elemento: " << lista.Get(lista.Length()-1) << "\n";

    lista.Remove(lista.Length()-1);
    cout << "Largo: " << lista.Length() << "\n";
    cout << "Elemento 0: " << lista.Get(0) << "\n";
    cout << "Elemento 1: " << lista.Get(1) << "\n";
    cout << "Último elemento: " << lista.Get(lista.Length()-1) << "\n";

    lista.memoryManager.FreeAllPointers();

    return 0;
}
