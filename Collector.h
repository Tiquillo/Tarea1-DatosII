//
// Created by luis on 5/3/21.
//

#ifndef TAREAI_DATOSII_COLLECTOR_H
#define TAREAI_DATOSII_COLLECTOR_H

#include <list>
#include "Node.h"

using namespace std;

class Collector {
    list <Node*> in_use;
    list <Node*> available;
public:
    Collector(){
    }

    Node* ReserveSpace(){
        int* temp;
        if (available.empty()){
            Node* temp = malloc(sizeof(Node));
        } else {
            Node* temp = available.back();
            available.remove(temp);
        }

        in_use.push_back(temp);
        return temp;

    }

    void FreeSpace(Node* pointer){
        in_use.remove(pointer);
        pointer = nullptr;
        available.push_back(pointer);
    }

    void FreeAllPointers(){
        in_use.clear();
        available.clear();
    }
};


#endif //TAREAI_DATOSII_COLLECTOR_H
