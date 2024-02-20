#include <bits/stdc++.h>
using namespace std;
class Student{
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
int main()
{
    Student rahim(349, 10, 4.54);

    Student * karim = new Student(349, 10, 4.5);

    cout << karim->roll << " " << karim->cls << " " << karim->cgpa;

    return 0;
}
