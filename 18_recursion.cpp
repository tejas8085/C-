#include <iostream>

using namespace std;

int factorial(int n){
    if (n <= 1)
    {
       return 1;
    }
    return n* factorial(n-1);
}

int fib(int n){ 
    return (n-1) + (n-2);

}

int main(){
    int n;
    cout<<"Enter the number"<<endl;
    cin>>n;
    cout<<"The factorial of "<<n<<" is "<<factorial(n)<<endl;

    cout<<"the fiblachi series is "<<fib(n);

    return 0;
}