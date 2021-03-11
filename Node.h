//
// Created by luis on 5/3/21.
//

#ifndef TAREAI_DATOSII_NODE_H
#define TAREAI_DATOSII_NODE_H


class Node {

private:

    int value;
    Node *next;

public:

    Node();

    void SetValue(int value);

    int GetValue() const;

    void SetNext(Node* next);

    Node* GetNext();

    void* operator new(size_t size);

    void operator delete(void *pVoid);
};


#endif //TAREAI_DATOSII_NODE_H
