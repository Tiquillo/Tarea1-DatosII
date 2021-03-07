//
// Created by lujim on 5/3/2021.
//

#include "Collector.h"
#include <list>
#include <iostream>
#include "Node.h"

using namespace std;

Collector::Collector()= default;

Node* Collector::ReserveMem(int value){
    if (available.empty()){
        Node* temp = new Node(value);
        in_use.push_back(temp);
        return temp;

    } else {
        Node *temp = available.back();
        available.remove(temp);
        in_use.push_back(temp);
        return temp;
    }

}

void Collector::UnasignMem(Node* pointer){
    in_use.remove(pointer);
    pointer = NULL;
    available.push_back(pointer);
}

void Collector::FreeAllPointers(){
    while (!available.empty()){
        Node* temp = available.back();
        available.remove(temp);
        delete temp;
    }
    while (in_use.empty()){
        Node* temp = available.back();
        in_use.remove(temp);
        delete temp;
    }
}