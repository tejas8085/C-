#include <bits/stdc++.h>
using namespace std;

class Base1
{
public:
    void great()
    {
        cout << "How are you ?" << endl;
    }
};
class Base2
{
public:
    void great()
    {
        cout << "Kasa Ahes ?" << endl;
    }
};

class Derived : public Base1, public Base2
{
    int a;
public:
    void great()
    {
        Base1::great();
    }
};

class B{
    public:
    void say(){
        cout<<"Hello World"<<endl;
    }
};

class D:public B{
    int a;
    public:
    void say(){
        cout<<"Hello India"<<endl;
    }
};
int main()
{
    Base1 base1obj;
    Base2 base2obj;
    base1obj.great();
    base2obj.great();
    Derived der;
    der.great();
    B b;
    b.say();
    D d;
    d.say();
    return 0;
}