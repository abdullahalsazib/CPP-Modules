#include <bits/stdc++.h>
using namespace std;
class Person
{
public:
    string name;
    int age;
    int mrk1;
    int mrk2;
    Person(string name, int age, int mrk1, int mrk2)
    {
        this->name = name;
        this->age = age;
        this->mrk1 = mrk1;
        this->mrk2 = mrk2;
    }
    void hello()
    {
        cout << "Hello" << endl;
        cout << "Name : " << name << endl
             << "Age : " << age << endl;
    }
    int result()
    {
        return mrk1 + mrk2;
    }
};

int main()
{

    string name;
    getline(cin, name);
    int age;
    cin >> age;
    int mrk1, mrk2;
    cin >> mrk1 >> mrk2;
    Person rakib(name, age, mrk1, mrk2);
    // rakib.hello();
    cout << "Name : " << rakib.name << endl
         << "Age : " << rakib.age << endl;
    cout << "Result mark : " << rakib.result() << endl;

    return 0;
}
