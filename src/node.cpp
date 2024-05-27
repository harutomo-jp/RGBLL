#include <iostream>
#include "Node.h"

int* createArray(int red, int green, int blue)
{
    int* rgbArray = new int[3];
    rgbArray[0] = red;
    rgbArray[1] = green;
    rgbArray[2] = blue;
    return rgbArray;
}

Node::Node()
{
    this->index=0;
    this->rgbArray=createArray(255,255,255);
}

Node::Node(int red, int green, int blue)
{
    this->index=0;
    this->rgbArray=createArray(red,green,blue);
}

Node::~Node()
{

}

void Node::printValues()
{
    std::cout << "Red: " << this->rgbArray[0] << "\nGreen: " << this->rgbArray[1] << "\nBlue: " << this->rgbArray[2] << std::endl;
}

void Node::setNext(Node* next)
{
    this->nextNode=next;
}

void Node::setPrev(Node* prev)
{
    this->prevNode=prev;
}

Node* Node::getPrev()
{
    return this->prevNode;
}

Node* Node::getNext()
{
    return this->nextNode;
}
