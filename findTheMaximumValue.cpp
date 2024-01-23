#include <iostream>

using namespace std;

int main()
{

    int a, b, c;
    cin >> a >> b >> c;

    if (a > b)
    {
        if (a > c)
        {
            cout << a << " is the maximum value." << endl;
        }
        else
        {
            cout << c << " is the maximum value." << endl;
        }
    }
    else
    {
        if (b > c)
        {
            cout << b << " is the maximum value." << endl;
        }
        else
        {
            cout << c << " is the maximum value." << endl;
        }
    }

    return 0;
}