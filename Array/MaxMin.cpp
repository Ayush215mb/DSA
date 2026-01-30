#include <iostream>

using namespace std;

int getMax(int num[], int n)
{
    // int max = INT_MIN; // -2^31

    // for (int i = 0; i < n; i++)
    // {
    //     if (num[i] > max)
    //     {
    //         max = num[i];
    //     }
    // }

    // return max;

    int maxi = INT_MIN;

    for (int i = 0; i < n; i++)
    {
        // will return the maximum value between two
        maxi = max(maxi, num[i]);
    }
    return maxi;
}

int getMin(int num[], int n)
{
    // int min = INT_MAX; // 2^31

    // for (int i = 0; i < n; i++)
    // {
    //     if (num[i] < min)
    //     {
    //         min = num[i];
    //     }
    // }

    // return min;
    int mini = INT_MAX;

    for (int i = 0; i < n; i++)
    {
        // will return the minimum value between two
        mini = min(mini, num[i]);
    }
    return mini;
}

int main()
{
    cout << "Enter the size of array:";
    int size;
    cin >> size;

    int num[100];

    cout << "Enter " << size << " Elements:";
    for (int i = 0; i < size; i++)
    {

        cin >> num[i];
    }

    cout << "Maximum value is " << getMax(num, size) << endl;
    cout << "Minimum value is " << getMin(num, size) << endl;
    return 0;
}