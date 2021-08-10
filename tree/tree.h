#include <iostream>
#include <queue>
using namespace std;
class Tree
{
public:
    Tree *left;
    int data;
    Tree *right;
    void create();
} * root;

Tree *newTreeNode(int n)
{
    Tree *newnode = new Tree();
    newnode->left = NULL;
    newnode->right = NULL;
    newnode->data = n;
    return newnode;
}

void Tree::create()
{
    cout << "Enter root" << endl;
    int n;
    cin >> n;
    Tree *node = newTreeNode(n);
    root = node;
    queue<Tree *> q;
    q.push(node);
    while (!q.empty())
    {
        Tree *t = q.front();
        q.pop();
        int n;
        cout << "Insert to the left of " << t->data << " ?" << endl;
        cin >> n;
        if (n != -1)
        {
            Tree *newnode = newTreeNode(n);
            q.push(newnode);
            t->left = newnode;
        }
        cout << "Insert to the right of " << t->data << " ?" << endl;
        cin >> n;
        if (n != -1)
        {
            Tree *newnode = newTreeNode(n);
            q.push(newnode);
            t->right = newnode;
        }
    }
}
