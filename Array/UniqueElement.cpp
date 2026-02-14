#include <iostream>

using namespace std;

int uniqueElement(int *arr, int size)
{
    int ans = 0;

    for (int i = 0; i < size; i++)
    {
        ans = ans ^ arr[i];
    }
    return ans;
}

int main()
{
    int arr[5] = {1, 1, 4, 4, 3};

    int unique = uniqueElement(arr, 5);

    cout << unique;
}