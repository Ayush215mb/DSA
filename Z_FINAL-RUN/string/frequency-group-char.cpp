/**
 * You are given a string s consisting of lowercase English letters.

The frequency group for a value k is the set of characters that appear exactly k times in s.

The majority frequency group is the frequency group that contains the largest number of distinct characters.

Return a string containing all characters in the majority frequency group, in any order. If two or more frequency groups tie for that largest size, pick the group whose frequency k is larger.
 */
#include <iostream>
#include <unordered_map>
using namespace std;
class Solution
{
public:
    unordered_map<char, int> frequency(const string &s)
    {
        unordered_map<char, int> Table;
        for (char c : s)
        {
            Table[c]++;
        }

        return Table;
    }

    string majorityFrequencyGroup(string s)
    {
        unordered_map<int, vector<char>> map;

        unordered_map<char, int> freq = frequency(s);

        for (auto &entry : freq)
        {
            char c = entry.first; // the character
            int k = entry.second; // its frequency count
            // now what do you do with c and k to build the reverse map?
            map[k].push_back(c);
        }

        int bestsize = 0;
        int bestk = 0;

        for (auto &entry : map)
        {
            int k = entry.first;                // the frequency
            vector<char> &chars = entry.second; // the characters with that frequency
            int size = chars.size();            // how many distinct chars in this group

            if (size > bestsize)
            {
                bestk = k;
                bestsize = size;
            }
            else if (size == bestsize && k > bestk)
            {
                bestk = k;
            }
        }
        string outputstrng(map[bestk].begin(), map[bestk].end());
        return outputstrng;
    }
};

int main() {}

/*
class Solution {
public:
    string majorityFrequencyGroup(string s) {
        // Step 1: Count frequency of each character
        int freq[26] = {0};
        for (char& c : s)
            freq[c - 'a']++;

        // Step 2: Count how many characters have each frequency
        unordered_map<int, int> count;
        for (int i = 0; i < 26; i++) {
            if (freq[i] != 0)
                count[freq[i]]++;  // freq -> number of characters
        }

        int bestFreq = 0;   // frequency we will choose
        int maxCount = 0;   // max number of characters sharing a frequency

        // Step 3: Find the majority frequency group
        for (auto &[f, c] : count) {
            // pick higher count OR same count but larger frequency
            if (c > maxCount || (c == maxCount && f > bestFreq)) {
                bestFreq = f;
                maxCount = c;
            }
        }

        // Step 4: Build result string
        string res;
        for (int i = 0; i < 26; i++) {
            if (freq[i] == bestFreq)
                res += char(i + 'a');
        }

        return res;
    }
};

*/