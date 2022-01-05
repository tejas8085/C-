#include <iostream>

using namespace std;

int sum(int a, int b){
    int c = a + b;
    return c;
}
// This will not swap a and b

void swap(int a, int b){
    int temp = a;
    a = b;
    b = a;
}
// call by reference using pointer. 

void swapPointer(int* a, int* b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

// Call by reference using C++ reference Variables

void swapReferVar(int &a, int &b){
    int temp = a;
    a = b;
    b = temp;
    
}


int main(){
    int a, b;
    cout<<"Enter the value of a"<<endl;
    cin>>a;
    cout<<"Enter the value of b"<<endl;
    cin>>b;
    // cout<<"The sum of a and b : "<<sum(a,b);
    cout<<"The value of a and b is "<<a<<", "<<b<<endl;
    swap(a, b);
    cout<<"The value of a and b is "<<a<<", "<<b<<endl;
    swapPointer(&a, &b);
    cout<<"The value of a and b is "<<a<<", "<<b<<endl;
    swapReferVar(a, b);
    cout<<"The value of a and b is "<<a<<", "<<b<<endl;




    
    return 0;
}