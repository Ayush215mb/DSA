#include <iostream>
#include <vector>
using namespace std;

int betterSol(vector<int> arr, int size)
{

    int largest = arr[0];

    for (int i = 0; i < size - 1; i++)
    {
        if (largest < arr[i])
        {
            largest = arr[i];
        }
    }

    int Slargest = -1;

    for (int i = 0; i < size - 1; i++)
    {
        if (Slargest < arr[i] && arr[i] != largest)
        {
            Slargest = arr[i];
        }
    }

    return Slargest;
}

// Optimal Solutions

int secondLargest(vector<int> arr, int size)
{
    int largest = arr[0];
    int slargest = -1;

    for (int i = 0; i <= size - 1; i++)
    {
        if (arr[i] > largest)
        {
            slargest = largest;
            largest = arr[i];
        }
        else if (arr[i] < largest && arr[i] > slargest)
        {
            slargest = arr[i];
        }
    }

    return slargest;
}

int secondSmallest(vector<int> arr, int size)
{
    int smallest = arr[0];
    int ssmallest = INT_MAX;

    for (int i = 0; i <= size - 1; i++)
    {
        if (arr[i] < smallest)
        {
            ssmallest = smallest;
            smallest = arr[i];
        }
        else if (arr[i] != smallest && arr[i] < ssmallest)
        {
            ssmallest = arr[i];
        }
    }

    return ssmallest;
}
int main()
{
    vector<int> arr = {13, 44, 1, 42, 4};

    int size = 5;

    cout << secondLargest(arr, size) << endl;
    cout << secondSmallest(arr, size) << endl;
    return 0;
}