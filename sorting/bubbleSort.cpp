#include <iostream>

using namespace std;

// time complexity -> o(N^2) -> worst and avg case
// o(N) -> best case
int main()
{
    int n;

    cin >> n;

    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    // bubble sort
    for (int i = n - 1; i >= 0; i--)
    {
        int didSwap = 0;
        for (int j = 0; j <= i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
                didSwap = 1;
            }
        }
        if (didSwap == 0)
        {
            break;
        }
        cout << "runds" << endl;
    }

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}