/*
Set :

 - sorted collection of unique elements.
 - elements are stored in sorted order and duplicates are automatically removed.
 - provides effiecinet insertion, deletion, and search operations.

*/

#include <iostream>
#include <set>
#include <unordered_set>
using namespace std;

int main()
{
    set<int> ost;
    unordered_set<int> uset;

    ost.insert(10);
    ost.insert(30);
    ost.insert(20);
    ost.insert(40);

    uset.insert(10);
    uset.insert(30);
    uset.insert(20);
    uset.insert(40);

    set<int>::iterator it = ost.begin();

    cout << "ordered set: ";
    while (it != ost.end())
    {
        cout << *it << " ";
        it++;
    }

    unordered_set<int>::iterator it2 = uset.begin();

    cout << "\nUnordered set: ";
    while (it2 != uset.end())
    {
        cout << *it2 << " ";
        it2++;
    }

    cout << endl
         << uset.size();

    // uset.clear();

    // find(key) -> returns the iterator of key if found or end() if not found

    if (uset.find(10) != uset.end())
    {
        cout << "\n10 found\n";
    }
    else
    {
        cout << "10 not found";
    }

    if (uset.find(100) != uset.end())
    {
        cout << "100  found\n";
    }
    else
    {
        cout << "100 not found\n";
    }

    // count= 1 if fpund and 0 if not found

    if (uset.count(40) == 1)
    {
        cout << "40 found\n";
    }
    if (uset.count(110) == 0)
    {
        cout << "110 not found\n";
    }

    return 0;
}