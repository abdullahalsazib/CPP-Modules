#include <iostream>
using namespace std;
int main()
{
    int a = 1;
    int b = a++; // b = 1 and a = 2
    int c = ++a; // a = 2+1 && c = 3 and b = 3
    cout << b << endl; // b = 1
    cout << c; // c 3

    return 0;
}