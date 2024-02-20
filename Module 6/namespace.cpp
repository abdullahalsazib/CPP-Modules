#include <bits/stdc++.h>
using namespace std;
namespace Rakib
{
    int ag1 = 25;
    void hello()
    {
        cout << "Rakib namespaces" << endl;
    }
}
namespace Sakib
{
    int age2 = 25;
    void hello2()
    {
        cout << "Rakib namespaces" << endl;
    }
}
using namespace Rakib;
using namespace Sakib;
int main()
{
    cout << ag1<< endl;
    hello2();
    hello();
   

    return 0;
}
