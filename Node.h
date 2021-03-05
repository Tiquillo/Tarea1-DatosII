//
// Created by luis on 5/3/21.
//

#ifndef TAREAI_DATOSII_NODE_H
#define TAREAI_DATOSII_NODE_H


#include <algorithm>

class Node {

public:

    int value;
    Node *next;

    Node(int value){
        this->value = value;
        next = nullptr;
    }
};


#endif //TAREAI_DATOSII_NODE_H
