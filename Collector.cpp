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

bool Collector::MemAvailable() {
    return collectorList.Length() > 0;
    return false;
}

Node* Collector::AskMem() {
    Node *temp = collectorList.GetNode(0);
    collectorList.Remove(temp);
    return temp;
    return nullptr;
}

Collector* Collector::GetInstance() {
    if (instance == nullptr){
        instance = new Collector();
    }
    return instance;
}

void Collector::SaveMem(Node *node) {
    collectorList.AddBack(node);
}

void Collector::PrintCollectorList() {
    cout << "\nLista de collector (largo " << collectorList.Length() << "): \n";
    for (int i = 0; i < collectorList.Length(); i++){
        cout << collectorList.Get(i) << " ";
    }
    cout << "\n---------------------------------------------\n\n";
}
