//
// Created by lujim on 5/3/2021.
//

#ifndef TAREAI_DATOSII_COLLECTOR_H
#define TAREAI_DATOSII_COLLECTOR_H

#include "List.h"
#include "Node.h"

class Collector{


    static Collector* instance;

public:
    List collectorList;

    Collector();

    static Collector* GetInstance();

    bool AreThereMemCellsAvailable() const;

    Node* AskMem();

    void SaveMem(Node* node);

    void PrintCollectorList();
};


#endif //TAREAI_DATOSII_COLLECTOR_H
