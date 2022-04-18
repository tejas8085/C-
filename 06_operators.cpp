#include <iostream>
using namespace std;

int main(){
    int a=7, b=5;
    cout<<"ARITHMETIC OPERATORS"<< endl;
    cout<<"the add of a and b:"<<a+b<< endl;
    cout<<"the sub of a and b:"<<a-b<< endl;
    cout<<"the product of a and b:"<<a*b<< endl;
    cout<<"the division of a and b:"<<a/b<< endl;
    cout<<"the modulus of a and b:"<<a%b<< endl;
    cout<<"the a++ is:"<< a++ << endl;
    cout<<"the a-- is:"<<a--<< endl;
    cout<<"the ++a is :"<<++a<< endl;
    cout<<"the --a is :"<<--a<< endl<<endl;

    cout<<"COMPARISON OPERATORS"<<endl;
    cout<<"greater than:"<<(a>b)<< endl;
    cout<<"less than:"<<(a<b)<< endl;
    cout<<"Equal to:"<<(a==b)<< endl;
    cout<<"not equal:"<<(a!=b)<< endl;
    cout<<"less than/equal:"<<(a<=b)<< endl;
    cout<<"greater than / equal:"<<(a>=b)<<endl<<endl;

    cout<<"logical operators"<<endl;
    cout<<"((a==b) && (a<b)) is:"<<((a==b) && (a<b))<<endl; 
    cout<<"((a==b) || (a<b)) is:"<<((a==b) || (a<b))<<endl; 
    cout<<"(!(a==b)) is:"<<(!(a==b))<<endl; 
    
    return 0;
}