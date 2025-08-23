#include <iostream>
#include <vector>
using namespace std;
int main() 
{

  vector<int> nums ={1,2,3,3,4,5};
  for(int val: nums) {
    cout << val << endl;
  }
  
  
  string name;
  cout << "Enter your name: ";
  cin >> name; 

  cout << name << endl;
  cout << "hello world" << endl;

  for(int i = 0; i <= 10; i++ ){
      cout << "hello world = " << i << endl;
      
  }
  
  
  return 0;
}
