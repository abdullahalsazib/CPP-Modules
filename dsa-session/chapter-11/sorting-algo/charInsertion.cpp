#include <algorithm>
#include <iostream>
using namespace std;

void printArr(char arr[], int n) {
  for (int i = 0; i < n; i++)
    cout << arr[i] << " ";
}

void charInsertion(char arr[], int n) {
  for (int i = 1; i < n; i++) {
    int curr = arr[i];
    int prev = i - 1;
    while (prev >= 0 && arr[prev] < curr) {
      swap(arr[prev], arr[prev + 1]);
      // prev = prev - 1;
      prev--;
    }
    arr[prev + 1] = curr; // pore rakha hole arr[prev + 1 ] = faka value
  }
  printArr(arr, n);
}

int main() {
  char arr[] = {'f', 'a', 'b', 'c', 'e', 'd'};
  int n = (sizeof(arr) / sizeof(char));

  cout << "length -> " << n << endl;
  charInsertion(arr, n);
  return 0;
}
