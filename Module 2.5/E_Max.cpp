#include <bits/stdc++.h>
using namespace std;

int main()
{

    int a, b, i, max = 0;
    cin >> a;

    for (i = 1; i <= a; i++)
    {
        cin >> b;
        if (b > max)
        {
            max = b;
        }
    }
    cout << max;

    return 0;
}
