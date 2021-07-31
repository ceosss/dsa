#include <iostream>
#include "linked_list.h"
using namespace std;

void Node::display()
{
    struct Node *itr = head;
    while (itr)
    {
        cout << itr->data << " -> ";
        itr = itr->next;
    }
    cout << "null" << endl;
}