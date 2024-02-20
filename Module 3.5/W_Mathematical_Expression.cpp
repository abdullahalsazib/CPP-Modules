#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b, c;
    char s;
    char q;
    cin >> a >> s >> b >> q >> c;

    // switch (s)
    // {
    // case '+':
    // case '-':
    // case '*':
    // }
    if (s == '+')
    {
        (a + b == c) ? cout << "Yes" : cout << a + b;
    }
    else if (s == '-')
    {
        (a - b == c) ? cout << "Yes" : cout << a - b;
    }
    else if (s == '*')
    {

        (a * b == c) ? cout << "Yes" : cout << a * b;
    }

    return 0;
}
