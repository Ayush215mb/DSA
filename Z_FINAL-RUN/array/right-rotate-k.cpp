#include <iostream>
#include <vector>
using namespace std;

void brute(vector<int> nums, int k) {
  int n = nums.size();
  k %= n;

  reverse(nums.begin(), nums.end());
  reverse(nums.begin(), nums.begin() + k);
  reverse(nums.begin() + k, nums.end());

  for (int i : nums) {
    cout << i << " ";
  }
}

int main() {
  vector<int> nums = {1, 2, 3, 4, 5, 6, 7, 8, 9};
  int k = 4;

  brute(nums, k);
}
