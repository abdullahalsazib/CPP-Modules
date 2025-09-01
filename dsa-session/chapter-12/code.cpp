#include <iostream>

using namespace std;

int main() {
  cout << "2D ARRAY" << endl;
  int n = 0, m = 0;
  cout << "Rows and Columns: ";
  cin >> n >> m;
  int arr[n][m];
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      cin >> arr[i][j];
    }
  }
  cout << "2D value " << endl;
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      cout << arr[i][j] << " ";
    }
    cout << endl;
  }
  cout << "2D Index -> " << endl;
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      cout << " " << i << "," << j << " ";
    }
    cout << endl;
  }
  return 0;
}
