#include <iostream>
#include "Node.h"
#include "LinkedList.h"

int main(int argc, char const *argv[])
{
    std::cout<< "Hello World!" << std::endl;

    Node * n1 = new Node(10);
    n1->print();

    Node * n2 = new Node(20, n1);
    Node * n3 = new Node(30, n2);
    Node * n4 = new Node(40, n3);
    n4->print();

    LinkedList * list = new LinkedList(n4);
    list->print();

    int target = 25;

    list->addNode(new Node(target));

    Node * result = list->find(target);
    if (result != nullptr) {
        std::cout << "Data (" << target <<  ") is Found!" << std::endl;
        result->print();
    } else {
        std::cout << "Data (" << target <<  ") is not Found!" << std::endl;
    }

    list->print();

    list->removeNode(15);  // invalid data
    list->removeNode(20);  // regular data
    list->removeNode(40);  // head data
    list->removeNode(25);  // tail data

    list->print();

    return 0;
}
