//
// Created by lujim on 5/3/2021.
//

#ifndef TAREAI_DATOSII_COLLECTOR_H
#define TAREAI_DATOSII_COLLECTOR_H

#include "Node.h"
#include <list>

class Collector {
    std::list <Node*> in_use;
    std::list <Node*> available;

public:
    Collector();

    Node* ReserveMem(int value);

    void UnasignMem(Node* pointer);

    void FreeAllPointers();
};


#endif //TAREAI_DATOSII_COLLECTOR_H
