//
// Created by luis on 5/3/21.
//

#ifndef TAREAI_DATOSII_LINKEDLIST_H
#define TAREAI_DATOSII_LINKEDLIST_H


#include "Node.h"

class LinkedList {

    int length;
    Node* first;

public:

    LinkedList()
    {
        length = 0;
        first = nullptr;
    }

    void Add(int value) {
        if (first == nullptr) {
            first = new Node(value);
            length++;
        } else {
            AddRecursively(value, first);
        }
    }

    int GetByIndex(int index){
        return GetByIndexRecursively(index, first);
    }

    int GetByValue(int value){
        return 0;
    }

    int Length(){
        return length;
    }

private:
    void AddRecursively (int value, Node* node){
        if (node->next == nullptr){
            node->next = new Node(value);
            length++;
        } else {
            AddRecursively(value, node->next);
        }
    }

    int GetByIndexRecursively(int index, Node* node){
        if (index == 0) {
            return node->value;
        } else {
            GetByIndexRecursively(index-1, node->next);
        }
    }

};


#endif //TAREAI_DATOSII_LINKEDLIST_H
