#include <iostream>
#include <vector>
using namespace std;


vector<int> myVecotr(int n) 
{
    vector<int> nums;
    for(int i = 1; i <= n; i++)
    {
        int val;
        cout << "Enter value: ";
        cin >> val;
        nums.push_back(val);
        cout << endl;
    }
    return nums;
}

int main() 
{
    int n;
    cout << "Enter e: ";
    cin >> n;

    vector<int> nums = myVecotr(n);
    cout << "your entered:"<< endl;

    for(int val:nums) 
    {
        cout << val << " ";
    }



    return 0;
}
