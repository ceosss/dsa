#include <iostream>
using namespace std;

class Stack
{
public:
    int data;
    Stack *next;
    void push(int);
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
