#include <iostream>
using namespace std;

int main()
{
    // int x;
    // cin >> x;
    // switch(x)
    // {
    //     case 1:
    //         cout << "one" << endl;
    //         break;
    //     case 2:
    //         cout << "two" << endl;
    //         break;
    //     case 3:
    //         cout << "three" << endl;
    //         break;
    //     case 4:
    //         cout << "four" << endl;
    //         break;
    //     default:
    //         cout << "worrng";
    // }

    // aeiou

    char c, s, sec;
    cin >> sec;
    if (sec == 's')
    {
        cin >> c;

        switch (c)
        {
        case 'a':
            cout << "voiel";
            break;
        case 'e':
            cout << "voiel";
            break;
        case 'i':
            cout << "voiel";
            break;
        case 'o':
            cout << "voiel";
            break;
        case 'u':
            cout << "voiel";
            break;
        default:
            cout << "Not voiel";
        }
    }
    else
    {
        cin >> s;

        switch (s)
        {
        case 'A':
            cout << "voiel";
            break;
        case 'E':
            cout << "voiel";
            break;
        case 'I':
            cout << "voiel";
            break;
        case 'O':
            cout << "voiel";
            break;
        case 'U':
            cout << "voiel";
            break;
        default:
            cout << "Not voiel";
        }
    }

    return 0;
}
