// print in terms of N to 1

#include <iostream>

using namespace std;

void f(int n)
{
    if (n == 0)
    {
        return;
    }
    cout << n;

    f(n - 1);
}

void s(int i, int n)
{
    if (i < 1)
    {
        return;
    }
    cout << i;
    s(i - 1, n);
}
int main()
{
    int n;
    cin >> n;

    // f(n);
    s(n, n);
}