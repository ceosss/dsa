class Node
{
private:
    int data;
    struct Node *next;

public:
    void insert(int n);
    void display();
    int deleteItem();
    void generateLinkedList(int *, int);
};
struct Node *head;