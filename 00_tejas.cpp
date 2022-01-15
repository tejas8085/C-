#include <bits/stdc++.h>
using namespace std;

class Student
{
  int roll_number;

public:
  void setRoll_number(int x)
  {
    roll_number = x;
  }
  void getRoll_number()
  {
    cout << "The rol number is " << roll_number << endl;
  }
};

class Exam : public Student
{
protected:
  int maths;
  int physics;

public:
  void setMarks(int x, int y)
  {
    maths = x;
    physics = y;
  }
  void getMarks()
  {
    cout << "The marks of the maths is " << maths << endl;
    cout << "The marks of the physics is " << physics << endl;
  }
};
 class result : public Exam{
   public:
  
   void display_result(){
      getRoll_number();
   getMarks();
   cout<<"your result is "<<(maths + physics)/2<<"%"<<endl;
   }
 };
int main()
{
  result tejas;
  tejas.setRoll_number(1);
  tejas.setMarks(90,96);
  tejas.display_result();
  return 0;
}