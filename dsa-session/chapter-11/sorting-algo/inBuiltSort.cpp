#include <algorithm>
#include <functional>
#include <iostream>
using namespace std;

void printArr(int arr[], int n) {
  for (int i = 0; i < n; i++)
    cout << arr[i] << " ";
}
int main() {
  int arr[] = {5, 4, 1, 3, 2};
  int n = (sizeof(arr) / sizeof(int));

  cout << "length -> " << n << endl;
  sort(arr, arr + n);
  cout << "Acc" << endl;
  printArr(arr, n);
  sort(arr, arr + n, greater<int>());
  cout << endl;

  cout << "Decc" << endl;
  printArr(arr, n);
  return 0;
}
