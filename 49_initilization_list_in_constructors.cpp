#include <bits/stdc++.h>
using namespace std;

class Test{
    int a, b;
    public:
    Test(int i, int j) : a(i), b(i+j)
    {
        cout<<"Constructor excuted "<<endl;
        cout<<"The value of a is "<<a<<endl;
        cout<<"The value of b is "<<b<<endl;
    }
};
int main()
{
  Test tejas(2,3);
  return 0;
}