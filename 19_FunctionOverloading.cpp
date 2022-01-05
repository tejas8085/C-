#include <iostream>

using namespace std;

int sum(int a, int b){
    return a+b;
}
int sum(int a, int b, int c){
    return a+b+c;
}

int area(int length, int breadth){
    return length*breadth;
}

int area(int radius){
    float pi = 3.14;
    return pi*radius*radius;
}

int area(int side1, int side2, int height){
    return ((side1+side2)*height)/2;
}
int main(){

    int a=3, b=5, c=8;
    int x = sum(a,b);
    printf("The sum of 3 and 5 is : %d\n",x);

    int y = sum(a,b,c);
    printf("The sum of 3,5 and 8 is : %d\n", y);
    
    int r = area(10,20);
    printf("The area of rectangle is %d\n", r);

    int o = area(10);
    printf("The area of circle is %d\n", o);
    
    int t = area( 10, 4, 6);
    printf("The area of trapezium is %d\n", t);

    return 0;
}