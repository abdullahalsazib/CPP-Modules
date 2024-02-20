#include <bits/stdc++.h>
using namespace std;
class Student
{
public:
    int roll;
    int cls;
    double gpa;
    Student(int roll, int cls, double gpa)
    {
       this->roll = roll;// (*this).roll = roll;
       this->cls = cls;//(*this).cls = cls;
       this->gpa = gpa;//(*this).gpa = gpa;
    }
};
int main()

{

    int roll, cls;
    double gpa;
    cin >> roll >> cls >> gpa;
    Student sazib(roll, cls, gpa);

    cout << sazib.roll << " " << sazib.cls << " " << sazib.gpa;

    return 0;
}
