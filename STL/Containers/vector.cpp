/*
 vector:

 - A dynamic array that can grow or shrink in size

 - Insertion and remval at the end is efficient

 - Allows fast random access to elements

 - suitable for most scenarios when elements need to be stored in a linear suquence

 - whenever it reaches the end, it create another array with double its size and copies the elements from previous array. all done dynamically at run time.
*/

#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> marks;
    vector<int> miles(10);        // array with size 10
    vector<int> distances(15, 0); // array with size 15 and all elements are intialized as 0

    // .begin() points to the first element of the vector and .end() points to the last elements of the vector
    cout << *miles.begin() << endl;

    marks.push_back(10);
    marks.push_back(20);
    marks.push_back(30);
    marks.push_back(50);

    cout << "Size: " << marks.size() << endl;

    // removing element from the last
    marks.pop_back();
    cout << "new Size: " << marks.size() << endl;

    // return the first element
    cout << "first element of marks:" << marks.front() << endl;
    // return last element
    cout << "Last element of marks:" << marks.back() << endl;

    if (marks.empty() == true)
    {
        cout << "vector is empty" << endl;
    }
    else
    {
        cout << "Vector is not empty" << endl;
    }

    cout << "3rd element of miles:" << miles[4] << endl;

    // there is a condition to access elements using [] brackets that the index must exist. we intialized the array to have 10 index from start so we can access it.
    miles[4] = 101;
    cout << "After changing the value:" << miles[4] << endl;

    // capactiy to take elements
    cout << "capacity of marks to take elements:" << marks.capacity() << " and size of array " << marks.size() << endl;

    marks.push_back(100);
    marks.push_back(202);
    cout << "capacity of marks doubles as the size increases from four(its previous capacity), it becomes: " << marks.capacity() << " and size of array " << marks.size() << endl;

    // reserve
    vector<int> reserve;

    cout << "Capcity of reserve vector is " << reserve.capacity() << endl;

    reserve.reserve(10);

    cout << "We reserved 10 blocks for this vector now " << reserve.capacity() << endl;

    // removes all the elements from vector
    // marks.clear();

    // insert element at any place in the vector
    marks.insert(marks.begin(), 50);
    cout << "first element of mark becomes" << marks[0] << endl;
    cout << "The size of marks becomes" << marks.size() << endl;

    // we can erase elements for a range
    marks.erase(marks.begin(), marks.end() - 2);

    cout << "After erasing the size becomes" << marks.size() << endl;

    vector<int> first;

    vector<int> second;

    first.push_back(10);
    first.push_back(22);
    first.push_back(31);
    first.push_back(51);

    second.push_back(101);
    second.push_back(209);
    second.push_back(311);
    second.push_back(511);

    // swapping contents of the vectors
    first.swap(second);

    for (int i : first)
    {
        cout << i << " ";
    }
    cout << endl;
    for (int i : second)
    {
        cout << i << " ";
    }
    return 0;
}