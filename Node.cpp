//
// Created by lujim on 6/3/2021.
//

#include <cstdlib>
#include "Node.h"
#include "Collector.h"

Node::Node(int value) {
    this->value = value;
    next = nullptr;
}

void* Node::operator new (size_t size) {
    if (Collector::MemAvailable()){
        return Collector::AskMem();
    } else {
        return malloc(size);
    }
}