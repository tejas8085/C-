#include <iostream>

using namespace std;

int sum(int a, int b){
    int c = a + b;
    return c;
}


int main(){
    int num1, num2;
    cout<<"Enter the first Number : ";
    cin>>num1;
    cout<<"Enter the second Number : ";
    cin>>num2;

    cout<<"The sum of the num1 and num2 is "<<sum(num1, num2)<<endl;

   return 0;
}