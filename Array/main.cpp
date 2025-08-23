#include <iostream>
using namespace std;

int _sum(int a, int b)
{
    return a + b;
}
int main()
{
    // int n;
    // cout << "Enter the n: ";
    // cin >> n;

    // cin.ignore();

    // string *pCars = new string[n];
    // // pointer

    // for (int i = 0; i < n; i++)
    // {
    //     cout << "Enter car # " << i + 1 << endl;
    //     getline(cin, pCars[i]);
    // }

    // // output
    // for (int i = 0; i < n; i++)
    // {
    //     cout << "cars: " << pCars[i] << endl;
    // }

    int mySum = _sum(10, 2);
    int sum_2 = _sum(11, 2);

    cout << "sum: " << mySum << endl;
    cout << "sum2: " << sum_2 << endl;

    return 0;
}
