#include <iostream>
#include "tree.h"
using namespace std;

int main()
{
    cout << "----" << endl;
    cout << "Tree" << endl;
    cout << "----" << endl;
    Tree *driver = new Tree();
    while (1)
    {
        cout << "1. Create a tree" << endl;
        cout << "-1. Exit" << endl;
        int choice;
        cin >> choice;
        switch (choice)
        {
        case 1:
        {
            driver->create();
            break;
        }
        case -1:
        {
            return 0;
        }
        }
    }
    return 0;
}