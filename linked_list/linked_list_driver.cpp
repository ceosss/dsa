#include <iostream>
#include "linked_list.h"
using namespace std;

int main()
{
    cout << "---------------" << endl;
    cout << "Linked list adt" << endl;
    cout << "---------------" << endl;
    struct Node *driver = new Node;
    while (true)
    {
        cout << "1. insert" << endl;
        cout << "2. display" << endl;
        cout << "3. delete " << endl;
        cout << "4. generate a linked list" << endl;
        cout << "-1. exit" << endl;
        int choice;
        cin >> choice;
        switch (choice)
        {
        case 1:
        {
            int value;
            cout << "value <- ";
            cin >> value;
            driver->insert(value);
            break;
        }
        case 2:
        {
            driver->display();
            break;
        }
        case 3:
        {
            int deleted = driver->deleteItem();
            if (deleted != -1)
                cout << deleted << " deleted" << endl;
            break;
        }
        case 4:
        {
            int n = 5;
            int a[5] = {1, 2, 3, 4, 5};
            driver->generateLinkedList(a, n);
            break;
        }
        case -1:
            return 0;
        }
    }
    return 0;
}