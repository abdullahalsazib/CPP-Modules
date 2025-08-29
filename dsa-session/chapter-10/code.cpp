#include <algorithm>
#include <iostream>
#include <iterator>
#include <utility>
using namespace std;

void createArray() {
  int arr[50];
  int arr2[] = {10, 20, 30, 40};
  int arr3[3] = {10, 20, 30};

  cout << "size " << size(arr) << endl;
  cout << "size " << size(arr2) << endl;
  cout << "size " << size(arr3) << endl;

  cout << "using sizeOf - " << (sizeof(arr3) / sizeof(int)) << endl;
}

void inputOutputArray() {
  int n;
  cout << "Enter size n: ";
  cin >> n;
  int arr[n];

  cout << "Input Array: ";
  for (int i = 0; i < n; i++) {
    cin >> arr[i];
  }

  cout << "Output Array: ";
  for (int i = 0; i < n; i++) {
    cout << arr[i] << ",";
  }
  cout << endl;
}

void maxOfval() {
  int arr[] = {10, 20, 30, 100, 4, 50};
  int n = sizeof(arr) / sizeof(int);
  int max = arr[0];
  int maxOflen = 0;
  for (int i = 0; i < n; i++) {
    if (arr[i] > max) {
      max = arr[i];
      maxOflen = i;
    }
  }
  cout << "Max value of array is: " << max
       << " and value length is: " << maxOflen;
}

int linerSearch(int *arr, int n, int key) {
  for (int i = 0; i < n; i++) {
    if (arr[i] == key) {
      return i;
    }
  }
  return -1;
}
void printArr(int *arr, int n) {
  for (int i = 0; i <= n; i++) {
    cout << arr[i] << " ";
  }
  cout << endl;
}

void reversePrintArray(int *arr, int n) {
  int arr2[n];
  for (int i = 0; i < n; i++) {
    int j = n - i - 1;
    arr2[i] = arr[j];
  }
  for (int i = 0; i < n; i++) {
    arr[i] = arr2[i];
  }

  for (int i = 0; i < n; i++) {
    cout << arr[i] << " ";
  }
}

void reversePointer(int *arr, int n) {
  int start = 0, end = n - 1;

  while (start < end) {

    // int tmp = arr[start];
    // arr[start] = arr[end];
    // arr[end] = arr[tmp];

    swap(arr[start], arr[end]);
    start++;
    end--;
  }

  printArr(arr, n);
}

int BinarySearch(int *arr, int n, int key) {
  int start = 0, end = n - 1;

  while (start <= end) {
    int mid = (start + end) / 2;
    if (arr[mid] == key) {
      return mid;
    } else if (arr[mid] < key) {
      start = mid + 1;
    } else {
      end = mid - 1;
    }
  }
  return -1;
}

int main() {
  cout << "Array - " << endl;
  // createArray();
  // inputOutputArray();
  // maxOfval();

  int arr[] = {10, 203, 40, 50, 1};
  int n = (sizeof(arr) / sizeof(int));
  // int result = linerSearch(arr, (sizeof(arr) / sizeof(int)), 100);
  // if (result >= 0) {
  //   cout << "index of linerSearch array key: " << result << endl;
  //   ;
  // } else {
  //
  //   cout << "Index is not valid - key is not found" << endl;
  // }

  // reversePrintArray(arr, (sizeof(arr) / sizeof(int)));
  // reversePointer(arr, n);

  int sortArray[] = {1, 2, 3, 4, 5, 5, 6, 7, 12};

  cout << "index = "
       << BinarySearch(sortArray, (sizeof(sortArray) / sizeof(int)), 122);

  return 0;
}
