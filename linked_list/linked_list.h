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
    int sumOfElements();
    int sumOfElementsRecursively(Node *);
    int maxElement();
    int searchElement(int);
    bool recursiveSearch(Node *, int);
    void insertAtPosition(int, int);
    int deleteAtPosition(int);
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

int Node::sumOfElements()
{
    int sum = 0;
    Node *itr = head;
    while (itr)
    {
        sum += itr->data;
        itr = itr->next;
    }
    return sum;
}

int Node::sumOfElementsRecursively(Node *itr)
{
    if (itr)
        return sumOfElementsRecursively(itr->next) + itr->data;
    else
        return 0;
}
int Node::maxElement()
{
    int max = INT_MIN;
    Node *itr = head;
    while (itr)
    {
        if (itr->data > max)
            max = itr->data;
        itr = itr->next;
    }
    return max;
}
int Node::searchElement(int n)
{
    Node *itr = head;
    for (int i = 0; itr != NULL; i++, itr = itr->next)
    {
        if (itr->data == n)
            return i;
    }
    return -1;
}

bool Node::recursiveSearch(Node *itr, int x)
{
    if (!itr)
        return false;
    if (itr->data == x)
        return true;
    return recursiveSearch(itr->next, x);
}

void Node::insertAtPosition(int n, int pos)
{
    // pos - 0  1  2  3  4  5  6
    // ele -  1  2  3  4  5  6
    Node *newnode = new Node();
    newnode->data = n;
    if (pos == 0)
    {
        newnode->next = head;
        head = newnode;
    }
    else
    {
        Node *itr = head;
        for (int i = 0; i < pos - 1; i++)
            itr = itr->next;
        if (itr->next)
        {
            newnode->next = itr->next;
            itr->next = newnode;
        }
        else
        {
            itr->next = newnode;
            newnode->next = NULL;
        }
    }
}

int Node::deleteAtPosition(int pos)
{
    // pos 0  1  2  3  4
    // ele 0  1  2  3  4
    Node *toDelete;
    Node *itr = head;
    int deleteData;
    if (pos == 0)
    {
        toDelete = head;
        head = head->next;
    }
    else
    {
        for (int i = 0; i < pos - 1; i++)
            itr = itr->next;
        if (itr->next->next)
        {
            toDelete = itr->next;
            itr->next = itr->next->next;
        }
        else
        {
            toDelete = itr->next;
            itr->next = NULL;
        }
    }
    deleteData = toDelete->data;
    delete toDelete;
    return deleteData;
}