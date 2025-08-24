#include <iostream>
using namespace std;


int* getPointer()
{
    int x = 10;
    return &x;
}
int main()
{

    int* ptr = getPointer();
    cout << ptr << endl;
    return 0;
}
