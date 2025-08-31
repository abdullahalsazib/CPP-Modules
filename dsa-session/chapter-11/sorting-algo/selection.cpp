#include <iostream>
#include <utility>
using namespace std;

void printArr(int arr[], int n) {
  for (int i = 0; i < n; i++)
    cout << arr[i] << " ";
}
void selectionSort(int arr[], int n) {
  for (int i = 0; i < n - 1; i++) {
    int maxIdx = i;
    for (int j = i + 1; j < n; j++) {
      if (arr[j] < arr[maxIdx]) {
        maxIdx = j;
      }
    }
    swap(arr[i], arr[maxIdx]);
  }
  printArr(arr, n);
}
int main() {
  cout << "Hello World" << endl;
  int arr[] = {5, 4, 1, 3, 2};
  int n = (sizeof(arr) / sizeof(int));

  selectionSort(arr, n);

  return 0;
}
