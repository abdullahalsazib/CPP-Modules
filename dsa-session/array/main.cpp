#include <array>
#include <iostream>
using namespace std;

int main() {

  array<int, 10> arr = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100};

  // cout << "arr size -> " << arr.size();

  for (int i = 0; i < arr.size(); i++) {
    cout << arr[i] << " ";
  }

  cout << "\nbegin " << arr.begin() << endl;
  cout << "end " << arr.end() << endl;
  // cout << "reverse " << arr.rend();
  cout << "front " << arr.front() << endl;
  cout << "back  " << arr.back() << endl;
  cout << "max-size " << arr.max_size() << endl;
  cout << "isarr empty " << arr.empty() << endl;
  arr.back() = 110;
  arr.front() = 12001;

  for (int val : arr) {
    cout << val << " - ";
  }
  cout << endl;

  cout << "front " << arr.front() << endl;

  // array:operator[]
  for (int i = 0; i < arr.size(); i++)
    arr[i] = i + 1;

  // prfint array using operator[]
  for (int i = 0; i < arr.size(); i++)
    cout << " " << arr[i];

  cout << endl;

  // access elemant using at
  cout << "arr using at -> " << endl;
  for (int i = 0; i < arr.size(); i++)
    arr.at(i) = i + 2;

  for (int i = 0; i < arr.size(); i++)
    cout << " " << arr[i];

  cout << endl;
  // swap array
  array<int, 5> first = {10, 20, 30, 40, 50};
  array<int, 5> second = {11, 22, 33, 44, 55};

  cout << "before swap" << endl;

  cout << "first: ";
  for (int &x : first)
    cout << " " << x;

  cout << endl;
  cout << "second: ";
  for (int &x : second)
    cout << " " << x;

  // swap
  first.swap(second);

  cout << endl;
  cout << "after swap" << endl;
  cout << "first: ";
  for (int &x : first)
    cout << " " << x;

  cout << endl;
  cout << "second: ";
  for (int &x : second)
    cout << " " << x;

  cout << "\n replace value in range" << endl;
  return 0;
}
