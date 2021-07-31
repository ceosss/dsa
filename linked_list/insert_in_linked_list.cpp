#include <iostream>
#include "linked_list_adt.h"

void Node::insert(int n)
{
    struct Node *node = new Node;
    node->data = n;
    if (head == NULL)
    {
        head = node;
    }
    else
    {
        struct Node *itr = head;
        while (itr->next)
            itr = itr->next;
        itr->next = node;
    }
    node->next = NULL;
}
