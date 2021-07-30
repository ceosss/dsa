#include <iostream>
using namespace std;

void insertInSortedArray(int *a, int n, int x)
{
    int i = n;
    while (a[i - 1] > x && i >= 0)
    {
        a[i] = a[i - 1];
        i--;
    }
    a[i] = x;
}

int main()
{
    int n = 3;
    int a[7] = {1, 2, 6};

    cout << "BEFORE" << endl;
    for (int i = 0; i < n; i++)
        cout << a[i] << " ";

    insertInSortedArray(a, n, 3);

    cout << endl
         << "AFTER" << endl;
    for (int i = 0; i < n + 1; i++)
        cout << a[i] << " ";

    return 0;
}