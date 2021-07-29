#include <iostream>
using namespace std;

void printFirstNNumbers(int n)
{
    if (n > 0)
    {
        printFirstNNumbers(n - 1);
        cout << n << " ";
    }
}

int main()
{
    cout << "print first n numbers" << endl;
    cout << "n <- ";
    int n;
    cin >> n;
    printFirstNNumbers(n);
    return 0;
}