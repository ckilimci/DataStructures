#ifndef LINKEDLIST_H
#define LINKEDLIST_H

#include "Node.h"

class LinkedList {
    public:
    LinkedList(Node *);
    void addNode(Node *);
    void addNode(int);
    void print();
    Node * find(int);
    void removeNode(int);
    private:
    Node * head;
    Node * tail;
};

#endif