// print the factorial of n

#include <iostream>

using namespace std;
// paramterised way
void f(int n, int fact)
{
    if (n < 1)
    {
        cout << fact;
        return;
    }
    f(n - 1, fact * n);
}
// functional recursion
int s(int n)
{
    if (n == 0)
    {
        return 1;
    }
    return n * s(n - 1);
}
int main()
{
    int n;
    cin >> n;
    f(n, 1);
    cout << endl;
    cout << s(n);
}