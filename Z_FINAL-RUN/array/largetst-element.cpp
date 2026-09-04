#include <iostream>

using namespace std;

int main() {
  int arr[5] = {13, 44, 1, 42, 4};

  int size = 5;

  int largest = arr[0];

  for (int i = 0; i < size - 1; i++) {
    if (largest < arr[i]) {
      largest = arr[i];
    }
  }

  cout << largest;

  return 0;
}
