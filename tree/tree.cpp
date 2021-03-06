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
        cout << "2. Inorder traversal" << endl;
        cout << "3. Preorder traversal" << endl;
        cout << "4. Postorder traversal" << endl;
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
        case 2:
        {
            driver->inorder(root);
            cout << endl;
            break;
        }
        case 3:
        {
            driver->preorder(root);
            cout << endl;
            break;
        }
        case 4:
        {
            driver->postorder(root);
            cout << endl;
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