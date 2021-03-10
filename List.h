//
// Created by lujim on 5/3/2021.
//

#ifndef TAREAI_DATOSII_LIST_H
#define TAREAI_DATOSII_LIST_H

#include "Node.h"

class List {
    int length;
    Node* first;

public:

    List();

    void AddFront(int value);

    void AddFront(Node* node);

    int Get(int intVal, bool byval = false);

    int Length() const;

    void Remove(int index);

    void PrintList(bool collector = false);

    Node* GetRemoveFirst();

private:

    int GetByIndexRecursively(int index, Node* node);

    Node* GetNodeByIndexRecursively(int index, Node* node);

    int GetByValueRecursively(int intVal, Node* first, int counter = 0);

    void RemoveRecursively(int index, Node* node, bool specialNode = false);

    void PrintRecursively(Node* nodo);
};


#endif //TAREAI_DATOSII_LIST_H
