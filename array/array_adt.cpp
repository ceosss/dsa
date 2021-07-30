#include <iostream>
using namespace std;

class Array
{
private:
    int *a;
    int length;
    int size;

public:
    Array()
    {
        a = new int[10];
        length = 0;
        size = 10;
    }
    Array(int s)
    {
        a = new int[s];
        length = 0;
        size = s;
    }
    ~Array()
    {
        delete[] a;
    }
    int getLength() { return length; }
    void insert(int n)
    {
        if (length < size)
            a[length++] = n;
        else
            cout << "Array overflow" << endl;
    }
    void display()
    {
        cout << "[ ";
        for (int i = 0; i < length; i++)
        {
            cout << " " << a[i] << " ";
        }
        cout << " ]";
        cout << endl;
    }
    int deleteItemWithIndex(int index)
    {
        if (index < 0 || index >= length)
        {
            cout << "Invalid index" << endl;
            return -1;
        }
        else
        {
            int deleted = a[index];
            for (int i = index; i < length - 1; i++)
            {
                a[i] = a[i + 1];
            }
            length--;
            return deleted;
        }
    }
    int linearSearch(int key)
    {
        for (int i = 0; i < length; i++)
        {
            if (a[i] == key)
                return i;
        }
        return -1;
    }
    int binarySearch(int l, int h, int key)
    {
        if (l <= h)
        {
            int mid = (l + h) / 2;
            if (a[mid] == key)
                return mid;
            if (a[mid] < key)
                return binarySearch(mid + 1, h, key);
            if (a[mid] > key)
                return binarySearch(l, mid - 1, key);
        }
        return -1;
    }
    int max()
    {
        if (length == 0)
            return -1;
        int max = INT_MIN;
        for (int i = 0; i < length; i++)
        {
            if (a[i] > max)
                max = a[i];
        }
        return max;
    }
    int min()
    {
        if (length == 0)
            return -1;
        int min = INT_MAX;
        for (int i = 0; i < length; i++)
        {
            if (a[i] < min)
                min = a[i];
        }
        return min;
    }
    int sum()
    {
        int sum = 0;
        for (int i = 0; i < length; i++)
            sum += a[i];
        return sum;
    }
    int sumUsingRecursion(int i)
    {
        if (i == length)
            return 0;
        return sumUsingRecursion(i + 1) + a[i];
    }
    double average()
    {
        if (length == 0)
            return 0;
        int sum = 0;
        for (int i = 0; i < length; i++)
            sum += a[i];

        return sum / (double)length;
    }
    void sort()
    {
        for (int i = 0; i < length - 1; i++)
        {
            for (int j = 0; j < length - i - 1; j++)
            {
                if (a[j] > a[j + 1])
                {
                    int temp = a[j];
                    a[j] = a[j + 1];
                    a[j + 1] = temp;
                }
            }
        }
    }
};

int main()
{
    Array *a = new Array(10);

    cout << "-------------" << endl;
    cout << "Array ADT" << endl;
    cout << "-------------" << endl;

    while (true)
    {
        cout << "1. Insert an element" << endl;
        cout << "2. Display the array" << endl;
        cout << "3. Delete at the given index" << endl;
        cout << "4. Linear Search" << endl;
        cout << "5. Binary Search" << endl;
        cout << "6. Max" << endl;
        cout << "7. Min" << endl;
        cout << "8. Sum" << endl;
        cout << "9. Sum using recursion" << endl;
        cout << "10. Average" << endl;
        cout << "11. Sort" << endl;
        cout << "-1. Quit" << endl;
        int choice;
        cin >> choice;
        int input;
        switch (choice)
        {
        case 1:
        {
            cout << "n <- ";
            cin >> input;
            a->insert(input);
            break;
        }
        case 2:
        {
            a->display();
            break;
        }
        case 3:
        {
            cout << "index <- ";
            cin >> input;
            int deleted = a->deleteItemWithIndex(input);
            if (deleted != -1)
                cout << deleted << " deleted" << endl;
            break;
        }
        case 4:
        {
            cout << "key <- ";
            cin >> input;
            int found = a->linearSearch(input);
            if (found != -1)
                cout << "Found " << input << " at " << found << " index" << endl;
            else
                cout << input << " not found" << endl;
            break;
        }
        case 5:
        {
            cout << "key <- ";
            cin >> input;
            int result = a->binarySearch(0, a->getLength() - 1, input);

            if (result != -1)
            {
                cout << "Found " << input << " at " << result << " index" << endl;
            }
            else
            {
                cout << input << " not found" << endl;
            }
            break;
        }
        case 6:
        {
            cout << a->max() << endl;
            break;
        }
        case 7:
        {
            cout << a->min() << endl;
            break;
        }
        case 8:
        {
            cout << a->sum() << endl;

            break;
        }
        case 9:
        {
            cout << a->sumUsingRecursion(0) << endl;
            break;
        }
        case 10:
        {
            cout << a->average() << endl;
            break;
        }
        case 11:
        {
            a->sort();
            a->display();
            break;
        }
        case -1:
        {
            return 0;
        }
        default:
        {
            cout << "Invalid choice" << endl;
            break;
        }
        }
    }
    return 0;
}