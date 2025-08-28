#include <iostream>
using namespace std;

void assistanct();
int main() {

  assistanct();
  return 0;
}

void myfunction() {
  cout << "Hello :)" << endl;
  return;
}

int factorial(int n) {
  int fact = 1;
  for (int i = 1; i <= n; i++) {
    fact = fact * i;
  }
  return fact;
}
void assistanct() {
  // myfunction();
  cout << "factorial " << factorial(2) << endl;
  return;
}
