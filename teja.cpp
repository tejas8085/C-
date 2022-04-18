#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
  int T;
  cin >> T;
  while (T--)
  {
    int n, count = 0;
    cin >> n;
    int a[n], arr[1000000];
    for (int i = 0; i < n; i++)
    {
      cin >> a[i];
    }
    for (int i = 1; i < n; i++)
    {
      if (a[i] != a[i - 1])
      {
        arr[i] = 1;
        arr[i - 1] = 1;
      }
    }
    int sm = 0;
    for (int i = 0; i < 1000000; i++)
    {
      sm += arr[i];
    }
    cout << sm << endl;
  }
  return 0;
}