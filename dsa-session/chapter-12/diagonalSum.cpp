#include <iostream>
using namespace std;

int diagonalSum(int mat[][4], int n) {
  int sum = 0;

  // O(n^2)
  // for (int i = 0; i < n; i++) {
  //   for (int j = 0; j < n; j++) {
  //     if (i == j) {
  //       sum += mat[i][j];
  //     } else if (i == n - i - 1) {
  //       sum += mat[i][j];
  //     }
  //   }
  // }

  // O(n)
  for (int i = 0; i < n; i++) {
    sum += mat[i][i];
    if (i != n - i - 1) {
      sum += mat[i][n - i - 1];
    }
  }
  return sum;
}
int main() {
  cout << "Spiral Matrix" << endl;
  int matrix[4][4] = {
      {1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}, {13, 14, 15, 16}};

  cout << "sum of diagonal matrix = " << diagonalSum(matrix, 4);

  return 0;
}
