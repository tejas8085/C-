#include <bits/stdc++.h>
using namespace std;

class shop
{
private:
  int itemId[100];
  int itemPrice[10000];
  int counter;

public:
  void initcounter(){counter = 0;};
  void setPrice()
  {
    cout << "Enter id" << endl;
    cin >> itemId[counter];
    cout << "Enter price" << endl;
    cin >> itemPrice[counter];
    // counter++;
  }
  void displayPrice()
  {
    for (int i = 0; i < counter; i++)
    {
      cout << "The price of item with Id" << itemId[i] << " is " << itemPrice[i] << endl;
    }
  }

};
int main()
{
  // int counter;
  shop tejya;
  tejya.initcounter();
  tejya.setPrice();
  tejya.setPrice();
  tejya.setPrice();
  tejya.setPrice();
  tejya.displayPrice();
  return 0;
}