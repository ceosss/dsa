#include <iostream>
#include "linked_list_adt.h"
using namespace std;

void Node::generateLinkedList(int *a, int n)
{
    struct Node *tail = head;
    for (int i = 0; i < n; i++)
    {
        struct Node *newNode = new Node;
        newNode->data = a[i];
        newNode->next = NULL;
        if (!head)
        {
            head = newNode;
            tail = head;
        }
        else
        {
            tail->next = newNode;
            tail = tail->next;
        }
    }
}