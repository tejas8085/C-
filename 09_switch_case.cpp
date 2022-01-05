#include <iostream>

using namespace std;

int main(){
    int Age;
    cout<<"Enter Your Age:";
    cin>>Age;
    switch (Age)
    {
    case 15:
        cout<<"You are not  elible for vote";
        break;
    case 18:
        cout<<"You are  able to apply forn voter id card ";
        break;
    case 25:
        cout<<"You are  elible for vote";
        break;
    default:
    cout<<"sorry! your inputs did'nt matched";
        break;
    }
    return 0;
}