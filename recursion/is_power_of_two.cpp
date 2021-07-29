#include <iostream>
using namespace std;

bool isPowerOfTwo(int n)
{
    if (n == 1)
        return 1;
    if (n % 2 != 0 || n == 0)
        return 0;
    return isPowerOfTwo(n / 2);
}

int main()
{
    cout << "is power of 2" << endl;

    int n;
    cout << "n <- ";
    cin >> n;

    bool result = isPowerOfTwo(n);

    if (result)
        cout << "TRUE";
    else
        cout << "FALSE";

    return 0;
}