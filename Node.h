//
// Created by luis on 5/3/21.
//

#ifndef TAREAI_DATOSII_NODE_H
#define TAREAI_DATOSII_NODE_H


class Node {

public:

    int value;
    Node *next;

    Node(int value);

    void* operator new(size_t size);
};


#endif //TAREAI_DATOSII_NODE_H
