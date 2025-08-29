#include <iostream>
using namespace std;

void printSubarray(int *arr, int n) {
  for (int i = 0; i < n; i++) {
    for (int j = i; j < n; j++) {
      // cout << "(" << i << "," << j << ") ";
      for (int k = i; k <= j; k++) {
        cout << arr[k];
      }
      cout << ", ";
    }
    cout << endl;
  }
}

void subArraySum1(int *arr, int n) {
  for (int i = 0; i < n; i++) {
    for (int j = i; j < n; j++) {
      int currentSum = 0;
      for (int k = i; k <= j; k++) {
        currentSum += arr[k];
      }
      cout << currentSum << ", ";
    }
    cout << endl;
  }
}

int main() {
  // int arr[5] = {1, 2, 3, 4, 5};
  // printSubarray(arr, n);

  int arr1[] = {2, -3, 6, -5, 4, 2};
  int n = (sizeof(arr1) / sizeof(int));
  subArraySum1(arr1, n);
  return 0;
}
