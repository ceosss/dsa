#include <iostream>
using namespace std;

class Stack
{
public:
    int data;
    Stack *next;
    void push(int);
    void display();
} * head;

void Stack::push(int n)
{
    Stack *newElement = new Stack();
    newElement->data = n;
    if (head == NULL)
    {
        newElement->next = NULL;
        head = newElement;
    }
    else
    {
        newElement->next = head;
        head = newElement;
    }
}

void Stack::display()
{
    if (!head)
    {
        cout << "Stack underflow" << endl;
        return;
    }
    Stack *itr = head;
    while (itr)
    {
        cout << " <- [" << itr->data << "]";
        itr = itr->next;
    }
    cout << endl;
}