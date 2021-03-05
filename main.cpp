#include <iostream>
#include "Node.h"

using namespace std;

int main() {
    std::cout << "Hello, World!" << std::endl;

    Node* nodo = new Node(25);

    cout << "Puntero: " << nodo << ", dato: " << nodo;



    return 0;
}
