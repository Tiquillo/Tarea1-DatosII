#include <iostream>
#include "Node.h"
#include "List.h"
#include "Collector.h"

using namespace std;

int main() {

    List lista = List();

    cout << "\nInicio\n";

    lista.AddFront(12);

    lista.Remove(0);

    lista.AddFront(22);

    lista.PrintList();
    Collector::GetInstance()->PrintCollectorList();

    return 0;
}
