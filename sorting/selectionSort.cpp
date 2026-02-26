#include <iostream>

using namespace std;

// time complexity -> o(N^2)
void selection_sort(int arr[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        int mmi = i;

        // loop to get the index of the minimum value
        for (int j = i; j < n; j++)
        {
            if (arr[j] < arr[mmi])
            {
                // we got the index of the minimum value
                mmi = j;
            }
        }
        swap(arr[i], arr[mmi]);
    }
}

int main()
{
    int n;

    cin >> n;

    int arr[n];

    // taking input
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    selection_sort(arr, n);

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}