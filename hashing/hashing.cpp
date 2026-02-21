#include <iostream>

using namespace std;

int main()
{
    int size;
    cin >> size;

    int arr[size];

    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    // precompute(hash array)
    int hash[13] = {0};
    for (int i = 0; i < size; i++)
    {
        hash[arr[i]] += 1;
    }

    int z;
    cin >> z;

    while (z--)
    {
        int number;
        cin >> number;
        // fetch
        cout << hash[number] << endl;
    }
}