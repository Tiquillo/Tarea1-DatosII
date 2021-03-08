//
// Created by lujim on 5/3/2021.
//

#ifndef TAREAI_DATOSII_COLLECTOR_H
#define TAREAI_DATOSII_COLLECTOR_H

#include "List.h"
#include "Node.h"

class Collector{

    //static List collectorList;

    Collector() = delete;

public:

    static bool MemAvailable();

    static Node* AskMem();

    static void SaveMem(Node* node);
};


#endif //TAREAI_DATOSII_COLLECTOR_H
