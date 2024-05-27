class Node
{
private:
    int index;
    int* rgbArray;
    Node* nextNode;
    Node* prevNode;

public:
    Node();
    Node(int red, int green, int blue);

    ~Node();

    int getIndex();
    int* getRGBArray();

    Node* getNext();
    Node* getPrev();

    void setNext(Node* next);
    void setPrev(Node* prev);

    void printValues();
};
