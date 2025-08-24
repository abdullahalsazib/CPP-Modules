#include <iostream>
using namespace std;

int sumMation(int n) 
{
    int sum = 0;

    for(int i = 1; i <= n; i++)
    {
        sum += (i * i);
    }

    return sum;
}
int main() {

    int n;
    cout << "Enter num: " ;
    cin >> n ;

    cout << "\n" <<  sumMation(n);
    
    return 0;
}
