// double ended queue
// similar to vectors but allows efficient insertion at both ends.

// The primary difference lies in memory layout and insertion performance: std::vector stores elements in a single contiguous block of memory, offering faster indexed access but poor performance for insertions/deletions at the front, whereas

// std::deque stores elements in separate fixed-size chunks, allowing efficient O(1) insertion and deletion at both the front and back but slightly slower indexed access due to indirection.

// suitable when elements need to be inserted or removed frequently from the front or back

#include <iostream>
#include <queue>
using namespace std;

int main()
{

    deque<int> dq;

    dq.push_back(10); // 10
    dq.push_back(20); // 10 20

    dq.push_front(50);  // 50 10 20
    dq.push_front(100); // 100 50 10 20

    cout << dq.size() << endl;

    cout << dq.front() << endl;

    cout << dq.back() << endl;

    deque<int>::iterator it = dq.begin();

    while (it != dq.end())
    {
        cout << *it << " ";

        it++;
    }

    return 0;
}