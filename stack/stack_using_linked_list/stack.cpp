#include <iostream>
#include "stack.h"
using namespace std;

int main()
{
    cout << "---------------------------" << endl;
    cout << "Stack using Linked List ADT" << endl;
    cout << "---------------------------" << endl;
    Stack *driver = new Stack();
    while (1)
    {
        cout << "1. Push" << endl;
        cout << "-1.Exit" << endl;
        int choice;
        cin >> choice;
        switch (choice)
        {
        case 1:
        {
            int x;
            cout << "x <- ";
            cin >> x;
            driver->push(x);
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