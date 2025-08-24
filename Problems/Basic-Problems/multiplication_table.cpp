#include <iostream>
using namespace std;

void Multi(int n) 
{
    for (int i = 1; i <= 10; i++)
    {
        cout << n << " * " << i << " = " << n * i << endl;
    }
}
int main()
{
    int n;
    cout << "Enter your multiplication table number: ";
    cin >> n;

    Multi(n);

    return 0;
}
