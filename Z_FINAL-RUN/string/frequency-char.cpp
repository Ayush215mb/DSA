// Given a string, count the frequency of each character in it (e.g. "aabbbc" → a:2, b:3, c:1).

#include <iostream>
#include <unordered_map>

using namespace std;

unordered_map<char, int> frequency(const string &s)
{
    unordered_map<char, int> Table;
    for (char c : s)
    {
        Table[c]++;
    }

    return Table;
}

// if the string consists of only small case English letters then we can also solve this qustion using this approach
vector<int> smallcaseFreq(const string &s)
{
    vector<int> freq(26, 0);
    for (char c : s)
    {
        freq[c - 'a']++;
    }

    return freq;
}
int main()
{
    string s = "aabbbc";

    unordered_map<char, int> map = frequency(s);

    for (auto &p : map)
    {
        cout << p.first << " " << p.second << endl;
    }

    cout << endl;
    vector<int> freq = smallcaseFreq(s);

    for (int i = 0; i < 26; i++)
    {
        if (freq[i] > 0)
        { // only print letters that actually appeared
            char c = 'a' + i;
            cout << c << " " << freq[i] << endl;
        }
    }

    char co = 100;

    cout << co;
}
