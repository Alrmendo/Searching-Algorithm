#include <iostream>
#define MAX 100

using namespace std;

void insertionSort(int a[], int n)
{
    for (int i = 2; i <= n; ++i)
    {
        int key = a[i];
        int j = i - 1;
        while (j > 0 && a[j] > key)
        {
            a[j + 1] = a[j];
            --j;
        }
        a[j + 1] = key;
    }
}

void findMissing(int a[], int n)
{
    insertionSort(a, n);

    int missingNumber = 1;
    for (int i = 1; i <= n; ++i)
    {
        while (missingNumber < a[i])
        {
            cout << missingNumber << " ";
            ++missingNumber;
        }
        missingNumber = a[i] + 1;
    }

    // while (missingNumber <= n)
    // {
    //     cout << missingNumber << " ";
    //     ++missingNumber;
    // }

    cout << endl;
}

void inputArr(int a[], int n)
{
    for (int i = 1; i <= n; ++i)
    {
        cout << "a[" << i << "] = ";
        cin >> a[i];
    }
}

int main()
{
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;

    int a[MAX];
    cout << "Enter the elements of the array:" << endl;
    inputArr(a, n);

    cout << "Missing numbers in the array are: ";
    findMissing(a, n);

    return 0;
}
