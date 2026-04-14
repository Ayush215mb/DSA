#include <iostream>
#include <list>

using namespace std;

int main()
{
    // creation
    list<int> mylist;

    // insertion at the end
    mylist.push_back(10); // 10
    mylist.push_back(20); // 10 20
    // insertion at the front
    mylist.push_front(30); // 30 10 20
    mylist.push_front(50); // 50 30 10 20

    mylist.pop_back();  // 50 30 10
    mylist.pop_front(); // 30 10

    cout << mylist.size() << endl;

    // // clears all
    // mylist.clear();

    // if (mylist.empty() == true)
    // {
    //     cout << "list is empty";
    // }
    // else
    // {
    //     cout << "List is not empty";
    // }
    mylist.push_back(5); // 30 10 5

    cout << mylist.front() << endl;
    cout << mylist.back() << endl;

    list<int>::iterator it = mylist.begin();

    mylist.push_front(10); // 10 30 10 5
    cout << "before removing ";
    while (it != mylist.end())
    {
        cout << *it << " ";
        it++;
    }

    // removes 10 from all places
    mylist.remove(10); // 30 5
    cout << endl
         << "after removing ";

    list<int>::iterator it2 = mylist.begin();
    while (it2 != mylist.end())
    {
        cout << *it2 << " ";
        it2++;
    }

    cout << endl;

    list<int> first;
    list<int> second;

    first.push_back(10);
    first.push_back(20);
    first.push_back(11);
    first.push_back(24);

    second.push_back(100);
    second.push_back(0);
    second.push_back(99);
    second.push_back(904);

    first.swap(second);

    list<int>::iterator it3 = first.begin();

    while (it3 != first.end())
    {
        cout << *it3 << " ";
        it3++;
    }

    cout << endl;

    // insert
    mylist.insert(mylist.begin(), 101); // 101 30 5

    list<int>::iterator it4 = mylist.begin();
    while (it4 != mylist.end())
    {
        cout << *it4 << " ";
        it4++;
    }

    return 0;
}