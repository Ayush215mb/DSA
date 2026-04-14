#include <iostream>
#include <queue>

using namespace std;

int main()
{
    // creation
    priority_queue<int> pq;

    // max-heap -> max value -> Highest Priority

    pq.push(10); // 10
    pq.push(25); // 25 10
    pq.push(55); // 55 25 10
    pq.push(21); // 55 25 21 10

    // top element -> highest priority element -> highest value
    cout << pq.top() << endl;

    // pop -> highest priority element
    pq.pop(); // pops 55

    // 25 21 10
    cout << pq.top() << endl; // 25

        return 0;
}