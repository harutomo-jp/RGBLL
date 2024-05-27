#include <iostream>
#include <stdlib.h>
#include <string>
#include <stdlib.h>
#include <fstream>
#include "linkedlist.h"
using namespace std;
#define clrscr(); system("cls");

string menu = "OPTIONS:\n\nEnter 1 to add new RGB values\nEnter 2 to print to console\nEnter 3 to output to csv\nEnter 4 to exit program\n";

void printBanner()
{
    cout << "+-+-+-+-+-+-+-+-+-+-+-+-+-+\n";
    cout << "+-+-+     RGB LL      +-+-+\n";
    cout << "+-+-+-+-+-+-+-+-+-+-+-+-+-+\n";
}

void addRGBTuple(LinkedList* myList)
{
    int red,green,blue = -1;
    cout << "enter red value between 0 and 255\n";
    while (red < 0 || red > 255)
    {
        cin >> red;
    }
    cout << "enter green value between 0 and 255\n";
    while (green < 0 || green > 255)
    {
        cin >> green;
    }
    cout << "enter blue value between 0 and 255\n";
    while (blue < 0 || blue > 255)
    {
        cin >> blue;
    }
    myList->pushBack(red,green,blue);
}

void programLoop()
{
    int selection = 0;
    LinkedList rgbList;
    while (selection != 4)
    {
        clrscr();
        printBanner();
        cout << menu;
        cin >> selection;
        switch(selection) {
            case 1:
            addRGBTuple(&rgbList);
            break;
            case 2:
            rgbList.printList();
            system("pause");
            break;
            case 3:
            break;
        }
    }
    cout << "Goodbye!\n";
}

int main()
{   
    programLoop();
    return 0;
}
