#include <iostream>
using namespace std;

int *findMatrix(int mat[][4], int n, int m, int target) {
  int *result = new int[2];
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      if (mat[i][j] == target) {
        result[0] = i;
        result[1] = j;
        return result;
      }
    }
  }
  result[0] = -1;
  result[1] = -1;
  return result;
}
bool stireCaseSearch(int mat[][4], int n, int m, int key) {
  int i = 0, j = m - 1;
  while (i < n && j >= 0) {
    if (mat[i][j] == key) {
      cout << "found at " << i << "," << j << endl;
      return true;
    } else if (mat[i][j] > key) {
      // left
      j--;
    } else {
      // bottom
      i++;
    }
  }
  cout << "Key not found!" << endl;
  return false;
}
int main() {
  cout << "Hello, World" << endl;
  int matrix[4][4] = {
      {10, 20, 30, 40}, {15, 25, 35, 35}, {27, 29, 37, 48}, {32, 33, 39, 50}};

  int target = 33;
  int *res = findMatrix(matrix, 4, 4, target);

  if (res[0] == -1)
    cout << "Target is not found in matrix" << endl;
  else
    cout << "Found in Index of " << res[0] << "," << res[1] << endl;

  bool res2 = stireCaseSearch(matrix, 4, 4, 33);
  if (!res2)
    cout << "value not found" << endl;
  else
    cout << "value found" << endl;
  return 0;
}
