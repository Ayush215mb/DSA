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

    // min-heap -> minimam value -> highest priority
    priority_queue<int, vector<int>, greater<int>> lpq;

    lpq.push(50); // 50

    lpq.push(100); // 50 100

    lpq.push(20); // 20 50 100

    cout << "min-heap: " << lpq.top() << endl;

    lpq.pop();
    cout << "min-heap after pop: " << lpq.top() << endl;

    return 0;
}