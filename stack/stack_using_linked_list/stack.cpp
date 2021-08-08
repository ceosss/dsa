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
        cout << "2. Display" << endl;
        cout << "3. Pop" << endl;
        cout << "4. Is Empty" << endl;
        cout << "5. Stack Top" << endl;
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
        case 2:
        {
            driver->display();
            break;
        }
        case 3:
        {
            int popped = driver->pop();
            if (popped != -1)
                cout << popped << " popped" << endl;
            break;
        }
        case 4:
        {
            bool empty = driver->empty();
            if (empty)
                cout << "Empty" << endl;
            else
                cout << "Not empty" << endl;
            break;
        }
        case 5:
        {
            int top = driver->stackTop();
            if (top != -1)
                cout << "Top: " << top << endl;
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