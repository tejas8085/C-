#include <iostream>

using namespace std;

int main(){

    for (int i = 0; i <= 50; i++)
    {
        if (i==40){
            continue;
        }
         cout<<i<<endl;
    }
    
    return 0;
}