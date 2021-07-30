#include <iostream>
using namespace std;

void separatePositiveAndNegative(int *a, int n)
{
    int i = 0, j = n - 1;
    while (i < j)
    {
        while (a[i] < 0)
            i++;
        while (a[j] > 0)
            j--;
        if (i < j)
        {
            int temp = a[i];
            a[i] = a[j];
            a[j] = temp;
            i++;
            j--;
        }
    }
}

int main()
{
    cout << "separate positive and negative numbers from an array" << endl;

    int n = 5;
    int a[] = {1, -1, 3, 2, -4};

    cout << "Before" << endl;
    for (int i = 0; i < n; i++)
        cout << a[i] << " ";

    separatePositiveAndNegative(a, n);

    cout << endl
         << "After" << endl;
    for (int i = 0; i < n; i++)
        cout << a[i] << " ";
    return 0;
}