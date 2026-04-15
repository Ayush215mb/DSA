#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

void printDouble(int a)
{
    cout << 2 * a << " ";
}

bool checkEven(int a)
{
    return a % 2 == 0;
}

int main()
{
    vector<int> arr(5);

    arr[0] = 10;
    arr[2] = 30;
    arr[1] = 20;
    arr[3] = 40;
    arr[4] = 50;

    for_each(arr.begin(), arr.end(), printDouble);

    cout << endl;

    int target = 40;
    // or we can directly write auto if we don't know what will it return
    vector<int>::iterator it = find(arr.begin(), arr.end(), target);

    cout << *it << endl;

    // returns 0 if not found
    vector<int>::iterator it2 = find(arr.begin(), arr.end(), 100);

    cout << *it2 << endl;

    arr[0] = 11;

    // returns iterator of the first element which meet the criteria
    auto it3 = find_if(arr.begin(), arr.end(), checkEven);

    cout << *it3 << endl;

    // return the number of time the number is present
    int result = count(arr.begin(), arr.end(), 11);

    cout << result << endl;

    // returns the number of times the element is meeting the criteria, 4 even number in this case
    result = count_if(arr.begin(), arr.end(), checkEven);

    cout << result << endl;

    // to sort the data
    sort(arr.begin(), arr.end());

    // to reverse
    reverse(arr.begin(), arr.end());

    cout << "before shiftig: ";
    for (int a : arr)
    {
        cout << a << " ";
    }
    cout << endl;
    // rotate
    rotate(arr.begin(), arr.begin() + 3, arr.end());

    cout << "After shifting: ";
    for (int a : arr)
    {
        cout << a << " ";
    }

    // unique -> removes duplciate elements from sorted array

    // partition -> will partition the array based on passed criteria
    return 0;
}