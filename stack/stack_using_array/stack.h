#include <iostream>
#define MAX 10
using namespace std;

class Stack
{
public:
    int top;
    int a[MAX];
    Stack()
    {
        top = -1;
    }
    void insert(int);
    void display();
    int pop();
    int peek(int);
    int stackTop();
};

void Stack::insert(int n)
{
    if (top == MAX - 1)
    {
        cout << "Stack overflow" << endl;
        return;
    }
    else
    {
        a[++top] = n;
    }
}
void Stack::display()
{
    if (top == -1)
    {
        cout << "Empty Stack" << endl;
        return;
    }
    else
    {
        for (int i = top; i >= 0; i--)
            cout << " <- [" << a[i] << "]";
        cout << endl;
    }
}

int Stack::pop()
{
    if (top == -1)
    {
        cout << "Empty Stack" << endl;
        return -1;
    }
    else
    {
        int popped = a[top--];
        return popped;
    }
}

int Stack::peek(int n)
{
    if (n < 0 || n > top)
    {
        cout << "Invalid index" << endl;
        return -1;
    }
    else
    {
        //1 2 3 4 5 , n=4
        return a[top - n];
    }
}

int Stack::stackTop()
{
    if (top == -1)
    {
        cout << "Empty stack" << endl;
        return -1;
    }
    else
    {
        return a[top];
    }
}