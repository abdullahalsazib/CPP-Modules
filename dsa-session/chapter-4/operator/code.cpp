#include <iostream>
using namespace std;

int main() {
  cout << "Operator ->" << endl;

  int a = 5;
  int b = 3;
  cout << "a = " << a << endl;
  cout << "b = " << b << endl;

  // binary operator
  cout << "+ " << (a + b) << endl;
  cout << "- " << (a - b) << endl;
  cout << "* " << (a * b) << endl;
  cout << "/ " << (a / b) << endl;
  cout << "% " << (a % b) << endl;

  // unary operator
  cout << "++ " << (a++) << endl;
  cout << "-- " << (a--) << endl;

  // also as ++a and ++b
  // post and pre (increment and decriment)
  return 0;
}
