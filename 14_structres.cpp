
/* The structure is a user-defined data type that is available in C++.
 Structures are used to combine different types of data types, 
 just like an array is used to combine the same type of data types.
 */

#include <iostream>

using namespace std;

    struct employee
    {
        int eId;
        char eCode;
        float salary;
    };
    typedef struct tushar
    {
        int eId;
        char eCode;
        float salary;
    } ep;
    
int main(){
    struct employee tejas;
    ep tushar;
    tejas.eId = 1;
    tejas.eCode = 't';
    tejas.salary = 10000;
   
    cout<<"The value is : "<<tejas.eId<<endl;
    cout<<"The value is : "<<tejas.eCode<<endl;
    cout<<"The value is : "<<tejas.salary<<endl<<endl;
    
    tushar.eId = 2;
    tushar.eCode = 'J';
    tushar.salary = 1000000;
    
    cout<<"The value is : "<<tushar.eId<<endl;
    cout<<"The value is : "<<tushar.eCode<<endl;
    cout<<"The value is : "<<tushar.salary<<endl;
    
     return 0;
}