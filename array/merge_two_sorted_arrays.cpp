#include <iostream>
using namespace std;

int *mergeTwoSortedArrays(int *a, int n, int *b, int m)
{
    if (n == 0)
        return b;
    if (m == 0)
        return a;
    int i = 0, j = 0, k = 0;
    int *c = new int[m + n];
    while (i < n && j < m)
    {
        if (a[i] < b[j])
            c[k++] = a[i++];
        else if (b[j] < a[i])
            c[k++] = b[j++];
        else
        {
            c[k++] = a[i++];
            c[k++] = b[j++];
        }
    }
    while (i < n)
        c[k++] = a[i++];
    while (j < m)
        c[k++] = b[j++];

    return c;
}

int main()
{
    cout << "Merge two sorted arrays" << endl;

    int a[] = {1, 4, 7, 10, 11, 12, 15};
    int n = 7;
    int b[] = {2, 4, 6, 7};
    int m = 4;

    int *c = mergeTwoSortedArrays(a, n, b, m);

    for (int i = 0; i < m + n; i++)
        cout << c[i] << " ";

    return 0;
}