#include <bits/stdc++.h>
using namespace std;

class SimpleCalculator
{
    int a, b;

public:
    void getdatasimple()
    {
        cout << "Enter the value of data1" << endl;
        cin >> a;
        cout << "Enter the value of data2" << endl;
        cin >> b;
    }
    void performoperationsSimple()
    {
        cout << "The sum of data1 and data2 is --> " << a + b << endl;
        cout << "The sum of data1 and data2 is --> " << a - b << endl;
        cout << "The sum of data1 and data2 is --> " << a * b << endl;
        cout << "The sum of data1 and data2 is --> " << a / b << endl;
    }
};

class ScientificCalculator
{
    int a, b;

public:
    void getdataScientific()
    {
        cout << "Enter the value of data1" << endl;
        cin >> a;
        cout << "Enter the value of data2" << endl;
        cin >> b;
    }
    void performoperationsScientific()
    {
        cout << "The sin of a is " << sin(a) << endl;
        cout << "The cos of a is " << cos(a) << endl;
        cout << "The exp of a is " << exp(a) << endl;
        cout << "The log of a is " << log(a) << endl;
    }
};

class Hybridcalculator : public SimpleCalculator, public ScientificCalculator
{
public:
    void display()
    {
        getdatasimple();
        getdataScientific();
        performoperationsSimple();
        performoperationsScientific();
    }
};

int main()
{
    Hybridcalculator tejas;
    //  tejas.getdatasimple();
    //  tejas.getdataScientific();
    //  tejas.performoperationsSimple();
    //  tejas.performoperationsScientific();
    tejas.display();
    return 0;
}