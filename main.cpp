#include <iostream>
#include "Node.h"
#include "LinkedList.h"

using namespace std;

int main() {
    std::cout << "Hello, World!" << std::endl;

    LinkedList lista = LinkedList();

    lista.Add(25);
    lista.Add(42);
    lista.Add(85);

    cout << "Lista: " << lista.Length() << ". Primer elemento: " << lista.GetByIndex(0) << ". Último elemento: " << lista.GetByIndex(lista.Length()-1);



    return 0;
}
