// Given two strings s and t, return true if t is an anagram of s, and false
// otherwise.
#include <iostream>
#include <unordered_map>
using namespace std;

bool isAnagram(string &s, string &t) {
  if (s.length() != t.length()) {
    return false;
  }

  unordered_map<char, int> map;

  for (char c : s) {
    map[c]++;
  }

  for (auto c : t) {
    cout << c << endl;
    // find(key) = found -> returns the iterator of where it was found
    // = not found -> returns the iterator of last entry
    if (map.find(c) == map.end() || map[c] == 0) {
      return false;
    }
    map[c]--;
  }

  return true;
}

int main() {
  string s = "anagram";
  string t = "nagaram";

  isAnagram(s, t);
}
