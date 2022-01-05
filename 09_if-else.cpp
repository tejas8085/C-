#include <iostream>

using namespace std;

int main()
{

    // 1). IF STATEMENT
    int age;
    cout << "Enter your age:" << endl;
    cin >> age;
    if (age < 18)
    {
        cout << "You are not eligible for vote";
    }
    else if (age == 18)
    {
        cout << "You are complated 18, plz apply for voter id";
    }
    else if (age > 18)
    {
        cout << "You are able to vote";
    }
    else
        cout << "Plz enter correct age";

    // 2). WHILE STATEMENT

    int i = 1;
    while (i <= 100)
    {
        cout << i << endl;
        i++;
    }

    // 3). DO WHILE STATEMENT
    do
    {
        cout << i << endl;
        i++;
    } while (false);

    //  4). SWITCH CASE
    int Age;
    cout << "Enter Your Age:";
    cin >> Age;
    switch (Age)
    {
    case 15:
        cout << "You are not  elible for vote";
        break;
    case 18:
        cout << "You are  able to apply forn voter id card ";
        break;
    case 25:
        cout << "You are  elible for vote";
        break;
    default:
        cout << "sorry! your inputs did'nt matched";
        break;
    }

    //  5). FOR LOOP

    for (int i = 1; i <= 100; i++)
    {
        cout << i << endl;
    }

    return 0;
}