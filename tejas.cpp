#include <bits/stdc++.h>
using namespace std;

signed main()
{
  int t;
  t = 1;
  cin >> t;
  while (t--)
  {
    int n, k;
    cin >> n >> k;

    int a[n];

    for (int i = 0; i < n; i++)
    {
      cin >> a[i];
    }

    sort(a, a + n);
    int money = k;
    int lastIndex = -1;
    int cnt = 0;

    for (int i = 0; i < n; i++)
    {
      if (money >= a[i])
      {
        money -= a[i];
        cnt += 1;
      }
      else
      {
        if (money >= ((a[i] + 1) / 2))
        {
          cnt += 1;
          break;
        }
      }
    }

    cout << cnt << endl;
  }
}