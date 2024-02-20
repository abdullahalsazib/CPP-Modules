#include <bits/stdc++.h>
using namespace std;

int * fun(int b)
{
    int *a = new int;
    *a = b;
    // cout << a << endl;
    cout << "fun: " << *a<< endl;
    return a;
}

int main()
{
    int b;
    cin >> b;
    int *x = fun(b);

    // cout << x << endl;
    // cout << *x;
    *x = 20;
    cout << "main: " << *x << endl;

    return 0;
}
