#include <iostream>
#include <stdio.h>
#include "Node.h"
#include "LinkedList.h"

using namespace std;

int main() {

    LinkedList lista = LinkedList();

    lista.Add(21);
    lista.Add(22);
    lista.Add(23);
    cout << "largo " << lista.Length() << "\n";
    lista.Add(24);
    lista.Add(25);
    cout << "largo " << lista.Length() << "\n";

    cout << "Elemento 0: " << lista.Get(0) << "\n";
    cout << "Elemento 2: " << lista.Get(2) << "\n";
    cout << "Elemento 4: " << lista.Get(4) << "\n";

    lista.Remove(0);
    cout << "Largo: " << lista.Length() << "\n";

    lista.memoryManager.FreeAllPointers();

    return 0;
}
