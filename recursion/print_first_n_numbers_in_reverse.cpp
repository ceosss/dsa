#include <iostream>
using namespace std;

void printFirstNNumbersInReverse(int n)
{
    if (n > 0)
    {
        cout << n << " ";
        printFirstNNumbersInReverse(n - 1);
    }
}

int main()
{
    cout << "print first n numbers in reverse" << endl;
    int n;
    cout << "n <- ";
    cin >> n;
    printFirstNNumbersInReverse(n);
    return 0;
}