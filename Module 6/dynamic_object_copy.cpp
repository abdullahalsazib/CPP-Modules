#include <bits/stdc++.h>
using namespace std;

class Person
{
    public:
    string name;
    int age;
    Person(string name, int age)
    {
        this->name = name;
        this->age = age;
    }
};
int main()
{
    

    Person * rakib = new Person("Rakib Ahasan", 25);
    Person * sakib = new Person("Sakib Ahasan", 23);
    // rakib->age = sakib->age;
    // rakib->name = sakib->name;
    *rakib = *sakib;
    delete sakib;
    cout << rakib->name << " " << rakib->age << endl;
    return 0;
}
