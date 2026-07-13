#include <iostream>
#include <vector>
#include <set>
using namespace std;

// remove duplicates from sorted array and return the number of unique elements

// TC = o(N log N+ N)
int usingSet(vector<int> arr, int size)
{
    set<int> unique;
    for (int i = 0; i < size; i++)
    {
        unique.insert(arr[i]);
    }

    int index = 0;

    for (auto it : unique)
    {
        arr[index] = it;
        index++;
    }

    return index;
}

int twoPointer(vector<int> arr, int size)
{
    int i = 0;
    for (int j = 1; j < size; j++)
    {
        if (arr[i] != arr[j])
        {
            arr[i + 1] = arr[j];
            i++;
        }
    }

    return i + 1;
}

int main()
{

    vector<int> arr = {10, 22, 10, 10, 22, 212, 202, 202, 212};

    cout << twoPointer(arr, arr.size());
}