#include <iostream>
#include <string>
using namespace std;

class Animal{
    private:
        string species;
        int age;
        string name;
    public:
        string color;
        Animal(string c){
            color = c;
        }

        // Member function
        void eat()
        {
            cout << "Eat the "<< this->name  << endl;
        }
        void sleep()
        {
            cout << "sleep the animal" << endl;
        }
        void display()
        {
            cout << "name: " << this->name << " age " << this->age << " species " << this->species << " color " << this->color << endl;
        }
        void getter(string name, string species, int age) {
            this->name = name;
            this->species = species;
            this->age = age;
        }
};


int main()
{
    Animal cat("red");
    cat.getter("kitty", "jeie",12); 
    cat.eat();
    cat.display();

    return 0;
}
