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