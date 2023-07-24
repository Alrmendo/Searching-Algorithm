#include <iostream>
#define MAX 100

using namespace std;

void bubbleSort (int a[], int n)
{
    for (int i = 2; i <= n; ++i)
    {
        for (int j = n; j >= i; --j)
        {
            if (a[j] < a[j - 1])
            {
                swap(a[j], a[j - 1]);
            }
        }
    }
}

int linearSearch(int a[], int n, int key) 
{
    for (int i = 1; i <= n; i++) 
    {
        if (a[i] == key) 
        {
            return i; // Found the key at index i
        }
    }
    return -1; // Key not found in the array
}

void inputArr(int a[], int n)
{
    for (int i = 1; i <= n; ++i)
    {
        cout << "a[" << i << "] = ";
        cin >> a[i];
    }
}

void outputArr(int a[], int n)
{
    for (int i = 1; i <= n; ++i)
    {
        cout << a[i] << " ";
    }
}

int main() {
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;

    int a[MAX];
    cout << "Enter the elements of the array:" << endl;
    inputArr(a, n);
    
    int key;
    cout << "Enter the element to be searched: ";
    cin >> key;

    bubbleSort(a, n);
    cout << "Array after sorted: ";
    outputArr(a, n);
    cout << endl;
    
    int result = linearSearch(a, n, key);
    if (result == -1)
    {
        cout << "Element not found";
    }
    else{
        cout << "Element is found at index " << result;
    }
    return 0;
}

