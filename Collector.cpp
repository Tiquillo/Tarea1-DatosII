//
// Created by lujim on 5/3/2021.
//

#include "Collector.h"
#include <iostream>

using namespace std;

Collector* Collector::instance = nullptr;

Collector::Collector() {
    collectorList = List();
}

bool Collector::AreThereMemCellsAvailable() const {
    return collectorList.Length() > 0;
}

Node* Collector::AskMem() {
    return collectorList.GetRemoveFirst();
}

Collector* Collector::GetInstance() {
    if (instance == nullptr){
        instance = new Collector();
    }
    return instance;
}

void Collector::SaveMem(Node *node) {
    collectorList.AddFront(node);
}

void Collector::PrintCollectorList() {
    cout << "\nLista de collector (largo " << collectorList.Length() << "): \n";
    collectorList.PrintList(true);
    cout << "\n---------------------------------------------\n";
}
