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
        cout << "2. Display" << endl;
        cout << "3. Pop" << endl;
        cout << "4. Peek" << endl;
        cout << "5. Stack top" << endl;
        cout << "6. Is empty" << endl;
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
            cout << "n <- ";
            int n;
            cin >> n;
            int peeked = driver->peek(n);
            if (peeked != -1)
                cout << "Element at " << n << " = " << peeked << endl;
            break;
        }
        case 5:
        {
            int top = driver->stackTop();
            if (top != -1)
                cout << "Stack top : " << top << endl;
            break;
        }
        case 6:
        {
            bool empty = driver->empty();
            if (empty)
                cout << "Empty" << endl;
            else
                cout << "Not empty" << endl;
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