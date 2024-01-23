#include <iostream>

using namespace std;

int main()
{

    int a = 12; // declaration and initialisation
    cout << "size of int : " << sizeof(a) << endl;

    float b = 3.1416;
    cout << "size of float : " << sizeof(b) << endl;

    char c = 'a';
    cout << "size of character : " << sizeof(c) << endl;

    bool d = true;
    cout << "size of boolean : " << sizeof(d) << endl;

    short int si;
    long int li;
    cout << "size of short : " << sizeof(si) << endl;
    cout << "size of long : " << sizeof(li) << endl;

    return 0;
}
