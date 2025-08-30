#include <algorithm>
#include <iostream>
using namespace std;

int trap(int *arr, int n) {
  int leftMax[20000], rightMax[20000];
  leftMax[0] = arr[0];
  rightMax[n - 1] = arr[n - 1];

  for (int i = 1; i < n; i++) {
    leftMax[i] = max(leftMax[i - 1], arr[i - 1]);
  }

  for (int i = n - 2; i >= 0; i--) {
    rightMax[i] = max(rightMax[i + 1], arr[i + 1]);
  }

  int waterTrap = 0;
  for (int i = 0; i < n; i++) {
    int currentWater = min(leftMax[i], rightMax[i]) - arr[i];
    if (currentWater > 0) {
      waterTrap += currentWater;
    }
  }
  return waterTrap;
}

int main() {
  cout << "Traped Water!" << endl;
  int arr[7] = {4, 2, 0, 6, 3, 2, 5};
  int n = (sizeof(arr) / sizeof(int));

  cout << "water was traped: " << trap(arr, n) << endl;
  return 0;
}
