#include <bits/stdc++.h>
using namespace std;
class Student
{
public:
    string name;
    int roll;
    int marks;
};
int main()
{
    int n, i, j;
    cin >> n;
    Student a[n];
    // cin.ignore();
    for (i = 0; i < n; i++)
    {
        // cin.ignore();
        // getline(cin, a[i].name);
        cin >> a[i].name >> a[i].roll >> a[i].marks;
    }

    for (i = 0; i < n - 1; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if (a[i].marks < a[j].marks)
            {
                swap(a[i], a[j]);
            }
            else if (a[i].marks == a[j].marks)
            {
                if (a[i].roll > a[i].roll)
                {
                    swap(a[i], a[j]);
                }
            }
        }
    }

    for (i = 0; i < n; i++)
    {
        cout << a[i].name << " " << a[i].roll << " " << a[i].marks << endl;
    }

    return 0;
}
