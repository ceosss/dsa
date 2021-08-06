#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    struct Node *next;

    void insert(int n);
    void display();
    void recursiveDisplay(Node *);
    int deleteItem();
    void generateLinkedList(int *, int);
    int countNodes();
    int countNodesRecursively(Node *);
};
Node *head;

void Node::insert(int n)
{
    Node *node = new Node;
    node->data = n;
    node->next = NULL;
    if (head == NULL)
    {
        head = node;
    }
    else
    {
        Node *itr = head;
        while (itr->next)
            itr = itr->next;
        itr->next = node;
    }
}

void Node::display()
{
    Node *itr = head;
    while (itr)
    {
        cout << itr->data << " -> ";
        itr = itr->next;
    }
    cout << "null" << endl;
}

void Node::generateLinkedList(int *a, int n)
{
    Node *tail = head;
    for (int i = 0; i < n; i++)
    {
        Node *newNode = new Node;
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
        Node *toDelete = head;
        deleted = toDelete->data;
        head = NULL;
        delete toDelete;
        return deleted;
    }
    else
    {
        Node *itr = head;
        Node *toDelete;
        while (itr->next->next)
            itr = itr->next;
        toDelete = itr->next;
        itr->next = NULL;
        deleted = toDelete->data;
        delete toDelete;
        return deleted;
    }
}

void Node::recursiveDisplay(Node *itr)
{
    if (itr)
    {
        cout << itr->data << " ";
        recursiveDisplay(itr->next);
    }
}

int Node::countNodes()
{
    Node *itr = head;
    int count = 0;
    while (itr)
    {
        count++;
        itr = itr->next;
    }
    return count;
}

int Node::countNodesRecursively(Node *itr)
{
    if (itr)
        return countNodesRecursively(itr->next) + 1;
    else
        return 0;
}