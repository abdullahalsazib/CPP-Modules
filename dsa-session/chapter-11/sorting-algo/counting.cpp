#include <algorithm>
#include <climits>
#include <iostream>
using namespace std;

void printArr(int arr[], int n) {
  for (int i = 0; i < n; i++)
    cout << arr[i] << " ";
}
void printChar(char arr[], int n) {
  for (int i = 0; i < n; i++)
    cout << arr[i] << " " << endl;
}

void countingSortAlgo(int arr[], int n) {
  int freq[10000] = {0};
  int minVal = INT_MAX, maxVal = INT_MIN;
  for (int i = 0; i < n; i++) {
    minVal = min(minVal, arr[i]);
    maxVal = max(maxVal, arr[i]);
  }

  // 1st step
  for (int i = 0; i < n; i++)
    freq[arr[i]]++;

  // 2nd step
  for (int i = minVal, j = 0; i <= maxVal; i++) {
    while (freq[i] > 0) {
      arr[j++] = i;
      freq[i]--;
    }
  }
  printArr(arr, n);
}
int main() {
  int arr[] = {5, 4, 1, 3, 2};
  int n = (sizeof(arr) / sizeof(int));

  cout << "length -> " << n << endl;
  countingSortAlgo(arr, n);
  return 0;
}
