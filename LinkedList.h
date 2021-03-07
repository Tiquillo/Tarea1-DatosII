//
// Created by lujim on 5/3/2021.
//

#ifndef TAREAI_DATOSII_LINKEDLIST_H
#define TAREAI_DATOSII_LINKEDLIST_H

#include "Node.h"
#include "Collector.h"

class LinkedList {
    int length;
    Node* first;

public:

    Collector memoryManager;

    LinkedList();

    void Add(int value);

    int Get(int index);

    int Length();

    void Remove(int index);

private:

    void AddRecursively (int value, Node* node);

    int GetByIndexRecursively(int index, Node* node);

    void RemoveRecursively(int index, Node* node);

};


#endif //TAREAI_DATOSII_LINKEDLIST_H
