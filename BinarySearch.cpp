#include <iostream>
#define MAX 100

using namespace std;

void insertionSort(int a[], int n)
{
    for (int i = 2; i <= n; ++i)
    {
        int v = a[i];
        int j = i - 1;
        while (j > 0 && a[j] > v)
        {
            a[j + 1] = a[j];
            --j;
        }
        a[j + 1] = v;
    }
}

int binarySearch(int a[], int x, int low, int high)
{
    // Repeat until the pointers low and high meet each other
    while (low <= high) {
        int mid = low + (high - low) / 2;
        if (a[mid] == x)
        {
            return mid;
        }

        if (a[mid] < x)
        {
            low = mid + 1;
        }
        else {
            high = mid - 1;
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
    
    int x;
    cout << "Enter the element to be searched: ";
    cin >> x;

    insertionSort(a, n);
    cout << "Array after sorted: ";
    outputArr(a, n);
    cout << endl;
    
    int result = binarySearch(a, x, 1, n);
    if (result == -1)
    {
        cout << "Element not found";
    }
    else{
        cout << "Element is found at index " << result;
    }
    return 0;
}
