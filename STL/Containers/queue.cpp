#include <iostream>
#include <queue>
using namespace std;

int main()
{
    // creation
    queue<int> q;

    // insertion: always insert at the last
    q.push(10); // 10
    q.push(20); // 10 20
    q.push(30); // 10 20 30
    q.push(40); // 10 20 30 40

    cout << q.size() << endl;

    // pop: always remove the first element
    q.pop(); // 20 30 40

    // empty
    if (q.empty() == true)
    {
        cout << "it is empty" << endl;
    }
    else
    {
        cout << "it is not empty" << endl;
    }

    // front and back
    cout << q.front() << endl;
    cout << q.back() << endl;

    queue<int> first;
    queue<int> second;

    first.push(10);
    first.push(20);

    second.push(100);
    second.push(200);

    first.swap(second);

    cout << first.front();

    // iterator not possible

    return 0;
}