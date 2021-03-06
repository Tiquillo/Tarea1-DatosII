//
// Created by luis on 5/3/21.
//

#ifndef TAREAI_DATOSII_LINKEDLIST_H
#define TAREAI_DATOSII_LINKEDLIST_H


#include <iostream>
#include "Node.h"
#include "Collector.h"

using namespace std;

class LinkedList {

    int length;
    Node* first;

public:

    Collector memoryManager;

    LinkedList()
    {
        length = 0;
        memoryManager = Collector();
        first = NULL;
    }

    void Add(int value) {
        if (first == NULL) {
            first = memoryManager.ReserveMem(value);
            length++;
        } else {
            AddRecursively(value, first);
        }
    }

    int Get(int index){
        if (first == NULL) {
            throw exception("Empty list.");
        }
        return GetByIndexRecursively(index, first);
    }

    int Length(){
        return length;
    }

    void Remove(int index){
        if (first == NULL) {
            throw exception("List is empty.");
        } else if (index == 0){
            if (length == 0) {
                memoryManager.UnasignMem(first);
                first = NULL;
            } else {

            }
        } else{
            RemoveRecursively(index, first);
        }
        length--;
    }

private:
    void AddRecursively (int value, Node* node){
        if (node->next == NULL){
            node->next = memoryManager.ReserveMem(value);
            length++;
        } else {
            AddRecursively(value, node->next);
        }
    }

    int GetByIndexRecursively(int index, Node* node){
        if (index == 0) {
            if (node == NULL) {
                throw exception("Index out of bounds.");
            }
            return node->value;
        } else {
            GetByIndexRecursively(index-1, node->next);
        }
    }

    void RemoveRecursively(int index, Node* node){
        if (index == 1) {
            if (node == NULL) {
                throw exception("Index out of bounds.");
            } else {
                Node* temp = node->next;
                node->next = temp->next;
                memoryManager.UnasignMem(temp);
                temp = NULL;
            }
        } else {
            RemoveRecursively(index-1, node->next);
        }
    }

};


#endif //TAREAI_DATOSII_LINKEDLIST_H
