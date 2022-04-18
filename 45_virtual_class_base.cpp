#include <bits/stdc++.h>
using namespace std;

class Student
{
protected:
    int Roll_no;

public:                                                             
    void set_number(int r)
    {
        Roll_no = r;
    }
    void get_number()
    {
        cout << "The Roll Number of stuent is " << Roll_no << endl;
    }
};

class Test : virtual public Student
{
protected:
    float maths, physics;

public:
    void set_marks(int m1, int m2)
    {
        maths = m1;
        physics = m2;
    }
    void get_marks()
    {
        cout << "The marks of the maths is " << maths << endl
             << "and physics is " << physics << endl;
    }
};

class Sports :virtual public Student
{
protected:
    float score;

public:
    void set_score(int s)
    {
        score = s;
    }
    void get_score()
    {
        cout << "The score of the student in sports is " << score << endl;
    }
};

class Result : public Test, public Sports
{
    float Total;

public:
    void display()
    {
        Total = maths + physics + score;
        get_number();
        get_marks();
        get_score();
        cout << "Your total score is " << Total << endl;
    }
};

int main()
{
     Result tejas;
     tejas.set_number(121);
     tejas.set_marks(80,78);
     tejas.set_score(99);
     tejas.display();
    return 0;
}