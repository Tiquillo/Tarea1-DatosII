#include <iostream>
#include <conio.h>
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
    lista.AddFront(28793649);

    lista.Remove(4);
    lista.Remove(3);
    lista.Remove(2);
    lista.Remove(1);

    lista.AddFront(2);
    lista.AddFront(3);

    lista.PrintList();
    Collector::GetInstance()->PrintCollectorList();


    // menú

    char seleccion = '1';

    while (seleccion != '0') {
        cout << endl << "Seleccione la opci\xa2n que desea hacer a continuaci\xa2n:" << endl;
        cout << "Salir 0" << endl;
        cout << "A" << "\xa4" << "adir elemento 1" << endl;
        cout << "Remover elemento 2" << endl;
        cout << "Mostrar listas 3" << endl << endl;

        cin >> seleccion;
        int numero;
        try {
            switch ((int)seleccion) {
                case '0':
                    cout << "Gracias, que tenga lindo d" << "\xa1" << "a." << endl;
                    break;

                case '1':

                    cout << "Escriba el n\xa3mero que desea a" << "\xa4" << "adir: ";
                    try {
                        cin >> numero;
                        lista.AddFront(numero);
                    } catch(exception e) {
                        cout << "Lo lamento, el dato introducido no es v\xa0lido, volver\xa0 al men\xa3 principal." << endl << endl;
                    }
                    break;

                case '2':
                    cout << "Introduzca el \xa1ndice del elemento que desea eliminar." << endl;
                    cin >> numero;
                    lista.Remove(numero);
                    break;

                case '3':
                    lista.PrintList();
                    Collector::GetInstance()->PrintCollectorList();
                    break;

                default:
                    cout << "Por favor, seleccione un n\xa3mero entre los indicados anteriormente." << endl;
                    break;
            }
        } catch (exception e) {
            cout << "Lo lamento, el dato introducido no es v\xa0lido, int\x82ntelo de nuevo." << endl << endl;
        }


    }


    getch();

    return 0;
}
