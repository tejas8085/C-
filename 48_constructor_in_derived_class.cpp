#include <bits/stdc++.h>
using namespace std;
class Base1
{
    int a;

public:
    Base1(int s)
    {
        a = s;
        cout << "Base1 class constructor called" << endl;
    }
    void printdataBase1()
    {
        cout << "The value of  a is " << a << endl;
    }
};

class Base2
{
    int b;

public:
    Base2(int s)
    {
        b = s;
        cout << "Base2 class constructor called" << endl;
    }
    void printdataBase2()
    {
        cout << "The value of  a is " << b << endl;
    }
};

class Derived : public Base1, public Base2
{
    int derived1, derived2;

public:
    Derived(int a, int b, int c, int d) : Base1(a), Base2(b)
    {
        derived1 = c;
        derived2 = d;
        cout << "Derived class constructor called" << endl;
    }
    void printdataDerived(void)
    {
        cout << "The value of derived1 " << derived1 << endl;
        cout << "The value of derived2 " << derived2 << endl;
    }
};

int main()
{
    Derived tejas(1,2,3,4);
    tejas.printdataBase1();
    tejas.printdataBase2();
    tejas.printdataDerived();
    return 0;
}