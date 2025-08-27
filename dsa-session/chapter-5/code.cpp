#include <iostream>
using namespace std;

void partten1(int n) {

  cout << endl;
  for (int i = 1; i <= n; i++) {
    cout << "|";
    for (int j = 1; j <= n; j++) {
      cout << " * ";
    }
    cout << "|";
    cout << endl;
    cout << endl;
  }
  cout << endl;
}

void pattren2(int n) {
  for (int i = 1; i <= n; i++) {
    for (int j = i; j <= n; j++) {
      cout << " " << "#" << " ";
      cout << " " << "#" << " ";
    }
    cout << endl;
  }
}
int main() {

  int n;
  cout << "Enter number n: ";
  cin >> n;

  // partten1(n);
  pattren2(n);

  return 0;
}
