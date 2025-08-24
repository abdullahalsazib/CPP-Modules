#include <iostream>
using namespace std;
void CheckEvenOrOdd(int num) 
{
    if(num % 2== 0)
    {
        cout << "Even" << endl;
    }else 
    {
        cout << "Odd" << endl;
    }
}
int main()
{

    int n;
    cout << "Enter number: ";
    cin >> n;
    CheckEvenOrOdd(n);

   return 0;
}
