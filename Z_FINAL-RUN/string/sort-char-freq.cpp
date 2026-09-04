#include <iostream>
#include <map>

using namespace std;

string frequencySort(string s) {
  unordered_map<char, int> mp;
  multimap<int, char> r;
  string ss = "";

  for (auto a : s)
    mp[a]++;

  for (auto a : mp) {
    cout << a.second << " " << a.first << endl;
    r.insert({a.second, a.first});
  }
  cout << endl;

  for (auto it = r.rbegin(); it != r.rend(); ++it) {
    cout << it->first << " " << it->second << endl;

    // cout << string(it->first, it->second) << endl;
    ss += string(it->first, it->second);
  }

  return ss;
}

int main() {
  string s = "hello";

  string ans = frequencySort(s);

  cout << ans;
}
