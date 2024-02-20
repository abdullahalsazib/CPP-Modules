#include <bits/stdc++.h>
using namespace std;
class Student
{
public:
    int roll;
    int cls;
    double cgpa;
    Student(int roll, int cls, double cgpa)
    {
        this->roll = roll;
        this->cls = cls;
        this->cgpa = cgpa;
    }
};
Student *fun()
{
    Student *sazib = new Student(233, 5, 4.59);

    return sazib;
}
int main()
{
    Student *ans = fun();
    // cout << ans.roll << " " << ans.cls << " " << ans.cgpa;
    cout << ans->roll << " " << ans->cls << " " << ans->cgpa << endl;
    delete ans;
    cout << ans->roll << " " << ans->cls << " " << ans->cgpa;
    return 0;
}
