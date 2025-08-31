#include <iostream>
#include <utility>
using namespace std;

void printArray(int arr[], int n) {
  for (int i = 0; i < n; i++)
    cout << arr[i] << " ";
}
void bubbleSort(int arr[], int n) {
  bool isSwap = false;
  for (int i = 0; i < n - 1; i++) {
    for (int j = 0; j < n - i - 1; j++) {
      if (arr[j] > arr[j + 1]) {
        swap(arr[j], arr[j + 1]);
        isSwap = true;
      }
    }
    if (!isSwap)
      return;
  }
  printArray(arr, n);
}

int main() {
  cout << "Hello World" << endl;
  int arr[] = {5, 4, 1, 3, 2};
  int n = (sizeof(arr) / sizeof(int));

  // call the bubble sort function
  bubbleSort(arr, n);
  return 0;
}
