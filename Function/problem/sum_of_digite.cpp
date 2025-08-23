#include <iostream>
using namespace std;

int sumOfdigite(int num)
{
    int digite = 0;

    while (num > 0)
    {
        int lastDigit = num % 10;
        num /= 10;
        digite += lastDigit;
    }
    return digite;
}

int main()
{

    cout << "sum of number: " << sumOfdigite(125) << endl;
    return 0;
}