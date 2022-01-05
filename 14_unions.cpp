
/* Unions are similar to structures but they provide better 
memory management then structures.  Unions use shared memory 
so only 1 variable can be used at a time
*/

#include <iostream>

using namespace std;

union employee
{
    int eId;
    char car;
    float salary;
};

int main()
{
    union employee tejas;
    tejas.eId = 1;
    // tejas.car = 'audi';
 
    cout << tejas.eId << endl;
    // cout<<tejas.car<<endl;

    return 0;
}