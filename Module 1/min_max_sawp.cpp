#include <iostream>
#include <utility>
#include <algorithm>
using namespace std;

void fun(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}
int main()
{
    /*int a, b, c, d;
    cin >> a >> b >> c >> d;

    // (a < b) ? cout << a : cout << b;
    cout << "Min"
         << " " << min(a, b) << endl;
    cout << "Max"
         << " " << max(a, b) << endl;

    int mn = min({a, b, c, d}); // 2 ar base variable hola {};
    int mx = max({a, b, c, d}); // 2 ar base variable hola {};

    cout << "min"
         << " " << mn << endl;
    cout << "max"
         << " " << mx;
         */


//swap
        int a, b;
        cin >> a>> b;
       fun(&a, &b);
       cout << a<< " "<< b<< endl;


//using function to swap

    int x , y;
    cin>> x >> y;

    
    swap(x, y);

    cout << x << " " << y;

    return 0;
}
