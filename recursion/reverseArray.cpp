#include <iostream>

using namespace std;

void printArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}
// using twp pointer
void rev(int arr[], int f, int l)
{
    if (f >= l)
    {
        return;
    }
    swap(arr[f], arr[l]);
    rev(arr, f + 1, l - 1);
}

// using single pointer
void rev2(int i, int arr[], int n)
{
    if (i >= n / 2)
    {
        return;
    }
    swap(arr[i], arr[n - i - 1]);
    rev2(i + 1, arr, n);
}

int main()
{
    int arr[5] = {1, 2, 3, 4, 5};
    printArray(arr, 5);
    rev(arr, 0, 4);
    rev2(0, arr, 5);
    printArray(arr, 5);
}