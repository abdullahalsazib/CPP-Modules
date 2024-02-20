#include <bits/stdc++.h>
using namespace std;
class Student
{
public:
    char name[100];
    int roll;
    double cgpa;
};
int main()
{
    Student a, b;
    cin.getline(a.name, 100);
    cin >> a.cgpa >> a.roll;
    getchar();
    cin.getline(b.name, 100);
    cin >> b.cgpa >> b.roll;

    cout << a.name << endl
         << a.cgpa << endl
         << a.roll << endl;
         
    cout << b.name << endl
         << b.cgpa << endl
         << b.roll;

    return 0;
}
