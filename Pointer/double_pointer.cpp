#include <iostream>
using namespace std;



void updateVar(int *a)
{


    int** var = &a;

    **var = *a + 10;
    cout << "var " << **var << endl;

    cout << *a << endl;

}

int main()
{
    // int var = 10;

    // int* ptr = &var;
    // int** ptr2 = &ptr;

    // cout << "*ptr "<< *ptr<< endl;
    // cout << "*ptr2 "<< **ptr2<< endl;

    // *ptr = 20;
    // **ptr2 = 100;

    // cout << "*ptr "<< *ptr<< endl;
    // cout << "*ptr2 "<< **ptr2<< endl;

    int a = 4;
    updateVar(&a);
    return 0;
}
