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
    int n;
    cin >> n;
    Student a[n];
    // int *a = new int[n]; X
    // Student *a = new Student[n];
    // getchar(); X

    for (int i = 0; i < n; i++)
    {
        // cin.ignore();
        // getline(cin, a[i].name);

        cin >> a[i].name >> a[i].roll >> a[i].marks;
    }

    Student mn; // MIN;
    mn.marks = INT_MAX;
    Student mx; // MAX;
    mx.marks = INT_MIN;

    for (int i = 0; i < n; i++)
    {
        if (a[i].marks < mn.marks)mn = a[i];
        
        if (a[i].marks > mx.marks)mx = a[i];
        
    }

    // min
    cout << "MIN: " << mn.name << " " << mn.roll << " " << mn.marks << endl;
    // max
    cout << "MAX: " << mx.name << " " << mx.roll << " " << mx.marks << endl;

    return 0;
}
