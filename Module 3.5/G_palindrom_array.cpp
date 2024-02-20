#include <bits/stdc++.h>
using namespace std;

int main()
{
    int j,f=0,i,n;
    cin >> n;
    int a[n];
    for(i=0; i<n; i++)
    {
        cin >> a[i];
    }
    for(i=0,j=n-1; i<n&&j>=0; i++,j--)
    {
        if(a[i]!=a[j])
        {
            f=1;
            break;
        }
    }
    if(f==1)
        cout << "NO";
    else
        cout << "YES";

    return 0;
}
