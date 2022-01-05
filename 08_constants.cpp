#include <iostream>
using namespace std;

int main(){
    const int a = 10;
    cout<<a;
    // a = 30; after running it shows error: assignment of read-only variable 'a'
    // cout<<a;

    return 0;
}