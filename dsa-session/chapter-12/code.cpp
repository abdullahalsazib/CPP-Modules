#include <iostream>
#include <vector>
using namespace std;

int main() {
  cout << "Hello world" << endl;

  vector<int> arr = {10, 20};

  for (int i = 0; i < arr.size(); i++)
    swap(arr[i], arr[i + 1]);
  for (int val : arr)
    cout << val << " " << endl;

  return 0;
}
