#include <iostream>
#define MAX 100

using namespace std;

void selectionSort(int a[], int n)
{
    for (int i = 1; i <= n; ++i)
    {
        int minIdx = i;
        int minVal = a[i];
        for (int j = i + 1; j <= n; ++j)
        {
            if (a[j] < minVal)
            {
                minIdx = j;
                minVal = a[j];
            }
        }
        swap (a[minIdx], a[i]);
    }
}

void print3largest(int a[], int n)
{
    selectionSort(a, n);
    int check = 0;
    int count = 1;
    
    for (int i = n; i >= 1; --i)
    {
        if (count < 4)
        {
            if (count != a[i])
            {
                cout << a[i] << " ";
                check = a[i];
                ++count;
            }
        }
        else{
            break;
        }
    }
}

void inputArr(int a[], int n)
{
    for (int i = 1; i <= n; ++i)
    {
        cout << "a[" << i << "] = ";
        cin >> a[i];
    }
}

int main ()
{
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;

    int a[MAX];
    cout << "Enter the elements of the array:" << endl;
    inputArr(a, n);

    cout << "Three largest numbers in the array is : ";
    print3largest(a, n);
    
    return 0;
}