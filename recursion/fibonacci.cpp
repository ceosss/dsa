#include <iostream>
using namespace std;

int fibonacci(int n)
{
    if (n < 2)
        return n;
    else
        return fibonacci(n - 1) + fibonacci(n - 2);
}

int main()
{
    cout << "Fibonacci" << endl;

    int n;
    cout << "n <- ";
    cin >> n;

    int result = fibonacci(n);
    cout << result;

    return 0;
}