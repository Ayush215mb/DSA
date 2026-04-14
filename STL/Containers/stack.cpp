#include <iostream>
#include <stack>

using namespace std;

int main()
{
    stack<int> st;

    // push: add to the last
    st.push(10); // 10
    st.push(20); // 10 20
    st.push(30); // 10 20 30
    st.push(40); // 10 20 30 40

    cout << st.size() << endl;

    // pop: removes the last added element
    st.pop(); // 10 20 30

    // top: shows the last added element
    cout << st.top() << endl; // 30

    if (st.empty())
    {
        cout << "Stack is empty" << endl;
    }
    else
    {
        cout << "Stack is not empty" << endl;
    }

    // iteration not possible

    return 0;
}