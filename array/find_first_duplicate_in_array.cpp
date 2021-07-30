#include <iostream>
using namespace std;

int findDuplicateInAnArrayInNSquare(int *a, int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (a[i] == a[j])
                return a[i];
        }
    }
    return -1;
}

int findDuplicateInAnArrayInN(int *a, int n)
{
    int cache[100] = {0};
    for (int i = 0; i < n; i++)
        cache[a[i]]++;
    for (int i = 0; i < 100; i++)
    {
        if (cache[i] > 1)
            return i;
    }
    return -1;
}

int main()
{
    cout << "Find first duplicaate in an array" << endl;

    int n = 6;
    int a[] = {1, 2, 3, 4, 5, 5};
    int result;

    result = findDuplicateInAnArrayInNSquare(a, n);
    if (result == -1)
        cout << "No duplicates found" << endl;
    else
        cout << result << " has a duplicate" << endl;

    result = findDuplicateInAnArrayInN(a, n);
    if (result == -1)
        cout << "No duplicates found" << endl;
    else
        cout << result << " has a duplicate" << endl;

    return 0;
}