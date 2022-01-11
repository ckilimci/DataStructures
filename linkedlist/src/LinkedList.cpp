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
    this->tail = node;
}

void LinkedList::addNode(int data) {
    Node * newNode = new Node(data);
    this->addNode(newNode);
}

void LinkedList::print() {
    std::cout << "---------" << std::endl;
    Node * current = head;
    while (current != nullptr) {
        current->print();
        current = current->getNext();
    }
    std::cout << "---------" << std::endl;
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

void LinkedList::removeNode(int data) {
    if (head->getData() == data) {
        Node * toRemove = head;
        this->head = head->getNext();
        std::cout << "Removed: " << toRemove->getData() << std::endl;
        delete toRemove;
        return;
    }
    Node * prev = head;
    Node * current = head->getNext();
    while (current != nullptr) {
        std::cout << "Current: " << current->getData() << std::endl;
        if (current->getData() == data) {
            prev->setNext(current->getNext());
            std::cout << "Removed: " << current->getData() << std::endl;
            delete current;
            return;
        }
        prev = current;
        current = current->getNext();
    }
    std::cout << "No data found: " << data << std::endl;
}