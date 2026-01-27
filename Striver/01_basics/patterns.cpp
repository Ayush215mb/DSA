#include <iostream>

using namespace std;

void pattern_one(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << " * ";
        }
        cout << endl;
    }
}

void pattern_two(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
}

void pattern_three(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << j;
        }
        cout << endl;
    }
}

void pattern_four(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << i;
        }
        cout << endl;
    }
}

void pattern_five(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = i; j <= n; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
}

void pattern_six(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n - i + 1; j++)
        {
            cout << j;
        }
        cout << endl;
    }
}

void pattern_seven(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < (n - i) + 1; j++)
        {
            cout << " ";
        }

        for (int k = 0; k < (i * 2) + 1; k++)
        {
            cout << "*";
        }
        for (int j = 0; j < (n - i) + 1; j++)
        {
            cout << " ";
        }
        cout << endl;
    }
}

void pattern_eight(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i; j++)
        {
            cout << " ";
        }

        for (int k = 0; k < (2 * n) - ((2 * i) + 1); k++)
        {
            cout << "*";
        }
        for (int j = 0; j < i; j++)
        {
            cout << " ";
        }
        cout << endl;
    }
}

void pattern_nine(int n)
{
    pattern_seven(n);
    pattern_eight(n);
}

void pattern_ten(int n)
{
    for (int i = 0; i < (2 * n) - 1; i++)
    {
        int stars = i;
        if (i > n)
            stars = (2 * n) - i;
        for (int j = 0; j < stars; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
}

void pattern_eleven(int n)
{
    int start;

    for (int i = 0; i < n; i++)
    {
        if (i % 2 == 0)
            start = 1;
        else
            start = 0;

        for (int j = 0; j <= i; j++)
        {
            cout << start;
            start = 1 - start;
        }
        cout << endl;
    }
}

void pattern_twelve(int n)
{
    int space = 2 * (n - 1);

    for (int i = 0; i < n; i++)
    {
        // numbers
        for (int j = 0; j <= i; j++)
        {
            cout << j;
        }
        // space
        for (int k = 0; k <= space; k++)
        {
            cout << " ";
        }
        // reverse numbers
        for (int j = i; j >= 0; j--)
        {
            cout << j;
        }
        cout << endl;
        space -= 2;
    }
}

int main()
{
    int N;

    cout << "Enter the number:";
    cin >> N;

    pattern_twelve(N);
    return 0;
}