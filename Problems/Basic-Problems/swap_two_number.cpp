#include <iostream>
using namespace std;


int main() 
{

    int a, b;
    cout << "Enter a: ";
    cin >> a;
    
    cout << "Enter b: ";
    cin >> b;

    int tmp = a;
    a = b;
    b = tmp;

    cout << "a = " << a << " " << "b = " << b;
    cout << "Hello World"<< endl;
    return 0;
}
