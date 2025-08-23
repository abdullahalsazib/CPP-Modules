#include <iostream>
using namespace std;

int sumN(int a, int b)
{
    cout << "hello world" << endl;

    return a + b;
}
int minOfNum(int a, int b)
{
    if (a < b)
    {
        return a;
    }
    else
    {
        return b;
    }
}

int main()
{

    int n = sumN(10, 20);
    cout << "min " << minOfNum(10, 40) << endl;

    cout << n << endl;

    return 0;
}