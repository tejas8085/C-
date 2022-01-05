#include <iostream>

using namespace std;

inline int product(int a, int b){
    return a * b;
}

int moneyReceive(int money, float factor){
    return money * factor;

}
int main(){
    int a, b;
    cout<<"Enter the value of a and b is "<<endl;
    cin>>a>>b;
    cout<<"The product of a and b is "<<product(a, b)<<endl;
    cout<<"The product of a and b is "<<product(a, b)<<endl;
    cout<<"The product of a and b is "<<product(a, b)<<endl;
    cout<<"The product of a and b is "<<product(a, b)<<endl;
    cout<<"The product of a and b is "<<product(a, b)<<endl;
    cout<<"The product of a and b is "<<product(a, b)<<endl;
    cout<<"The product of a and b is "<<product(a, b)<<endl;
    cout<<"The product of a and b is "<<product(a, b)<<endl;
    cout<<"The product of a and b is "<<product(a, b)<<endl;
    cout<<"The product of a and b is "<<product(a, b)<<endl;

    cout<<"Enter our money in your bank account"<<endl;
    float factor = 1.04;
    int money;
    cin>>money;
    moneyReceive(money, factor);
    cout<<"Your money in your account is "<<money<<" and you get "<<moneyReceive(money, factor) <<" after one year"<<endl;
    cout<<"FOR VIP : Your money in your account is "<<money<<" and you get "<<moneyReceive(money, 1.1) <<" after one year"<<endl;
    
    return 0;
}