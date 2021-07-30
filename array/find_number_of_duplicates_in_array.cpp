#include <iostream>
using namespace std;

int findNumberOfDuplicatesInAnArray(int *a, int n)
{
    int cache[100] = {0};
    int duplicates = 0;

    for (int i = 0; i < n; i++)
        cache[a[i]]++;
    for (int i = 0; i < 100; i++)
    {
        if (cache[i] > 1)
            duplicates++;
    }
    return duplicates;
}

int main()
{
    cout << "Find number of duplicates in an array" << endl;

    int n = 10;
    int a[] = {1, 2, 4, 5, 2, 6, 8, 8, 3, 6};

    int duplicates = findNumberOfDuplicatesInAnArray(a, n);
    cout << "Number of duplicates " << duplicates << endl;

    return 0;
}