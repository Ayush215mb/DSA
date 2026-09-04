#include <iostream>
#include <vector>
using namespace std;

// rotate the arr to left by one place
vector<int> RotateOne(vector<int> arr) {
  int size = arr.size();
  int temp = arr[0];

  for (int i = 1; i < size; i++) {
    arr[i - 1] = arr[i];
  }
  arr[size - 1] = temp;
  return arr;
}

int main() {
  vector<int> arr = {10, 20, 30, 40, 50};

  arr = RotateOne(arr);

  for (int i = 0; i < arr.size(); i++) {
    cout << arr[i] << " ";
  }
}
