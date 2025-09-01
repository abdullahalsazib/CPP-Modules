#include <algorithm>
#include <iostream>
#include <utility>
using namespace std;

void printArr(char arr[], int n) {
  for (int i = 0; i < n; i++)
    cout << arr[i] << " ";
}
void printArrInt(int arr[], int n) {
  for (int i = 0; i < n; i++)
    cout << arr[i] << " ";
}
void charInsertion(char arr[], int n) {
  for (int i = 1; i < n; i++) {
    int curr = arr[i];
    int prev = i - 1;
    while (prev >= 0 && arr[prev] < curr) {
      swap(arr[prev], arr[prev + 1]);
      prev--;
    }
    arr[prev + 1] = curr;
  }
  printArr(arr, n);
}
void bubble_sort(int arr[], int n) {
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
  printArrInt(arr, n);
}
void selection_sort(int arr[], int n) {
  // impliment the sele
  for (int i = 0; i < n - 1; i++) {
    int maxIdx = i;
    for (int j = i + 1; j < n; j++) {
      if (arr[j] < arr[maxIdx]) {
        maxIdx = j;
      }
    }
    swap(arr[i], arr[maxIdx]);
  }
  printArrInt(arr, n);
}
void insertion_sort(int arr[], int n) {
  for (int i = 1; i < n; i++) {
    int curr = arr[i];
    int prev = i - 1;
    while (prev >= 0 && arr[prev] > curr) {
      swap(arr[prev], arr[prev + 1]);
      prev--;
    }
    arr[prev + 1] = curr;
  }
  printArrInt(arr, n);
}

int main() {
  char arr[] = {'f', 'a', 'b', 'c', 'e', 'd'};
  int arr2[] = {1, 3, 4, 2, 4, 6, 1, 7};
  int n = (sizeof(arr) / sizeof(char));

  cout << "length -> " << n << endl;
  // charInsertion(arr, n);
  // cout << "Bubble sort -> " << endl;
  // bubble_sort(arr2, (sizeof(arr) / sizeof(char)));

  // cout << "Selection sort -> " << endl;
  // selection_sort(arr2, n);

  cout << "Insetion sort" << endl;
  insertion_sort(arr2, (sizeof(arr2) / sizeof(int)));
  return 0;
}
