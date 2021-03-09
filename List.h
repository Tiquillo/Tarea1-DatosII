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

    void AddBack(int value);

    void AddBack(Node* node);

    int Get(int intVal, bool byval = false);

    Node* GetNode(int index);

    int Length() const;

    void Remove(int index);

    void Remove(Node* node);

    void PrintList();

    Node* GetRemoveFirst();

private:

    void AddRecursively (int value, Node* node);

    void AddRecursively (Node* nodeToAdd, Node* node);

    int GetByIndexRecursively(int index, Node* node);

    Node* GetNodeByIndexRecursively(int index, Node* node);

    int GetByValueRecursively(int intVal, Node* first, int counter = 0);

    void RemoveRecursively(int index, Node* node, bool specialNode = false);

    void RemoveNodeRecursively(Node* nodeToRemove, Node *node);

    void PrintRecursively(Node* nodo);
};


#endif //TAREAI_DATOSII_LIST_H
