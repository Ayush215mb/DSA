#include <iostream>
using namespace std;

int main()
{
    string s;
    cin >> s;

    int hash[256] = {0};

    for (int i = 0; i < s.size(); i++)
    {

        hash[s[i]]++;
    }

    int num;
    cin >> num;
    while (num--)
    {
        char c;
        cin >> c;

        cout << hash[c] << endl;
    }
}