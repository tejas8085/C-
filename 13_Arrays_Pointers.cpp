//  an array is used to combine the same type of data types.


#include <iostream>

using namespace std;

int main(){

    int Marks[] = {89, 90, 98, 67, 88, 45};

    cout<<Marks[0]<<endl;
    cout<<Marks[1]<<endl;
    cout<<Marks[2]<<endl;
    cout<<Marks[3]<<endl;
    cout<<Marks[4]<<endl;



int mathmarks[5];
    mathmarks[0] = 45;
    mathmarks[1] = 78;
    mathmarks[2] = 89;
    mathmarks[3] = 90;
    mathmarks[4] = 90;

    cout<<"THESE ARE THE MATHS MARKS"<<endl<<endl;
    // cout<<mathmarks[0]<<endl;
    // cout<<mathmarks[1]<<endl;
    // cout<<mathmarks[2]<<endl;
    // cout<<mathmarks[3]<<endl;
    // cout<<mathmarks[4]<<endl;

    //***********************BY USING FOR LOOP***********************************
    cout<<"By using For loop"<<endl;

    for (int i = 0; i < 5; i++)
    {
        cout<<"the marks of "<<i<<"is :"<<mathmarks[i]<<endl;
               
    }

    // ***********************BY USING while LOOP***********************************
    cout<<"By using while loop"<<endl;
    int i = 0;
    while (i<5)
    {
        cout<<"the marks of "<<i<<"is :"<<mathmarks[i]<<endl;
        i++;
    }
        // ***********************BY USING DO while LOOP***********************************
    cout<<"DO WHILE LOOP"<<endl;

    int k = 0;
    do
    {
       cout<<"the marks of "<<k<<"is :"<<mathmarks[k]<<endl;
       k++;

    } while (false);
    
    return 0;
}