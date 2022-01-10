#ifndef LINKEDLIST_H
#define LINKEDLIST_H

#include "Node.h"

class LinkedList {
    public:
    LinkedList(Node *);
    void addNode(Node *);
    void print();
    Node * find(int);
    private:
    Node * head;
    Node * tail;
};

#endif