#include <iostream>
using namespace std;

bool checkIfArrayIsSorted(int *a, int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        if (a[i] > a[i + 1])
            return false;
    }
    return true;
}

int main()
{
    int n = 10;
    int a[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    bool sorted = checkIfArrayIsSorted(a, n);
    if (sorted)
        cout << "Sorted" << endl;
    else
        cout << "Unsorted" << endl;
    return 0;
}