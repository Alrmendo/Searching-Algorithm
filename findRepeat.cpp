#include <iostream>
#define MAX 100

using namespace std;

void insertionSort(int a[], int n) 
{
    for (int i = 2; i <= n; i++) 
    {
        int v = a[i];
        int j = i - 1;
        while (j > 0 && a[j] > v) 
        {
            a[j + 1] = a[j];
            j--;
        }
        a[j + 1] = v;
    }
}

int findFirstRepeatingElement(int a[], int n) 
{
    for (int i = 1; i < n; i++) 
    {
        if (a[i] == a[i + 1]) 
        {
            return a[i];
        }
    }
    return -1;
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
    inputArr(a, n);

    insertionSort(a, n);

    int firstRepeatingElement = findFirstRepeatingElement(a, n);

    if (firstRepeatingElement != -1) 
    {
        cout << "The first repeating element is: " << firstRepeatingElement << endl;
    } 
    else {
        cout << "No repeating element found in the array." << endl;
    }

    return 0;
}
