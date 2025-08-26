#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

void myFunc() {
  cout << "Hello World🇯🇵" << endl;
  return;
}

int main() {
  cout << "Replace array" << endl;
  int myints[] = {10, 20, 30, 40, 50, 60};
  vector<int> myvector(myints, myints + 8);
  myFunc();

  replace(myvector.begin(), myvector.end(), 20, 30);
  cout << "myvector contains: ";
  for (int val : myvector)
    cout << " " << val;

  cout << "wow" << endl;
  return 0;
}
