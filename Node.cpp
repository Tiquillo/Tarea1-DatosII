//
// Created by lujim on 6/3/2021.
//

#include <cstdlib>
#include "Node.h"
#include "Collector.h"

Node::Node() {
    this->value = NULL;
    next = nullptr;
}

void* Node::operator new (size_t size) {
    if (Collector::GetInstance()->MemAvailable()){
        return Collector::GetInstance()->AskMem();
    } else {
        return malloc(size);
    }
}

void Node::operator delete(void *pVoid){
    Collector::GetInstance()->SaveMem((Node*)pVoid);
    Collector::GetInstance()->PrintCollectorList();
}