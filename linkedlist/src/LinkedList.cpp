#include <iostream>
#include "LinkedList.h"

LinkedList::LinkedList(Node * head) {
    this->head = head;
    Node * current = head;
    while (current->getNext() != nullptr) {
        current = current->getNext();
    }
    this->tail = current;
}

void LinkedList::addNode(Node * node) {
    this->tail->setNext(node);
}

void LinkedList::print() {
    Node * current = head;
    while (current != nullptr) {
        current->print();
        current = current->getNext();
    }
    
}

Node * LinkedList::find(int target) {
    Node * current = head;
    while (current != nullptr) {
        if (current->getData() == target) {
            return current;
        }
        current = current->getNext();
    }
    return nullptr;
}