#include <iostream>
using namespace std;

int factorial(int n)
{
    if (n == 1)
        return 1;
    else
        return factorial(n - 1) * n;
}

int main()
{
    cout << "factorial";

    int n;
    cout << "n <- ";
    cin >> n;
    int result = factorial(n);
    cout << result;

    return 0;
}