#include <bits/stdc++.h>
using namespace std;
class Student{
    public:
        string name;
        int roll;
        int marks;
};

int main()
{
    int n, i;
    cin >> n;
    Student a[n];

    for(i = 0; i < n; i++)
    {
        cin >> a[i].name >> a[i].roll >> a[i].marks;
    }

    // Student rev;
    for(i = n - 1; i >= 0; i--)
    {
        // cin.ignore();
        cout << a[i].name << " " << a[i].roll << " " << a[i].marks << endl;
    }

    return 0;
}
