#include <iostream>
using namespace std;

// print from 1 to N but using backtracking
void f(int i, int n)
{
    // 5,5
    if (i < 1)
    {
        return;
    }
    // 4,5; 3,5; 2,5; 1,5
    f(i - 1, n);
    cout << i;
}
// print opposite
void s(int n)
{
    // 5
    if (n < 1)
    {
        return;
    }

    cout << n;
    s(n - 1);
}
int main()
{
    int n;

    cin >> n;
    f(n, n);
    cout << endl;
    s(n);
}