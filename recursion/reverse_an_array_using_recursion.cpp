#include <iostream>
using namespace std;

void reverseAnArrayUsingRecursion(int *a, int l, int h)
{
    if (l > h)
        return;
    else
    {
        int temp = a[l];
        a[l] = a[h];
        a[h] = temp;
        return reverseAnArrayUsingRecursion(a, l + 1, h - 1);
    }
}

int main()
{
    int a[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    int n = 10;
    reverseAnArrayUsingRecursion(a, 0, n - 1);
    for (int i = 0; i < n; i++)
        cout << a[i] << " ";
    return 0;
}