#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int a = 6, b = 10, c = 123, d = 1234, e = 12345;
    cout << "The value of a without setw is: " << a << endl;
    cout << "The value of b without setw is: " << b << endl;
    cout << "The value of c without setw is: " << c << endl;
    cout << "The value of d without setw is: " << d << endl;
    cout << "The value of e without setw is: " << e << endl
         << endl;

    cout << "Thee value of a is :" << setw(5) << a << endl;
    cout << "Thee value of b is :" << setw(5) << b << endl;
    cout << "Thee value of c is :" << setw(5) << c << endl;
    cout << "Thee value of d is :" << setw(5) << d << endl;
    cout << "Thee value of e is :" << setw(5) << e << endl;
}