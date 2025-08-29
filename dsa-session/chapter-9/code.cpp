#include <iostream>
using namespace std;

int passByValue(int a) {
  cout << "a = " << a << endl;
  a = 10;
  cout << "a = 10 = " << a << endl;
  return a;
}
float *passByRef(float *b) {
  cout << "b = " << *b << endl;
  *b = 394.1;
  cout << "b = 394 = " << *b << endl;
  return b;
}

void prac1(int x, int y) {
  int *ptr1 = &x, *ptr2 = &y;
  ptr2 = ptr1;

  cout << "ptr2 " << ptr2 << endl;
}
void prac2() {
  float *a, b;

  int *ptr = 0;
  int *ptr2 = NULL;
  cout << "ptr " << ptr << endl;
  cout << "ptr2 " << ptr2 << endl;
  // cout << &a << endl;
  // cout << b << endl;
}

int main() {
  cout << "Pointer" << endl;
  int a = 10;
  float b = 10.3;
  int *ptr = &a;
  float *ptr2 = &b;
  cout << &a << " = " << ptr << endl;
  cout << &b << " = " << ptr2 << endl;

  cout << "**ptr3" << endl;

  int **ptr3 = &ptr;

  cout << "ptr3 = " << ptr3 << endl;
  cout << "a = " << *ptr << endl;
  cout << "ptr3 = " << **ptr3 << endl;
  **ptr3 = 100;
  cout << "a = " << *ptr << endl;

  int *ptrNull = NULL;

  cout << "a = " << *ptr << endl;
  cout << "prtnull " << &ptrNull << endl;

  // argument pass
  cout << passByValue(a) << endl; // pass by value
  cout << "a is: = " << a << endl;

  // pass by ref

  cout << *passByRef(&b) << endl; // pass by ref
  cout << "b is: = " << b << endl;

  // prac
  prac1(4, 5);
  return 0;
}
