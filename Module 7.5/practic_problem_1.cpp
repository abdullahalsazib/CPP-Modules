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

    for(i = 0; i < n - 1; i++){
        for(int j = i + 1; j < n;j++)
        {
            if(a[i].marks < a[j].marks) swap(a[i].marks, a[j].marks);
        }
    }
    for(i = 0 ; i < n; i++)
    {
        cout << a[i].name << " " << a[i].roll << " " << a[i].marks << endl;
    }

    return 0;
}
