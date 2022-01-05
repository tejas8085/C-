#include <iostream>
using namespace std;

class Complex
{
    int a, b;
    friend Complex sumComplex(Complex s1, Complex s2);
public:
    void setNumber(int n1, int n2)
    {
       a =n1;
       b =n2;
    }
    void printNumber()
    {
        cout << "Your Complex number is  " << a << " + " << b << "i" << endl;
    }
};

Complex sumComplex(Complex s1, Complex s2){
    Complex s3;
    s3.setNumber((s1.a + s2.a) , (s1.b + s2.b));
    return s3;
}

int main()
{
    Complex c1, c2, sum;
    c1.setNumber(3, 5);
    c1.printNumber();


    c2.setNumber(5, 2);
    c2.printNumber();

    sum = sumComplex(c1,c2);
    sum.printNumber();

    return 0;
}


/* Properties of friend functions
1. Not in the scope of class
2. since it is not in the scope of the class, it cannot be called from the object of that class. c1.sumComplex() == Invalid
3. Can be invoked without the help of any object
4. Usually contans the objects as arguments
5. Can be declared inside public or private section of the class
6. It cannot access the members directly by their names and need object_name.member_name to access any member.

*/


