#include <iostream>
using namespace std;

void reverseAnArray(int *a, int n)
{
    int i = 0;
    int j = n - 1;

    while (i < j)
    {
        int temp = a[i];
        a[i] = a[j];
        a[j] = temp;
        i++;
        j--;
    }
}

int main()
{
    int n = 10;
    int a[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    reverseAnArray(a, n);

    for (int i = 0; i < n; i++)
        cout << a[i] << " ";
    return 0;
}