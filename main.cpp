#include <iostream>
#include "Node.h"
#include "List.h"
#include "Collector.h"

using namespace std;

int main() {

    List lista = List();

    cout << "\nInicio\n";

    lista.AddFront(11);

    lista.Remove(0);

    lista.AddFront(12);
    lista.AddFront(13);
    lista.AddFront(14);
    lista.AddFront(15);
    lista.AddFront(16);

    lista.Remove(0);

    cout << lista.Get(3) << "\n";

    lista.Remove(3);

    lista.PrintList();
    Collector::GetInstance()->PrintCollectorList();

    return 0;
}
