#include <algorithm>
#include <climits>
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
  int maxVal = INT_MIN;
  for (int i = 0; i < n; i++) {
    for (int j = i; j < n; j++) {
      int currentSum = 0;
      for (int k = i; k <= j; k++) {
        currentSum += arr[k];
      }
      cout << currentSum << ", ";
      maxVal = max(maxVal, currentSum);
    }
    cout << endl;
  }
  cout << "max sum = " << maxVal << endl;
}

void subArraySum2(int *arr, int n) {
  int maxVal = INT_MIN;
  for (int i = 0; i < n; i++) {
    int currentSum = 0;
    for (int j = i; j < n; j++) {
      currentSum += arr[j];
      maxVal = max(maxVal, currentSum);
    }
  }
  cout << "max sum = " << maxVal << endl;
}

void kadaneAlgo(int *arr, int n) {
  int currentSum = 0;
  int maxSum = INT_MIN;
  for (int i = 0; i < n; i++) {
    currentSum += arr[i];
    maxSum = max(currentSum, maxSum);
    if (currentSum < 0) {
      currentSum = 0;
    }
  }
  cout << "max sum = " << maxSum << endl;
}
int main() {
  // int arr[5] = {1, 2, 3, 4, 5};
  // printSubarray(arr, n);

  int arr1[] = {2, -3, 6, -5, 4, 2};
  int n = (sizeof(arr1) / sizeof(int));
  // subArraySum1(arr1, n);
  // subArraySum2(arr1, n);
  kadaneAlgo(arr1, n);
  return 0;
}
