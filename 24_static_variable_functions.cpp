#include <iostream>

using namespace std;
class Employee{
    int Id;
    static int count;
    public:
    void setdata(){
        cout<<"Enter the id "<<endl;
        cin>>Id;
        count++;
    }
    void getdata(){
        cout<<"Your id is "<<Id<<" and employee number is "<<count<<endl;
    }
    static void getCount(void){};

};
int Employee::count;

int main(){
    Employee tejas, tushar;
    tejas.setdata();
    tejas.getdata();
    tushar.setdata();
    tushar.getdata();
    Employee::getCount();
    
    return 0;
}