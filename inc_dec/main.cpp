#include <iostream>
using namespace std;
int main()
{

    int a = 5;

    int i = a++;
    cout << "a is: " << a << endl;
    cout << "i is: " << i << endl;

    int x = 5;
    int z = ++x;

    cout << "x is: " << x << endl;
    cout << "z is: " << z << endl;

    return 0;
}