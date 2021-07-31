#include <iostream>
#include "linked_list.h"

using namespace std;

int Node::deleteItem()
{
    if (!head)
    {
        cout << "No item to delete" << endl;
        return -1;
    }
    int deleted;
    if (!head->next)
    {
        struct Node *toDelete = head;
        deleted = toDelete->data;
        head = NULL;
        delete toDelete;
        return deleted;
    }
    else
    {
        struct Node *itr = head;
        struct Node *toDelete;
        while (itr->next->next)
            itr = itr->next;
        toDelete = itr->next;
        itr->next = NULL;
        deleted = toDelete->data;
        delete toDelete;
        return deleted;
    }
}