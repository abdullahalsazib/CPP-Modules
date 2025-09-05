#include <cstring>
#include <iostream>
#include <utility>
using namespace std;

void toUpperMy(char word[], int n) {
  for (int i = 0; i < n; i++) {
    char ch = word[i];
    if (ch >= 'A' && ch <= 'Z')
      continue; // ignore if condition is full-fill using continue;
    else
      word[i] = ch - 'a' + 'A';
  }
}

void toLowerMy(char word[], int n) {
  for (int i = 0; i < n; i++) {
    char ch = word[i];
    if (ch >= 'a' && ch <= 'z')
      continue; // ignore if condition is full-fill using continue;
    else
      word[i] = ch - 'A' + 'a';
  }
}
void reverseCharArray(char word[], int n) {
  int s = 0, e = n - 1;

  while (s < e)
    swap(word[s++], word[e--]);

  // same think

  // while (s < e) {
  //   swap(word[s], word[e]);
  //   s++;
  //   e--;
  // }
}
bool isPalindrome(char word[], int n) {
  int s = 0, e = n - 1;

  while (s < e) {
    if (word[s++] != word[e--])
      return false;
  }
  return true;
}

int main() {
  cout << "Char - chapter" << endl;

  char arr[5] = {'a', 'b', 'c', 'd', 'e'};
  // for (int i = 0; i < 5; i++) {
  //   cout << arr[i] << " ";
  // }

  char name[40];
  cout << "Enter your name: ";
  // cin.getline(name, 40, '*');
  cin.getline(name, 40);
  int sizeOfname = strlen(name);

  cout << "Length of name: " << sizeOfname << endl;
  cout << "Name is: " << name << endl;

  toUpperMy(name, sizeOfname);
  cout << "Uppercase name: " << name << endl;

  toLowerMy(name, sizeOfname);
  cout << "Lowercase name: " << name << endl;

  // reverse char
  reverseCharArray(name, sizeOfname);
  cout << "Reverse name: " << name << endl;

  // check palendom
  cout << "Check palindrome: ";
  if (!isPalindrome(name, sizeOfname))
    cout << "Name is not palindrome" << endl;
  else
    cout << "Name is a palindrome" << endl;
  return 0;
}
