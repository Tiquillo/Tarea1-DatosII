//
// Created by luis on 5/3/21.
//

#ifndef TAREAI_DATOSII_LINKEDLIST_H
#define TAREAI_DATOSII_LINKEDLIST_H


#include "Node.h"

class LinkedList {
    int elements;
    Node* first;

    LinkedList()
    {
        elements = 0;
        first = nullptr;
    }

public:
    void Add(int value) {
        if (first == nullptr) {
            first = new Node(value);
            elements++;
        } else {
            AddRecursively(value, first);
        }
    }

    int Get(int index){
        return 0;
    }

private:
    void AddRecursively (int value, Node* node){
        if (node->next == nullptr){
            *node->next = Node(value);
        }
    }

};


#endif //TAREAI_DATOSII_LINKEDLIST_H
