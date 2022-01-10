#include <iostream>
#include "Node.h"

Node::Node() {
    this->data = 0;
    this->next = nullptr;
}

Node::Node(int data) {
    this->data = data;
    this->next = nullptr;
}

Node::Node(int data, Node * next) {
    this->data = data;
    this->next = next;
}

int Node::getData() {
    return this->data;
}

void Node::setData(int data) {
    this->data = data;
}

Node * Node::getNext() {
    return this->next;
}

void Node::setNext(Node * next) {
    this->next = next;
}

void Node::print() {
    std::cout << "Data = " << this->data << std::endl;
}