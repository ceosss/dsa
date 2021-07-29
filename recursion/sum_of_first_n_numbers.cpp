#include <iostream>
using namespace std;

int sumOfFirstNNumbers(int n)
{
    if (n == 0)
        return 0;
    else
        return sumOfFirstNNumbers(n - 1) + n;
}

int main()
{
    cout << "sum of first n numbers" << endl;

    int n;
    cout << "n <- ";
    cin >> n;
    int sum = sumOfFirstNNumbers(n);
    cout << sum;
    return 0;
}