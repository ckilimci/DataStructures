#ifndef NODE_H
#define NODE_H

class Node {
    public:
    Node();
    Node(int);
    Node(int, Node *);
    void print();
    Node * getNext();
    void setNext(Node *);
    int getData();
    void setData(int);
    private:
    int data;
    Node * next;
};

#endif