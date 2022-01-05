/*
Enums are user-defined types which consist of named constants. 
Enums are used to make the program more readable.
*/

#include <iostream>

using namespace std;

int main(){

    enum Meal{ breakfast, lunch, dinner};
    Meal m1 = dinner;
    cout<<m1;
    
    return 0;
}