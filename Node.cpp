//
// Created by lujim on 6/3/2021.
//

#include <cstdlib>
#include "Node.h"
#include "Collector.h"
#include <iostream>

using namespace std;

Node::Node() {
    this->value = NULL;
    next = nullptr;
}

void* Node::operator new (size_t size) {
    if (Collector::GetInstance()->AreThereMemCellsAvailable()){
        return Collector::GetInstance()->AskMem();
    } else {
        return malloc(size);
    }
}

void Node::operator delete(void *pVoid){
    ((Node*)pVoid)->next = nullptr;
    Collector::GetInstance()->SaveMem((Node*)pVoid);
}

void Node::SetValue(int value){
    this->value = value;
}

int Node::GetValue() const{
    return value;
}

void Node::SetNext(Node* next){
    this->next = next;
}

Node* Node::GetNext(){
    return next;
}