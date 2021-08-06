#include <iostream>
#include "linked_list.h"
using namespace std;

int main()
{
    cout << "---------------" << endl;
    cout << "Linked list adt" << endl;
    cout << "---------------" << endl;
    Node *driver = new Node;
    while (true)
    {
        cout << "1. insert" << endl;
        cout << "2. display" << endl;
        cout << "3. delete " << endl;
        cout << "4. generate a linked list" << endl;
        cout << "5. Recursive display" << endl;
        cout << "6. Count nodes" << endl;
        cout << "7. Count nodes recursively" << endl;
        cout << "8. Sum of elements" << endl;
        cout << "9. Sum of elements recursively" << endl;
        cout << "10. Max element" << endl;
        cout << "11. Search" << endl;
        cout << "12. Recursive Search" << endl;
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
        case 5:
        {
            driver->recursiveDisplay(head);
            break;
        }
        case 6:
        {
            int nodes = driver->countNodes();
            cout << nodes << " nodes" << endl;
            break;
        }
        case 7:
        {
            int nodes = driver->countNodesRecursively(head);
            cout << nodes << " nodes" << endl;
            break;
        }
        case 8:
        {
            int sum = driver->sumOfElements();
            cout << "Sum: " << sum << endl;
            break;
        }
        case 9:
        {
            int sum = driver->sumOfElementsRecursively(head);
            cout << "Sum: " << sum << endl;
            break;
        }
        case 10:
        {
            int max = driver->maxElement();
            cout << "Max: " << max << endl;
            break;
        }
        case 11:
        {
            cout << "x <- ";
            int x;
            cin >> x;
            int found = driver->searchElement(x);
            if (found != -1)
                cout << "Found " << x << " at " << found << endl;
            else
                cout << x << " not found" << endl;
            break;
        }
        case 12:
        {
            cout << "x <- ";
            int x;
            cin >> x;
            bool found = driver->recursiveSearch(head, x);
            if (found)
                cout << "Found " << x << endl;
            else
                cout << x << " not found" << endl;
            break;
        }
        case -1:
            return 0;
        }
    }
    return 0;
}