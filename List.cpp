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
        first = new Node(value);
    } else {
        Node* temp = first;
        first = new Node(value);
        first->next = temp;
    }
    length++;
}

void List::AddFront(Node *node) {

    length++;
}

void List::AddBack(int value) {
    if (first == nullptr) {
        first = new Node(value);
    } else {
        AddRecursively(value, first);
    }
    length++;
}

void List::AddBack(Node *node) {
    if (first == nullptr) {
        first = node;
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

}

void List::AddRecursively (int value, Node* node){

    if (node->next == nullptr){
        node->next = new Node(value);

    } else {
        AddRecursively(value, node->next);
    }
}

void List::AddRecursively (Node* nodeToAdd, Node* node){

    if (node->next == nullptr){
        node->next = nodeToAdd;

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

void List::RemoveRecursively(int index, Node* node, bool specialNode){

    if (index == 0){
        Node* temp = node;
        node = node->next;
        delete temp;

    } else if (index == 1) {
        if (node == nullptr) {
            throw exception("Index out of bounds.");

        } else {
            Node* temp = node->next;
            node->next = temp->next;
            delete temp;
        }
    } else {
        RemoveRecursively(index-1, node->next);
    }
}

void List::RemoveNodeRecursively(Node* nodeToRemove, Node* node){

    if (nodeToRemove == node->next) {
        Node* temp = node;
        node = node->next;
        delete temp;
    } else {
        RemoveNodeRecursively(nodeToRemove, node->next);
    }
}