#include <iostream>

#include "linkedlist.h"

LinkedList::LinkedList()
{
    this->length=0;
}

LinkedList::~LinkedList()
{
}

void LinkedList::pushFront(int red, int green, int blue)
{
    Node* newNode = new Node(red, green, blue);
    if (this->length < 1)
    {
        this->head = newNode;
        this->tail = newNode;
        this->length = 1;
        return;
    }
    newNode->setNext(this->head);
    this->head=newNode;
    this->length++;
}

void LinkedList::pushBack(int red, int green, int blue)
{
    Node* newNode = new Node(red, green, blue);
    
    if (this->length < 1)
    {
        this->head = newNode;
        this->tail = newNode;
        this->length = 1;
        return;
    }
    newNode->setPrev(this->tail);
    this->tail->setNext(newNode);
    this->tail=newNode;
    this->length++;
}

void LinkedList::printList()
{
    Node* currentNode = this->head;
    for (int i = 0 ; i < this->length ; i++)
    {
        currentNode->printValues();
        currentNode=currentNode->getNext();
    }
}
