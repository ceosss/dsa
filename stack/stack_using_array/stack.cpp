#include <iostream>
#include "stack.h"
using namespace std;

int main()
{
    cout << "---------" << endl;
    cout << "Stack ADT" << endl;
    cout << "---------" << endl;
    Stack *driver = new Stack();
    while (1)
    {
        cout << "1. Insert" << endl;
        cout << "-1. Exit" << endl;
        int choice;
        cin >> choice;
        switch (choice)
        {
        case 1:
        {
            cout << "x <- ";
            int x;
            cin >> x;
            driver->insert(x);
            break;
        }
        case -1:
        {
            return 0;
        }
        default:
        {
            cout << "Invalid choice" << endl;
            break;
        }
        }
    }
    return 0;
}