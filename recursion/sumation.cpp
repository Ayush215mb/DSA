// print the sum of N numbers using recursion

#include <iostream>

using namespace std;
// paramterised way
void f(int n, int sum)
{
    if (n < 1)
    {
        cout << sum;
        return;
    }
    f(n - 1, sum + n);
}
// functional recursion
int s(int n)
{
    if (n == 0)
    {
        return 0;
    }
    return n + s(n - 1);
}
int main()
{
    int n;
    cin >> n;
    f(n, 0);
    cout << s(n);
}