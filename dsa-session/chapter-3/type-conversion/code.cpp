#include <iostream>
using namespace std;

int main() {

  cout << (10 / 3) << endl;   // 3
  cout << (10 / 3.0) << endl; // 3.33333
  // type promotion

  // bool -> char -> int -> float -> double

  cout << ('A' + 0) << endl; // 65
  cout << ('a' + 0) << endl; // 97

  cout << (int)('A') << endl; // 65
  cout << (int)('a') << endl; // 65

  const float PI = 3.1416;
  cout << (int)(PI) << endl;
  cout << ((float)10 / 3) << endl; // 3.33333
  //
  cout << (char)('A' + 1) << endl; // B
  cout << (char)('b' + 1) << endl; // c
  //

  // practic

  cout << (bool)(3 + 2) << endl; // 1
  cout << ((bool)3 + 2) << endl; // 3
  cout << (true) << endl;        // 1
  cout << (false) << endl;       // 0

  cout << (23.5 + 2 + 'A') << endl; // 90.5
  return 0;
}
