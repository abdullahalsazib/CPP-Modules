#include <iostream>

using  namespace std ;


int main() 
{
    int var = 10;
    int* ptr = &var;

    cout << "value of " << var << endl;
    cout << "address of ptr "<< ptr << endl;
    cout << "value of ptr "<< *ptr << endl;
    *ptr = 30;

    cout << "value of " << var << endl;
    
    // Null Pointer
    int* ptr2 = NULL;
    cout << "null pointer "<< ptr2 << endl;
    
    // void pointer
    void* ptr3 = &var;
    cout << "void pointer "<< ptr3 << endl;
    cout << "value pointed by void porinter: "<< *(static_cast<int*>(ptr3))<< endl;

    return 0;
}
