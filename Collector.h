//
// Created by luis on 5/3/21.
//

#ifndef TAREAI_DATOSII_COLLECTOR_H
#define TAREAI_DATOSII_COLLECTOR_H

#include <list>
#include <iostream>
#include "Node.h"

using namespace std;

class Collector {
    list <Node*> in_use;
    list <Node*> available;
public:

    Node* ReserveMem(int value){
        Node* temp;
        if (available.empty()){
            Node* temp = new Node(value);
            in_use.push_back(temp);
            return temp;

        } else {
            Node *temp = available.back();
            available.remove(temp);
            in_use.push_back(temp);
            return temp;
        }

    }

    void UnasignMem(Node* pointer){
        in_use.remove(pointer);
        pointer = NULL;
        available.push_back(pointer);
    }

    void FreeAllPointers(){
        while (!available.empty()){
            Node* temp = available.back();
            available.remove(temp);
            delete temp;
        }
        while (in_use.empty()){
            Node* temp = available.back();
            in_use.remove(temp);
            delete temp;
        }
    }
};


#endif //TAREAI_DATOSII_COLLECTOR_H
