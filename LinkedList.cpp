//
// Created by lujim on 5/3/2021.
//

#include "LinkedList.h"
#include <iostream>
#include "Node.h"
#include "Collector.h"

using namespace std;

LinkedList::LinkedList()
{
    length = 0;
    memoryManager = Collector();
    first = NULL;
}

void LinkedList::Add(int value) {
    if (first == NULL) {
        first = memoryManager.ReserveMem(value);
        length++;
    } else {
        AddRecursively(value, first);
    }
}

int LinkedList::Get(int index){
    if (first == NULL) {
        throw exception("List is empty.");
    }
    return GetByIndexRecursively(index, first);
}

int LinkedList::Length(){
    return length;
}

void LinkedList::Remove(int index){
    if (first == NULL) {
        throw exception("List is empty.");
    } else{
        RemoveRecursively(index, first);
    }
    length--;
}

void LinkedList::AddRecursively (int value, Node* node){
    if (node->next == NULL){
        node->next = memoryManager.ReserveMem(value);
        length++;
    } else {
        AddRecursively(value, node->next);
    }
}

int LinkedList::GetByIndexRecursively(int index, Node* node){
    if (index == 0) {
        if (node == NULL) {
            throw exception("Index out of bounds.");
        }
        return node->value;
    } else {
        GetByIndexRecursively(index-1, node->next);
    }
}

void LinkedList::RemoveRecursively(int index, Node* node){
    if (index == 0){
        Node* temp = node;
        node = node->next;
        memoryManager.UnasignMem(temp);
    } else if (index == 1) {
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