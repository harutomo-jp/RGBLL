#include "node.h"

class LinkedList
{
private:
    Node* head;
    Node* tail;
    int length;


public:
    LinkedList();
    ~LinkedList();

    void pushFront(int red, int green, int blue);
    void pushBack(int red, int green, int blue);

    void printList();

};
