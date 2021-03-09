//
// Created by lujim on 5/3/2021.
//

#include "List.h"
#include <iostream>

using namespace std;

List::List()
{
    length = 0;
    first = nullptr;
}

void List::AddFront(int value) {
    if (first == nullptr) {
        first = new Node();
        first->value = value;
        first->next = nullptr;
    } else {
        Node* temp = first;
        first = new Node();
        first->value = value;
        first->next = temp;
    }
    length++;
}

void List::AddFront(Node *node) {
    if (first == nullptr){
        first = node;
        first->value = NULL;
        first->next = nullptr;
    } else {
        Node* temp = first;
        first = node;
        first->next = temp;
        first->value = NULL;
    }
    length++;
}

void List::AddBack(int value) {
    if (first == nullptr) {
        first = new Node();
        first->value = value;
        first->next = nullptr;
    } else {
        AddRecursively(value, first);
    }
    length++;
}

void List::AddBack(Node *node) {
    if (first == nullptr) {
        first = node;
        first->value = NULL;
        first->next = nullptr;
    } else {
        AddRecursively(first, node);
    }
    length++;
}

int List::Get(int intVal, bool byVal){

    if (first == nullptr) {
        throw exception("List is empty.");

    } else if (byVal){
        return GetByValueRecursively(intVal, first);

    } else {
        return GetByIndexRecursively(intVal, first);
    }
}

Node* List::GetNode(int index) {
    if (first == nullptr) {
        throw exception("List is empty.");
    } else {
        return GetNodeByIndexRecursively(index, first);
    }
}

int List::Length() const{
    return length;
}

void List::Remove(int index){

    if (first == nullptr) {
        throw exception("List is empty.");

    } else{
        RemoveRecursively(index, first);
    }
    length--;
}

void List::Remove(Node *node) {
    RemoveNodeRecursively(node, first);
    length--;
}

void List::AddRecursively (int value, Node* node){

    if (node->next == nullptr){
        node->next = new Node();
        node->next->value = value;
        node->next->next = nullptr;

    } else {
        AddRecursively(value, node->next);
    }
}

void List::AddRecursively (Node* nodeToAdd, Node* node){

    if (node->next == nullptr){
        node->next = nodeToAdd;
        node->next->next = nullptr;

    } else {
        AddRecursively(node, node->next);
    }
}

int List::GetByIndexRecursively(int index, Node* node){

    if (index == 0) {
        if (node == nullptr) {
            throw exception("Index out of bounds.");
        }
        return node->value;

    } else {
        return GetByIndexRecursively(index-1, node->next);
    }
}

Node* List::GetNodeByIndexRecursively(int index, Node* node){
    if (index == 0) {
        if (node == nullptr) {
            throw exception("Index out of bounds.");
        }
        return node;

    } else {
        return GetNodeByIndexRecursively(index-1, node->next);
    }
}

int List::GetByValueRecursively(int intVal, Node* node, int counter) {

    if (node == nullptr){
        return -1;                      // int value not found

    } else if (node->value == intVal){
        return counter;                 // returns index where value is found

    } else{
        return GetByValueRecursively(intVal, node->next, counter+1);
    }
}

void List::RemoveRecursively(int index, Node* node, bool specialNode) {

    if (node == first && index == 0){
        Node* temp = first->next;
        delete first;
        first = temp;

    } else if (index == 1){
        cout << "HOLAAA\n";
        Node* temp = node->next;
        temp->next = nullptr;
        node->next = node->next->next;
        delete temp;


    } else if (index == 2) {
        if (node == nullptr) {
            throw exception("Index out of bounds.");
        } else {
            RemoveRecursively(index-1, node->next);
        }
    } else {
        RemoveRecursively(index-1, node->next);
    }
}

void List::RemoveNodeRecursively(Node* nodeToRemove, Node* node){

    if (nodeToRemove == node) {
        node = node->next;
        nodeToRemove->next = nullptr;
        nodeToRemove->value = NULL;
    } else {
        RemoveNodeRecursively(nodeToRemove, node->next);
    }
}

void List::PrintList(bool collector) {
    if (collector) {
        PrintRecursively(first);
        return;
    }
    cout << "\nLista (largo " <<length << "): \n";
    PrintRecursively(first);
    cout << "\n============================================\n\n";
}

void List::PrintRecursively(Node *node) {
    if (node == nullptr){
        return;
    }
    cout << node->value << " ";
    PrintRecursively(node->next);
}

Node *List::GetRemoveFirst() {
    Node* temp = first;
    first = first->next;
    length--;
    return temp;
}
