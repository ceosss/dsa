#include <iostream>
using namespace std;

int main()
{
    cout << "Find single missing elemen 1..n" << endl;

    int a[] = {1, 4, 3, 2, 6, 7};
    int n = 7;

    int originalSum = n * (n + 1) / 2;
    int foundSum = 0;
    for (int i = 0; i < n - 1; i++)
        foundSum += a[i];

    cout << "Missing number is " << originalSum - foundSum;
    return 0;
}