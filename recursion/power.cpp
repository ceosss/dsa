#include <iostream>
using namespace std;

int power(int n, int m)
{
    if (m == 0)
        return 1;
    else
        return power(n, m - 1) * n;
}

int main()
{
    cout << "power n^m" << endl;

    int n, m;
    cout << "n <- ";
    cin >> n;
    cout << "m <- ";
    cin >> m;

    int result = power(n, m);
    cout << result;
    return 0;
}